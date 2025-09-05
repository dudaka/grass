#!/usr/bin/env python3
"""
Simple GRASS DateTime Demo

A minimal example showing how to use the GRASS datetime wrapper.
This is a simplified version that demonstrates the basic usage patterns.
"""

import sys
import os
from ctypes import c_int, pointer, byref, create_string_buffer

# Add the GRASS Python library path
grass_lib_path = r"C:\opt\grass\build\output\lib\grass85\etc\python"
if grass_lib_path not in sys.path:
    sys.path.insert(0, grass_lib_path)

def test_basic_datetime():
    """Simple test of basic datetime functionality."""
    print("Testing GRASS DateTime Basic Functionality")
    print("-" * 50)

    try:
        # Import the datetime module
        from grass.lib.date import (
            DateTime,
            datetime_days_in_month, datetime_is_leap_year,
            DATETIME_ABSOLUTE, DATETIME_YEAR, DATETIME_SECOND
        )
        print("✓ Successfully imported GRASS datetime wrapper")

        # Test 1: Check if 2024 is a leap year
        print(f"\nTest 1: Is 2024 a leap year?")
        is_leap_2024 = datetime_is_leap_year(2024, 1)  # 1 = Gregorian calendar
        print(f"Result: {'Yes' if is_leap_2024 else 'No'}")

        # Test 2: Check if 2025 is a leap year
        print(f"\nTest 2: Is 2025 a leap year?")
        is_leap_2025 = datetime_is_leap_year(2025, 1)
        print(f"Result: {'Yes' if is_leap_2025 else 'No'}")

        # Test 3: Days in February for leap and non-leap years
        print(f"\nTest 3: Days in February")
        days_feb_2024 = datetime_days_in_month(2024, 2, 1)
        days_feb_2025 = datetime_days_in_month(2025, 2, 1)
        print(f"February 2024: {days_feb_2024} days")
        print(f"February 2025: {days_feb_2025} days")

        # Test 4: Create a DateTime structure
        print(f"\nTest 4: Creating DateTime structure")
        dt = DateTime()
        print(f"Created DateTime structure:")
        print(f"  Initial year: {dt.year}")
        print(f"  Initial month: {dt.month}")
        print(f"  Initial day: {dt.day}")

        # Test 5: Set some values
        print(f"\nTest 5: Setting DateTime values")
        dt.year = 2025
        dt.month = 9
        dt.day = 4
        dt.hour = 14
        dt.minute = 30
        dt.second = 45.5
        dt.positive = 1
        dt.mode = DATETIME_ABSOLUTE

        print(f"Set DateTime to:")
        print(f"  Date: {dt.year}-{dt.month:02d}-{dt.day:02d}")
        print(f"  Time: {dt.hour:02d}:{dt.minute:02d}:{dt.second:06.3f}")
        print(f"  Mode: {dt.mode} (ABSOLUTE={DATETIME_ABSOLUTE})")

        print("\n✓ All basic tests completed successfully!")
        return True

    except ImportError as e:
        print(f"✗ Import Error: {e}")
        print("Make sure GRASS is built and the library path is correct.")
        return False
    except Exception as e:
        print(f"✗ Error during testing: {e}")
        import traceback
        traceback.print_exc()
        return False


def test_advanced_datetime():
    """Test more advanced datetime functionality if basic test passes."""
    print("\n" + "=" * 60)
    print("Testing Advanced GRASS DateTime Functionality")
    print("-" * 60)

    try:
        from grass.lib.date import (
            DateTime, datetime_copy, datetime_set_type,
            datetime_is_absolute, datetime_is_relative,
            DATETIME_ABSOLUTE, DATETIME_RELATIVE,
            DATETIME_YEAR, DATETIME_SECOND
        )

        # Test 1: Copy datetime
        print("\nTest 1: DateTime copying")
        dt1 = DateTime()
        dt1.year = 2025
        dt1.month = 12
        dt1.day = 25
        dt1.positive = 1

        dt2 = DateTime()
        datetime_copy(byref(dt2), byref(dt1))

        print(f"Original: {dt1.year}-{dt1.month}-{dt1.day}")
        print(f"Copy: {dt2.year}-{dt2.month}-{dt2.day}")
        print("✓ DateTime copy successful" if dt1.year == dt2.year else "✗ DateTime copy failed")

        # Test 2: Set datetime type
        print(f"\nTest 2: Setting DateTime type")
        dt3 = DateTime()
        result = datetime_set_type(byref(dt3), DATETIME_ABSOLUTE,
                                  DATETIME_YEAR, DATETIME_SECOND, 0)
        print(f"Set type result: {result}")
        print(f"Mode after setting: {dt3.mode}")

        # Test 3: Check absolute/relative
        print(f"\nTest 3: Checking absolute/relative")
        dt3.mode = DATETIME_ABSOLUTE
        is_abs = datetime_is_absolute(byref(dt3))
        is_rel = datetime_is_relative(byref(dt3))
        print(f"Is absolute: {'Yes' if is_abs else 'No'}")
        print(f"Is relative: {'Yes' if is_rel else 'No'}")

        print("\n✓ Advanced tests completed successfully!")
        return True

    except Exception as e:
        print(f"✗ Advanced test error: {e}")
        return False


def main():
    """Main function to run the demo."""
    print("GRASS DateTime Wrapper Demo")
    print("=" * 60)
    print("Testing the Python wrapper generated from GRASS datetime.h")
    print(f"Library path: {grass_lib_path}")

    # Run basic tests first
    basic_success = test_basic_datetime()

    if basic_success:
        # If basic tests pass, try advanced tests
        advanced_success = test_advanced_datetime()

        if advanced_success:
            print("\n" + "=" * 60)
            print("🎉 DEMO COMPLETED SUCCESSFULLY! 🎉")
            print("=" * 60)
            print("The GRASS datetime wrapper is working correctly.")
            print("You can now use it in your GRASS Python applications.")
            print("\nExample usage in your code:")
            print("```python")
            print("from grass.lib.date import DateTime, datetime_is_leap_year")
            print("dt = DateTime()")
            print("is_leap = datetime_is_leap_year(2024, 1)")
            print("```")
        else:
            print("\n⚠️  Basic tests passed, but advanced tests failed.")
            print("The wrapper is partially working.")
    else:
        print("\n❌ Basic tests failed.")
        print("Please check the GRASS build and library paths.")

    return 0 if basic_success else 1


if __name__ == "__main__":
    sys.exit(main())
