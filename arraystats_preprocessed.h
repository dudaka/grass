#line 1 "C:/opt/grass/build/output/lib/grass85/include/grass/arraystats.h"

#define GRASS_ARRAYSTATS_H


#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"







#pragma once

#define _INC_STDIO


#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"







#pragma once

#line 1 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"







#pragma once















#define _VCRUNTIME_H







#line 32 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#define _VCRT_COMPILER_PREPROCESSOR 1
#line 34 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 35 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


    #define _UCRT

#line 39 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"






    #define _VCRT_DEFINED_CRTIMP

    

#line 49 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
        


            #define _CRTIMP

        #line 54 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
    #line 55 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 56 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"

#line 1 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"













#pragma once



































































































































#define __ATTR_SAL



#define _SAL_VERSION 20
#line 151 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"


#define __SAL_H_VERSION 180000000
#line 155 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"




























#define _USE_DECLSPECS_FOR_SAL 0
#line 185 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"

#define _USE_ATTRIBUTES_FOR_SAL 0
#line 188 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"

#line 190 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"





#line 196 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"



#line 200 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"






#line 207 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"











#line 219 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"
#define _SAL1_Source_(Name, args, annotes) _SA_annotes3(SAL_name, #Name, "", "1") _Group_(annotes _SAL_nop_impl_)
#define _SAL1_1_Source_(Name, args, annotes) _SA_annotes3(SAL_name, #Name, "", "1.1") _Group_(annotes _SAL_nop_impl_)
#define _SAL1_2_Source_(Name, args, annotes) _SA_annotes3(SAL_name, #Name, "", "1.2") _Group_(annotes _SAL_nop_impl_)
#define _SAL2_Source_(Name, args, annotes) _SA_annotes3(SAL_name, #Name, "", "2") _Group_(annotes _SAL_nop_impl_)



#define _SAL_L_Source_(Name, args, annotes) _SA_annotes3(SAL_name, #Name, "", "2") _Group_(annotes _SAL_nop_impl_)
#line 228 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"
#line 229 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"












#define _At_(target, annos)            _At_impl_(target, annos _SAL_nop_impl_)





#define _At_buffer_(target, iter, bound, annos)  _At_buffer_impl_(target, iter, bound, annos _SAL_nop_impl_)



#define _When_(expr, annos)            _When_impl_(expr, annos _SAL_nop_impl_)
#define _Group_(annos)                 _Group_impl_(annos _SAL_nop_impl_)
#define _GrouP_(annos)                 _GrouP_impl_(annos _SAL_nop_impl_)


#define _Success_(expr)                  _SAL2_Source_(_Success_, (expr), _Success_impl_(expr))



#define _Return_type_success_(expr)      _SAL2_Source_(_Return_type_success_, (expr), _Success_impl_(expr))


#define _On_failure_(annos)              _On_failure_impl_(annos _SAL_nop_impl_)



#define _Always_(annos)                  _Always_impl_(annos _SAL_nop_impl_)




#define _Use_decl_annotations_         _Use_decl_anno_impl_




#define _Notref_                       _Notref_impl_


#define _Pre_defensive_             _SA_annotes0(SAL_pre_defensive)
#define _Post_defensive_            _SA_annotes0(SAL_post_defensive)

#define _In_defensive_(annotes)     _Pre_defensive_ _Group_(annotes)
#define _Out_defensive_(annotes)    _Post_defensive_ _Group_(annotes)
#define _Inout_defensive_(annotes)  _Pre_defensive_ _Post_defensive_ _Group_(annotes)






#define _Reserved_                      _SAL2_Source_(_Reserved_, (), _Pre1_impl_(__null_impl))



#define _Const_                         _SAL2_Source_(_Const_, (), _Pre1_impl_(__readaccess_impl_notref))








#define _In_                            _SAL2_Source_(_In_, (), _Pre1_impl_(__notnull_impl_notref) _Pre_valid_impl_ _Deref_pre1_impl_(__readaccess_impl_notref))
#define _In_opt_                        _SAL2_Source_(_In_opt_, (), _Pre1_impl_(__maybenull_impl_notref) _Pre_valid_impl_ _Deref_pre_readonly_)



#define _In_z_                          _SAL2_Source_(_In_z_, (),     _In_     _Pre1_impl_(__zterm_impl))
#define _In_opt_z_                      _SAL2_Source_(_In_opt_z_, (), _In_opt_ _Pre1_impl_(__zterm_impl))




#define _In_reads_(size)               _SAL2_Source_(_In_reads_, (size), _Pre_count_(size)          _Deref_pre_readonly_)
#define _In_reads_opt_(size)           _SAL2_Source_(_In_reads_opt_, (size), _Pre_opt_count_(size)      _Deref_pre_readonly_)
#define _In_reads_bytes_(size)         _SAL2_Source_(_In_reads_bytes_, (size), _Pre_bytecount_(size)      _Deref_pre_readonly_)
#define _In_reads_bytes_opt_(size)     _SAL2_Source_(_In_reads_bytes_opt_, (size), _Pre_opt_bytecount_(size)  _Deref_pre_readonly_)
#define _In_reads_z_(size)             _SAL2_Source_(_In_reads_z_, (size), _In_reads_(size)     _Pre_z_)
#define _In_reads_opt_z_(size)         _SAL2_Source_(_In_reads_opt_z_, (size), _Pre_opt_count_(size)      _Deref_pre_readonly_     _Pre_opt_z_)
#define _In_reads_or_z_(size)          _SAL2_Source_(_In_reads_or_z_, (size), _In_ _When_(_String_length_(_Curr_) < (size), _Pre_z_) _When_(_String_length_(_Curr_) >= (size), _Pre1_impl_(__count_impl(size))))
#define _In_reads_or_z_opt_(size)      _SAL2_Source_(_In_reads_or_z_opt_, (size), _In_opt_ _When_(_String_length_(_Curr_) < (size), _Pre_z_) _When_(_String_length_(_Curr_) >= (size), _Pre1_impl_(__count_impl(size))))




#define _In_reads_to_ptr_(ptr)         _SAL2_Source_(_In_reads_to_ptr_, (ptr), _Pre_ptrdiff_count_(ptr)     _Deref_pre_readonly_)
#define _In_reads_to_ptr_opt_(ptr)     _SAL2_Source_(_In_reads_to_ptr_opt_, (ptr), _Pre_opt_ptrdiff_count_(ptr) _Deref_pre_readonly_)
#define _In_reads_to_ptr_z_(ptr)       _SAL2_Source_(_In_reads_to_ptr_z_, (ptr), _In_reads_to_ptr_(ptr) _Pre_z_)
#define _In_reads_to_ptr_opt_z_(ptr)   _SAL2_Source_(_In_reads_to_ptr_opt_z_, (ptr), _Pre_opt_ptrdiff_count_(ptr) _Deref_pre_readonly_  _Pre_opt_z_)










#define _Out_                                  _SAL2_Source_(_Out_, (),     _Out_impl_)
#define _Out_opt_                              _SAL2_Source_(_Out_opt_, (), _Out_opt_impl_)

#define _Out_writes_(size)                     _SAL2_Source_(_Out_writes_, (size), _Pre_cap_(size)            _Post_valid_impl_)
#define _Out_writes_opt_(size)                 _SAL2_Source_(_Out_writes_opt_, (size), _Pre_opt_cap_(size)        _Post_valid_impl_)
#define _Out_writes_bytes_(size)               _SAL2_Source_(_Out_writes_bytes_, (size), _Pre_bytecap_(size)        _Post_valid_impl_)
#define _Out_writes_bytes_opt_(size)           _SAL2_Source_(_Out_writes_bytes_opt_, (size), _Pre_opt_bytecap_(size)    _Post_valid_impl_)
#define _Out_writes_z_(size)                   _SAL2_Source_(_Out_writes_z_, (size), _Pre_cap_(size)            _Post_valid_impl_ _Post_z_)
#define _Out_writes_opt_z_(size)               _SAL2_Source_(_Out_writes_opt_z_, (size), _Pre_opt_cap_(size)        _Post_valid_impl_ _Post_z_)

#define _Out_writes_to_(size,count)            _SAL2_Source_(_Out_writes_to_, (size,count), _Pre_cap_(size)            _Post_valid_impl_ _Post_count_(count))
#define _Out_writes_to_opt_(size,count)        _SAL2_Source_(_Out_writes_to_opt_, (size,count), _Pre_opt_cap_(size)        _Post_valid_impl_ _Post_count_(count))
#define _Out_writes_all_(size)                 _SAL2_Source_(_Out_writes_all_, (size), _Out_writes_to_(_Old_(size), _Old_(size)))
#define _Out_writes_all_opt_(size)             _SAL2_Source_(_Out_writes_all_opt_, (size), _Out_writes_to_opt_(_Old_(size), _Old_(size)))

#define _Out_writes_bytes_to_(size,count)      _SAL2_Source_(_Out_writes_bytes_to_, (size,count), _Pre_bytecap_(size)        _Post_valid_impl_ _Post_bytecount_(count))
#define _Out_writes_bytes_to_opt_(size,count)  _SAL2_Source_(_Out_writes_bytes_to_opt_, (size,count), _Pre_opt_bytecap_(size) _Post_valid_impl_ _Post_bytecount_(count))
#define _Out_writes_bytes_all_(size)           _SAL2_Source_(_Out_writes_bytes_all_, (size), _Out_writes_bytes_to_(_Old_(size), _Old_(size)))
#define _Out_writes_bytes_all_opt_(size)       _SAL2_Source_(_Out_writes_bytes_all_opt_, (size), _Out_writes_bytes_to_opt_(_Old_(size), _Old_(size)))

#define _Out_writes_to_ptr_(ptr)               _SAL2_Source_(_Out_writes_to_ptr_, (ptr), _Pre_ptrdiff_cap_(ptr)     _Post_valid_impl_)
#define _Out_writes_to_ptr_opt_(ptr)           _SAL2_Source_(_Out_writes_to_ptr_opt_, (ptr), _Pre_opt_ptrdiff_cap_(ptr) _Post_valid_impl_)
#define _Out_writes_to_ptr_z_(ptr)             _SAL2_Source_(_Out_writes_to_ptr_z_, (ptr), _Pre_ptrdiff_cap_(ptr)     _Post_valid_impl_ Post_z_)
#define _Out_writes_to_ptr_opt_z_(ptr)         _SAL2_Source_(_Out_writes_to_ptr_opt_z_, (ptr), _Pre_opt_ptrdiff_cap_(ptr) _Post_valid_impl_ Post_z_)









#define _Inout_                                _SAL2_Source_(_Inout_, (), _Prepost_valid_)
#define _Inout_opt_                            _SAL2_Source_(_Inout_opt_, (), _Prepost_opt_valid_)



#define _Inout_z_                              _SAL2_Source_(_Inout_z_, (), _Prepost_z_)
#define _Inout_opt_z_                          _SAL2_Source_(_Inout_opt_z_, (), _Prepost_opt_z_)


#define _Inout_updates_(size)                  _SAL2_Source_(_Inout_updates_, (size), _Pre_cap_(size)         _Pre_valid_impl_ _Post_valid_impl_)
#define _Inout_updates_opt_(size)              _SAL2_Source_(_Inout_updates_opt_, (size), _Pre_opt_cap_(size)     _Pre_valid_impl_ _Post_valid_impl_)
#define _Inout_updates_z_(size)                _SAL2_Source_(_Inout_updates_z_, (size), _Pre_cap_(size)         _Pre_valid_impl_ _Post_valid_impl_ _Pre1_impl_(__zterm_impl) _Post1_impl_(__zterm_impl))
#define _Inout_updates_opt_z_(size)            _SAL2_Source_(_Inout_updates_opt_z_, (size), _Pre_opt_cap_(size)     _Pre_valid_impl_ _Post_valid_impl_ _Pre1_impl_(__zterm_impl) _Post1_impl_(__zterm_impl))

#define _Inout_updates_to_(size,count)         _SAL2_Source_(_Inout_updates_to_, (size,count), _Out_writes_to_(size,count) _Pre_valid_impl_ _Pre1_impl_(__count_impl(size)))
#define _Inout_updates_to_opt_(size,count)     _SAL2_Source_(_Inout_updates_to_opt_, (size,count), _Out_writes_to_opt_(size,count) _Pre_valid_impl_ _Pre1_impl_(__count_impl(size)))

#define _Inout_updates_all_(size)              _SAL2_Source_(_Inout_updates_all_, (size), _Inout_updates_to_(_Old_(size), _Old_(size)))
#define _Inout_updates_all_opt_(size)          _SAL2_Source_(_Inout_updates_all_opt_, (size), _Inout_updates_to_opt_(_Old_(size), _Old_(size)))


#define _Inout_updates_bytes_(size)            _SAL2_Source_(_Inout_updates_bytes_, (size), _Pre_bytecap_(size)     _Pre_valid_impl_ _Post_valid_impl_)
#define _Inout_updates_bytes_opt_(size)        _SAL2_Source_(_Inout_updates_bytes_opt_, (size), _Pre_opt_bytecap_(size) _Pre_valid_impl_ _Post_valid_impl_)

#define _Inout_updates_bytes_to_(size,count)       _SAL2_Source_(_Inout_updates_bytes_to_, (size,count), _Out_writes_bytes_to_(size,count) _Pre_valid_impl_ _Pre1_impl_(__bytecount_impl(size)))
#define _Inout_updates_bytes_to_opt_(size,count)   _SAL2_Source_(_Inout_updates_bytes_to_opt_, (size,count), _Out_writes_bytes_to_opt_(size,count) _Pre_valid_impl_ _Pre1_impl_(__bytecount_impl(size)))

#define _Inout_updates_bytes_all_(size)        _SAL2_Source_(_Inout_updates_bytes_all_, (size), _Inout_updates_bytes_to_(_Old_(size), _Old_(size)))
#define _Inout_updates_bytes_all_opt_(size)    _SAL2_Source_(_Inout_updates_bytes_all_opt_, (size), _Inout_updates_bytes_to_opt_(_Old_(size), _Old_(size)))




















#define _Outptr_                         _SAL2_Source_(_Outptr_, (),                      _Out_impl_     _Deref_post2_impl_(__notnull_impl_notref,   __count_impl(1)))
#define _Outptr_result_maybenull_        _SAL2_Source_(_Outptr_result_maybenull_, (),     _Out_impl_     _Deref_post2_impl_(__maybenull_impl_notref, __count_impl(1)))
#define _Outptr_opt_                     _SAL2_Source_(_Outptr_opt_, (),                  _Out_opt_impl_ _Deref_post2_impl_(__notnull_impl_notref,   __count_impl(1)))
#define _Outptr_opt_result_maybenull_    _SAL2_Source_(_Outptr_opt_result_maybenull_, (), _Out_opt_impl_ _Deref_post2_impl_(__maybenull_impl_notref, __count_impl(1)))



#define _Outptr_result_z_                _SAL2_Source_(_Outptr_result_z_, (),               _Out_impl_     _Deref_post_z_)
#define _Outptr_opt_result_z_            _SAL2_Source_(_Outptr_opt_result_z_, (),           _Out_opt_impl_ _Deref_post_z_)
#define _Outptr_result_maybenull_z_      _SAL2_Source_(_Outptr_result_maybenull_z_, (),     _Out_impl_     _Deref_post_opt_z_)
#define _Outptr_opt_result_maybenull_z_  _SAL2_Source_(_Outptr_opt_result_maybenull_z_, (), _Out_opt_impl_ _Deref_post_opt_z_)



#define _Outptr_result_nullonfailure_       _SAL2_Source_(_Outptr_result_nullonfailure_, (),     _Outptr_      _On_failure_(_Deref_post_null_))
#define _Outptr_opt_result_nullonfailure_   _SAL2_Source_(_Outptr_opt_result_nullonfailure_, (), _Outptr_opt_  _On_failure_(_Deref_post_null_))






#define _COM_Outptr_                        _SAL2_Source_(_COM_Outptr_, (),                      _Outptr_                      _On_failure_(_Deref_post_null_))
#define _COM_Outptr_result_maybenull_       _SAL2_Source_(_COM_Outptr_result_maybenull_, (),     _Outptr_result_maybenull_     _On_failure_(_Deref_post_null_))
#define _COM_Outptr_opt_                    _SAL2_Source_(_COM_Outptr_opt_, (),                  _Outptr_opt_                  _On_failure_(_Deref_post_null_))
#define _COM_Outptr_opt_result_maybenull_   _SAL2_Source_(_COM_Outptr_opt_result_maybenull_, (), _Outptr_opt_result_maybenull_ _On_failure_(_Deref_post_null_))



#define _Outptr_result_buffer_(size)                      _SAL2_Source_(_Outptr_result_buffer_, (size),               _Out_impl_     _Deref_post2_impl_(__notnull_impl_notref, __cap_impl(size)))
#define _Outptr_opt_result_buffer_(size)                  _SAL2_Source_(_Outptr_opt_result_buffer_, (size),           _Out_opt_impl_ _Deref_post2_impl_(__notnull_impl_notref, __cap_impl(size)))
#define _Outptr_result_buffer_to_(size, count)            _SAL2_Source_(_Outptr_result_buffer_to_, (size, count),     _Out_impl_     _Deref_post3_impl_(__notnull_impl_notref, __cap_impl(size), __count_impl(count)))
#define _Outptr_opt_result_buffer_to_(size, count)        _SAL2_Source_(_Outptr_opt_result_buffer_to_, (size, count), _Out_opt_impl_ _Deref_post3_impl_(__notnull_impl_notref, __cap_impl(size), __count_impl(count)))

#define _Outptr_result_buffer_all_(size)                  _SAL2_Source_(_Outptr_result_buffer_all_, (size),           _Out_impl_     _Deref_post2_impl_(__notnull_impl_notref, __count_impl(size)))
#define _Outptr_opt_result_buffer_all_(size)              _SAL2_Source_(_Outptr_opt_result_buffer_all_, (size),       _Out_opt_impl_ _Deref_post2_impl_(__notnull_impl_notref, __count_impl(size)))

#define _Outptr_result_buffer_maybenull_(size)               _SAL2_Source_(_Outptr_result_buffer_maybenull_, (size),               _Out_impl_     _Deref_post2_impl_(__maybenull_impl_notref, __cap_impl(size)))
#define _Outptr_opt_result_buffer_maybenull_(size)           _SAL2_Source_(_Outptr_opt_result_buffer_maybenull_, (size),           _Out_opt_impl_ _Deref_post2_impl_(__maybenull_impl_notref, __cap_impl(size)))
#define _Outptr_result_buffer_to_maybenull_(size, count)     _SAL2_Source_(_Outptr_result_buffer_to_maybenull_, (size, count),     _Out_impl_     _Deref_post3_impl_(__maybenull_impl_notref, __cap_impl(size), __count_impl(count)))
#define _Outptr_opt_result_buffer_to_maybenull_(size, count) _SAL2_Source_(_Outptr_opt_result_buffer_to_maybenull_, (size, count), _Out_opt_impl_ _Deref_post3_impl_(__maybenull_impl_notref, __cap_impl(size), __count_impl(count)))

#define _Outptr_result_buffer_all_maybenull_(size)           _SAL2_Source_(_Outptr_result_buffer_all_maybenull_, (size),           _Out_impl_     _Deref_post2_impl_(__maybenull_impl_notref, __count_impl(size)))
#define _Outptr_opt_result_buffer_all_maybenull_(size)       _SAL2_Source_(_Outptr_opt_result_buffer_all_maybenull_, (size),       _Out_opt_impl_ _Deref_post2_impl_(__maybenull_impl_notref, __count_impl(size)))

#define _Outptr_result_bytebuffer_(size)                     _SAL2_Source_(_Outptr_result_bytebuffer_, (size),                     _Out_impl_     _Deref_post2_impl_(__notnull_impl_notref, __bytecap_impl(size)))
#define _Outptr_opt_result_bytebuffer_(size)                 _SAL2_Source_(_Outptr_opt_result_bytebuffer_, (size),                 _Out_opt_impl_ _Deref_post2_impl_(__notnull_impl_notref, __bytecap_impl(size)))
#define _Outptr_result_bytebuffer_to_(size, count)           _SAL2_Source_(_Outptr_result_bytebuffer_to_, (size, count),           _Out_impl_     _Deref_post3_impl_(__notnull_impl_notref, __bytecap_impl(size), __bytecount_impl(count)))
#define _Outptr_opt_result_bytebuffer_to_(size, count)       _SAL2_Source_(_Outptr_opt_result_bytebuffer_to_, (size, count),       _Out_opt_impl_ _Deref_post3_impl_(__notnull_impl_notref, __bytecap_impl(size), __bytecount_impl(count)))

#define _Outptr_result_bytebuffer_all_(size)                 _SAL2_Source_(_Outptr_result_bytebuffer_all_, (size),                 _Out_impl_     _Deref_post2_impl_(__notnull_impl_notref, __bytecount_impl(size)))
#define _Outptr_opt_result_bytebuffer_all_(size)             _SAL2_Source_(_Outptr_opt_result_bytebuffer_all_, (size),             _Out_opt_impl_ _Deref_post2_impl_(__notnull_impl_notref, __bytecount_impl(size)))

#define _Outptr_result_bytebuffer_maybenull_(size)                 _SAL2_Source_(_Outptr_result_bytebuffer_maybenull_, (size),               _Out_impl_     _Deref_post2_impl_(__maybenull_impl_notref, __bytecap_impl(size)))
#define _Outptr_opt_result_bytebuffer_maybenull_(size)             _SAL2_Source_(_Outptr_opt_result_bytebuffer_maybenull_, (size),           _Out_opt_impl_ _Deref_post2_impl_(__maybenull_impl_notref, __bytecap_impl(size)))
#define _Outptr_result_bytebuffer_to_maybenull_(size, count)       _SAL2_Source_(_Outptr_result_bytebuffer_to_maybenull_, (size, count),     _Out_impl_     _Deref_post3_impl_(__maybenull_impl_notref, __bytecap_impl(size), __bytecount_impl(count)))
#define _Outptr_opt_result_bytebuffer_to_maybenull_(size, count)   _SAL2_Source_(_Outptr_opt_result_bytebuffer_to_maybenull_, (size, count), _Out_opt_impl_ _Deref_post3_impl_(__maybenull_impl_notref, __bytecap_impl(size), __bytecount_impl(count)))

#define _Outptr_result_bytebuffer_all_maybenull_(size)         _SAL2_Source_(_Outptr_result_bytebuffer_all_maybenull_, (size),               _Out_impl_     _Deref_post2_impl_(__maybenull_impl_notref, __bytecount_impl(size)))
#define _Outptr_opt_result_bytebuffer_all_maybenull_(size)     _SAL2_Source_(_Outptr_opt_result_bytebuffer_all_maybenull_, (size),           _Out_opt_impl_ _Deref_post2_impl_(__maybenull_impl_notref, __bytecount_impl(size)))



#define _Outref_                                               _SAL2_Source_(_Outref_, (),                  _Out_impl_ _Post_notnull_)
#define _Outref_result_maybenull_                              _SAL2_Source_(_Outref_result_maybenull_, (), _Pre2_impl_(__notnull_impl_notref, __cap_c_one_notref_impl) _Post_maybenull_ _Post_valid_impl_)

#define _Outref_result_buffer_(size)                           _SAL2_Source_(_Outref_result_buffer_, (size),                         _Outref_ _Post1_impl_(__cap_impl(size)))
#define _Outref_result_bytebuffer_(size)                       _SAL2_Source_(_Outref_result_bytebuffer_, (size),                     _Outref_ _Post1_impl_(__bytecap_impl(size)))
#define _Outref_result_buffer_to_(size, count)                 _SAL2_Source_(_Outref_result_buffer_to_, (size, count),               _Outref_result_buffer_(size) _Post1_impl_(__count_impl(count)))
#define _Outref_result_bytebuffer_to_(size, count)             _SAL2_Source_(_Outref_result_bytebuffer_to_, (size, count),           _Outref_result_bytebuffer_(size) _Post1_impl_(__bytecount_impl(count)))
#define _Outref_result_buffer_all_(size)                       _SAL2_Source_(_Outref_result_buffer_all_, (size),                     _Outref_result_buffer_to_(size, _Old_(size)))
#define _Outref_result_bytebuffer_all_(size)                   _SAL2_Source_(_Outref_result_bytebuffer_all_, (size),                 _Outref_result_bytebuffer_to_(size, _Old_(size)))

#define _Outref_result_buffer_maybenull_(size)                 _SAL2_Source_(_Outref_result_buffer_maybenull_, (size),               _Outref_result_maybenull_ _Post1_impl_(__cap_impl(size)))
#define _Outref_result_bytebuffer_maybenull_(size)             _SAL2_Source_(_Outref_result_bytebuffer_maybenull_, (size),           _Outref_result_maybenull_ _Post1_impl_(__bytecap_impl(size)))
#define _Outref_result_buffer_to_maybenull_(size, count)       _SAL2_Source_(_Outref_result_buffer_to_maybenull_, (size, count),     _Outref_result_buffer_maybenull_(size) _Post1_impl_(__count_impl(count)))
#define _Outref_result_bytebuffer_to_maybenull_(size, count)   _SAL2_Source_(_Outref_result_bytebuffer_to_maybenull_, (size, count), _Outref_result_bytebuffer_maybenull_(size) _Post1_impl_(__bytecount_impl(count)))
#define _Outref_result_buffer_all_maybenull_(size)             _SAL2_Source_(_Outref_result_buffer_all_maybenull_, (size),           _Outref_result_buffer_to_maybenull_(size, _Old_(size)))
#define _Outref_result_bytebuffer_all_maybenull_(size)         _SAL2_Source_(_Outref_result_bytebuffer_all_maybenull_, (size),       _Outref_result_bytebuffer_to_maybenull_(size, _Old_(size)))



#define _Outref_result_nullonfailure_                          _SAL2_Source_(_Outref_result_nullonfailure_, (), _Outref_    _On_failure_(_Post_null_))


#define _Result_nullonfailure_                                 _SAL2_Source_(_Result_nullonfailure_, (), _On_failure_(_Notref_impl_ _Deref_impl_ _Post_null_))
#define _Result_zeroonfailure_                                 _SAL2_Source_(_Result_zeroonfailure_, (), _On_failure_(_Notref_impl_ _Deref_impl_ _Out_range_(==, 0)))










#define _Ret_z_                             _SAL2_Source_(_Ret_z_, (), _Ret2_impl_(__notnull_impl,  __zterm_impl) _Ret_valid_impl_)
#define _Ret_maybenull_z_                   _SAL2_Source_(_Ret_maybenull_z_, (), _Ret2_impl_(__maybenull_impl,__zterm_impl) _Ret_valid_impl_)


#define _Ret_notnull_                       _SAL2_Source_(_Ret_notnull_, (), _Ret1_impl_(__notnull_impl))
#define _Ret_maybenull_                     _SAL2_Source_(_Ret_maybenull_, (), _Ret1_impl_(__maybenull_impl))
#define _Ret_null_                          _SAL2_Source_(_Ret_null_, (), _Ret1_impl_(__null_impl))



#define _Ret_valid_                         _SAL2_Source_(_Ret_valid_, (), _Ret1_impl_(__notnull_impl_notref)   _Ret_valid_impl_)


#define _Ret_writes_(size)                  _SAL2_Source_(_Ret_writes_, (size), _Ret2_impl_(__notnull_impl,  __count_impl(size))          _Ret_valid_impl_)
#define _Ret_writes_z_(size)                _SAL2_Source_(_Ret_writes_z_, (size), _Ret3_impl_(__notnull_impl,  __count_impl(size), __zterm_impl) _Ret_valid_impl_)
#define _Ret_writes_bytes_(size)            _SAL2_Source_(_Ret_writes_bytes_, (size), _Ret2_impl_(__notnull_impl,  __bytecount_impl(size))      _Ret_valid_impl_)
#define _Ret_writes_maybenull_(size)        _SAL2_Source_(_Ret_writes_maybenull_, (size), _Ret2_impl_(__maybenull_impl,__count_impl(size))          _Ret_valid_impl_)
#define _Ret_writes_maybenull_z_(size)      _SAL2_Source_(_Ret_writes_maybenull_z_, (size), _Ret3_impl_(__maybenull_impl,__count_impl(size),__zterm_impl)  _Ret_valid_impl_)
#define _Ret_writes_bytes_maybenull_(size)  _SAL2_Source_(_Ret_writes_bytes_maybenull_, (size), _Ret2_impl_(__maybenull_impl,__bytecount_impl(size))      _Ret_valid_impl_)


#define _Ret_writes_to_(size,count)                   _SAL2_Source_(_Ret_writes_to_, (size,count), _Ret3_impl_(__notnull_impl,  __cap_impl(size),     __count_impl(count))     _Ret_valid_impl_)
#define _Ret_writes_bytes_to_(size,count)             _SAL2_Source_(_Ret_writes_bytes_to_, (size,count), _Ret3_impl_(__notnull_impl,  __bytecap_impl(size), __bytecount_impl(count)) _Ret_valid_impl_)
#define _Ret_writes_to_maybenull_(size,count)         _SAL2_Source_(_Ret_writes_to_maybenull_, (size,count), _Ret3_impl_(__maybenull_impl,  __cap_impl(size),     __count_impl(count))     _Ret_valid_impl_)
#define _Ret_writes_bytes_to_maybenull_(size,count)   _SAL2_Source_(_Ret_writes_bytes_to_maybenull_, (size,count), _Ret3_impl_(__maybenull_impl,  __bytecap_impl(size), __bytecount_impl(count)) _Ret_valid_impl_)



#define _Points_to_data_        _SAL2_Source_(_Points_to_data_, (), _Pre_ _Points_to_data_impl_)
#define _Literal_               _SAL2_Source_(_Literal_, (), _Pre_ _Literal_impl_)
#define _Notliteral_            _SAL2_Source_(_Notliteral_, (), _Pre_ _Notliteral_impl_)


#define _Check_return_           _SAL2_Source_(_Check_return_, (), _Check_return_impl_)
#define _Must_inspect_result_    _SAL2_Source_(_Must_inspect_result_, (), _Must_inspect_impl_ _Check_return_impl_)


#define _Printf_format_string_  _SAL2_Source_(_Printf_format_string_, (), _Printf_format_string_impl_)
#define _Scanf_format_string_   _SAL2_Source_(_Scanf_format_string_, (), _Scanf_format_string_impl_)
#define _Scanf_s_format_string_  _SAL2_Source_(_Scanf_s_format_string_, (), _Scanf_s_format_string_impl_)

#define _Format_string_impl_(kind,where)  _SA_annotes2(SAL_IsFormatString2, kind, where)
#define _Printf_format_string_params_(x)  _SAL2_Source_(_Printf_format_string_params_, (x), _Format_string_impl_("printf", x))
#define _Scanf_format_string_params_(x)   _SAL2_Source_(_Scanf_format_string_params_, (x), _Format_string_impl_("scanf", x))
#define _Scanf_s_format_string_params_(x) _SAL2_Source_(_Scanf_s_format_string_params_, (x), _Format_string_impl_("scanf_s", x))


#define _In_range_(lb,ub)           _SAL2_Source_(_In_range_, (lb,ub), _In_range_impl_(lb,ub))
#define _Out_range_(lb,ub)          _SAL2_Source_(_Out_range_, (lb,ub), _Out_range_impl_(lb,ub))
#define _Ret_range_(lb,ub)          _SAL2_Source_(_Ret_range_, (lb,ub), _Ret_range_impl_(lb,ub))
#define _Deref_in_range_(lb,ub)     _SAL2_Source_(_Deref_in_range_, (lb,ub), _Deref_in_range_impl_(lb,ub))
#define _Deref_out_range_(lb,ub)    _SAL2_Source_(_Deref_out_range_, (lb,ub), _Deref_out_range_impl_(lb,ub))
#define _Deref_ret_range_(lb,ub)    _SAL2_Source_(_Deref_ret_range_, (lb,ub), _Deref_ret_range_impl_(lb,ub))
#define _Pre_equal_to_(expr)        _SAL2_Source_(_Pre_equal_to_, (expr), _In_range_(==, expr))
#define _Post_equal_to_(expr)       _SAL2_Source_(_Post_equal_to_, (expr), _Out_range_(==, expr))



#define _Unchanged_(e)              _SAL2_Source_(_Unchanged_, (e), _At_(e, _Post_equal_to_(_Old_(e)) _Const_))




#define _Pre_satisfies_(cond)       _SAL2_Source_(_Pre_satisfies_, (cond), _Pre_satisfies_impl_(cond))
#define _Post_satisfies_(cond)      _SAL2_Source_(_Post_satisfies_, (cond), _Post_satisfies_impl_(cond))


#define _Struct_size_bytes_(size)                  _SAL2_Source_(_Struct_size_bytes_, (size), _Writable_bytes_(size))

#define _Field_size_(size)                         _SAL2_Source_(_Field_size_, (size), _Notnull_   _Writable_elements_(size))
#define _Field_size_opt_(size)                     _SAL2_Source_(_Field_size_opt_, (size), _Maybenull_ _Writable_elements_(size))
#define _Field_size_part_(size, count)             _SAL2_Source_(_Field_size_part_, (size, count), _Notnull_   _Writable_elements_(size) _Readable_elements_(count))
#define _Field_size_part_opt_(size, count)         _SAL2_Source_(_Field_size_part_opt_, (size, count), _Maybenull_ _Writable_elements_(size) _Readable_elements_(count))
#define _Field_size_full_(size)                    _SAL2_Source_(_Field_size_full_, (size), _Field_size_part_(size, size))
#define _Field_size_full_opt_(size)                _SAL2_Source_(_Field_size_full_opt_, (size), _Field_size_part_opt_(size, size))

#define _Field_size_bytes_(size)                   _SAL2_Source_(_Field_size_bytes_, (size), _Notnull_   _Writable_bytes_(size))
#define _Field_size_bytes_opt_(size)               _SAL2_Source_(_Field_size_bytes_opt_, (size), _Maybenull_ _Writable_bytes_(size))
#define _Field_size_bytes_part_(size, count)       _SAL2_Source_(_Field_size_bytes_part_, (size, count), _Notnull_   _Writable_bytes_(size) _Readable_bytes_(count))
#define _Field_size_bytes_part_opt_(size, count)   _SAL2_Source_(_Field_size_bytes_part_opt_, (size, count), _Maybenull_ _Writable_bytes_(size) _Readable_bytes_(count))
#define _Field_size_bytes_full_(size)              _SAL2_Source_(_Field_size_bytes_full_, (size), _Field_size_bytes_part_(size, size))
#define _Field_size_bytes_full_opt_(size)          _SAL2_Source_(_Field_size_bytes_full_opt_, (size), _Field_size_bytes_part_opt_(size, size))

#define _Field_z_                                  _SAL2_Source_(_Field_z_, (), _Null_terminated_)

#define _Field_range_(min,max)                     _SAL2_Source_(_Field_range_, (min,max), _Field_range_impl_(min,max))









#define _Pre_                             _Pre_impl_
#define _Post_                            _Post_impl_





#define _Valid_                           _Valid_impl_
#define _Notvalid_                        _Notvalid_impl_
#define _Maybevalid_                      _Maybevalid_impl_






#define _Readable_bytes_(size)            _SAL2_Source_(_Readable_bytes_, (size), _Readable_bytes_impl_(size))
#define _Readable_elements_(size)         _SAL2_Source_(_Readable_elements_, (size), _Readable_elements_impl_(size))
#define _Writable_bytes_(size)            _SAL2_Source_(_Writable_bytes_, (size), _Writable_bytes_impl_(size))
#define _Writable_elements_(size)         _SAL2_Source_(_Writable_elements_, (size), _Writable_elements_impl_(size))

#define _Null_terminated_                 _SAL2_Source_(_Null_terminated_, (), _Null_terminated_impl_)
#define _NullNull_terminated_             _SAL2_Source_(_NullNull_terminated_, (), _NullNull_terminated_impl_)


#define _Pre_readable_size_(size)         _SAL2_Source_(_Pre_readable_size_, (size), _Pre1_impl_(__count_impl(size))      _Pre_valid_impl_)
#define _Pre_writable_size_(size)         _SAL2_Source_(_Pre_writable_size_, (size), _Pre1_impl_(__cap_impl(size)))
#define _Pre_readable_byte_size_(size)    _SAL2_Source_(_Pre_readable_byte_size_, (size), _Pre1_impl_(__bytecount_impl(size))  _Pre_valid_impl_)
#define _Pre_writable_byte_size_(size)    _SAL2_Source_(_Pre_writable_byte_size_, (size), _Pre1_impl_(__bytecap_impl(size)))

#define _Post_readable_size_(size)        _SAL2_Source_(_Post_readable_size_, (size), _Post1_impl_(__count_impl(size))     _Post_valid_impl_)
#define _Post_writable_size_(size)        _SAL2_Source_(_Post_writable_size_, (size), _Post1_impl_(__cap_impl(size)))
#define _Post_readable_byte_size_(size)   _SAL2_Source_(_Post_readable_byte_size_, (size), _Post1_impl_(__bytecount_impl(size)) _Post_valid_impl_)
#define _Post_writable_byte_size_(size)   _SAL2_Source_(_Post_writable_byte_size_, (size), _Post1_impl_(__bytecap_impl(size)))




#define _Null_                            _SAL2_Source_(_Null_, (), _Null_impl_)
#define _Notnull_                         _SAL2_Source_(_Notnull_, (), _Notnull_impl_)
#define _Maybenull_                       _SAL2_Source_(_Maybenull_, (), _Maybenull_impl_)








#define _Pre_z_                           _SAL2_Source_(_Pre_z_, (), _Pre1_impl_(__zterm_impl) _Pre_valid_impl_)


#define _Pre_valid_                       _SAL2_Source_(_Pre_valid_, (), _Pre1_impl_(__notnull_impl_notref)   _Pre_valid_impl_)
#define _Pre_opt_valid_                   _SAL2_Source_(_Pre_opt_valid_, (), _Pre1_impl_(__maybenull_impl_notref) _Pre_valid_impl_)

#define _Pre_invalid_                     _SAL2_Source_(_Pre_invalid_, (), _Deref_pre1_impl_(__notvalid_impl))


#define _Pre_unknown_                     _SAL2_Source_(_Pre_unknown_, (), _Pre1_impl_(__maybevalid_impl))


#define _Pre_notnull_                     _SAL2_Source_(_Pre_notnull_, (), _Pre1_impl_(__notnull_impl_notref))
#define _Pre_maybenull_                   _SAL2_Source_(_Pre_maybenull_, (), _Pre1_impl_(__maybenull_impl_notref))
#define _Pre_null_                        _SAL2_Source_(_Pre_null_, (), _Pre1_impl_(__null_impl_notref))








#define _Post_z_                         _SAL2_Source_(_Post_z_, (), _Post1_impl_(__zterm_impl) _Post_valid_impl_)


#define _Post_valid_                     _SAL2_Source_(_Post_valid_, (), _Post_valid_impl_)
#define _Post_invalid_                   _SAL2_Source_(_Post_invalid_, (), _Deref_post1_impl_(__notvalid_impl))


#define _Post_ptr_invalid_               _SAL2_Source_(_Post_ptr_invalid_, (), _Post1_impl_(__notvalid_impl))


#define _Post_notnull_                   _SAL2_Source_(_Post_notnull_, (), _Post1_impl_(__notnull_impl))


#define _Post_null_                      _SAL2_Source_(_Post_null_, (), _Post1_impl_(__null_impl))

#define _Post_maybenull_                 _SAL2_Source_(_Post_maybenull_, (), _Post1_impl_(__maybenull_impl))

#define _Prepost_z_                      _SAL2_Source_(_Prepost_z_, (), _Pre_z_      _Post_z_)


#pragma region Input Buffer SAL 1 compatibility macros


































































































#define _In_count_(size)               _SAL1_1_Source_(_In_count_, (size), _Pre_count_(size)         _Deref_pre_readonly_)
#define _In_opt_count_(size)           _SAL1_1_Source_(_In_opt_count_, (size), _Pre_opt_count_(size)     _Deref_pre_readonly_)
#define _In_bytecount_(size)           _SAL1_1_Source_(_In_bytecount_, (size), _Pre_bytecount_(size)     _Deref_pre_readonly_)
#define _In_opt_bytecount_(size)       _SAL1_1_Source_(_In_opt_bytecount_, (size), _Pre_opt_bytecount_(size) _Deref_pre_readonly_)


#define _In_count_c_(size)             _SAL1_1_Source_(_In_count_c_, (size), _Pre_count_c_(size)         _Deref_pre_readonly_)
#define _In_opt_count_c_(size)         _SAL1_1_Source_(_In_opt_count_c_, (size), _Pre_opt_count_c_(size)     _Deref_pre_readonly_)
#define _In_bytecount_c_(size)         _SAL1_1_Source_(_In_bytecount_c_, (size), _Pre_bytecount_c_(size)     _Deref_pre_readonly_)
#define _In_opt_bytecount_c_(size)     _SAL1_1_Source_(_In_opt_bytecount_c_, (size), _Pre_opt_bytecount_c_(size) _Deref_pre_readonly_)





#define _In_z_count_(size)               _SAL1_1_Source_(_In_z_count_, (size), _Pre_z_ _Pre_count_(size)         _Deref_pre_readonly_)
#define _In_opt_z_count_(size)           _SAL1_1_Source_(_In_opt_z_count_, (size), _Pre_opt_z_ _Pre_opt_count_(size)     _Deref_pre_readonly_)
#define _In_z_bytecount_(size)           _SAL1_1_Source_(_In_z_bytecount_, (size), _Pre_z_ _Pre_bytecount_(size)     _Deref_pre_readonly_)
#define _In_opt_z_bytecount_(size)       _SAL1_1_Source_(_In_opt_z_bytecount_, (size), _Pre_opt_z_ _Pre_opt_bytecount_(size) _Deref_pre_readonly_)


#define _In_z_count_c_(size)             _SAL1_1_Source_(_In_z_count_c_, (size), _Pre_z_ _Pre_count_c_(size)         _Deref_pre_readonly_)
#define _In_opt_z_count_c_(size)         _SAL1_1_Source_(_In_opt_z_count_c_, (size), _Pre_opt_z_ _Pre_opt_count_c_(size)     _Deref_pre_readonly_)
#define _In_z_bytecount_c_(size)         _SAL1_1_Source_(_In_z_bytecount_c_, (size), _Pre_z_ _Pre_bytecount_c_(size)     _Deref_pre_readonly_)
#define _In_opt_z_bytecount_c_(size)     _SAL1_1_Source_(_In_opt_z_bytecount_c_, (size), _Pre_opt_z_ _Pre_opt_bytecount_c_(size) _Deref_pre_readonly_)



#define _In_ptrdiff_count_(size)       _SAL1_1_Source_(_In_ptrdiff_count_, (size), _Pre_ptrdiff_count_(size)     _Deref_pre_readonly_)
#define _In_opt_ptrdiff_count_(size)   _SAL1_1_Source_(_In_opt_ptrdiff_count_, (size), _Pre_opt_ptrdiff_count_(size) _Deref_pre_readonly_)



#define _In_count_x_(size)             _SAL1_1_Source_(_In_count_x_, (size), _Pre_count_x_(size)         _Deref_pre_readonly_)
#define _In_opt_count_x_(size)         _SAL1_1_Source_(_In_opt_count_x_, (size), _Pre_opt_count_x_(size)     _Deref_pre_readonly_)
#define _In_bytecount_x_(size)         _SAL1_1_Source_(_In_bytecount_x_, (size), _Pre_bytecount_x_(size)     _Deref_pre_readonly_)
#define _In_opt_bytecount_x_(size)     _SAL1_1_Source_(_In_opt_bytecount_x_, (size), _Pre_opt_bytecount_x_(size) _Deref_pre_readonly_)





#define _Out_cap_(size)                   _SAL1_1_Source_(_Out_cap_, (size), _Pre_cap_(size)           _Post_valid_impl_)
#define _Out_opt_cap_(size)               _SAL1_1_Source_(_Out_opt_cap_, (size), _Pre_opt_cap_(size)       _Post_valid_impl_)
#define _Out_bytecap_(size)               _SAL1_1_Source_(_Out_bytecap_, (size), _Pre_bytecap_(size)       _Post_valid_impl_)
#define _Out_opt_bytecap_(size)           _SAL1_1_Source_(_Out_opt_bytecap_, (size), _Pre_opt_bytecap_(size)   _Post_valid_impl_)


#define _Out_cap_c_(size)                 _SAL1_1_Source_(_Out_cap_c_, (size), _Pre_cap_c_(size)         _Post_valid_impl_)
#define _Out_opt_cap_c_(size)             _SAL1_1_Source_(_Out_opt_cap_c_, (size), _Pre_opt_cap_c_(size)     _Post_valid_impl_)
#define _Out_bytecap_c_(size)             _SAL1_1_Source_(_Out_bytecap_c_, (size), _Pre_bytecap_c_(size)     _Post_valid_impl_)
#define _Out_opt_bytecap_c_(size)         _SAL1_1_Source_(_Out_opt_bytecap_c_, (size), _Pre_opt_bytecap_c_(size) _Post_valid_impl_)


#define _Out_cap_m_(mult,size)            _SAL1_1_Source_(_Out_cap_m_, (mult,size), _Pre_cap_m_(mult,size)     _Post_valid_impl_)
#define _Out_opt_cap_m_(mult,size)        _SAL1_1_Source_(_Out_opt_cap_m_, (mult,size), _Pre_opt_cap_m_(mult,size) _Post_valid_impl_)
#define _Out_z_cap_m_(mult,size)          _SAL1_1_Source_(_Out_z_cap_m_, (mult,size), _Pre_cap_m_(mult,size)     _Post_valid_impl_ _Post_z_)
#define _Out_opt_z_cap_m_(mult,size)      _SAL1_1_Source_(_Out_opt_z_cap_m_, (mult,size), _Pre_opt_cap_m_(mult,size) _Post_valid_impl_ _Post_z_)



#define _Out_ptrdiff_cap_(size)           _SAL1_1_Source_(_Out_ptrdiff_cap_, (size), _Pre_ptrdiff_cap_(size)     _Post_valid_impl_)
#define _Out_opt_ptrdiff_cap_(size)       _SAL1_1_Source_(_Out_opt_ptrdiff_cap_, (size), _Pre_opt_ptrdiff_cap_(size) _Post_valid_impl_)


#define _Out_cap_x_(size)                 _SAL1_1_Source_(_Out_cap_x_, (size), _Pre_cap_x_(size)         _Post_valid_impl_)
#define _Out_opt_cap_x_(size)             _SAL1_1_Source_(_Out_opt_cap_x_, (size), _Pre_opt_cap_x_(size)     _Post_valid_impl_)
#define _Out_bytecap_x_(size)             _SAL1_1_Source_(_Out_bytecap_x_, (size), _Pre_bytecap_x_(size)     _Post_valid_impl_)
#define _Out_opt_bytecap_x_(size)         _SAL1_1_Source_(_Out_opt_bytecap_x_, (size), _Pre_opt_bytecap_x_(size) _Post_valid_impl_)




#define _Out_z_cap_(size)                 _SAL1_1_Source_(_Out_z_cap_, (size), _Pre_cap_(size)           _Post_valid_impl_ _Post_z_)
#define _Out_opt_z_cap_(size)             _SAL1_1_Source_(_Out_opt_z_cap_, (size), _Pre_opt_cap_(size)       _Post_valid_impl_ _Post_z_)
#define _Out_z_bytecap_(size)             _SAL1_1_Source_(_Out_z_bytecap_, (size), _Pre_bytecap_(size)       _Post_valid_impl_ _Post_z_)
#define _Out_opt_z_bytecap_(size)         _SAL1_1_Source_(_Out_opt_z_bytecap_, (size), _Pre_opt_bytecap_(size)   _Post_valid_impl_ _Post_z_)


#define _Out_z_cap_c_(size)               _SAL1_1_Source_(_Out_z_cap_c_, (size), _Pre_cap_c_(size)         _Post_valid_impl_ _Post_z_)
#define _Out_opt_z_cap_c_(size)           _SAL1_1_Source_(_Out_opt_z_cap_c_, (size), _Pre_opt_cap_c_(size)     _Post_valid_impl_ _Post_z_)
#define _Out_z_bytecap_c_(size)           _SAL1_1_Source_(_Out_z_bytecap_c_, (size), _Pre_bytecap_c_(size)     _Post_valid_impl_ _Post_z_)
#define _Out_opt_z_bytecap_c_(size)       _SAL1_1_Source_(_Out_opt_z_bytecap_c_, (size), _Pre_opt_bytecap_c_(size) _Post_valid_impl_ _Post_z_)


#define _Out_z_cap_x_(size)               _SAL1_1_Source_(_Out_z_cap_x_, (size), _Pre_cap_x_(size)         _Post_valid_impl_ _Post_z_)
#define _Out_opt_z_cap_x_(size)           _SAL1_1_Source_(_Out_opt_z_cap_x_, (size), _Pre_opt_cap_x_(size)     _Post_valid_impl_ _Post_z_)
#define _Out_z_bytecap_x_(size)           _SAL1_1_Source_(_Out_z_bytecap_x_, (size), _Pre_bytecap_x_(size)     _Post_valid_impl_ _Post_z_)
#define _Out_opt_z_bytecap_x_(size)       _SAL1_1_Source_(_Out_opt_z_bytecap_x_, (size), _Pre_opt_bytecap_x_(size) _Post_valid_impl_ _Post_z_)



#define _Out_cap_post_count_(cap,count)                _SAL1_1_Source_(_Out_cap_post_count_, (cap,count), _Pre_cap_(cap)         _Post_valid_impl_ _Post_count_(count))
#define _Out_opt_cap_post_count_(cap,count)            _SAL1_1_Source_(_Out_opt_cap_post_count_, (cap,count), _Pre_opt_cap_(cap)     _Post_valid_impl_ _Post_count_(count))
#define _Out_bytecap_post_bytecount_(cap,count)        _SAL1_1_Source_(_Out_bytecap_post_bytecount_, (cap,count), _Pre_bytecap_(cap)     _Post_valid_impl_ _Post_bytecount_(count))
#define _Out_opt_bytecap_post_bytecount_(cap,count)    _SAL1_1_Source_(_Out_opt_bytecap_post_bytecount_, (cap,count), _Pre_opt_bytecap_(cap) _Post_valid_impl_ _Post_bytecount_(count))



#define _Out_z_cap_post_count_(cap,count)               _SAL1_1_Source_(_Out_z_cap_post_count_, (cap,count), _Pre_cap_(cap)         _Post_valid_impl_ _Post_z_count_(count))
#define _Out_opt_z_cap_post_count_(cap,count)           _SAL1_1_Source_(_Out_opt_z_cap_post_count_, (cap,count), _Pre_opt_cap_(cap)     _Post_valid_impl_ _Post_z_count_(count))
#define _Out_z_bytecap_post_bytecount_(cap,count)       _SAL1_1_Source_(_Out_z_bytecap_post_bytecount_, (cap,count), _Pre_bytecap_(cap)     _Post_valid_impl_ _Post_z_bytecount_(count))
#define _Out_opt_z_bytecap_post_bytecount_(cap,count)   _SAL1_1_Source_(_Out_opt_z_bytecap_post_bytecount_, (cap,count), _Pre_opt_bytecap_(cap) _Post_valid_impl_ _Post_z_bytecount_(count))


#define _Out_capcount_(capcount)             _SAL1_1_Source_(_Out_capcount_, (capcount), _Pre_cap_(capcount)         _Post_valid_impl_ _Post_count_(capcount))
#define _Out_opt_capcount_(capcount)         _SAL1_1_Source_(_Out_opt_capcount_, (capcount), _Pre_opt_cap_(capcount)     _Post_valid_impl_ _Post_count_(capcount))
#define _Out_bytecapcount_(capcount)         _SAL1_1_Source_(_Out_bytecapcount_, (capcount), _Pre_bytecap_(capcount)     _Post_valid_impl_ _Post_bytecount_(capcount))
#define _Out_opt_bytecapcount_(capcount)     _SAL1_1_Source_(_Out_opt_bytecapcount_, (capcount), _Pre_opt_bytecap_(capcount) _Post_valid_impl_ _Post_bytecount_(capcount))

#define _Out_capcount_x_(capcount)           _SAL1_1_Source_(_Out_capcount_x_, (capcount), _Pre_cap_x_(capcount)         _Post_valid_impl_ _Post_count_x_(capcount))
#define _Out_opt_capcount_x_(capcount)       _SAL1_1_Source_(_Out_opt_capcount_x_, (capcount), _Pre_opt_cap_x_(capcount)     _Post_valid_impl_ _Post_count_x_(capcount))
#define _Out_bytecapcount_x_(capcount)       _SAL1_1_Source_(_Out_bytecapcount_x_, (capcount), _Pre_bytecap_x_(capcount)     _Post_valid_impl_ _Post_bytecount_x_(capcount))
#define _Out_opt_bytecapcount_x_(capcount)   _SAL1_1_Source_(_Out_opt_bytecapcount_x_, (capcount), _Pre_opt_bytecap_x_(capcount) _Post_valid_impl_ _Post_bytecount_x_(capcount))


#define _Out_z_capcount_(capcount)           _SAL1_1_Source_(_Out_z_capcount_, (capcount), _Pre_cap_(capcount)         _Post_valid_impl_ _Post_z_count_(capcount))
#define _Out_opt_z_capcount_(capcount)       _SAL1_1_Source_(_Out_opt_z_capcount_, (capcount), _Pre_opt_cap_(capcount)     _Post_valid_impl_ _Post_z_count_(capcount))
#define _Out_z_bytecapcount_(capcount)       _SAL1_1_Source_(_Out_z_bytecapcount_, (capcount), _Pre_bytecap_(capcount)     _Post_valid_impl_ _Post_z_bytecount_(capcount))
#define _Out_opt_z_bytecapcount_(capcount)   _SAL1_1_Source_(_Out_opt_z_bytecapcount_, (capcount), _Pre_opt_bytecap_(capcount) _Post_valid_impl_ _Post_z_bytecount_(capcount))




#define _Inout_count_(size)               _SAL1_1_Source_(_Inout_count_, (size), _Prepost_count_(size))
#define _Inout_opt_count_(size)           _SAL1_1_Source_(_Inout_opt_count_, (size), _Prepost_opt_count_(size))
#define _Inout_bytecount_(size)           _SAL1_1_Source_(_Inout_bytecount_, (size), _Prepost_bytecount_(size))
#define _Inout_opt_bytecount_(size)       _SAL1_1_Source_(_Inout_opt_bytecount_, (size), _Prepost_opt_bytecount_(size))

#define _Inout_count_c_(size)             _SAL1_1_Source_(_Inout_count_c_, (size), _Prepost_count_c_(size))
#define _Inout_opt_count_c_(size)         _SAL1_1_Source_(_Inout_opt_count_c_, (size), _Prepost_opt_count_c_(size))
#define _Inout_bytecount_c_(size)         _SAL1_1_Source_(_Inout_bytecount_c_, (size), _Prepost_bytecount_c_(size))
#define _Inout_opt_bytecount_c_(size)     _SAL1_1_Source_(_Inout_opt_bytecount_c_, (size), _Prepost_opt_bytecount_c_(size))



#define _Inout_z_count_(size)               _SAL1_1_Source_(_Inout_z_count_, (size), _Prepost_z_ _Prepost_count_(size))
#define _Inout_opt_z_count_(size)           _SAL1_1_Source_(_Inout_opt_z_count_, (size), _Prepost_z_ _Prepost_opt_count_(size))
#define _Inout_z_bytecount_(size)           _SAL1_1_Source_(_Inout_z_bytecount_, (size), _Prepost_z_ _Prepost_bytecount_(size))
#define _Inout_opt_z_bytecount_(size)       _SAL1_1_Source_(_Inout_opt_z_bytecount_, (size), _Prepost_z_ _Prepost_opt_bytecount_(size))

#define _Inout_z_count_c_(size)             _SAL1_1_Source_(_Inout_z_count_c_, (size), _Prepost_z_ _Prepost_count_c_(size))
#define _Inout_opt_z_count_c_(size)         _SAL1_1_Source_(_Inout_opt_z_count_c_, (size), _Prepost_z_ _Prepost_opt_count_c_(size))
#define _Inout_z_bytecount_c_(size)         _SAL1_1_Source_(_Inout_z_bytecount_c_, (size), _Prepost_z_ _Prepost_bytecount_c_(size))
#define _Inout_opt_z_bytecount_c_(size)     _SAL1_1_Source_(_Inout_opt_z_bytecount_c_, (size), _Prepost_z_ _Prepost_opt_bytecount_c_(size))

#define _Inout_ptrdiff_count_(size)       _SAL1_1_Source_(_Inout_ptrdiff_count_, (size), _Pre_ptrdiff_count_(size))
#define _Inout_opt_ptrdiff_count_(size)   _SAL1_1_Source_(_Inout_opt_ptrdiff_count_, (size), _Pre_opt_ptrdiff_count_(size))

#define _Inout_count_x_(size)             _SAL1_1_Source_(_Inout_count_x_, (size), _Prepost_count_x_(size))
#define _Inout_opt_count_x_(size)         _SAL1_1_Source_(_Inout_opt_count_x_, (size), _Prepost_opt_count_x_(size))
#define _Inout_bytecount_x_(size)         _SAL1_1_Source_(_Inout_bytecount_x_, (size), _Prepost_bytecount_x_(size))
#define _Inout_opt_bytecount_x_(size)     _SAL1_1_Source_(_Inout_opt_bytecount_x_, (size), _Prepost_opt_bytecount_x_(size))


#define _Inout_cap_(size)                 _SAL1_1_Source_(_Inout_cap_, (size), _Pre_valid_cap_(size)           _Post_valid_)
#define _Inout_opt_cap_(size)             _SAL1_1_Source_(_Inout_opt_cap_, (size), _Pre_opt_valid_cap_(size)       _Post_valid_)
#define _Inout_bytecap_(size)             _SAL1_1_Source_(_Inout_bytecap_, (size), _Pre_valid_bytecap_(size)       _Post_valid_)
#define _Inout_opt_bytecap_(size)         _SAL1_1_Source_(_Inout_opt_bytecap_, (size), _Pre_opt_valid_bytecap_(size)   _Post_valid_)

#define _Inout_cap_c_(size)               _SAL1_1_Source_(_Inout_cap_c_, (size), _Pre_valid_cap_c_(size)         _Post_valid_)
#define _Inout_opt_cap_c_(size)           _SAL1_1_Source_(_Inout_opt_cap_c_, (size), _Pre_opt_valid_cap_c_(size)     _Post_valid_)
#define _Inout_bytecap_c_(size)           _SAL1_1_Source_(_Inout_bytecap_c_, (size), _Pre_valid_bytecap_c_(size)     _Post_valid_)
#define _Inout_opt_bytecap_c_(size)       _SAL1_1_Source_(_Inout_opt_bytecap_c_, (size), _Pre_opt_valid_bytecap_c_(size) _Post_valid_)

#define _Inout_cap_x_(size)               _SAL1_1_Source_(_Inout_cap_x_, (size), _Pre_valid_cap_x_(size)         _Post_valid_)
#define _Inout_opt_cap_x_(size)           _SAL1_1_Source_(_Inout_opt_cap_x_, (size), _Pre_opt_valid_cap_x_(size)     _Post_valid_)
#define _Inout_bytecap_x_(size)           _SAL1_1_Source_(_Inout_bytecap_x_, (size), _Pre_valid_bytecap_x_(size)     _Post_valid_)
#define _Inout_opt_bytecap_x_(size)       _SAL1_1_Source_(_Inout_opt_bytecap_x_, (size), _Pre_opt_valid_bytecap_x_(size) _Post_valid_)



#define _Inout_z_cap_(size)                  _SAL1_1_Source_(_Inout_z_cap_, (size), _Pre_z_cap_(size)            _Post_z_)
#define _Inout_opt_z_cap_(size)              _SAL1_1_Source_(_Inout_opt_z_cap_, (size), _Pre_opt_z_cap_(size)        _Post_z_)
#define _Inout_z_bytecap_(size)              _SAL1_1_Source_(_Inout_z_bytecap_, (size), _Pre_z_bytecap_(size)        _Post_z_)
#define _Inout_opt_z_bytecap_(size)          _SAL1_1_Source_(_Inout_opt_z_bytecap_, (size), _Pre_opt_z_bytecap_(size)    _Post_z_)

#define _Inout_z_cap_c_(size)                _SAL1_1_Source_(_Inout_z_cap_c_, (size), _Pre_z_cap_c_(size)          _Post_z_)
#define _Inout_opt_z_cap_c_(size)            _SAL1_1_Source_(_Inout_opt_z_cap_c_, (size), _Pre_opt_z_cap_c_(size)      _Post_z_)
#define _Inout_z_bytecap_c_(size)            _SAL1_1_Source_(_Inout_z_bytecap_c_, (size), _Pre_z_bytecap_c_(size)      _Post_z_)
#define _Inout_opt_z_bytecap_c_(size)        _SAL1_1_Source_(_Inout_opt_z_bytecap_c_, (size), _Pre_opt_z_bytecap_c_(size)  _Post_z_)

#define _Inout_z_cap_x_(size)                _SAL1_1_Source_(_Inout_z_cap_x_, (size), _Pre_z_cap_x_(size)          _Post_z_)
#define _Inout_opt_z_cap_x_(size)            _SAL1_1_Source_(_Inout_opt_z_cap_x_, (size), _Pre_opt_z_cap_x_(size)      _Post_z_)
#define _Inout_z_bytecap_x_(size)            _SAL1_1_Source_(_Inout_z_bytecap_x_, (size), _Pre_z_bytecap_x_(size)      _Post_z_)
#define _Inout_opt_z_bytecap_x_(size)        _SAL1_1_Source_(_Inout_opt_z_bytecap_x_, (size), _Pre_opt_z_bytecap_x_(size)  _Post_z_)



#define _Ret_                   _SAL1_1_Source_(_Ret_, (), _Ret_valid_)
#define _Ret_opt_               _SAL1_1_Source_(_Ret_opt_, (), _Ret_opt_valid_)


#define _In_bound_           _SAL1_1_Source_(_In_bound_, (), _In_bound_impl_)
#define _Out_bound_          _SAL1_1_Source_(_Out_bound_, (), _Out_bound_impl_)
#define _Ret_bound_          _SAL1_1_Source_(_Ret_bound_, (), _Ret_bound_impl_)
#define _Deref_in_bound_     _SAL1_1_Source_(_Deref_in_bound_, (), _Deref_in_bound_impl_)
#define _Deref_out_bound_    _SAL1_1_Source_(_Deref_out_bound_, (), _Deref_out_bound_impl_)
#define _Deref_inout_bound_  _SAL1_1_Source_(_Deref_inout_bound_, (), _Deref_in_bound_ _Deref_out_bound_)
#define _Deref_ret_bound_    _SAL1_1_Source_(_Deref_ret_bound_, (), _Deref_ret_bound_impl_)


#define _Deref_out_             _SAL1_1_Source_(_Deref_out_, (), _Out_ _Deref_post_valid_)
#define _Deref_out_opt_         _SAL1_1_Source_(_Deref_out_opt_, (), _Out_ _Deref_post_opt_valid_)
#define _Deref_opt_out_         _SAL1_1_Source_(_Deref_opt_out_, (), _Out_opt_ _Deref_post_valid_)
#define _Deref_opt_out_opt_     _SAL1_1_Source_(_Deref_opt_out_opt_, (), _Out_opt_ _Deref_post_opt_valid_)


#define _Deref_out_z_           _SAL1_1_Source_(_Deref_out_z_, (), _Out_ _Deref_post_z_)
#define _Deref_out_opt_z_       _SAL1_1_Source_(_Deref_out_opt_z_, (), _Out_ _Deref_post_opt_z_)
#define _Deref_opt_out_z_       _SAL1_1_Source_(_Deref_opt_out_z_, (), _Out_opt_ _Deref_post_z_)
#define _Deref_opt_out_opt_z_   _SAL1_1_Source_(_Deref_opt_out_opt_z_, (), _Out_opt_ _Deref_post_opt_z_)







#define _Deref_pre_z_                           _SAL1_1_Source_(_Deref_pre_z_, (), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__zterm_impl) _Pre_valid_impl_)
#define _Deref_pre_opt_z_                       _SAL1_1_Source_(_Deref_pre_opt_z_, (), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__zterm_impl) _Pre_valid_impl_)



#define _Deref_pre_cap_(size)                   _SAL1_1_Source_(_Deref_pre_cap_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__cap_impl(size)))
#define _Deref_pre_opt_cap_(size)               _SAL1_1_Source_(_Deref_pre_opt_cap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_impl(size)))
#define _Deref_pre_bytecap_(size)               _SAL1_1_Source_(_Deref_pre_bytecap_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__bytecap_impl(size)))
#define _Deref_pre_opt_bytecap_(size)           _SAL1_1_Source_(_Deref_pre_opt_bytecap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_impl(size)))


#define _Deref_pre_cap_c_(size)                 _SAL1_1_Source_(_Deref_pre_cap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__cap_c_impl(size)))
#define _Deref_pre_opt_cap_c_(size)             _SAL1_1_Source_(_Deref_pre_opt_cap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_c_impl(size)))
#define _Deref_pre_bytecap_c_(size)             _SAL1_1_Source_(_Deref_pre_bytecap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__bytecap_c_impl(size)))
#define _Deref_pre_opt_bytecap_c_(size)         _SAL1_1_Source_(_Deref_pre_opt_bytecap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_c_impl(size)))


#define _Deref_pre_cap_x_(size)                 _SAL1_1_Source_(_Deref_pre_cap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__cap_x_impl(size)))
#define _Deref_pre_opt_cap_x_(size)             _SAL1_1_Source_(_Deref_pre_opt_cap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_x_impl(size)))
#define _Deref_pre_bytecap_x_(size)             _SAL1_1_Source_(_Deref_pre_bytecap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__bytecap_x_impl(size)))
#define _Deref_pre_opt_bytecap_x_(size)         _SAL1_1_Source_(_Deref_pre_opt_bytecap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_x_impl(size)))


#define _Deref_pre_z_cap_(size)                 _SAL1_1_Source_(_Deref_pre_z_cap_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre2_impl_(__zterm_impl,__cap_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_opt_z_cap_(size)             _SAL1_1_Source_(_Deref_pre_opt_z_cap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__cap_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_z_bytecap_(size)             _SAL1_1_Source_(_Deref_pre_z_bytecap_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre2_impl_(__zterm_impl,__bytecap_impl(size)) _Pre_valid_impl_)
#define _Deref_pre_opt_z_bytecap_(size)         _SAL1_1_Source_(_Deref_pre_opt_z_bytecap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__bytecap_impl(size)) _Pre_valid_impl_)

#define _Deref_pre_z_cap_c_(size)               _SAL1_1_Source_(_Deref_pre_z_cap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre2_impl_(__zterm_impl,__cap_c_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_opt_z_cap_c_(size)           _SAL1_1_Source_(_Deref_pre_opt_z_cap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__cap_c_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_z_bytecap_c_(size)           _SAL1_1_Source_(_Deref_pre_z_bytecap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Pre_valid_impl_)
#define _Deref_pre_opt_z_bytecap_c_(size)       _SAL1_1_Source_(_Deref_pre_opt_z_bytecap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Pre_valid_impl_)

#define _Deref_pre_z_cap_x_(size)               _SAL1_1_Source_(_Deref_pre_z_cap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre2_impl_(__zterm_impl,__cap_x_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_opt_z_cap_x_(size)           _SAL1_1_Source_(_Deref_pre_opt_z_cap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__cap_x_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_z_bytecap_x_(size)           _SAL1_1_Source_(_Deref_pre_z_bytecap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Pre_valid_impl_)
#define _Deref_pre_opt_z_bytecap_x_(size)       _SAL1_1_Source_(_Deref_pre_opt_z_bytecap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Pre_valid_impl_)


#define _Deref_pre_valid_cap_(size)             _SAL1_1_Source_(_Deref_pre_valid_cap_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__cap_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_opt_valid_cap_(size)         _SAL1_1_Source_(_Deref_pre_opt_valid_cap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_valid_bytecap_(size)         _SAL1_1_Source_(_Deref_pre_valid_bytecap_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__bytecap_impl(size)) _Pre_valid_impl_)
#define _Deref_pre_opt_valid_bytecap_(size)     _SAL1_1_Source_(_Deref_pre_opt_valid_bytecap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_impl(size)) _Pre_valid_impl_)

#define _Deref_pre_valid_cap_c_(size)           _SAL1_1_Source_(_Deref_pre_valid_cap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__cap_c_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_opt_valid_cap_c_(size)       _SAL1_1_Source_(_Deref_pre_opt_valid_cap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_c_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_valid_bytecap_c_(size)       _SAL1_1_Source_(_Deref_pre_valid_bytecap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__bytecap_c_impl(size)) _Pre_valid_impl_)
#define _Deref_pre_opt_valid_bytecap_c_(size)   _SAL1_1_Source_(_Deref_pre_opt_valid_bytecap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_c_impl(size)) _Pre_valid_impl_)

#define _Deref_pre_valid_cap_x_(size)           _SAL1_1_Source_(_Deref_pre_valid_cap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__cap_x_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_opt_valid_cap_x_(size)       _SAL1_1_Source_(_Deref_pre_opt_valid_cap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_x_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_valid_bytecap_x_(size)       _SAL1_1_Source_(_Deref_pre_valid_bytecap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__bytecap_x_impl(size)) _Pre_valid_impl_)
#define _Deref_pre_opt_valid_bytecap_x_(size)   _SAL1_1_Source_(_Deref_pre_opt_valid_bytecap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_x_impl(size)) _Pre_valid_impl_)



#define _Deref_pre_count_(size)                 _SAL1_1_Source_(_Deref_pre_count_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__count_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_opt_count_(size)             _SAL1_1_Source_(_Deref_pre_opt_count_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__count_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_bytecount_(size)             _SAL1_1_Source_(_Deref_pre_bytecount_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__bytecount_impl(size)) _Pre_valid_impl_)
#define _Deref_pre_opt_bytecount_(size)         _SAL1_1_Source_(_Deref_pre_opt_bytecount_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecount_impl(size)) _Pre_valid_impl_)


#define _Deref_pre_count_c_(size)               _SAL1_1_Source_(_Deref_pre_count_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__count_c_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_opt_count_c_(size)           _SAL1_1_Source_(_Deref_pre_opt_count_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__count_c_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_bytecount_c_(size)           _SAL1_1_Source_(_Deref_pre_bytecount_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__bytecount_c_impl(size)) _Pre_valid_impl_)
#define _Deref_pre_opt_bytecount_c_(size)       _SAL1_1_Source_(_Deref_pre_opt_bytecount_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecount_c_impl(size)) _Pre_valid_impl_)


#define _Deref_pre_count_x_(size)               _SAL1_1_Source_(_Deref_pre_count_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__count_x_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_opt_count_x_(size)           _SAL1_1_Source_(_Deref_pre_opt_count_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__count_x_impl(size))     _Pre_valid_impl_)
#define _Deref_pre_bytecount_x_(size)           _SAL1_1_Source_(_Deref_pre_bytecount_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref)   _Deref_pre1_impl_(__bytecount_x_impl(size)) _Pre_valid_impl_)
#define _Deref_pre_opt_bytecount_x_(size)       _SAL1_1_Source_(_Deref_pre_opt_bytecount_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecount_x_impl(size)) _Pre_valid_impl_)


#define _Deref_pre_valid_                       _SAL1_1_Source_(_Deref_pre_valid_, (), _Deref_pre1_impl_(__notnull_impl_notref)   _Pre_valid_impl_)
#define _Deref_pre_opt_valid_                   _SAL1_1_Source_(_Deref_pre_opt_valid_, (), _Deref_pre1_impl_(__maybenull_impl_notref) _Pre_valid_impl_)
#define _Deref_pre_invalid_                     _SAL1_1_Source_(_Deref_pre_invalid_, (), _Deref_pre1_impl_(__notvalid_impl))

#define _Deref_pre_notnull_                     _SAL1_1_Source_(_Deref_pre_notnull_, (), _Deref_pre1_impl_(__notnull_impl_notref))
#define _Deref_pre_maybenull_                   _SAL1_1_Source_(_Deref_pre_maybenull_, (), _Deref_pre1_impl_(__maybenull_impl_notref))
#define _Deref_pre_null_                        _SAL1_1_Source_(_Deref_pre_null_, (), _Deref_pre1_impl_(__null_impl_notref))


#define _Deref_pre_readonly_                    _SAL1_1_Source_(_Deref_pre_readonly_, (), _Deref_pre1_impl_(__readaccess_impl_notref))
#define _Deref_pre_writeonly_                   _SAL1_1_Source_(_Deref_pre_writeonly_, (), _Deref_pre1_impl_(__writeaccess_impl_notref))







#define _Deref_post_z_                           _SAL1_1_Source_(_Deref_post_z_, (), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__zterm_impl) _Post_valid_impl_)
#define _Deref_post_opt_z_                       _SAL1_1_Source_(_Deref_post_opt_z_, (), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__zterm_impl) _Post_valid_impl_)



#define _Deref_post_cap_(size)                   _SAL1_1_Source_(_Deref_post_cap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_impl(size)))
#define _Deref_post_opt_cap_(size)               _SAL1_1_Source_(_Deref_post_opt_cap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_impl(size)))
#define _Deref_post_bytecap_(size)               _SAL1_1_Source_(_Deref_post_bytecap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_impl(size)))
#define _Deref_post_opt_bytecap_(size)           _SAL1_1_Source_(_Deref_post_opt_bytecap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_impl(size)))


#define _Deref_post_cap_c_(size)                 _SAL1_1_Source_(_Deref_post_cap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_c_impl(size)))
#define _Deref_post_opt_cap_c_(size)             _SAL1_1_Source_(_Deref_post_opt_cap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_c_impl(size)))
#define _Deref_post_bytecap_c_(size)             _SAL1_1_Source_(_Deref_post_bytecap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_c_impl(size)))
#define _Deref_post_opt_bytecap_c_(size)         _SAL1_1_Source_(_Deref_post_opt_bytecap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_c_impl(size)))


#define _Deref_post_cap_x_(size)                 _SAL1_1_Source_(_Deref_post_cap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_x_impl(size)))
#define _Deref_post_opt_cap_x_(size)             _SAL1_1_Source_(_Deref_post_opt_cap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_x_impl(size)))
#define _Deref_post_bytecap_x_(size)             _SAL1_1_Source_(_Deref_post_bytecap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_x_impl(size)))
#define _Deref_post_opt_bytecap_x_(size)         _SAL1_1_Source_(_Deref_post_opt_bytecap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_x_impl(size)))


#define _Deref_post_z_cap_(size)                 _SAL1_1_Source_(_Deref_post_z_cap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_impl(size))       _Post_valid_impl_)
#define _Deref_post_opt_z_cap_(size)             _SAL1_1_Source_(_Deref_post_opt_z_cap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_impl(size))       _Post_valid_impl_)
#define _Deref_post_z_bytecap_(size)             _SAL1_1_Source_(_Deref_post_z_bytecap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_impl(size))   _Post_valid_impl_)
#define _Deref_post_opt_z_bytecap_(size)         _SAL1_1_Source_(_Deref_post_opt_z_bytecap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_impl(size))   _Post_valid_impl_)

#define _Deref_post_z_cap_c_(size)               _SAL1_1_Source_(_Deref_post_z_cap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_c_impl(size))     _Post_valid_impl_)
#define _Deref_post_opt_z_cap_c_(size)           _SAL1_1_Source_(_Deref_post_opt_z_cap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_c_impl(size))     _Post_valid_impl_)
#define _Deref_post_z_bytecap_c_(size)           _SAL1_1_Source_(_Deref_post_z_bytecap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Post_valid_impl_)
#define _Deref_post_opt_z_bytecap_c_(size)       _SAL1_1_Source_(_Deref_post_opt_z_bytecap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Post_valid_impl_)

#define _Deref_post_z_cap_x_(size)               _SAL1_1_Source_(_Deref_post_z_cap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_x_impl(size))     _Post_valid_impl_)
#define _Deref_post_opt_z_cap_x_(size)           _SAL1_1_Source_(_Deref_post_opt_z_cap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_x_impl(size))     _Post_valid_impl_)
#define _Deref_post_z_bytecap_x_(size)           _SAL1_1_Source_(_Deref_post_z_bytecap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Post_valid_impl_)
#define _Deref_post_opt_z_bytecap_x_(size)       _SAL1_1_Source_(_Deref_post_opt_z_bytecap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Post_valid_impl_)


#define _Deref_post_valid_cap_(size)             _SAL1_1_Source_(_Deref_post_valid_cap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_impl(size))       _Post_valid_impl_)
#define _Deref_post_opt_valid_cap_(size)         _SAL1_1_Source_(_Deref_post_opt_valid_cap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_impl(size))       _Post_valid_impl_)
#define _Deref_post_valid_bytecap_(size)         _SAL1_1_Source_(_Deref_post_valid_bytecap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_impl(size))   _Post_valid_impl_)
#define _Deref_post_opt_valid_bytecap_(size)     _SAL1_1_Source_(_Deref_post_opt_valid_bytecap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_impl(size))   _Post_valid_impl_)

#define _Deref_post_valid_cap_c_(size)           _SAL1_1_Source_(_Deref_post_valid_cap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_c_impl(size))     _Post_valid_impl_)
#define _Deref_post_opt_valid_cap_c_(size)       _SAL1_1_Source_(_Deref_post_opt_valid_cap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_c_impl(size))     _Post_valid_impl_)
#define _Deref_post_valid_bytecap_c_(size)       _SAL1_1_Source_(_Deref_post_valid_bytecap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_c_impl(size)) _Post_valid_impl_)
#define _Deref_post_opt_valid_bytecap_c_(size)   _SAL1_1_Source_(_Deref_post_opt_valid_bytecap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_c_impl(size)) _Post_valid_impl_)

#define _Deref_post_valid_cap_x_(size)           _SAL1_1_Source_(_Deref_post_valid_cap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_x_impl(size))     _Post_valid_impl_)
#define _Deref_post_opt_valid_cap_x_(size)       _SAL1_1_Source_(_Deref_post_opt_valid_cap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_x_impl(size))     _Post_valid_impl_)
#define _Deref_post_valid_bytecap_x_(size)       _SAL1_1_Source_(_Deref_post_valid_bytecap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_x_impl(size)) _Post_valid_impl_)
#define _Deref_post_opt_valid_bytecap_x_(size)   _SAL1_1_Source_(_Deref_post_opt_valid_bytecap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_x_impl(size)) _Post_valid_impl_)



#define _Deref_post_count_(size)                 _SAL1_1_Source_(_Deref_post_count_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__count_impl(size))       _Post_valid_impl_)
#define _Deref_post_opt_count_(size)             _SAL1_1_Source_(_Deref_post_opt_count_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__count_impl(size))       _Post_valid_impl_)
#define _Deref_post_bytecount_(size)             _SAL1_1_Source_(_Deref_post_bytecount_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecount_impl(size))   _Post_valid_impl_)
#define _Deref_post_opt_bytecount_(size)         _SAL1_1_Source_(_Deref_post_opt_bytecount_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecount_impl(size))   _Post_valid_impl_)


#define _Deref_post_count_c_(size)               _SAL1_1_Source_(_Deref_post_count_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__count_c_impl(size))     _Post_valid_impl_)
#define _Deref_post_opt_count_c_(size)           _SAL1_1_Source_(_Deref_post_opt_count_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__count_c_impl(size))     _Post_valid_impl_)
#define _Deref_post_bytecount_c_(size)           _SAL1_1_Source_(_Deref_post_bytecount_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecount_c_impl(size)) _Post_valid_impl_)
#define _Deref_post_opt_bytecount_c_(size)       _SAL1_1_Source_(_Deref_post_opt_bytecount_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecount_c_impl(size)) _Post_valid_impl_)


#define _Deref_post_count_x_(size)               _SAL1_1_Source_(_Deref_post_count_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__count_x_impl(size))     _Post_valid_impl_)
#define _Deref_post_opt_count_x_(size)           _SAL1_1_Source_(_Deref_post_opt_count_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__count_x_impl(size))     _Post_valid_impl_)
#define _Deref_post_bytecount_x_(size)           _SAL1_1_Source_(_Deref_post_bytecount_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecount_x_impl(size)) _Post_valid_impl_)
#define _Deref_post_opt_bytecount_x_(size)       _SAL1_1_Source_(_Deref_post_opt_bytecount_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecount_x_impl(size)) _Post_valid_impl_)


#define _Deref_post_valid_                       _SAL1_1_Source_(_Deref_post_valid_, (), _Deref_post1_impl_(__notnull_impl_notref)   _Post_valid_impl_)
#define _Deref_post_opt_valid_                   _SAL1_1_Source_(_Deref_post_opt_valid_, (), _Deref_post1_impl_(__maybenull_impl_notref) _Post_valid_impl_)

#define _Deref_post_notnull_                     _SAL1_1_Source_(_Deref_post_notnull_, (), _Deref_post1_impl_(__notnull_impl_notref))
#define _Deref_post_maybenull_                   _SAL1_1_Source_(_Deref_post_maybenull_, (), _Deref_post1_impl_(__maybenull_impl_notref))
#define _Deref_post_null_                        _SAL1_1_Source_(_Deref_post_null_, (), _Deref_post1_impl_(__null_impl_notref))





#define _Deref_ret_z_                            _SAL1_1_Source_(_Deref_ret_z_, (), _Deref_ret1_impl_(__notnull_impl_notref) _Deref_ret1_impl_(__zterm_impl))
#define _Deref_ret_opt_z_                        _SAL1_1_Source_(_Deref_ret_opt_z_, (), _Deref_ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__zterm_impl))




#define _Deref2_pre_readonly_                    _SAL1_1_Source_(_Deref2_pre_readonly_, (), _Deref2_pre1_impl_(__readaccess_impl_notref))






#define _Ret_opt_valid_                   _SAL1_1_Source_(_Ret_opt_valid_, (), _Ret1_impl_(__maybenull_impl_notref) _Ret_valid_impl_)
#define _Ret_opt_z_                       _SAL1_1_Source_(_Ret_opt_z_, (), _Ret2_impl_(__maybenull_impl,__zterm_impl) _Ret_valid_impl_)



#define _Ret_cap_(size)                   _SAL1_1_Source_(_Ret_cap_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__cap_impl(size)))
#define _Ret_opt_cap_(size)               _SAL1_1_Source_(_Ret_opt_cap_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__cap_impl(size)))
#define _Ret_bytecap_(size)               _SAL1_1_Source_(_Ret_bytecap_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecap_impl(size)))
#define _Ret_opt_bytecap_(size)           _SAL1_1_Source_(_Ret_opt_bytecap_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecap_impl(size)))


#define _Ret_cap_c_(size)                 _SAL1_1_Source_(_Ret_cap_c_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__cap_c_impl(size)))
#define _Ret_opt_cap_c_(size)             _SAL1_1_Source_(_Ret_opt_cap_c_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__cap_c_impl(size)))
#define _Ret_bytecap_c_(size)             _SAL1_1_Source_(_Ret_bytecap_c_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecap_c_impl(size)))
#define _Ret_opt_bytecap_c_(size)         _SAL1_1_Source_(_Ret_opt_bytecap_c_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecap_c_impl(size)))


#define _Ret_cap_x_(size)                 _SAL1_1_Source_(_Ret_cap_x_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__cap_x_impl(size)))
#define _Ret_opt_cap_x_(size)             _SAL1_1_Source_(_Ret_opt_cap_x_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__cap_x_impl(size)))
#define _Ret_bytecap_x_(size)             _SAL1_1_Source_(_Ret_bytecap_x_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecap_x_impl(size)))
#define _Ret_opt_bytecap_x_(size)         _SAL1_1_Source_(_Ret_opt_bytecap_x_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecap_x_impl(size)))


#define _Ret_z_cap_(size)                 _SAL1_1_Source_(_Ret_z_cap_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret2_impl_(__zterm_impl,__cap_impl(size))     _Ret_valid_impl_)
#define _Ret_opt_z_cap_(size)             _SAL1_1_Source_(_Ret_opt_z_cap_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret2_impl_(__zterm_impl,__cap_impl(size))     _Ret_valid_impl_)
#define _Ret_z_bytecap_(size)             _SAL1_1_Source_(_Ret_z_bytecap_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret2_impl_(__zterm_impl,__bytecap_impl(size)) _Ret_valid_impl_)
#define _Ret_opt_z_bytecap_(size)         _SAL1_1_Source_(_Ret_opt_z_bytecap_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret2_impl_(__zterm_impl,__bytecap_impl(size)) _Ret_valid_impl_)



#define _Ret_count_(size)                 _SAL1_1_Source_(_Ret_count_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__count_impl(size))     _Ret_valid_impl_)
#define _Ret_opt_count_(size)             _SAL1_1_Source_(_Ret_opt_count_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__count_impl(size))     _Ret_valid_impl_)
#define _Ret_bytecount_(size)             _SAL1_1_Source_(_Ret_bytecount_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecount_impl(size)) _Ret_valid_impl_)
#define _Ret_opt_bytecount_(size)         _SAL1_1_Source_(_Ret_opt_bytecount_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecount_impl(size)) _Ret_valid_impl_)


#define _Ret_count_c_(size)               _SAL1_1_Source_(_Ret_count_c_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__count_c_impl(size))     _Ret_valid_impl_)
#define _Ret_opt_count_c_(size)           _SAL1_1_Source_(_Ret_opt_count_c_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__count_c_impl(size))     _Ret_valid_impl_)
#define _Ret_bytecount_c_(size)           _SAL1_1_Source_(_Ret_bytecount_c_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecount_c_impl(size)) _Ret_valid_impl_)
#define _Ret_opt_bytecount_c_(size)       _SAL1_1_Source_(_Ret_opt_bytecount_c_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecount_c_impl(size)) _Ret_valid_impl_)


#define _Ret_count_x_(size)               _SAL1_1_Source_(_Ret_count_x_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__count_x_impl(size))     _Ret_valid_impl_)
#define _Ret_opt_count_x_(size)           _SAL1_1_Source_(_Ret_opt_count_x_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__count_x_impl(size))     _Ret_valid_impl_)
#define _Ret_bytecount_x_(size)           _SAL1_1_Source_(_Ret_bytecount_x_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecount_x_impl(size)) _Ret_valid_impl_)
#define _Ret_opt_bytecount_x_(size)       _SAL1_1_Source_(_Ret_opt_bytecount_x_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecount_x_impl(size)) _Ret_valid_impl_)


#define _Ret_z_count_(size)               _SAL1_1_Source_(_Ret_z_count_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret2_impl_(__zterm_impl,__count_impl(size))     _Ret_valid_impl_)
#define _Ret_opt_z_count_(size)           _SAL1_1_Source_(_Ret_opt_z_count_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret2_impl_(__zterm_impl,__count_impl(size))     _Ret_valid_impl_)
#define _Ret_z_bytecount_(size)           _SAL1_1_Source_(_Ret_z_bytecount_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret2_impl_(__zterm_impl,__bytecount_impl(size)) _Ret_valid_impl_)
#define _Ret_opt_z_bytecount_(size)       _SAL1_1_Source_(_Ret_opt_z_bytecount_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret2_impl_(__zterm_impl,__bytecount_impl(size)) _Ret_valid_impl_)



#define _Pre_opt_z_                       _SAL1_1_Source_(_Pre_opt_z_, (), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__zterm_impl) _Pre_valid_impl_)


#define _Pre_readonly_                    _SAL1_1_Source_(_Pre_readonly_, (), _Pre1_impl_(__readaccess_impl_notref))
#define _Pre_writeonly_                   _SAL1_1_Source_(_Pre_writeonly_, (), _Pre1_impl_(__writeaccess_impl_notref))



#define _Pre_cap_(size)                   _SAL1_1_Source_(_Pre_cap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_impl(size)))
#define _Pre_opt_cap_(size)               _SAL1_1_Source_(_Pre_opt_cap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_impl(size)))
#define _Pre_bytecap_(size)               _SAL1_1_Source_(_Pre_bytecap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_impl(size)))
#define _Pre_opt_bytecap_(size)           _SAL1_1_Source_(_Pre_opt_bytecap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_impl(size)))


#define _Pre_cap_c_(size)                 _SAL1_1_Source_(_Pre_cap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_c_impl(size)))
#define _Pre_opt_cap_c_(size)             _SAL1_1_Source_(_Pre_opt_cap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_c_impl(size)))
#define _Pre_bytecap_c_(size)             _SAL1_1_Source_(_Pre_bytecap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_c_impl(size)))
#define _Pre_opt_bytecap_c_(size)         _SAL1_1_Source_(_Pre_opt_bytecap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_c_impl(size)))
#define _Pre_cap_c_one_                   _SAL1_1_Source_(_Pre_cap_c_one_, (), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_c_one_notref_impl))
#define _Pre_opt_cap_c_one_               _SAL1_1_Source_(_Pre_opt_cap_c_one_, (), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_c_one_notref_impl))


#define _Pre_cap_m_(mult,size)            _SAL1_1_Source_(_Pre_cap_m_, (mult,size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__mult_impl(mult,size)))
#define _Pre_opt_cap_m_(mult,size)        _SAL1_1_Source_(_Pre_opt_cap_m_, (mult,size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__mult_impl(mult,size)))



#define _Pre_cap_for_(param)              _SAL1_1_Source_(_Pre_cap_for_, (param), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_for_impl(param)))
#define _Pre_opt_cap_for_(param)          _SAL1_1_Source_(_Pre_opt_cap_for_, (param), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_for_impl(param)))


#define _Pre_cap_x_(size)                 _SAL1_1_Source_(_Pre_cap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_x_impl(size)))
#define _Pre_opt_cap_x_(size)             _SAL1_1_Source_(_Pre_opt_cap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_x_impl(size)))
#define _Pre_bytecap_x_(size)             _SAL1_1_Source_(_Pre_bytecap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_x_impl(size)))
#define _Pre_opt_bytecap_x_(size)         _SAL1_1_Source_(_Pre_opt_bytecap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_x_impl(size)))


#define _Pre_ptrdiff_cap_(ptr)            _SAL1_1_Source_(_Pre_ptrdiff_cap_, (ptr), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_x_impl(__ptrdiff(ptr))))
#define _Pre_opt_ptrdiff_cap_(ptr)        _SAL1_1_Source_(_Pre_opt_ptrdiff_cap_, (ptr), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_x_impl(__ptrdiff(ptr))))


#define _Pre_z_cap_(size)                 _SAL1_1_Source_(_Pre_z_cap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_impl(size))       _Pre_valid_impl_)
#define _Pre_opt_z_cap_(size)             _SAL1_1_Source_(_Pre_opt_z_cap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_impl(size))       _Pre_valid_impl_)
#define _Pre_z_bytecap_(size)             _SAL1_1_Source_(_Pre_z_bytecap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_impl(size))   _Pre_valid_impl_)
#define _Pre_opt_z_bytecap_(size)         _SAL1_1_Source_(_Pre_opt_z_bytecap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_impl(size))   _Pre_valid_impl_)

#define _Pre_z_cap_c_(size)               _SAL1_1_Source_(_Pre_z_cap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_c_impl(size))     _Pre_valid_impl_)
#define _Pre_opt_z_cap_c_(size)           _SAL1_1_Source_(_Pre_opt_z_cap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_c_impl(size))     _Pre_valid_impl_)
#define _Pre_z_bytecap_c_(size)           _SAL1_1_Source_(_Pre_z_bytecap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Pre_valid_impl_)
#define _Pre_opt_z_bytecap_c_(size)       _SAL1_1_Source_(_Pre_opt_z_bytecap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Pre_valid_impl_)

#define _Pre_z_cap_x_(size)               _SAL1_1_Source_(_Pre_z_cap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_x_impl(size))     _Pre_valid_impl_)
#define _Pre_opt_z_cap_x_(size)           _SAL1_1_Source_(_Pre_opt_z_cap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_x_impl(size))     _Pre_valid_impl_)
#define _Pre_z_bytecap_x_(size)           _SAL1_1_Source_(_Pre_z_bytecap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Pre_valid_impl_)
#define _Pre_opt_z_bytecap_x_(size)       _SAL1_1_Source_(_Pre_opt_z_bytecap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Pre_valid_impl_)


#define _Pre_valid_cap_(size)             _SAL1_1_Source_(_Pre_valid_cap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_impl(size))       _Pre_valid_impl_)
#define _Pre_opt_valid_cap_(size)         _SAL1_1_Source_(_Pre_opt_valid_cap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_impl(size))       _Pre_valid_impl_)
#define _Pre_valid_bytecap_(size)         _SAL1_1_Source_(_Pre_valid_bytecap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_impl(size))   _Pre_valid_impl_)
#define _Pre_opt_valid_bytecap_(size)     _SAL1_1_Source_(_Pre_opt_valid_bytecap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_impl(size))   _Pre_valid_impl_)

#define _Pre_valid_cap_c_(size)           _SAL1_1_Source_(_Pre_valid_cap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_c_impl(size))     _Pre_valid_impl_)
#define _Pre_opt_valid_cap_c_(size)       _SAL1_1_Source_(_Pre_opt_valid_cap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_c_impl(size))     _Pre_valid_impl_)
#define _Pre_valid_bytecap_c_(size)       _SAL1_1_Source_(_Pre_valid_bytecap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_c_impl(size)) _Pre_valid_impl_)
#define _Pre_opt_valid_bytecap_c_(size)   _SAL1_1_Source_(_Pre_opt_valid_bytecap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_c_impl(size)) _Pre_valid_impl_)

#define _Pre_valid_cap_x_(size)           _SAL1_1_Source_(_Pre_valid_cap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_x_impl(size))     _Pre_valid_impl_)
#define _Pre_opt_valid_cap_x_(size)       _SAL1_1_Source_(_Pre_opt_valid_cap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_x_impl(size))     _Pre_valid_impl_)
#define _Pre_valid_bytecap_x_(size)       _SAL1_1_Source_(_Pre_valid_bytecap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_x_impl(size)) _Pre_valid_impl_)
#define _Pre_opt_valid_bytecap_x_(size)   _SAL1_1_Source_(_Pre_opt_valid_bytecap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_x_impl(size)) _Pre_valid_impl_)



#define _Pre_count_(size)                 _SAL1_1_Source_(_Pre_count_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__count_impl(size))       _Pre_valid_impl_)
#define _Pre_opt_count_(size)             _SAL1_1_Source_(_Pre_opt_count_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__count_impl(size))       _Pre_valid_impl_)
#define _Pre_bytecount_(size)             _SAL1_1_Source_(_Pre_bytecount_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecount_impl(size))   _Pre_valid_impl_)
#define _Pre_opt_bytecount_(size)         _SAL1_1_Source_(_Pre_opt_bytecount_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecount_impl(size))   _Pre_valid_impl_)


#define _Pre_count_c_(size)               _SAL1_1_Source_(_Pre_count_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__count_c_impl(size))     _Pre_valid_impl_)
#define _Pre_opt_count_c_(size)           _SAL1_1_Source_(_Pre_opt_count_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__count_c_impl(size))     _Pre_valid_impl_)
#define _Pre_bytecount_c_(size)           _SAL1_1_Source_(_Pre_bytecount_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecount_c_impl(size)) _Pre_valid_impl_)
#define _Pre_opt_bytecount_c_(size)       _SAL1_1_Source_(_Pre_opt_bytecount_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecount_c_impl(size)) _Pre_valid_impl_)


#define _Pre_count_x_(size)               _SAL1_1_Source_(_Pre_count_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__count_x_impl(size))     _Pre_valid_impl_)
#define _Pre_opt_count_x_(size)           _SAL1_1_Source_(_Pre_opt_count_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__count_x_impl(size))     _Pre_valid_impl_)
#define _Pre_bytecount_x_(size)           _SAL1_1_Source_(_Pre_bytecount_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecount_x_impl(size)) _Pre_valid_impl_)
#define _Pre_opt_bytecount_x_(size)       _SAL1_1_Source_(_Pre_opt_bytecount_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecount_x_impl(size)) _Pre_valid_impl_)


#define _Pre_ptrdiff_count_(ptr)          _SAL1_1_Source_(_Pre_ptrdiff_count_, (ptr), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__count_x_impl(__ptrdiff(ptr))) _Pre_valid_impl_)
#define _Pre_opt_ptrdiff_count_(ptr)      _SAL1_1_Source_(_Pre_opt_ptrdiff_count_, (ptr), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__count_x_impl(__ptrdiff(ptr))) _Pre_valid_impl_)




#define _Post_maybez_                    _SAL_L_Source_(_Post_maybez_, (), _Post1_impl_(__maybezterm_impl))


#define _Post_cap_(size)                 _SAL1_1_Source_(_Post_cap_, (size), _Post1_impl_(__cap_impl(size)))
#define _Post_bytecap_(size)             _SAL1_1_Source_(_Post_bytecap_, (size), _Post1_impl_(__bytecap_impl(size)))


#define _Post_count_(size)               _SAL1_1_Source_(_Post_count_, (size), _Post1_impl_(__count_impl(size))       _Post_valid_impl_)
#define _Post_bytecount_(size)           _SAL1_1_Source_(_Post_bytecount_, (size), _Post1_impl_(__bytecount_impl(size))   _Post_valid_impl_)
#define _Post_count_c_(size)             _SAL1_1_Source_(_Post_count_c_, (size), _Post1_impl_(__count_c_impl(size))     _Post_valid_impl_)
#define _Post_bytecount_c_(size)         _SAL1_1_Source_(_Post_bytecount_c_, (size), _Post1_impl_(__bytecount_c_impl(size)) _Post_valid_impl_)
#define _Post_count_x_(size)             _SAL1_1_Source_(_Post_count_x_, (size), _Post1_impl_(__count_x_impl(size))     _Post_valid_impl_)
#define _Post_bytecount_x_(size)         _SAL1_1_Source_(_Post_bytecount_x_, (size), _Post1_impl_(__bytecount_x_impl(size)) _Post_valid_impl_)


#define _Post_z_count_(size)             _SAL1_1_Source_(_Post_z_count_, (size), _Post2_impl_(__zterm_impl,__count_impl(size))       _Post_valid_impl_)
#define _Post_z_bytecount_(size)         _SAL1_1_Source_(_Post_z_bytecount_, (size), _Post2_impl_(__zterm_impl,__bytecount_impl(size))   _Post_valid_impl_)
#define _Post_z_count_c_(size)           _SAL1_1_Source_(_Post_z_count_c_, (size), _Post2_impl_(__zterm_impl,__count_c_impl(size))     _Post_valid_impl_)
#define _Post_z_bytecount_c_(size)       _SAL1_1_Source_(_Post_z_bytecount_c_, (size), _Post2_impl_(__zterm_impl,__bytecount_c_impl(size)) _Post_valid_impl_)
#define _Post_z_count_x_(size)           _SAL1_1_Source_(_Post_z_count_x_, (size), _Post2_impl_(__zterm_impl,__count_x_impl(size))     _Post_valid_impl_)
#define _Post_z_bytecount_x_(size)       _SAL1_1_Source_(_Post_z_bytecount_x_, (size), _Post2_impl_(__zterm_impl,__bytecount_x_impl(size)) _Post_valid_impl_)






#define _Prepost_opt_z_                  _SAL1_1_Source_(_Prepost_opt_z_, (), _Pre_opt_z_  _Post_z_)

#define _Prepost_count_(size)            _SAL1_1_Source_(_Prepost_count_, (size), _Pre_count_(size)           _Post_count_(size))
#define _Prepost_opt_count_(size)        _SAL1_1_Source_(_Prepost_opt_count_, (size), _Pre_opt_count_(size)       _Post_count_(size))
#define _Prepost_bytecount_(size)        _SAL1_1_Source_(_Prepost_bytecount_, (size), _Pre_bytecount_(size)       _Post_bytecount_(size))
#define _Prepost_opt_bytecount_(size)    _SAL1_1_Source_(_Prepost_opt_bytecount_, (size), _Pre_opt_bytecount_(size)   _Post_bytecount_(size))
#define _Prepost_count_c_(size)          _SAL1_1_Source_(_Prepost_count_c_, (size), _Pre_count_c_(size)         _Post_count_c_(size))
#define _Prepost_opt_count_c_(size)      _SAL1_1_Source_(_Prepost_opt_count_c_, (size), _Pre_opt_count_c_(size)     _Post_count_c_(size))
#define _Prepost_bytecount_c_(size)      _SAL1_1_Source_(_Prepost_bytecount_c_, (size), _Pre_bytecount_c_(size)     _Post_bytecount_c_(size))
#define _Prepost_opt_bytecount_c_(size)  _SAL1_1_Source_(_Prepost_opt_bytecount_c_, (size), _Pre_opt_bytecount_c_(size) _Post_bytecount_c_(size))
#define _Prepost_count_x_(size)          _SAL1_1_Source_(_Prepost_count_x_, (size), _Pre_count_x_(size)         _Post_count_x_(size))
#define _Prepost_opt_count_x_(size)      _SAL1_1_Source_(_Prepost_opt_count_x_, (size), _Pre_opt_count_x_(size)     _Post_count_x_(size))
#define _Prepost_bytecount_x_(size)      _SAL1_1_Source_(_Prepost_bytecount_x_, (size), _Pre_bytecount_x_(size)     _Post_bytecount_x_(size))
#define _Prepost_opt_bytecount_x_(size)  _SAL1_1_Source_(_Prepost_opt_bytecount_x_, (size), _Pre_opt_bytecount_x_(size) _Post_bytecount_x_(size))

#define _Prepost_valid_                   _SAL1_1_Source_(_Prepost_valid_, (), _Pre_valid_     _Post_valid_)
#define _Prepost_opt_valid_               _SAL1_1_Source_(_Prepost_opt_valid_, (), _Pre_opt_valid_ _Post_valid_)







#define _Deref_prepost_z_                         _SAL1_1_Source_(_Deref_prepost_z_, (), _Deref_pre_z_      _Deref_post_z_)
#define _Deref_prepost_opt_z_                     _SAL1_1_Source_(_Deref_prepost_opt_z_, (), _Deref_pre_opt_z_  _Deref_post_opt_z_)

#define _Deref_prepost_cap_(size)                 _SAL1_1_Source_(_Deref_prepost_cap_, (size), _Deref_pre_cap_(size)                _Deref_post_cap_(size))
#define _Deref_prepost_opt_cap_(size)             _SAL1_1_Source_(_Deref_prepost_opt_cap_, (size), _Deref_pre_opt_cap_(size)            _Deref_post_opt_cap_(size))
#define _Deref_prepost_bytecap_(size)             _SAL1_1_Source_(_Deref_prepost_bytecap_, (size), _Deref_pre_bytecap_(size)            _Deref_post_bytecap_(size))
#define _Deref_prepost_opt_bytecap_(size)         _SAL1_1_Source_(_Deref_prepost_opt_bytecap_, (size), _Deref_pre_opt_bytecap_(size)        _Deref_post_opt_bytecap_(size))

#define _Deref_prepost_cap_x_(size)               _SAL1_1_Source_(_Deref_prepost_cap_x_, (size), _Deref_pre_cap_x_(size)              _Deref_post_cap_x_(size))
#define _Deref_prepost_opt_cap_x_(size)           _SAL1_1_Source_(_Deref_prepost_opt_cap_x_, (size), _Deref_pre_opt_cap_x_(size)          _Deref_post_opt_cap_x_(size))
#define _Deref_prepost_bytecap_x_(size)           _SAL1_1_Source_(_Deref_prepost_bytecap_x_, (size), _Deref_pre_bytecap_x_(size)          _Deref_post_bytecap_x_(size))
#define _Deref_prepost_opt_bytecap_x_(size)       _SAL1_1_Source_(_Deref_prepost_opt_bytecap_x_, (size), _Deref_pre_opt_bytecap_x_(size)      _Deref_post_opt_bytecap_x_(size))

#define _Deref_prepost_z_cap_(size)               _SAL1_1_Source_(_Deref_prepost_z_cap_, (size), _Deref_pre_z_cap_(size)              _Deref_post_z_cap_(size))
#define _Deref_prepost_opt_z_cap_(size)           _SAL1_1_Source_(_Deref_prepost_opt_z_cap_, (size), _Deref_pre_opt_z_cap_(size)          _Deref_post_opt_z_cap_(size))
#define _Deref_prepost_z_bytecap_(size)           _SAL1_1_Source_(_Deref_prepost_z_bytecap_, (size), _Deref_pre_z_bytecap_(size)          _Deref_post_z_bytecap_(size))
#define _Deref_prepost_opt_z_bytecap_(size)       _SAL1_1_Source_(_Deref_prepost_opt_z_bytecap_, (size), _Deref_pre_opt_z_bytecap_(size)      _Deref_post_opt_z_bytecap_(size))

#define _Deref_prepost_valid_cap_(size)           _SAL1_1_Source_(_Deref_prepost_valid_cap_, (size), _Deref_pre_valid_cap_(size)          _Deref_post_valid_cap_(size))
#define _Deref_prepost_opt_valid_cap_(size)       _SAL1_1_Source_(_Deref_prepost_opt_valid_cap_, (size), _Deref_pre_opt_valid_cap_(size)      _Deref_post_opt_valid_cap_(size))
#define _Deref_prepost_valid_bytecap_(size)       _SAL1_1_Source_(_Deref_prepost_valid_bytecap_, (size), _Deref_pre_valid_bytecap_(size)      _Deref_post_valid_bytecap_(size))
#define _Deref_prepost_opt_valid_bytecap_(size)   _SAL1_1_Source_(_Deref_prepost_opt_valid_bytecap_, (size), _Deref_pre_opt_valid_bytecap_(size)  _Deref_post_opt_valid_bytecap_(size))

#define _Deref_prepost_valid_cap_x_(size)           _SAL1_1_Source_(_Deref_prepost_valid_cap_x_, (size), _Deref_pre_valid_cap_x_(size)          _Deref_post_valid_cap_x_(size))
#define _Deref_prepost_opt_valid_cap_x_(size)       _SAL1_1_Source_(_Deref_prepost_opt_valid_cap_x_, (size), _Deref_pre_opt_valid_cap_x_(size)      _Deref_post_opt_valid_cap_x_(size))
#define _Deref_prepost_valid_bytecap_x_(size)       _SAL1_1_Source_(_Deref_prepost_valid_bytecap_x_, (size), _Deref_pre_valid_bytecap_x_(size)      _Deref_post_valid_bytecap_x_(size))
#define _Deref_prepost_opt_valid_bytecap_x_(size)   _SAL1_1_Source_(_Deref_prepost_opt_valid_bytecap_x_, (size), _Deref_pre_opt_valid_bytecap_x_(size)  _Deref_post_opt_valid_bytecap_x_(size))

#define _Deref_prepost_count_(size)             _SAL1_1_Source_(_Deref_prepost_count_, (size), _Deref_pre_count_(size)            _Deref_post_count_(size))
#define _Deref_prepost_opt_count_(size)         _SAL1_1_Source_(_Deref_prepost_opt_count_, (size), _Deref_pre_opt_count_(size)        _Deref_post_opt_count_(size))
#define _Deref_prepost_bytecount_(size)         _SAL1_1_Source_(_Deref_prepost_bytecount_, (size), _Deref_pre_bytecount_(size)        _Deref_post_bytecount_(size))
#define _Deref_prepost_opt_bytecount_(size)     _SAL1_1_Source_(_Deref_prepost_opt_bytecount_, (size), _Deref_pre_opt_bytecount_(size)    _Deref_post_opt_bytecount_(size))

#define _Deref_prepost_count_x_(size)           _SAL1_1_Source_(_Deref_prepost_count_x_, (size), _Deref_pre_count_x_(size)          _Deref_post_count_x_(size))
#define _Deref_prepost_opt_count_x_(size)       _SAL1_1_Source_(_Deref_prepost_opt_count_x_, (size), _Deref_pre_opt_count_x_(size)      _Deref_post_opt_count_x_(size))
#define _Deref_prepost_bytecount_x_(size)       _SAL1_1_Source_(_Deref_prepost_bytecount_x_, (size), _Deref_pre_bytecount_x_(size)      _Deref_post_bytecount_x_(size))
#define _Deref_prepost_opt_bytecount_x_(size)   _SAL1_1_Source_(_Deref_prepost_opt_bytecount_x_, (size), _Deref_pre_opt_bytecount_x_(size)  _Deref_post_opt_bytecount_x_(size))

#define _Deref_prepost_valid_                    _SAL1_1_Source_(_Deref_prepost_valid_, (), _Deref_pre_valid_     _Deref_post_valid_)
#define _Deref_prepost_opt_valid_                _SAL1_1_Source_(_Deref_prepost_opt_valid_, (), _Deref_pre_opt_valid_ _Deref_post_opt_valid_)






#define _Deref_out_z_cap_c_(size)  _SAL1_1_Source_(_Deref_out_z_cap_c_, (size), _Deref_pre_cap_c_(size) _Deref_post_z_)
#define _Deref_inout_z_cap_c_(size)  _SAL1_1_Source_(_Deref_inout_z_cap_c_, (size), _Deref_pre_z_cap_c_(size) _Deref_post_z_)
#define _Deref_out_z_bytecap_c_(size)  _SAL1_1_Source_(_Deref_out_z_bytecap_c_, (size), _Deref_pre_bytecap_c_(size) _Deref_post_z_)
#define _Deref_inout_z_bytecap_c_(size)  _SAL1_1_Source_(_Deref_inout_z_bytecap_c_, (size), _Deref_pre_z_bytecap_c_(size) _Deref_post_z_)
#define _Deref_inout_z_  _SAL1_1_Source_(_Deref_inout_z_, (), _Deref_prepost_z_)

#pragma endregion Input Buffer SAL 1 compatibility macros

















































































#line 1555 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"






























#line 1586 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"
























#line 1611 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"



#define _SA_annotes0(n)
#define _SA_annotes1(n,pp1)
#define _SA_annotes2(n,pp1,pp2)
#define _SA_annotes3(n,pp1,pp2,pp3)

#define __ANNOTATION(fun)
#define __PRIMOP(type, fun)
#define __QUALIFIER(type, fun)

#line 1624 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"






































#line 1663 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"















































































































#line 1775 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"






































































































#line 1878 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"








































































































































































#line 2047 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"


#define _SAL_nop_impl_ X

#define _At_impl_(target, annos)
#define _When_impl_(expr, annos)
#define _Group_impl_(annos)
#define _GrouP_impl_(annos)
#define _At_buffer_impl_(target, iter, bound, annos)
#define _Use_decl_anno_impl_

#define _Points_to_data_impl_

#define _Literal_impl_

#define _Notliteral_impl_

#define _Notref_impl_


#define _Pre_valid_impl_

#define _Post_valid_impl_

#define _Ret_valid_impl_


#define _Check_return_impl_

#define _Must_inspect_impl_


#define _Success_impl_(expr)
#define _On_failure_impl_(annos)
#define _Always_impl_(annos)

#define _Printf_format_string_impl_

#define _Scanf_format_string_impl_

#define _Scanf_s_format_string_impl_


#define _In_bound_impl_

#define _Out_bound_impl_

#define _Ret_bound_impl_

#define _Deref_in_bound_impl_

#define _Deref_out_bound_impl_

#define _Deref_ret_bound_impl_


#define _Range_impl_(min,max)
#define _In_range_impl_(min,max)
#define _Out_range_impl_(min,max)
#define _Ret_range_impl_(min,max)
#define _Deref_in_range_impl_(min,max)
#define _Deref_out_range_impl_(min,max)
#define _Deref_ret_range_impl_(min,max)

#define _Satisfies_impl_(expr)
#define _Pre_satisfies_impl_(expr)
#define _Post_satisfies_impl_(expr)

#define _Null_impl_

#define _Notnull_impl_

#define _Maybenull_impl_


#define _Valid_impl_

#define _Notvalid_impl_

#define _Maybevalid_impl_


#define _Field_range_impl_(min,max)

#define _Pre_impl_

#define _Pre1_impl_(p1)
#define _Pre2_impl_(p1,p2)
#define _Pre3_impl_(p1,p2,p3)

#define _Post_impl_

#define _Post1_impl_(p1)
#define _Post2_impl_(p1,p2)
#define _Post3_impl_(p1,p2,p3)

#define _Ret1_impl_(p1)
#define _Ret2_impl_(p1,p2)
#define _Ret3_impl_(p1,p2,p3)

#define _Deref_pre1_impl_(p1)
#define _Deref_pre2_impl_(p1,p2)
#define _Deref_pre3_impl_(p1,p2,p3)

#define _Deref_post1_impl_(p1)
#define _Deref_post2_impl_(p1,p2)
#define _Deref_post3_impl_(p1,p2,p3)

#define _Deref_ret1_impl_(p1)
#define _Deref_ret2_impl_(p1,p2)
#define _Deref_ret3_impl_(p1,p2,p3)

#define _Deref2_pre1_impl_(p1)
#define _Deref2_post1_impl_(p1)
#define _Deref2_ret1_impl_(p1)

#define _Readable_bytes_impl_(size)
#define _Readable_elements_impl_(size)
#define _Writable_bytes_impl_(size)
#define _Writable_elements_impl_(size)

#define _Null_terminated_impl_

#define _NullNull_terminated_impl_



#define __inner_typefix(ctype)
#define __inner_exceptthat


#line 2149 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"














































































































































































































#define __specstrings









#define __nothrow

#line 2366 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"
#line 2367 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"



































































































































































































































#line 2595 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"
    #define __null

    #define __notnull

    #define __maybenull

    #define __readonly

    #define __notreadonly

    #define __maybereadonly

    #define __valid

    #define __notvalid

    #define __maybevalid

    #define __readableTo(extent)
    #define __elem_readableTo(size)
    #define __byte_readableTo(size)
    #define __writableTo(size)
    #define __elem_writableTo(size)
    #define __byte_writableTo(size)
    #define __deref

    #define __pre

    #define __post

    #define __precond(expr)
    #define __postcond(expr)
    #define __exceptthat

    #define __inner_override

    #define __inner_callback

    #define __inner_blocksOn(resource)
    #define __inner_fallthrough_dec

    #define __inner_fallthrough

    #define __refparam

    #define __inner_control_entrypoint(category)
    #define __inner_data_entrypoint(category)

    #define __post_except_maybenull

    #define __pre_except_maybenull

    #define __post_deref_except_maybenull

    #define __pre_deref_except_maybenull


    #define __inexpressible_readableTo(size)
    #define __inexpressible_writableTo(size)

#line 2634 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"











#define __ecount(size)                                           _SAL1_Source_(__ecount, (size), __notnull __elem_writableTo(size))
#define __bcount(size)                                           _SAL1_Source_(__bcount, (size), __notnull __byte_writableTo(size))
#define __in                                                     _SAL1_Source_(__in, (), _In_)
#define __in_ecount(size)                                        _SAL1_Source_(__in_ecount, (size), _In_reads_(size))
#define __in_bcount(size)                                        _SAL1_Source_(__in_bcount, (size), _In_reads_bytes_(size))
#define __in_z                                                   _SAL1_Source_(__in_z, (), _In_z_)
#define __in_ecount_z(size)                                      _SAL1_Source_(__in_ecount_z, (size), _In_reads_z_(size))
#define __in_bcount_z(size)                                      _SAL1_Source_(__in_bcount_z, (size), __in_bcount(size) __pre __nullterminated)
#define __in_nz                                                  _SAL1_Source_(__in_nz, (), __in)
#define __in_ecount_nz(size)                                     _SAL1_Source_(__in_ecount_nz, (size), __in_ecount(size))
#define __in_bcount_nz(size)                                     _SAL1_Source_(__in_bcount_nz, (size), __in_bcount(size))
#define __out                                                    _SAL1_Source_(__out, (), _Out_)
#define __out_ecount(size)                                       _SAL1_Source_(__out_ecount, (size), _Out_writes_(size))
#define __out_bcount(size)                                       _SAL1_Source_(__out_bcount, (size), _Out_writes_bytes_(size))
#define __out_ecount_part(size,length)                           _SAL1_Source_(__out_ecount_part, (size,length), _Out_writes_to_(size,length))
#define __out_bcount_part(size,length)                           _SAL1_Source_(__out_bcount_part, (size,length), _Out_writes_bytes_to_(size,length))
#define __out_ecount_full(size)                                  _SAL1_Source_(__out_ecount_full, (size), _Out_writes_all_(size))
#define __out_bcount_full(size)                                  _SAL1_Source_(__out_bcount_full, (size), _Out_writes_bytes_all_(size))
#define __out_z                                                  _SAL1_Source_(__out_z, (), __post __valid __refparam __post __nullterminated)
#define __out_z_opt                                              _SAL1_Source_(__out_z_opt, (), __post __valid __refparam __post __nullterminated __pre_except_maybenull)
#define __out_ecount_z(size)                                     _SAL1_Source_(__out_ecount_z, (size), __ecount(size) __post __valid __refparam __post __nullterminated)
#define __out_bcount_z(size)                                     _SAL1_Source_(__out_bcount_z, (size), __bcount(size) __post __valid __refparam __post __nullterminated)
#define __out_ecount_part_z(size,length)                         _SAL1_Source_(__out_ecount_part_z, (size,length), __out_ecount_part(size,length) __post __nullterminated)
#define __out_bcount_part_z(size,length)                         _SAL1_Source_(__out_bcount_part_z, (size,length), __out_bcount_part(size,length) __post __nullterminated)
#define __out_ecount_full_z(size)                                _SAL1_Source_(__out_ecount_full_z, (size), __out_ecount_full(size) __post __nullterminated)
#define __out_bcount_full_z(size)                                _SAL1_Source_(__out_bcount_full_z, (size), __out_bcount_full(size) __post __nullterminated)
#define __out_nz                                                 _SAL1_Source_(__out_nz, (), __post __valid __refparam)
#define __out_nz_opt                                             _SAL1_Source_(__out_nz_opt, (), __post __valid __refparam __post_except_maybenull_)
#define __out_ecount_nz(size)                                    _SAL1_Source_(__out_ecount_nz, (size), __ecount(size) __post __valid __refparam)
#define __out_bcount_nz(size)                                    _SAL1_Source_(__out_bcount_nz, (size), __bcount(size) __post __valid __refparam)
#define __inout                                                  _SAL1_Source_(__inout, (), _Inout_)
#define __inout_ecount(size)                                     _SAL1_Source_(__inout_ecount, (size), _Inout_updates_(size))
#define __inout_bcount(size)                                     _SAL1_Source_(__inout_bcount, (size), _Inout_updates_bytes_(size))
#define __inout_ecount_part(size,length)                         _SAL1_Source_(__inout_ecount_part, (size,length), _Inout_updates_to_(size,length))
#define __inout_bcount_part(size,length)                         _SAL1_Source_(__inout_bcount_part, (size,length), _Inout_updates_bytes_to_(size,length))
#define __inout_ecount_full(size)                                _SAL1_Source_(__inout_ecount_full, (size), _Inout_updates_all_(size))
#define __inout_bcount_full(size)                                _SAL1_Source_(__inout_bcount_full, (size), _Inout_updates_bytes_all_(size))
#define __inout_z                                                _SAL1_Source_(__inout_z, (), _Inout_z_)
#define __inout_ecount_z(size)                                   _SAL1_Source_(__inout_ecount_z, (size), _Inout_updates_z_(size))
#define __inout_bcount_z(size)                                   _SAL1_Source_(__inout_bcount_z, (size), __inout_bcount(size) __pre __nullterminated __post __nullterminated)
#define __inout_nz                                               _SAL1_Source_(__inout_nz, (), __inout)
#define __inout_ecount_nz(size)                                  _SAL1_Source_(__inout_ecount_nz, (size), __inout_ecount(size))
#define __inout_bcount_nz(size)                                  _SAL1_Source_(__inout_bcount_nz, (size), __inout_bcount(size))
#define __ecount_opt(size)                                       _SAL1_Source_(__ecount_opt, (size), __ecount(size)                              __pre_except_maybenull)
#define __bcount_opt(size)                                       _SAL1_Source_(__bcount_opt, (size), __bcount(size)                              __pre_except_maybenull)
#define __in_opt                                                 _SAL1_Source_(__in_opt, (), _In_opt_)
#define __in_ecount_opt(size)                                    _SAL1_Source_(__in_ecount_opt, (size), _In_reads_opt_(size))
#define __in_bcount_opt(size)                                    _SAL1_Source_(__in_bcount_opt, (size), _In_reads_bytes_opt_(size))
#define __in_z_opt                                               _SAL1_Source_(__in_z_opt, (), _In_opt_z_)
#define __in_ecount_z_opt(size)                                  _SAL1_Source_(__in_ecount_z_opt, (size), __in_ecount_opt(size) __pre __nullterminated)
#define __in_bcount_z_opt(size)                                  _SAL1_Source_(__in_bcount_z_opt, (size), __in_bcount_opt(size) __pre __nullterminated)
#define __in_nz_opt                                              _SAL1_Source_(__in_nz_opt, (), __in_opt)
#define __in_ecount_nz_opt(size)                                 _SAL1_Source_(__in_ecount_nz_opt, (size), __in_ecount_opt(size))
#define __in_bcount_nz_opt(size)                                 _SAL1_Source_(__in_bcount_nz_opt, (size), __in_bcount_opt(size))
#define __out_opt                                                _SAL1_Source_(__out_opt, (), _Out_opt_)
#define __out_ecount_opt(size)                                   _SAL1_Source_(__out_ecount_opt, (size), _Out_writes_opt_(size))
#define __out_bcount_opt(size)                                   _SAL1_Source_(__out_bcount_opt, (size), _Out_writes_bytes_opt_(size))
#define __out_ecount_part_opt(size,length)                       _SAL1_Source_(__out_ecount_part_opt, (size,length), __out_ecount_part(size,length)              __pre_except_maybenull)
#define __out_bcount_part_opt(size,length)                       _SAL1_Source_(__out_bcount_part_opt, (size,length), __out_bcount_part(size,length)              __pre_except_maybenull)
#define __out_ecount_full_opt(size)                              _SAL1_Source_(__out_ecount_full_opt, (size), __out_ecount_full(size)                     __pre_except_maybenull)
#define __out_bcount_full_opt(size)                              _SAL1_Source_(__out_bcount_full_opt, (size), __out_bcount_full(size)                     __pre_except_maybenull)
#define __out_ecount_z_opt(size)                                 _SAL1_Source_(__out_ecount_z_opt, (size), __out_ecount_opt(size) __post __nullterminated)
#define __out_bcount_z_opt(size)                                 _SAL1_Source_(__out_bcount_z_opt, (size), __out_bcount_opt(size) __post __nullterminated)
#define __out_ecount_part_z_opt(size,length)                     _SAL1_Source_(__out_ecount_part_z_opt, (size,length), __out_ecount_part_opt(size,length) __post __nullterminated)
#define __out_bcount_part_z_opt(size,length)                     _SAL1_Source_(__out_bcount_part_z_opt, (size,length), __out_bcount_part_opt(size,length) __post __nullterminated)
#define __out_ecount_full_z_opt(size)                            _SAL1_Source_(__out_ecount_full_z_opt, (size), __out_ecount_full_opt(size) __post __nullterminated)
#define __out_bcount_full_z_opt(size)                            _SAL1_Source_(__out_bcount_full_z_opt, (size), __out_bcount_full_opt(size) __post __nullterminated)
#define __out_ecount_nz_opt(size)                                _SAL1_Source_(__out_ecount_nz_opt, (size), __out_ecount_opt(size) __post __nullterminated)
#define __out_bcount_nz_opt(size)                                _SAL1_Source_(__out_bcount_nz_opt, (size), __out_bcount_opt(size) __post __nullterminated)
#define __inout_opt                                              _SAL1_Source_(__inout_opt, (), _Inout_opt_)
#define __inout_ecount_opt(size)                                 _SAL1_Source_(__inout_ecount_opt, (size), __inout_ecount(size)                        __pre_except_maybenull)
#define __inout_bcount_opt(size)                                 _SAL1_Source_(__inout_bcount_opt, (size), __inout_bcount(size)                        __pre_except_maybenull)
#define __inout_ecount_part_opt(size,length)                     _SAL1_Source_(__inout_ecount_part_opt, (size,length), __inout_ecount_part(size,length)            __pre_except_maybenull)
#define __inout_bcount_part_opt(size,length)                     _SAL1_Source_(__inout_bcount_part_opt, (size,length), __inout_bcount_part(size,length)            __pre_except_maybenull)
#define __inout_ecount_full_opt(size)                            _SAL1_Source_(__inout_ecount_full_opt, (size), __inout_ecount_full(size)                   __pre_except_maybenull)
#define __inout_bcount_full_opt(size)                            _SAL1_Source_(__inout_bcount_full_opt, (size), __inout_bcount_full(size)                   __pre_except_maybenull)
#define __inout_z_opt                                            _SAL1_Source_(__inout_z_opt, (), __inout_opt __pre __nullterminated __post __nullterminated)
#define __inout_ecount_z_opt(size)                               _SAL1_Source_(__inout_ecount_z_opt, (size), __inout_ecount_opt(size) __pre __nullterminated __post __nullterminated)
#define __inout_ecount_z_opt(size)                               _SAL1_Source_(__inout_ecount_z_opt, (size), __inout_ecount_opt(size) __pre __nullterminated __post __nullterminated)
#define __inout_bcount_z_opt(size)                               _SAL1_Source_(__inout_bcount_z_opt, (size), __inout_bcount_opt(size))
#define __inout_nz_opt                                           _SAL1_Source_(__inout_nz_opt, (), __inout_opt)
#define __inout_ecount_nz_opt(size)                              _SAL1_Source_(__inout_ecount_nz_opt, (size), __inout_ecount_opt(size))
#define __inout_bcount_nz_opt(size)                              _SAL1_Source_(__inout_bcount_nz_opt, (size), __inout_bcount_opt(size))
#define __deref_ecount(size)                                     _SAL1_Source_(__deref_ecount, (size), _Notref_ __ecount(1) __post _Notref_ __elem_readableTo(1) __post _Notref_ __deref _Notref_ __notnull __post __deref __elem_writableTo(size))
#define __deref_bcount(size)                                     _SAL1_Source_(__deref_bcount, (size), _Notref_ __ecount(1) __post _Notref_ __elem_readableTo(1) __post _Notref_ __deref _Notref_ __notnull __post __deref __byte_writableTo(size))
#define __deref_out                                              _SAL1_Source_(__deref_out, (), _Outptr_)
#define __deref_out_ecount(size)                                 _SAL1_Source_(__deref_out_ecount, (size), _Outptr_result_buffer_(size))
#define __deref_out_bcount(size)                                 _SAL1_Source_(__deref_out_bcount, (size), _Outptr_result_bytebuffer_(size))
#define __deref_out_ecount_part(size,length)                     _SAL1_Source_(__deref_out_ecount_part, (size,length), _Outptr_result_buffer_to_(size,length))
#define __deref_out_bcount_part(size,length)                     _SAL1_Source_(__deref_out_bcount_part, (size,length), _Outptr_result_bytebuffer_to_(size,length))
#define __deref_out_ecount_full(size)                            _SAL1_Source_(__deref_out_ecount_full, (size), __deref_out_ecount_part(size,size))
#define __deref_out_bcount_full(size)                            _SAL1_Source_(__deref_out_bcount_full, (size), __deref_out_bcount_part(size,size))
#define __deref_out_z                                            _SAL1_Source_(__deref_out_z, (), _Outptr_result_z_)
#define __deref_out_ecount_z(size)                               _SAL1_Source_(__deref_out_ecount_z, (size), __deref_out_ecount(size) __post __deref __nullterminated)
#define __deref_out_bcount_z(size)                               _SAL1_Source_(__deref_out_bcount_z, (size), __deref_out_bcount(size) __post __deref __nullterminated)
#define __deref_out_nz                                           _SAL1_Source_(__deref_out_nz, (), __deref_out)
#define __deref_out_ecount_nz(size)                              _SAL1_Source_(__deref_out_ecount_nz, (size), __deref_out_ecount(size))
#define __deref_out_bcount_nz(size)                              _SAL1_Source_(__deref_out_bcount_nz, (size), __deref_out_ecount(size))
#define __deref_inout                                            _SAL1_Source_(__deref_inout, (), _Notref_ __notnull _Notref_ __elem_readableTo(1) __pre __deref __valid __post _Notref_ __deref __valid __refparam)
#define __deref_inout_z                                          _SAL1_Source_(__deref_inout_z, (), __deref_inout __pre __deref __nullterminated __post _Notref_ __deref __nullterminated)
#define __deref_inout_ecount(size)                               _SAL1_Source_(__deref_inout_ecount, (size), __deref_inout __pre __deref __elem_writableTo(size) __post _Notref_ __deref __elem_writableTo(size))
#define __deref_inout_bcount(size)                               _SAL1_Source_(__deref_inout_bcount, (size), __deref_inout __pre __deref __byte_writableTo(size) __post _Notref_ __deref __byte_writableTo(size))
#define __deref_inout_ecount_part(size,length)                   _SAL1_Source_(__deref_inout_ecount_part, (size,length), __deref_inout_ecount(size) __pre __deref __elem_readableTo(length) __post __deref __elem_readableTo(length))
#define __deref_inout_bcount_part(size,length)                   _SAL1_Source_(__deref_inout_bcount_part, (size,length), __deref_inout_bcount(size) __pre __deref __byte_readableTo(length) __post __deref __byte_readableTo(length))
#define __deref_inout_ecount_full(size)                          _SAL1_Source_(__deref_inout_ecount_full, (size), __deref_inout_ecount_part(size,size))
#define __deref_inout_bcount_full(size)                          _SAL1_Source_(__deref_inout_bcount_full, (size), __deref_inout_bcount_part(size,size))
#define __deref_inout_ecount_z(size)                             _SAL1_Source_(__deref_inout_ecount_z, (size), __deref_inout_ecount(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define __deref_inout_bcount_z(size)                             _SAL1_Source_(__deref_inout_bcount_z, (size), __deref_inout_bcount(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define __deref_inout_nz                                         _SAL1_Source_(__deref_inout_nz, (), __deref_inout)
#define __deref_inout_ecount_nz(size)                            _SAL1_Source_(__deref_inout_ecount_nz, (size), __deref_inout_ecount(size))
#define __deref_inout_bcount_nz(size)                            _SAL1_Source_(__deref_inout_bcount_nz, (size), __deref_inout_ecount(size))
#define __deref_ecount_opt(size)                                 _SAL1_Source_(__deref_ecount_opt, (size), __deref_ecount(size)                        __post_deref_except_maybenull)
#define __deref_bcount_opt(size)                                 _SAL1_Source_(__deref_bcount_opt, (size), __deref_bcount(size)                        __post_deref_except_maybenull)
#define __deref_out_opt                                          _SAL1_Source_(__deref_out_opt, (), __deref_out                                 __post_deref_except_maybenull)
#define __deref_out_ecount_opt(size)                             _SAL1_Source_(__deref_out_ecount_opt, (size), __deref_out_ecount(size)                    __post_deref_except_maybenull)
#define __deref_out_bcount_opt(size)                             _SAL1_Source_(__deref_out_bcount_opt, (size), __deref_out_bcount(size)                    __post_deref_except_maybenull)
#define __deref_out_ecount_part_opt(size,length)                 _SAL1_Source_(__deref_out_ecount_part_opt, (size,length), __deref_out_ecount_part(size,length)        __post_deref_except_maybenull)
#define __deref_out_bcount_part_opt(size,length)                 _SAL1_Source_(__deref_out_bcount_part_opt, (size,length), __deref_out_bcount_part(size,length)        __post_deref_except_maybenull)
#define __deref_out_ecount_full_opt(size)                        _SAL1_Source_(__deref_out_ecount_full_opt, (size), __deref_out_ecount_full(size)               __post_deref_except_maybenull)
#define __deref_out_bcount_full_opt(size)                        _SAL1_Source_(__deref_out_bcount_full_opt, (size), __deref_out_bcount_full(size)               __post_deref_except_maybenull)
#define __deref_out_z_opt                                        _SAL1_Source_(__deref_out_z_opt, (), _Outptr_result_maybenull_z_)
#define __deref_out_ecount_z_opt(size)                           _SAL1_Source_(__deref_out_ecount_z_opt, (size), __deref_out_ecount_opt(size) __post __deref __nullterminated)
#define __deref_out_bcount_z_opt(size)                           _SAL1_Source_(__deref_out_bcount_z_opt, (size), __deref_out_bcount_opt(size) __post __deref __nullterminated)
#define __deref_out_nz_opt                                       _SAL1_Source_(__deref_out_nz_opt, (), __deref_out_opt)
#define __deref_out_ecount_nz_opt(size)                          _SAL1_Source_(__deref_out_ecount_nz_opt, (size), __deref_out_ecount_opt(size))
#define __deref_out_bcount_nz_opt(size)                          _SAL1_Source_(__deref_out_bcount_nz_opt, (size), __deref_out_bcount_opt(size))
#define __deref_inout_opt                                        _SAL1_Source_(__deref_inout_opt, (), __deref_inout                               __pre_deref_except_maybenull __post_deref_except_maybenull)
#define __deref_inout_ecount_opt(size)                           _SAL1_Source_(__deref_inout_ecount_opt, (size), __deref_inout_ecount(size)                  __pre_deref_except_maybenull __post_deref_except_maybenull)
#define __deref_inout_bcount_opt(size)                           _SAL1_Source_(__deref_inout_bcount_opt, (size), __deref_inout_bcount(size)                  __pre_deref_except_maybenull __post_deref_except_maybenull)
#define __deref_inout_ecount_part_opt(size,length)               _SAL1_Source_(__deref_inout_ecount_part_opt, (size,length), __deref_inout_ecount_part(size,length)      __pre_deref_except_maybenull __post_deref_except_maybenull)
#define __deref_inout_bcount_part_opt(size,length)               _SAL1_Source_(__deref_inout_bcount_part_opt, (size,length), __deref_inout_bcount_part(size,length)      __pre_deref_except_maybenull __post_deref_except_maybenull)
#define __deref_inout_ecount_full_opt(size)                      _SAL1_Source_(__deref_inout_ecount_full_opt, (size), __deref_inout_ecount_full(size)             __pre_deref_except_maybenull __post_deref_except_maybenull)
#define __deref_inout_bcount_full_opt(size)                      _SAL1_Source_(__deref_inout_bcount_full_opt, (size), __deref_inout_bcount_full(size)             __pre_deref_except_maybenull __post_deref_except_maybenull)
#define __deref_inout_z_opt                                      _SAL1_Source_(__deref_inout_z_opt, (), __deref_inout_opt __pre __deref __nullterminated __post __deref __nullterminated)
#define __deref_inout_ecount_z_opt(size)                         _SAL1_Source_(__deref_inout_ecount_z_opt, (size), __deref_inout_ecount_opt(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define __deref_inout_bcount_z_opt(size)                         _SAL1_Source_(__deref_inout_bcount_z_opt, (size), __deref_inout_bcount_opt(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define __deref_inout_nz_opt                                     _SAL1_Source_(__deref_inout_nz_opt, (), __deref_inout_opt)
#define __deref_inout_ecount_nz_opt(size)                        _SAL1_Source_(__deref_inout_ecount_nz_opt, (size), __deref_inout_ecount_opt(size))
#define __deref_inout_bcount_nz_opt(size)                        _SAL1_Source_(__deref_inout_bcount_nz_opt, (size), __deref_inout_bcount_opt(size))
#define __deref_opt_ecount(size)                                 _SAL1_Source_(__deref_opt_ecount, (size), __deref_ecount(size)                        __pre_except_maybenull)
#define __deref_opt_bcount(size)                                 _SAL1_Source_(__deref_opt_bcount, (size), __deref_bcount(size)                        __pre_except_maybenull)
#define __deref_opt_out                                          _SAL1_Source_(__deref_opt_out, (), _Outptr_opt_)
#define __deref_opt_out_z                                        _SAL1_Source_(__deref_opt_out_z, (), _Outptr_opt_result_z_)
#define __deref_opt_out_ecount(size)                             _SAL1_Source_(__deref_opt_out_ecount, (size), __deref_out_ecount(size)                    __pre_except_maybenull)
#define __deref_opt_out_bcount(size)                             _SAL1_Source_(__deref_opt_out_bcount, (size), __deref_out_bcount(size)                    __pre_except_maybenull)
#define __deref_opt_out_ecount_part(size,length)                 _SAL1_Source_(__deref_opt_out_ecount_part, (size,length), __deref_out_ecount_part(size,length)        __pre_except_maybenull)
#define __deref_opt_out_bcount_part(size,length)                 _SAL1_Source_(__deref_opt_out_bcount_part, (size,length), __deref_out_bcount_part(size,length)        __pre_except_maybenull)
#define __deref_opt_out_ecount_full(size)                        _SAL1_Source_(__deref_opt_out_ecount_full, (size), __deref_out_ecount_full(size)               __pre_except_maybenull)
#define __deref_opt_out_bcount_full(size)                        _SAL1_Source_(__deref_opt_out_bcount_full, (size), __deref_out_bcount_full(size)               __pre_except_maybenull)
#define __deref_opt_inout                                        _SAL1_Source_(__deref_opt_inout, (), _Inout_opt_)
#define __deref_opt_inout_ecount(size)                           _SAL1_Source_(__deref_opt_inout_ecount, (size), __deref_inout_ecount(size)                  __pre_except_maybenull)
#define __deref_opt_inout_bcount(size)                           _SAL1_Source_(__deref_opt_inout_bcount, (size), __deref_inout_bcount(size)                  __pre_except_maybenull)
#define __deref_opt_inout_ecount_part(size,length)               _SAL1_Source_(__deref_opt_inout_ecount_part, (size,length), __deref_inout_ecount_part(size,length)      __pre_except_maybenull)
#define __deref_opt_inout_bcount_part(size,length)               _SAL1_Source_(__deref_opt_inout_bcount_part, (size,length), __deref_inout_bcount_part(size,length)      __pre_except_maybenull)
#define __deref_opt_inout_ecount_full(size)                      _SAL1_Source_(__deref_opt_inout_ecount_full, (size), __deref_inout_ecount_full(size)             __pre_except_maybenull)
#define __deref_opt_inout_bcount_full(size)                      _SAL1_Source_(__deref_opt_inout_bcount_full, (size), __deref_inout_bcount_full(size)             __pre_except_maybenull)
#define __deref_opt_inout_z                                      _SAL1_Source_(__deref_opt_inout_z, (), __deref_opt_inout __pre __deref __nullterminated __post __deref __nullterminated)
#define __deref_opt_inout_ecount_z(size)                         _SAL1_Source_(__deref_opt_inout_ecount_z, (size), __deref_opt_inout_ecount(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define __deref_opt_inout_bcount_z(size)                         _SAL1_Source_(__deref_opt_inout_bcount_z, (size), __deref_opt_inout_bcount(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define __deref_opt_inout_nz                                     _SAL1_Source_(__deref_opt_inout_nz, (), __deref_opt_inout)
#define __deref_opt_inout_ecount_nz(size)                        _SAL1_Source_(__deref_opt_inout_ecount_nz, (size), __deref_opt_inout_ecount(size))
#define __deref_opt_inout_bcount_nz(size)                        _SAL1_Source_(__deref_opt_inout_bcount_nz, (size), __deref_opt_inout_bcount(size))
#define __deref_opt_ecount_opt(size)                             _SAL1_Source_(__deref_opt_ecount_opt, (size), __deref_ecount_opt(size)                    __pre_except_maybenull)
#define __deref_opt_bcount_opt(size)                             _SAL1_Source_(__deref_opt_bcount_opt, (size), __deref_bcount_opt(size)                    __pre_except_maybenull)
#define __deref_opt_out_opt                                      _SAL1_Source_(__deref_opt_out_opt, (), _Outptr_opt_result_maybenull_)
#define __deref_opt_out_ecount_opt(size)                         _SAL1_Source_(__deref_opt_out_ecount_opt, (size), __deref_out_ecount_opt(size)                __pre_except_maybenull)
#define __deref_opt_out_bcount_opt(size)                         _SAL1_Source_(__deref_opt_out_bcount_opt, (size), __deref_out_bcount_opt(size)                __pre_except_maybenull)
#define __deref_opt_out_ecount_part_opt(size,length)             _SAL1_Source_(__deref_opt_out_ecount_part_opt, (size,length), __deref_out_ecount_part_opt(size,length)    __pre_except_maybenull)
#define __deref_opt_out_bcount_part_opt(size,length)             _SAL1_Source_(__deref_opt_out_bcount_part_opt, (size,length), __deref_out_bcount_part_opt(size,length)    __pre_except_maybenull)
#define __deref_opt_out_ecount_full_opt(size)                    _SAL1_Source_(__deref_opt_out_ecount_full_opt, (size), __deref_out_ecount_full_opt(size)           __pre_except_maybenull)
#define __deref_opt_out_bcount_full_opt(size)                    _SAL1_Source_(__deref_opt_out_bcount_full_opt, (size), __deref_out_bcount_full_opt(size)           __pre_except_maybenull)
#define __deref_opt_out_z_opt                                    _SAL1_Source_(__deref_opt_out_z_opt, (), __post __deref __valid __refparam __pre_except_maybenull __pre_deref_except_maybenull __post_deref_except_maybenull __post __deref __nullterminated)
#define __deref_opt_out_ecount_z_opt(size)                       _SAL1_Source_(__deref_opt_out_ecount_z_opt, (size), __deref_opt_out_ecount_opt(size) __post __deref __nullterminated)
#define __deref_opt_out_bcount_z_opt(size)                       _SAL1_Source_(__deref_opt_out_bcount_z_opt, (size), __deref_opt_out_bcount_opt(size) __post __deref __nullterminated)
#define __deref_opt_out_nz_opt                                   _SAL1_Source_(__deref_opt_out_nz_opt, (), __deref_opt_out_opt)
#define __deref_opt_out_ecount_nz_opt(size)                      _SAL1_Source_(__deref_opt_out_ecount_nz_opt, (size), __deref_opt_out_ecount_opt(size))
#define __deref_opt_out_bcount_nz_opt(size)                      _SAL1_Source_(__deref_opt_out_bcount_nz_opt, (size), __deref_opt_out_bcount_opt(size))
#define __deref_opt_inout_opt                                    _SAL1_Source_(__deref_opt_inout_opt, (), __deref_inout_opt                           __pre_except_maybenull)
#define __deref_opt_inout_ecount_opt(size)                       _SAL1_Source_(__deref_opt_inout_ecount_opt, (size), __deref_inout_ecount_opt(size)              __pre_except_maybenull)
#define __deref_opt_inout_bcount_opt(size)                       _SAL1_Source_(__deref_opt_inout_bcount_opt, (size), __deref_inout_bcount_opt(size)              __pre_except_maybenull)
#define __deref_opt_inout_ecount_part_opt(size,length)           _SAL1_Source_(__deref_opt_inout_ecount_part_opt, (size,length), __deref_inout_ecount_part_opt(size,length)  __pre_except_maybenull)
#define __deref_opt_inout_bcount_part_opt(size,length)           _SAL1_Source_(__deref_opt_inout_bcount_part_opt, (size,length), __deref_inout_bcount_part_opt(size,length)  __pre_except_maybenull)
#define __deref_opt_inout_ecount_full_opt(size)                  _SAL1_Source_(__deref_opt_inout_ecount_full_opt, (size), __deref_inout_ecount_full_opt(size)         __pre_except_maybenull)
#define __deref_opt_inout_bcount_full_opt(size)                  _SAL1_Source_(__deref_opt_inout_bcount_full_opt, (size), __deref_inout_bcount_full_opt(size)         __pre_except_maybenull)
#define __deref_opt_inout_z_opt                                  _SAL1_Source_(__deref_opt_inout_z_opt, (), __deref_opt_inout_opt  __pre __deref __nullterminated __post __deref __nullterminated)
#define __deref_opt_inout_ecount_z_opt(size)                     _SAL1_Source_(__deref_opt_inout_ecount_z_opt, (size), __deref_opt_inout_ecount_opt(size)  __pre __deref __nullterminated __post __deref __nullterminated)
#define __deref_opt_inout_bcount_z_opt(size)                     _SAL1_Source_(__deref_opt_inout_bcount_z_opt, (size), __deref_opt_inout_bcount_opt(size)  __pre __deref __nullterminated __post __deref __nullterminated)
#define __deref_opt_inout_nz_opt                                 _SAL1_Source_(__deref_opt_inout_nz_opt, (), __deref_opt_inout_opt)
#define __deref_opt_inout_ecount_nz_opt(size)                    _SAL1_Source_(__deref_opt_inout_ecount_nz_opt, (size), __deref_opt_inout_ecount_opt(size))
#define __deref_opt_inout_bcount_nz_opt(size)                    _SAL1_Source_(__deref_opt_inout_bcount_nz_opt, (size), __deref_opt_inout_bcount_opt(size))











#define __success(expr)                      _SAL1_1_Source_(__success, (expr), _Success_(expr))
#define __nullterminated                     _SAL1_Source_(__nullterminated, (), _Null_terminated_)
#define __nullnullterminated                 _SAL1_Source_(__nullnulltermiated, (), _SAL_nop_impl_)
#define __reserved                           _SAL1_Source_(__reserved, (), _Reserved_)
#define __checkReturn                        _SAL1_Source_(__checkReturn, (), _Check_return_)
#define __typefix(ctype)                     _SAL1_Source_(__typefix, (ctype), __inner_typefix(ctype))
#define __override                           __inner_override
#define __callback                           __inner_callback
#define __format_string                      _SAL1_1_Source_(__format_string, (), _Printf_format_string_)
#define __blocksOn(resource)                 _SAL_L_Source_(__blocksOn, (resource), __inner_blocksOn(resource))
#define __control_entrypoint(category)       _SAL_L_Source_(__control_entrypoint, (category), __inner_control_entrypoint(category))
#define __data_entrypoint(category)          _SAL_L_Source_(__data_entrypoint, (category), __inner_data_entrypoint(category))








#define __useHeader                          _Use_decl_anno_impl_
#line 2868 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"








#define __on_failure(annotes)                _SAL1_1_Source_(__on_failure, (annotes), _On_failure_impl_(annotes _SAL_nop_impl_))
#line 2878 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"



    
    #define __fallthrough __inner_fallthrough


#line 2886 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"
#line 2887 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"





#define __analysis_assume(expr)
#line 2894 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"
#line 2895 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"





#define _Analysis_assume_(expr)
#line 2902 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"
#line 2903 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"

#define _Analysis_noreturn_    _SAL2_Source_(_Analysis_noreturn_, (), _SA_annotes0(SAL_terminates))








#define _Analysis_assume_nullterminated_(x)
#line 2915 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"








#define ___MKID(x, y) x ## y
#define __MKID(x, y) ___MKID(x, y)
#define __GENSYM(x) __MKID(x, __COUNTER__)



#define _Analysis_mode_impl_(mode) _SAL2_Source_(_Analysis_mode_impl_, (mode), _SA_annotes1(SAL_analysisMode, #mode))







#define _Analysis_mode_(mode)                                                 \
    __pragma(warning(disable: 28110 28111 28161 28162))                       \
    typedef _Analysis_mode_impl_(mode) int                                    \
        __GENSYM(__prefast_analysis_mode_flag);







#line 2949 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"










#define _In_function_class_(x)  _In_function_class_(#x)
#define _Called_from_function_class_(x) _In_function_class_(x)

#define _Function_class_(x)  _SAL2_Source_(_Function_class_, (x), _SA_annotes1(SAL_functionClassNew, _SA_SPECSTRIZE(x)))

#define _Enum_is_bitflag_    _SAL2_Source_(_Enum_is_bitflag_, (), _SA_annotes0(SAL_enumIsBitflag))
#define _Strict_type_match_  _SAL2_Source_(_Strict_type_match, (), _SA_annotes0(SAL_strictType2))

#define _Maybe_raises_SEH_exception_   _SAL2_Source_(_Maybe_raises_SEH_exception_, (x), _Pre_ _SA_annotes1(SAL_inTry,__yes))
#define _Raises_SEH_exception_         _SAL2_Source_(_Raises_SEH_exception_, (x), _Maybe_raises_SEH_exception_ _Analysis_noreturn_)





#line 1 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\concurrencysal.h"
















#define CONCURRENCYSAL_H


#pragma once















































































































































































































































































#line 292 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\concurrencysal.h"


#define _Interlocked_operand_

#line 296 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\concurrencysal.h"

#define _Guarded_by_(lock)
#define _Write_guarded_by_(lock)
#define _Interlocked_

#define _Requires_lock_held_(lock)
#define _Requires_exclusive_lock_held_(lock)
#define _Requires_shared_lock_held_(lock)
#define _Requires_lock_not_held_(lock)
#define _Requires_no_locks_held_

#define _Acquires_lock_(lock)
#define _Acquires_exclusive_lock_(lock)
#define _Acquires_shared_lock_(lock)
#define _Releases_lock_(lock)
#define _Releases_exclusive_lock_(lock)
#define _Releases_shared_lock_(lock)
#define _Acquires_nonreentrant_lock_(lock)
#define _Releases_nonreentrant_lock_(lock)

#define _Post_same_lock_(lock1,lock2)

#define _Internal_set_lock_count_(lock, count)

#define _Create_lock_level_(level)
#define _Has_lock_level_(level)
#define _Internal_lock_level_order_(a,b)
#define _Csalcat1_(x,y)
#define _Csalcat2_(x,y)
#define _Lock_level_order_(a,b)
#define _No_competing_thread_

#define _Analysis_assume_lock_acquired_(lock)
#define _Analysis_assume_lock_released_(lock)
#define _Analysis_assume_lock_held_(lock)
#define _Analysis_assume_lock_not_held_(lock)
#define _Analysis_assume_same_lock_(lock1, lock2)
#define _Function_ignore_lock_checking_(lock)
#define _Analysis_suppress_lock_checking_(lock)

#define _Benign_race_begin_ __pragma(warning(push))
#define _Benign_race_end_ __pragma(warning(pop))

#define _No_competing_thread_begin_ __pragma(warning(push))
#define _No_competing_thread_end_ __pragma(warning(pop))

#define _Has_lock_kind_(kind)






#define _Detaches_lock_(detached, lock)
#define _Moves_lock_(target, source)
#define _Replaces_lock_(target, source)
#define _Swaps_locks_(left, right)




#define __guarded_by(lock)
#define __write_guarded_by(lock)
#define __interlocked

#define __requires_lock_held(lock)
#define __requires_exclusive_lock_held(lock)
#define __requires_shared_lock_held(lock)
#define __requires_lock_not_held(lock)
#define __requires_no_locks_held

#define __acquires_lock(lock)
#define __acquires_exclusive_lock(lock)
#define __acquires_shared_lock(lock)
#define __releases_lock(lock)
#define __releases_exclusive_lock(lock)
#define __releases_shared_lock(lock)

#define __has_lock_property(kind)
#define __declare_lock_level(level)
#define __has_lock_level(level)
#define __internal_lock_level_order(a,b)
#define CSALCAT1(x,y)
#define CSALCAT2(x,y)
#define __lock_level_order(a,b)
#define __no_competing_thread

#define __analysis_assume_lock_acquired(lock)
#define __analysis_assume_lock_released(lock)
#define __function_ignore_lock_checking(lock)
#define __analysis_suppress_lock_checking(lock)

#define BENIGN_RACE_BEGIN __pragma(warning(push))
#define BENIGN_RACE_END __pragma(warning(pop))

#define NO_COMPETING_THREAD_BEGIN __pragma(warning(push))
#define NO_COMPETING_THREAD_END __pragma(warning(pop))

#line 389 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\concurrencysal.h"





#line 395 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\concurrencysal.h"
#line 2975 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\sal.h"
#line 58 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 1 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"










#pragma once
#define _INC_VADEFS


#define _CRT_PACKING 8
#pragma pack(push, 8)



    


        #define _VCRUNTIME_DISABLED_WARNING_4339

    #line 24 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"
#line 25 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"




    


        #define _VCRUNTIME_DISABLED_WARNING_4412

    #line 34 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"
#line 35 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"



    #define _VCRUNTIME_EXTRA_DISABLED_WARNINGS

#line 40 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"




    #define _VCRUNTIME_DISABLED_WARNINGS _VCRUNTIME_DISABLED_WARNING_4339 _VCRUNTIME_DISABLED_WARNING_4412 4514 4820 _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#line 46 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"

#pragma warning(push)
#pragma warning(disable:   4514 4820 )






#define _W64

#line 57 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"


    #define _UINTPTR_T_DEFINED

    
        typedef unsigned __int64  uintptr_t;
    

#line 65 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"
#line 66 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"


    #define _VA_LIST_DEFINED

    


        typedef char* va_list;
    #line 74 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"
#line 75 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"




    #define _ADDRESSOF(v) (&(v))
#line 81 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"





#line 87 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"



#line 91 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"
    #define _SLOTSIZEOF(t)  (sizeof(t))
    #define _APALIGN(t,ap)  (__alignof(t))
#line 94 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"











#line 106 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"







#line 114 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"











#line 126 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"





#line 132 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"










#line 143 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"










#line 154 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"

    void __cdecl __va_start(va_list* , ...);

    #define __crt_va_start_a(ap, x) ((void)(__va_start(&ap, x)))
    #define __crt_va_arg(ap, t)                                               \
        ((sizeof(t) > sizeof(__int64) || (sizeof(t) & (sizeof(t) - 1)) != 0) \
            ? **(t**)((ap += sizeof(__int64)) - sizeof(__int64))             \
            :  *(t* )((ap += sizeof(__int64)) - sizeof(__int64)))
    #define __crt_va_end(ap)        ((void)(ap = (va_list)0))

#line 165 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"




































#line 202 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"

    #define __crt_va_start(ap, x) __crt_va_start_a(ap, x)

#line 206 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vadefs.h"

#pragma warning(pop) 
#pragma pack(pop)
#line 59 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"

#pragma warning(push)
#pragma warning(disable:   4514 4820 )














#line 77 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"









#line 87 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"

    #define _CRT_BEGIN_C_HEADER            \
        __pragma(pack(push, _CRT_PACKING))

    #define _CRT_END_C_HEADER \
        __pragma(pack(pop))

#line 95 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"

__pragma(pack(push, 8))




    


        #define _HAS_EXCEPTIONS 1
    #line 106 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 107 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"



#define _CRT_STRINGIZE_(x) #x
#define _CRT_STRINGIZE(x) _CRT_STRINGIZE_(x)

#define _CRT_WIDE_(s) L ## s
#define _CRT_WIDE(s) _CRT_WIDE_(s)

#define _CRT_CONCATENATE_(a, b) a ## b
#define _CRT_CONCATENATE(a, b)  _CRT_CONCATENATE_(a, b)

#define _CRT_UNPARENTHESIZE_(...) __VA_ARGS__
#define _CRT_UNPARENTHESIZE(...)  _CRT_UNPARENTHESIZE_ __VA_ARGS__


    

#line 126 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"

#line 128 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
        #define _VCRTIMP

    #line 130 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 131 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


    

#line 136 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
        #define _MRTIMP

    #line 138 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 139 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"





#line 145 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
    #define __CLRCALL_OR_CDECL __cdecl
    #define __CLR_OR_THIS_CALL

#line 148 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"




    #define __CLRCALL_PURE_OR_CDECL __cdecl
#line 154 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"

#define __CRTDECL __CLRCALL_PURE_OR_CDECL


#define _VCRT_NOALIAS __declspec(noalias)
#define _VCRT_RESTRICT __declspec(restrict)
#define _VCRT_ALLOCATOR __declspec(allocator)



#line 165 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
    #define _VCRT_JIT_INTRINSIC

#line 167 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"




    #define _VCRT_ALIGN(x) __declspec(align(x))
#line 173 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


    



      #define _CONST_RETURN

    #line 181 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 182 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


#define _WConst_return _CONST_RETURN



    typedef unsigned __int64 size_t;
    typedef __int64          ptrdiff_t;
    typedef __int64          intptr_t;




#line 196 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"



#line 200 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"



#line 204 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
    typedef _Bool __vcrt_bool;
#line 206 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"



    #define _SIZE_T_DEFINED

#line 211 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


    #define _PTRDIFF_T_DEFINED

#line 215 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


    #define _INTPTR_T_DEFINED

#line 219 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"



    #define _WCHAR_T_DEFINED

    typedef unsigned short wchar_t;
#line 225 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


    


        #define NULL ((void *)0)
    #line 232 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 233 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


    #define _UNALIGNED __unaligned


#line 239 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"



#line 243 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"










    #define __crt_countof(_Array) (sizeof(_Array) / sizeof(_Array[0]))
#line 255 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"



#line 259 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"








    #define _STL_LANG 0L
#line 269 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


    

#line 274 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
        #define _HAS_CXX17 0
    #line 276 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 277 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


    

#line 282 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
        #define _HAS_CXX20 0
    #line 284 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 285 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


    

#line 290 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
        #define _HAS_CXX23 0
    #line 292 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 293 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


    

#line 298 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
        #define _HAS_CXX26 0
    #line 300 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 301 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"

#undef _STL_LANG




#line 307 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"



#line 311 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"



#line 315 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"



    
        #define _HAS_NODISCARD 0
    



#line 325 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 326 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"



#line 330 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
    #define _NODISCARD

#line 332 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"









    


        #define _MSVC_CONSTEXPR

    #line 346 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 347 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"







    #define _VCRT_EXPORT_STD

#line 356 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


#define _CRT_DEPRECATE_TEXT(_Text) __declspec(deprecated(_Text))



#line 363 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


    
        #define _CRT_INSECURE_DEPRECATE(_Replacement)
    





#line 374 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 375 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"



#line 379 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


    
        #define _CRT_INSECURE_DEPRECATE_MEMORY(_Replacement)
    


#line 387 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 388 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


    void __cdecl __security_init_cookie(void);

    


#line 396 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"


#line 399 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
        void __cdecl __security_check_cookie(  uintptr_t _StackCookie);
        __declspec(noreturn) void __cdecl __report_gsfailure(  uintptr_t _StackCookie);
    #line 402 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 403 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"

extern uintptr_t __security_cookie;


    #define __vcrt_malloc_normal(_Size) malloc(_Size)
    #define __vcrt_calloc_normal(_Count, _Size) calloc(_Count, _Size)
    #define __vcrt_free_normal(_Memory) free(_Memory)
#line 411 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"

__pragma(pack(pop))

#pragma warning(pop) 

#line 417 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\vcruntime.h"
#line 11 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"







    

















        #define _CRT_USE_WINAPI_FAMILY_DESKTOP_APP

    #line 38 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 39 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    #define _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE 1
#line 43 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    
        #define _CRT_BUILD_DESKTOP_APP 1
    

#line 50 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 51 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"

















    


        #define _UCRT_DISABLED_WARNING_4412

    #line 73 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 74 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



    #define _UCRT_EXTRA_DISABLED_WARNINGS

#line 79 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"














    #define _UCRT_DISABLED_WARNINGS 4324 _UCRT_DISABLED_WARNING_4412 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 _UCRT_EXTRA_DISABLED_WARNINGS
#line 95 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    











        #define _UCRT_DISABLE_CLANG_WARNINGS

    #line 111 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 112 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    


        #define _UCRT_RESTORE_CLANG_WARNINGS

    #line 119 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 120 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"

#pragma warning(push)
#pragma warning(disable: 4324  4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )


__pragma(pack(push, 8))







    

#line 136 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"

#line 138 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
        #define _ACRTIMP

    #line 140 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 141 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"




    #define _ACRTIMP_ALT _ACRTIMP
#line 147 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    

#line 152 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"

#line 154 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
        #define _DCRTIMP

    #line 156 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 157 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



#line 161 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
    #define _CRTRESTRICT __declspec(restrict)
#line 163 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    #define _CRTALLOCATOR __declspec(allocator)


#line 169 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"





#line 175 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
    #define _CRT_JIT_INTRINSIC

#line 177 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"





    #define _CRT_GUARDOVERFLOW

#line 184 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



#line 188 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
    #define _CRT_HYBRIDPATCHABLE

#line 190 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"









    #define _CRT_INLINE_PURE_SECURITYCRITICAL_ATTRIBUTE

#line 201 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"










#define _WConst_return _CONST_RETURN // For backwards compatibility


    


        #define _CRT_ALIGN(x) __declspec(align(x))
    #line 219 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 220 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



#line 224 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
    #define _Check_return_opt_

#line 226 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



#line 230 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
    #define _Check_return_wat_

#line 232 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



#line 236 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
    #define __crt_typefix(ctype)
#line 238 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    


        #define _CRT_NOEXCEPT

    #line 245 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 246 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"























#line 270 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



#line 274 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
    typedef _Bool __crt_bool;
#line 276 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"

#define _ARGMAX   100
#define _TRUNCATE ((size_t)-1)
#define _CRT_INT_MAX 2147483647
#define _CRT_SIZE_MAX ((size_t)-1)

#define __FILEW__     _CRT_WIDE(__FILE__)
#define __FUNCTIONW__ _CRT_WIDE(__FUNCTION__)






    
        


            #define _STATIC_ASSERT(expr) typedef char __static_assert_t[(expr) != 0]
        #line 296 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
    #line 297 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 298 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



















    

#line 320 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
        #define _CRT_FUNCTIONS_REQUIRED 1
    #line 322 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 323 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



#line 327 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    #define _CRT_UNUSED(x) (void)x
#line 331 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


 






  

#line 343 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
   #define _CRT_HAS_CXX17   0
  #line 345 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
 #line 346 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 347 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


 

#line 352 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
   #define _CRT_HAS_C11 0
 #line 354 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 355 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
















 void __cdecl _invalid_parameter_noinfo(void);
 __declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(void);

__declspec(noreturn)
 void __cdecl _invoke_watson(
      wchar_t const* _Expression,
      wchar_t const* _FunctionName,
      wchar_t const* _FileName,
            unsigned int _LineNo,
            uintptr_t _Reserved);


    



        
        
        
        
        
        
        
        
        
        
        
        #define _CRT_SECURE_INVALID_PARAMETER(expr) \
            ::_invalid_parameter_noinfo_noreturn()
    #line 401 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 402 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"








#define _CRT_WARNING_MESSAGE(NUMBER, MESSAGE) \
    __FILE__ "(" _CRT_STRINGIZE(__LINE__) "): warning " NUMBER ": " MESSAGE


    #define _CRT_INTERNAL_NONSTDC_NAMES 1


#line 419 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



#line 423 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    


        #define _CRT_NONSTDC_DEPRECATE(_NewName) _CRT_DEPRECATE_TEXT(             \
            "The POSIX name for this item is deprecated. Instead, use the ISO C " \
            "and C++ conformant name: " #_NewName ". See online help for details.")
    #line 432 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 433 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"









    






        #define _PGLOBAL

    #line 451 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 452 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    


        #define _AGLOBAL

    #line 459 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 460 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



#line 464 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"













#line 478 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"















#line 494 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"

#define __STDC_SECURE_LIB__ 200411L
#define __GOT_SECURE_LIB__ __STDC_SECURE_LIB__ // For backwards compatibility


    #define __STDC_WANT_SECURE_LIB__ 1
#line 501 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



#line 505 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    

#line 510 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 511 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    


        


            #define _CRT_INSECURE_DEPRECATE_GLOBALS(replacement) _CRT_INSECURE_DEPRECATE(replacement)
        #line 521 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
    #line 522 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 523 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



#line 527 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"

#define _SECURECRT_FILL_BUFFER_PATTERN 0xFE



#line 533 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    


        #define _CRT_OBSOLETE(_NewItem) _CRT_DEPRECATE_TEXT(                   \
            "This function or variable has been superceded by newer library "  \
            "or operating system functionality. Consider using " #_NewItem " " \
            "instead. See online help for details.")
    #line 543 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 544 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    
        #define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 0
    



#line 553 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"

    
        
        
        #define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 0
    



#line 563 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"

    
        
              #define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 1
        

#line 570 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
    



#line 575 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"

    
        #define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY 0
    



#line 583 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"

    
        #define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY 0
    



#line 591 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 592 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    #define _CRT_SECURE_CPP_NOTHROW throw()
#line 596 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"








typedef int                           errno_t;
typedef unsigned short                wint_t;
typedef unsigned short                wctype_t;
typedef long                          __time32_t;
typedef __int64                       __time64_t;

typedef struct __crt_locale_data_public
{
      unsigned short const* _locale_pctype;
      int _locale_mb_cur_max;
               unsigned int _locale_lc_codepage;
} __crt_locale_data_public;

typedef struct __crt_locale_pointers
{
    struct __crt_locale_data*    locinfo;
    struct __crt_multibyte_data* mbcinfo;
} __crt_locale_pointers;

typedef __crt_locale_pointers* _locale_t;

typedef struct _Mbstatet
{ 
    unsigned long _Wchar;
    unsigned short _Byte, _State;
} _Mbstatet;

typedef _Mbstatet mbstate_t;



#line 636 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



#line 640 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    


        typedef __time64_t time_t;
    #line 647 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 648 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



    #define _TIME_T_DEFINED

#line 653 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"


    typedef size_t rsize_t;
#line 657 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"










    















































































































































#line 812 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"

        #define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(_ReturnType, _FuncName, _DstType, _Dst)
        #define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1)
        #define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
        #define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)
        #define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4)
        #define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(_ReturnType, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1)
        #define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(_ReturnType, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
        #define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(_ReturnType, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)
        #define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(_ReturnType, _FuncName, _HType1, _HArg1, _HType2, _HArg2, _DstType, _Dst)
        #define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(_ReturnType, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1)
        #define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(_ReturnType, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
        #define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(_ReturnType, _FuncName, _DstType, _Src)

    #line 827 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 828 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"



#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _SalAttributeDst, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _CC, _FuncName, _VFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _CC, _FuncName, _FuncName##_s, _VFuncName, _VFuncName##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _CC, _FuncName, _VFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _CC, _FuncName, _VFuncName, _VFuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE(_DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE(_DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)



#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _SalAttributeDst, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _SalAttributeDst, _DstType, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, __cdecl, _FuncName, _FuncName##_s, _VFuncName, _VFuncName##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE(_DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE(_DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)









    













































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 1879 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"

        #define __RETURN_POLICY_SAME(_FunctionCall)
        #define __RETURN_POLICY_DST(_FunctionCall)
        #define __RETURN_POLICY_VOID(_FunctionCall)
        #define __EMPTY_DECLSPEC


        

            #define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_CGETS(_ReturnType, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst) \
                _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _SalAttributeDst _DstType *_Dst, _TType1 _TArg1);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _HType2 _HArg2, _SalAttributeDst _DstType *_Dst);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _CC, _FuncName, _SecureFuncName, _VFuncName, _SecureVFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType _CC _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, ...); \
                _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType _CC _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, va_list _Args);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _CC, _FuncName, _VFuncName, _SecureVFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
                _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType _CC _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); \
                _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType _CC _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_GETS(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _DstType, _Dst) \
                _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _SalAttributeDst _DstType *_Dst, _TType1 _TArg1);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _HType2 _HArg2, _SalAttributeDst _DstType *_Dst);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _CC, _FuncName, _SecureFuncName, _VFuncName, _SecureVFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType _CC _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, ...); \
                _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType _CC _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, va_list _Args);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
                _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); \
                _CRT_INSECURE_DEPRECATE(_VFuncName##_s) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _CC, _FuncName, _VFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
                _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType _CC _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); \
                _CRT_INSECURE_DEPRECATE(_VFuncName##_s) _DeclSpec _ReturnType _CC _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

            #define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);


            #define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
                __inline \
                _ReturnType __CRTDECL _FuncName(_DstType *_Dst)

            #define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst)

            #define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
                __inline \
                _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1)

            #define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1)

            #define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
                __inline \
                _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2)

            #define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

            #define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
                __inline \
                _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3)

            #define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

            #define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
                __inline \
                _ReturnType __CRTDECL _FuncName(_DstType *_Dst)

            #define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst)

            #define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
                __inline \
                _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1)

            #define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1)

            #define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
                __inline \
                _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2)

            #define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

            #define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
                _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
                __inline \
                _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3)

            #define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

        











































#line 2069 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
    #line 2070 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"
#line 2071 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt.h"

__pragma(pack(pop))


#pragma warning(pop) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"









#pragma once


#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_stdio_config.h"







#pragma once



#pragma warning(push)
#pragma warning(disable: 4324  4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )


__pragma(pack(push, 8))



#line 21 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_stdio_config.h"




#line 26 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_stdio_config.h"
    #define _CRT_STDIO_INLINE __inline
#line 28 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_stdio_config.h"


    

#line 33 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_stdio_config.h"
        #define _CRT_INTERNAL_STDIO_SYMBOL_PREFIX ""
    

#line 37 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_stdio_config.h"
#line 38 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_stdio_config.h"














    








#line 62 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_stdio_config.h"




#line 67 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_stdio_config.h"

    





#line 75 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_stdio_config.h"
#line 76 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_stdio_config.h"






#line 83 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_stdio_config.h"


    
    
       
    
    __declspec(noinline) __inline unsigned __int64* __cdecl __local_stdio_printf_options(void)
    {
        static unsigned __int64 _OptionsStorage;
        return &_OptionsStorage;
    }

    
    
       
    
    __declspec(noinline) __inline unsigned __int64* __cdecl __local_stdio_scanf_options(void)
    {
        static unsigned __int64 _OptionsStorage;
        return &_OptionsStorage;
    }
#line 105 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_stdio_config.h"



#line 109 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_stdio_config.h"

#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS (*__local_stdio_printf_options())
#define _CRT_INTERNAL_LOCAL_SCANF_OPTIONS  (*__local_stdio_scanf_options ())



#define _CRT_INTERNAL_PRINTF_LEGACY_VSPRINTF_NULL_TERMINATION (1ULL << 0)
#define _CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR       (1ULL << 1)
#define _CRT_INTERNAL_PRINTF_LEGACY_WIDE_SPECIFIERS           (1ULL << 2)
#define _CRT_INTERNAL_PRINTF_LEGACY_MSVCRT_COMPATIBILITY      (1ULL << 3)
#define _CRT_INTERNAL_PRINTF_LEGACY_THREE_DIGIT_EXPONENTS     (1ULL << 4)
#define _CRT_INTERNAL_PRINTF_STANDARD_ROUNDING                (1ULL << 5)


#define _CRT_INTERNAL_SCANF_SECURECRT                   (1ULL << 0)
#define _CRT_INTERNAL_SCANF_LEGACY_WIDE_SPECIFIERS      (1ULL << 1)
#define _CRT_INTERNAL_SCANF_LEGACY_MSVCRT_COMPATIBILITY (1ULL << 2)



__pragma(pack(pop))

#pragma warning(pop) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

#pragma warning(push)
#pragma warning(disable: 4324  4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )


__pragma(pack(push, 8))







    #define _FILE_DEFINED

    typedef struct _iobuf
    {
        void* _Placeholder;
    } FILE;
#line 33 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

 FILE* __cdecl __acrt_iob_func(unsigned _Ix);

#define stdin  (__acrt_iob_func(0))
#define stdout (__acrt_iob_func(1))
#define stderr (__acrt_iob_func(2))

#define WEOF ((wint_t)(0xFFFF))




    
    
    
    
    
    
     wint_t __cdecl fgetwc(
          FILE* _Stream
        );

    
     wint_t __cdecl _fgetwchar(void);

    
     wint_t __cdecl fputwc(
             wchar_t _Character,
          FILE*   _Stream);

    
     wint_t __cdecl _fputwchar(
          wchar_t _Character
        );

     
     wint_t __cdecl getwc(
          FILE* _Stream
        );

     
     wint_t __cdecl getwchar(void);


    
     
     wchar_t* __cdecl fgetws(
          wchar_t* _Buffer,
                                  int      _BufferCount,
                               FILE*    _Stream
        );

    
     int __cdecl fputws(
           wchar_t const* _Buffer,
          FILE*          _Stream
        );

    
     
     wchar_t* __cdecl _getws_s(
          wchar_t* _Buffer,
                                  size_t   _BufferCount
        );

    
#line 103 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
     wint_t __cdecl putwc(
             wchar_t _Character,
          FILE*   _Stream
        );

    
     wint_t __cdecl putwchar(
          wchar_t _Character
        );

    
     int __cdecl _putws(
          wchar_t const* _Buffer
        );

    
     wint_t __cdecl ungetwc(
             wint_t _Character,
          FILE*  _Stream
        );

     
     FILE * __cdecl _wfdopen(
            int            _FileHandle,
          wchar_t const* _Mode
        );

      
     FILE* __cdecl _wfopen(
          wchar_t const* _FileName,
          wchar_t const* _Mode
        );

    
     errno_t __cdecl _wfopen_s(
          FILE**         _Stream,
                             wchar_t const* _FileName,
                             wchar_t const* _Mode
        );

     
    
     FILE* __cdecl _wfreopen(
           wchar_t const* _FileName,
           wchar_t const* _Mode,
          FILE*          _OldStream
        );

    
     errno_t __cdecl _wfreopen_s(
          FILE**         _Stream,
                             wchar_t const* _FileName,
                             wchar_t const* _Mode,
                            FILE*          _OldStream
        );

     
     FILE* __cdecl _wfsopen(
          wchar_t const* _FileName,
          wchar_t const* _Mode,
            int            _ShFlag
        );

     void __cdecl _wperror(
          wchar_t const* _ErrorMessage
        );

    

         
         FILE* __cdecl _wpopen(
              wchar_t const* _Command,
              wchar_t const* _Mode
            );

    #line 181 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     int __cdecl _wremove(
          wchar_t const* _FileName
        );

    
    

     
     __declspec(allocator) wchar_t* __cdecl _wtempnam(
          wchar_t const* _Directory,
          wchar_t const* _FilePrefix
        );

    

     
    
     errno_t __cdecl _wtmpnam_s(
          wchar_t* _Buffer,
                                  size_t   _BufferCount
        );

    
#line 209 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

       wchar_t* __cdecl _wtmpnam(  wchar_t *_Buffer);
#line 215 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"



    
    
    
    
    
    
     wint_t __cdecl _fgetwc_nolock(
          FILE* _Stream
        );

    
     wint_t __cdecl _fputwc_nolock(
             wchar_t _Character,
          FILE*   _Stream
        );

    
     wint_t __cdecl _getwc_nolock(
          FILE* _Stream
        );

    
     wint_t __cdecl _putwc_nolock(
             wchar_t _Character,
          FILE*   _Stream
        );

    
     wint_t __cdecl _ungetwc_nolock(
             wint_t _Character,
          FILE*  _Stream
        );

    



#line 256 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"



    
    





    
    
    
    
    
    
     int __cdecl __stdio_common_vfwprintf(
                                             unsigned __int64 _Options,
                                          FILE*            _Stream,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

    
     int __cdecl __stdio_common_vfwprintf_s(
                                             unsigned __int64 _Options,
                                          FILE*            _Stream,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

    
     int __cdecl __stdio_common_vfwprintf_p(
                                             unsigned __int64 _Options,
                                          FILE*            _Stream,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

    
    __inline int __cdecl _vfwprintf_l(
                                          FILE*          const _Stream,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    

#line 308 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return __stdio_common_vfwprintf((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
    }
    #line 312 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl vfwprintf(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    

#line 322 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vfwprintf_l(_Stream, _Format, ((void *)0), _ArgList);
    }
    #line 326 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _vfwprintf_s_l(
                                          FILE*          const _Stream,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    

#line 337 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return __stdio_common_vfwprintf_s((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
    }
    #line 341 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    

        
        __inline int __cdecl vfwprintf_s(
                                    FILE*          const _Stream,
                wchar_t const* const _Format,
                                          va_list              _ArgList
            )
    

#line 353 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
        {
            return _vfwprintf_s_l(_Stream, _Format, ((void *)0), _ArgList);
        }
    #line 357 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    #line 359 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _vfwprintf_p_l(
                                          FILE*          const _Stream,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    

#line 370 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return __stdio_common_vfwprintf_p((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
    }
    #line 374 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _vfwprintf_p(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    

#line 384 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vfwprintf_p_l(_Stream, _Format, ((void *)0), _ArgList);
    }
    #line 388 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _vwprintf_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    

#line 398 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vfwprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    }
    #line 402 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl vwprintf(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    

#line 411 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vfwprintf_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    }
    #line 415 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _vwprintf_s_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    

#line 425 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vfwprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    }
    #line 429 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    

        
        __inline int __cdecl vwprintf_s(
                wchar_t const* const _Format,
                                          va_list              _ArgList
            )
    

#line 440 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
        {
            return _vfwprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
        }
    #line 444 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    #line 446 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _vwprintf_p_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    

#line 456 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vfwprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    }
    #line 460 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _vwprintf_p(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    

#line 469 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vfwprintf_p_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    }
    #line 473 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _fwprintf_l(
                                          FILE*          const _Stream,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    

#line 483 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfwprintf_l(_Stream, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 492 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl fwprintf(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
        ...)
    

#line 501 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfwprintf_l(_Stream, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 510 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _fwprintf_s_l(
                                          FILE*          const _Stream,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    

#line 520 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfwprintf_s_l(_Stream, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 529 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    

        
        __inline int __cdecl fwprintf_s(
                                    FILE*          const _Stream,
                wchar_t const* const _Format,
            ...)
    

#line 540 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
        {
            int _Result;
            va_list _ArgList;
            ((void)(__va_start(&_ArgList, _Format)));
            _Result = _vfwprintf_s_l(_Stream, _Format, ((void *)0), _ArgList);
            ((void)(_ArgList = (va_list)0));
            return _Result;
        }
    #line 549 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    #line 551 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _fwprintf_p_l(
                                          FILE*          const _Stream,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    

#line 561 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfwprintf_p_l(_Stream, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 570 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _fwprintf_p(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
        ...)
    

#line 579 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfwprintf_p_l(_Stream, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 588 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _wprintf_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    

#line 597 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfwprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 606 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl wprintf(
            wchar_t const* const _Format,
        ...)
    

#line 614 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfwprintf_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 623 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _wprintf_s_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    

#line 632 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfwprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 641 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    

        
        __inline int __cdecl wprintf_s(
                wchar_t const* const _Format,
            ...)
    

#line 651 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
        {
            int _Result;
            va_list _ArgList;
            ((void)(__va_start(&_ArgList, _Format)));
            _Result = _vfwprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
            ((void)(_ArgList = (va_list)0));
            return _Result;
        }
    #line 660 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    #line 662 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _wprintf_p_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    

#line 671 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfwprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 680 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _wprintf_p(
            wchar_t const* const _Format,
        ...)
    

#line 688 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfwprintf_p_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 697 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"


    
    
    
    
    
    
     int __cdecl __stdio_common_vfwscanf(
                                            unsigned __int64 _Options,
                                         FILE*            _Stream,
            wchar_t const*   _Format,
                                        _locale_t        _Locale,
                                               va_list          _ArgList
        );

    
    __inline int __cdecl _vfwscanf_l(
          FILE*                                const _Stream,
            wchar_t const* const _Format,
                               _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    

#line 723 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return __stdio_common_vfwscanf(
            (*__local_stdio_scanf_options ()),
            _Stream, _Format, _Locale, _ArgList);
    }
    #line 729 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl vfwscanf(
          FILE*                                const _Stream,
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    

#line 739 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vfwscanf_l(_Stream, _Format, ((void *)0), _ArgList);
    }
    #line 743 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _vfwscanf_s_l(
                                FILE*          const _Stream,
            wchar_t const* const _Format,
                               _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    

#line 754 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return __stdio_common_vfwscanf(
            (*__local_stdio_scanf_options ()) | (1ULL << 0),
            _Stream, _Format, _Locale, _ArgList);
    }
    #line 760 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    

        
        __inline int __cdecl vfwscanf_s(
                                    FILE*          const _Stream,
                wchar_t const* const _Format,
                                          va_list              _ArgList
            )
    

#line 772 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
        {
            return _vfwscanf_s_l(_Stream, _Format, ((void *)0), _ArgList);
        }
    #line 776 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    #line 778 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    __inline int __cdecl _vwscanf_l(
            wchar_t const* const _Format,
                               _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    

#line 787 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vfwscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    }
    #line 791 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl vwscanf(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    

#line 800 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vfwscanf_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
    }
    #line 804 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _vwscanf_s_l(
            wchar_t const* const _Format,
                               _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    

#line 814 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vfwscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    }
    #line 818 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    

        
        __inline int __cdecl vwscanf_s(
                wchar_t const* const _Format,
                                          va_list              _ArgList
            )
    

#line 829 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
        {
            return _vfwscanf_s_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
        }
    #line 833 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    #line 835 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    __inline int __cdecl _fwscanf_l(
                                         FILE*          const _Stream,
            wchar_t const* const _Format,
                                        _locale_t      const _Locale,
        ...)
    

#line 845 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfwscanf_l(_Stream, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 854 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

      
    __inline int __cdecl fwscanf(
                               FILE*          const _Stream,
            wchar_t const* const _Format,
        ...)
    

#line 863 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfwscanf_l(_Stream, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 872 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _fwscanf_s_l(
                                           FILE*          const _Stream,
            wchar_t const* const _Format,
                                          _locale_t      const _Locale,
        ...)
    

#line 882 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfwscanf_s_l(_Stream, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 891 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    

        
        __inline int __cdecl fwscanf_s(
                                     FILE*          const _Stream,
                wchar_t const* const _Format,
            ...)
    

#line 902 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
        {
            int _Result;
            va_list _ArgList;
            ((void)(__va_start(&_ArgList, _Format)));
            _Result = _vfwscanf_s_l(_Stream, _Format, ((void *)0), _ArgList);
            ((void)(_ArgList = (va_list)0));
            return _Result;
        }
    #line 911 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    #line 913 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    __inline int __cdecl _wscanf_l(
            wchar_t const* const _Format,
                                        _locale_t      const _Locale,
        ...)
    

#line 922 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfwscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 931 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

      
    __inline int __cdecl wscanf(
            wchar_t const* const _Format,
        ...)
    

#line 939 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfwscanf_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 948 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
    __inline int __cdecl _wscanf_s_l(
            wchar_t const* const _Format,
                                          _locale_t      const _Locale,
        ...)
    

#line 957 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfwscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 966 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    

        
        __inline int __cdecl wscanf_s(
                wchar_t const* const _Format,
            ...)
    

#line 976 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
        {
            int _Result;
            va_list _ArgList;
            ((void)(__va_start(&_ArgList, _Format)));
            _Result = _vfwscanf_s_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
            ((void)(_ArgList = (va_list)0));
            return _Result;
        }
    #line 985 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    #line 987 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"



    
    
    
    
    
    
        #define _SWPRINTFS_DEPRECATED _CRT_DEPRECATE_TEXT(                       \
                "function has been changed to conform with the ISO C standard, " \
                "adding an extra character count parameter. To use the traditional " \
                "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")
    

#line 1003 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
     int __cdecl __stdio_common_vswprintf(
                                             unsigned __int64 _Options,
                 wchar_t*         _Buffer,
                                             size_t           _BufferCount,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
    
     int __cdecl __stdio_common_vswprintf_s(
                                             unsigned __int64 _Options,
                     wchar_t*         _Buffer,
                                             size_t           _BufferCount,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
    
     int __cdecl __stdio_common_vsnwprintf_s(
                                             unsigned __int64 _Options,
                 wchar_t*         _Buffer,
                                             size_t           _BufferCount,
                                             size_t           _MaxCount,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
    
     int __cdecl __stdio_common_vswprintf_p(
                                             unsigned __int64 _Options,
                     wchar_t*         _Buffer,
                                             size_t           _BufferCount,
            wchar_t const*   _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
     
    __inline int __cdecl _vsnwprintf_l(
            wchar_t*       const _Buffer,
                                                  size_t         const _BufferCount,
                 wchar_t const* const _Format,
                                              _locale_t      const _Locale,
                                                     va_list              _ArgList
        )
    

#line 1061 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int const _Result = __stdio_common_vswprintf(
            (*__local_stdio_printf_options()) | (1ULL << 0),
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }
    #line 1069 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _vsnwprintf_s_l(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                                       size_t         const _MaxCount,
                      wchar_t const* const _Format,
                                                   _locale_t      const _Locale,
                                                          va_list              _ArgList
        )
    

#line 1083 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int const _Result = __stdio_common_vsnwprintf_s(
            (*__local_stdio_printf_options()),
            _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }
    #line 1091 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _vsnwprintf_s(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                                       size_t         const _MaxCount,
                                wchar_t const* const _Format,
                                                          va_list              _ArgList
        )
    

#line 1104 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, ((void *)0), _ArgList);
    }
    #line 1108 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     __inline   int __cdecl _snwprintf(    wchar_t *_Buffer,   size_t _BufferCount,     wchar_t const* _Format, ...);  __inline   int __cdecl _vsnwprintf(    wchar_t *_Buffer,   size_t _BufferCount,     wchar_t const* _Format, va_list _Args);
#line 1117 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
     
    __inline int __cdecl _vsnwprintf(
            wchar_t*       _Buffer,
                                                  size_t         _BufferCount,
                           wchar_t const* _Format,
                                                     va_list        _ArgList
        )
    

#line 1129 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vsnwprintf_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    }
    #line 1133 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
#line 1142 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _vswprintf_c_l(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                      wchar_t const* const _Format,
                                                   _locale_t      const _Locale,
                                                          va_list              _ArgList
        )
    

#line 1155 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int const _Result = __stdio_common_vswprintf(
            (*__local_stdio_printf_options()),
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }
    #line 1163 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _vswprintf_c(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                wchar_t const* const _Format,
                                                          va_list              _ArgList
        )
    

#line 1175 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vswprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    }
    #line 1179 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _vswprintf_l(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                      wchar_t const* const _Format,
                                                   _locale_t      const _Locale,
                                                          va_list              _ArgList
        )
    

#line 1192 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
    }
    #line 1196 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl __vswprintf_l(
                  wchar_t*       const _Buffer,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    

#line 1208 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vswprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
    }
    #line 1212 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _vswprintf(
           wchar_t*       const _Buffer,
               wchar_t const* const _Format,
                                         va_list              _ArgList
        )
    

#line 1223 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vswprintf_l(_Buffer, (size_t)-1, _Format, ((void *)0), _ArgList);
    }
    #line 1227 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl vswprintf(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                      wchar_t const* const _Format,
                                                          va_list              _ArgList
        )
    

#line 1239 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vswprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    }
    #line 1243 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _vswprintf_s_l(
           wchar_t*       const _Buffer,
                                                   size_t         const _BufferCount,
                  wchar_t const* const _Format,
                                               _locale_t      const _Locale,
                                                      va_list              _ArgList
        )
    

#line 1256 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int const _Result = __stdio_common_vswprintf_s(
            (*__local_stdio_printf_options()),
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }
    #line 1264 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    

         
        __inline int __cdecl vswprintf_s(
               wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                wchar_t const* const _Format,
                                                          va_list              _ArgList
            )
    

#line 1277 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
        {
            return _vswprintf_s_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
        }
    #line 1281 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    #line 1283 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
#line 1291 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _vswprintf_p_l(
           wchar_t*       const _Buffer,
                                                   size_t         const _BufferCount,
                  wchar_t const* const _Format,
                                               _locale_t      const _Locale,
                                                      va_list              _ArgList
        )
    

#line 1304 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int const _Result = __stdio_common_vswprintf_p(
            (*__local_stdio_printf_options()),
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }
    #line 1312 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _vswprintf_p(
           wchar_t*       const _Buffer,
                                                   size_t         const _BufferCount,
                            wchar_t const* const _Format,
                                                      va_list              _ArgList
        )
    

#line 1324 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vswprintf_p_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    }
    #line 1328 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
     
    __inline int __cdecl _vscwprintf_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    

#line 1339 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int const _Result = __stdio_common_vswprintf(
            (*__local_stdio_printf_options()) | (1ULL << 1),
            ((void *)0), 0, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }
    #line 1347 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
     
    __inline int __cdecl _vscwprintf(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    

#line 1357 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vscwprintf_l(_Format, ((void *)0), _ArgList);
    }
    #line 1361 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
     
    __inline int __cdecl _vscwprintf_p_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
                                                va_list              _ArgList
        )
    

#line 1372 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int const _Result = __stdio_common_vswprintf_p(
            (*__local_stdio_printf_options()) | (1ULL << 1),
            ((void *)0), 0, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }
    #line 1380 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
     
    __inline int __cdecl _vscwprintf_p(
            wchar_t const* const _Format,
                                      va_list              _ArgList
        )
    

#line 1390 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vscwprintf_p_l(_Format, ((void *)0), _ArgList);
    }
    #line 1394 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl __swprintf_l(
                  wchar_t*       const _Buffer,
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    

#line 1405 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = __vswprintf_l(_Buffer, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1414 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _swprintf_l(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                      wchar_t const* const _Format,
                                                   _locale_t      const _Locale,
        ...)
    

#line 1426 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1435 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _swprintf(
           wchar_t*       const _Buffer,
               wchar_t const* const _Format,
        ...)
    

#line 1445 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = __vswprintf_l(_Buffer, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1454 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl swprintf(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                wchar_t const* const _Format,
        ...)
    

#line 1465 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1474 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     __inline   int __cdecl __swprintf_l(   wchar_t *_Buffer,     wchar_t const* _Format,   _locale_t _Locale, ...);  __inline   int __cdecl __vswprintf_l(   wchar_t *_Buffer,     wchar_t const* _Format,   _locale_t _Locale, va_list _Args);
#line 1483 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     __inline   int __cdecl _swprintf(   wchar_t *_Buffer,     wchar_t const* _Format, ...);  __inline   int __cdecl _vswprintf(   wchar_t *_Buffer,     wchar_t const* _Format, va_list _Args);
#line 1490 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _swprintf_s_l(
           wchar_t*       const _Buffer,
                                                   size_t         const _BufferCount,
                  wchar_t const* const _Format,
                                               _locale_t      const _Locale,
        ...)
    

#line 1502 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1511 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    

         
        __inline int __cdecl swprintf_s(
               wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                wchar_t const* const _Format,
            ...)
    

#line 1523 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
        {
            int _Result;
            va_list _ArgList;
            ((void)(__va_start(&_ArgList, _Format)));
            _Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
            ((void)(_ArgList = (va_list)0));
            return _Result;
        }
    #line 1532 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    #line 1534 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
#line 1541 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _swprintf_p_l(
           wchar_t*       const _Buffer,
                                                   size_t         const _BufferCount,
                  wchar_t const* const _Format,
                                               _locale_t      const _Locale,
        ...)
    

#line 1553 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1562 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _swprintf_p(
           wchar_t*       const _Buffer,
                                                   size_t         const _BufferCount,
                            wchar_t const* const _Format,
        ...)
    

#line 1573 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1582 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _swprintf_c_l(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                      wchar_t const* const _Format,
                                                   _locale_t      const _Locale,
        ...)
    

#line 1594 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1603 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _swprintf_c(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                wchar_t const* const _Format,
        ...)
    

#line 1614 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1623 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
     
    __inline int __cdecl _snwprintf_l(
            wchar_t*       const _Buffer,
                                                  size_t         const _BufferCount,
                 wchar_t const* const _Format,
                                              _locale_t      const _Locale,
        ...)
    

#line 1635 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));

        _Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);

        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1646 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _snwprintf(
            wchar_t*       _Buffer,
                                                  size_t         _BufferCount,
                           wchar_t const* _Format,
        ...)
    

#line 1657 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));

        _Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);

        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1668 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _snwprintf_s_l(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                                       size_t         const _MaxCount,
                      wchar_t const* const _Format,
                                                   _locale_t      const _Locale,
        ...)
    

#line 1681 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1690 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _snwprintf_s(
           wchar_t*       const _Buffer,
                                                       size_t         const _BufferCount,
                                                       size_t         const _MaxCount,
                                wchar_t const* const _Format,
        ...)
    

#line 1702 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1711 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
#line 1719 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    __inline int __cdecl _scwprintf_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    

#line 1728 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vscwprintf_l(_Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1737 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
     
    __inline int __cdecl _scwprintf(
            wchar_t const* const _Format,
        ...)
    

#line 1746 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vscwprintf_l(_Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1755 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
     
    __inline int __cdecl _scwprintf_p_l(
            wchar_t const* const _Format,
                                         _locale_t      const _Locale,
        ...)
    

#line 1765 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vscwprintf_p_l(_Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1774 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
     
    __inline int __cdecl _scwprintf_p(
            wchar_t const* const _Format,
        ...)
    

#line 1783 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vscwprintf_p_l(_Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1792 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"


    
        
        
        #pragma warning(push)
        #pragma warning(disable: 4141 6054)

        





















































        #pragma warning(pop)
    #line 1856 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    




#line 1863 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"


    
    
    
    
    
     
     int __cdecl __stdio_common_vswscanf(
                                            unsigned __int64 _Options,
                  wchar_t const*   _Buffer,
                                            size_t           _BufferCount,
            wchar_t const*   _Format,
                                        _locale_t        _Locale,
                                               va_list          _ArgList
        );

     
    
    __inline int __cdecl _vswscanf_l(
                                 wchar_t const* const _Buffer,
            wchar_t const* const _Format,
                               _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    

#line 1891 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return __stdio_common_vswscanf(
            (*__local_stdio_scanf_options ()),
            _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
    }
    #line 1897 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl vswscanf(
                                 wchar_t const* _Buffer,
            wchar_t const* _Format,
                                      va_list        _ArgList
        )
    

#line 1908 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return _vswscanf_l(_Buffer, _Format, ((void *)0), _ArgList);
    }
    #line 1912 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _vswscanf_s_l(
                                 wchar_t const* const _Buffer,
            wchar_t const* const _Format,
                               _locale_t      const _Locale,
                                      va_list              _ArgList
        )
    

#line 1924 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return __stdio_common_vswscanf(
            (*__local_stdio_scanf_options ()) | (1ULL << 0),
            _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
    }
    #line 1930 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    

         
        
        __inline int __cdecl vswscanf_s(
                                     wchar_t const* const _Buffer,
                wchar_t const* const _Format,
                                          va_list              _ArgList
            )
    

#line 1943 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
        {
            return _vswscanf_s_l(_Buffer, _Format, ((void *)0), _ArgList);
        }
    #line 1947 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    #line 1949 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    
#line 1957 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
     
    __inline int __cdecl _vsnwscanf_l(
                  wchar_t const* const _Buffer,
                                            size_t         const _BufferCount,
            wchar_t const* const _Format,
                                        _locale_t      const _Locale,
                                               va_list              _ArgList
        )
    

#line 1970 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return __stdio_common_vswscanf(
            (*__local_stdio_scanf_options ()),
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);
    }
    #line 1976 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _vsnwscanf_s_l(
                    wchar_t const* const _Buffer,
                                              size_t         const _BufferCount,
            wchar_t const* const _Format,
                                          _locale_t      const _Locale,
                                                 va_list              _ArgList
        )
    

#line 1989 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        return __stdio_common_vswscanf(
            (*__local_stdio_scanf_options ()) | (1ULL << 0),
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);
    }
    #line 1995 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
     
    __inline int __cdecl _swscanf_l(
                                          wchar_t const* const _Buffer,
            wchar_t const* const _Format,
                                        _locale_t            _Locale,
        ...)
    

#line 2006 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vswscanf_l(_Buffer, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2015 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
      
    __inline int __cdecl swscanf(
                                wchar_t const* const _Buffer,
            wchar_t const* const _Format,
        ...)
    

#line 2025 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vswscanf_l(_Buffer, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2034 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _swscanf_s_l(
                                            wchar_t const* const _Buffer,
            wchar_t const* const _Format,
                                          _locale_t      const _Locale,
        ...)
    

#line 2045 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vswscanf_s_l(_Buffer, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2054 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    

         
        
        __inline int __cdecl swscanf_s(
                                      wchar_t const* const _Buffer,
                wchar_t const* const _Format,
            ...)
    

#line 2066 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
        {
            int _Result;
            va_list _ArgList;
            ((void)(__va_start(&_ArgList, _Format)));
            _Result = _vswscanf_s_l(_Buffer, _Format, ((void *)0), _ArgList);
            ((void)(_ArgList = (va_list)0));
            return _Result;
        }
    #line 2075 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    #line 2077 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
     
    __inline int __cdecl _snwscanf_l(
                  wchar_t const* const _Buffer,
                                            size_t         const _BufferCount,
            wchar_t const* const _Format,
                                        _locale_t      const _Locale,
        ...)
    

#line 2089 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));

        _Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);

        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2100 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
     
    __inline int __cdecl _snwscanf(
            wchar_t const* const _Buffer,
                                      size_t         const _BufferCount,
                wchar_t const* const _Format,
        ...)
    

#line 2111 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));

        _Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);

        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2122 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _snwscanf_s_l(
                    wchar_t const* const _Buffer,
                                              size_t         const _BufferCount,
            wchar_t const* const _Format,
                                          _locale_t      const _Locale,
        ...)
    

#line 2134 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2143 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

     
    
    __inline int __cdecl _snwscanf_s(
             wchar_t const* const _Buffer,
                                       size_t         const _BufferCount,
               wchar_t const* const _Format,
        ...)
    

#line 2154 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2163 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

    


#line 2168 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdio.h"

__pragma(pack(pop))

#pragma warning(pop) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

#pragma warning(push)
#pragma warning(disable: 4324  4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )


__pragma(pack(push, 8))



#define BUFSIZ  512







#define _NFILE      _NSTREAM_

#define _NSTREAM_   512





#define _IOB_ENTRIES 3

#define EOF    (-1)

#define _IOFBF 0x0000
#define _IOLBF 0x0040
#define _IONBF 0x0004



#define L_tmpnam   260 // _MAX_PATH

    #define L_tmpnam_s L_tmpnam
#line 53 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"





#define SEEK_CUR    1
#define SEEK_END    2
#define SEEK_SET    0


#define FILENAME_MAX    260
#define FOPEN_MAX       20
#define _SYS_OPEN       20
#define TMP_MAX         _CRT_INT_MAX

    #define TMP_MAX_S       TMP_MAX
    #define _TMP_MAX_S      TMP_MAX
#line 71 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"


typedef __int64 fpos_t;





    
     errno_t __cdecl _get_stream_buffer_pointers(
               FILE*   _Stream,
          char*** _Base,
          char*** _Pointer,
          int**   _Count
        );


    
    
    
    
    
    

        
         errno_t __cdecl clearerr_s(
              FILE* _Stream
            );

        
         
         errno_t __cdecl fopen_s(
              FILE**      _Stream,
                                     char const* _FileName,
                                     char const* _Mode
            );

        
         
         size_t __cdecl fread_s(
                void*  _Buffer,
                                    size_t _BufferSize,
                                                                            size_t _ElementSize,
                                                                            size_t _ElementCount,
                                                                         FILE*  _Stream
            );

        
         errno_t __cdecl freopen_s(
              FILE**      _Stream,
                                 char const* _FileName,
                                 char const* _Mode,
                                FILE*       _OldStream
            );

         
         char* __cdecl gets_s(
              char*   _Buffer,
                               rsize_t _Size
            );

        
         errno_t __cdecl tmpfile_s(
                FILE** _Stream
            );

         
        
         errno_t __cdecl tmpnam_s(
              char*   _Buffer,
                               rsize_t _Size
            );

    #line 145 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     void __cdecl clearerr(
          FILE* _Stream
        );

     
    
     int __cdecl fclose(
          FILE* _Stream
        );

    
     int __cdecl _fcloseall(void);

     
     FILE* __cdecl _fdopen(
            int         _FileHandle,
          char const* _Mode
        );

     
     int __cdecl feof(
          FILE* _Stream
        );

     
     int __cdecl ferror(
          FILE* _Stream
        );

    
     int __cdecl fflush(
          FILE* _Stream
        );

     
    
     int __cdecl fgetc(
          FILE* _Stream
        );

    
     int __cdecl _fgetchar(void);

     
    
     int __cdecl fgetpos(
          FILE*   _Stream,
            fpos_t* _Position
        );

     
    
     char* __cdecl fgets(
          char* _Buffer,
                               int   _MaxCount,
                            FILE* _Stream
        );

     
     int __cdecl _fileno(
          FILE* _Stream
        );

    
     int __cdecl _flushall(void);

      
     FILE* __cdecl fopen(
          char const* _FileName,
          char const* _Mode
        );


     
    
     int __cdecl fputc(
             int   _Character,
          FILE* _Stream
        );

    
     int __cdecl _fputchar(
          int _Character
        );

     
    
     int __cdecl fputs(
           char const* _Buffer,
          FILE*       _Stream
        );

    
     size_t __cdecl fread(
          void*  _Buffer,
                                                      size_t _ElementSize,
                                                      size_t _ElementCount,
                                                   FILE*  _Stream
        );

     
      
     FILE* __cdecl freopen(
           char const* _FileName,
           char const* _Mode,
          FILE*       _Stream
        );

     
     FILE* __cdecl _fsopen(
          char const* _FileName,
          char const* _Mode,
            int         _ShFlag
        );

     
    
     int __cdecl fsetpos(
          FILE*         _Stream,
             fpos_t const* _Position
        );

     
    
     int __cdecl fseek(
          FILE* _Stream,
             long  _Offset,
             int   _Origin
        );

     
    
     int __cdecl _fseeki64(
          FILE*   _Stream,
             __int64 _Offset,
             int     _Origin
        );

     
     
     long __cdecl ftell(
          FILE* _Stream
        );

     
     
     __int64 __cdecl _ftelli64(
          FILE* _Stream
        );

    
     size_t __cdecl fwrite(
          void const* _Buffer,
                                                    size_t      _ElementSize,
                                                    size_t      _ElementCount,
                                                 FILE*       _Stream
        );

     
     
     int __cdecl getc(
          FILE* _Stream
        );

     
     int __cdecl getchar(void);

     
     int __cdecl _getmaxstdio(void);

    
#line 319 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
     int __cdecl _getw(
          FILE* _Stream
        );

     void __cdecl perror(
          char const* _ErrorMessage
        );

    

         
        
         int __cdecl _pclose(
              FILE* _Stream
            );

         
         FILE* __cdecl _popen(
              char const* _Command,
              char const* _Mode
            );

    #line 344 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
     int __cdecl putc(
             int   _Character,
          FILE* _Stream
        );

    
     int __cdecl putchar(
          int _Character
        );

    
     int __cdecl puts(
          char const* _Buffer
        );

     
    
     int __cdecl _putw(
             int   _Word,
          FILE* _Stream
        );

     int __cdecl remove(
          char const* _FileName
        );

     
     int __cdecl rename(
          char const* _OldFileName,
          char const* _NewFileName
        );

     int __cdecl _unlink(
          char const* _FileName
        );

    

        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_unlink" ". See online help for details."))
         int __cdecl unlink(
              char const* _FileName
            );

    #line 391 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     void __cdecl rewind(
          FILE* _Stream
        );

    
     int __cdecl _rmtmp(void);

    
     void __cdecl setbuf(
                                                      FILE* _Stream,
            char* _Buffer
        );

    
     int __cdecl _setmaxstdio(
          int _Maximum
        );

     
    
     int __cdecl setvbuf(
                               FILE*  _Stream,
            char*  _Buffer,
                                  int    _Mode,
                                  size_t _Size
        );

    


#line 423 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
     __declspec(allocator) char* __cdecl _tempnam(
          char const* _DirectoryName,
          char const* _FilePrefix
        );

    

#line 433 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

      
     FILE* __cdecl tmpfile(void);

    
#line 442 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

   char* __cdecl tmpnam(  char *_Buffer);
#line 448 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
     int __cdecl ungetc(
             int   _Character,
          FILE* _Stream
        );



    
    
    
    
    
     void __cdecl _lock_file(
          FILE* _Stream
        );

     void __cdecl _unlock_file(
          FILE* _Stream
        );

     
    
     int __cdecl _fclose_nolock(
          FILE* _Stream
        );

     
    
     int __cdecl _fflush_nolock(
          FILE* _Stream
        );

     
    
     int __cdecl _fgetc_nolock(
          FILE* _Stream
        );

     
    
     int __cdecl _fputc_nolock(
             int   _Character,
          FILE* _Stream
        );

    
     size_t __cdecl _fread_nolock(
          void*  _Buffer,
                                                      size_t _ElementSize,
                                                      size_t _ElementCount,
                                                   FILE*  _Stream
        );

    
     
     size_t __cdecl _fread_nolock_s(
          void*  _Buffer,
                              size_t _BufferSize,
                                                                      size_t _ElementSize,
                                                                      size_t _ElementCount,
                                                                   FILE*  _Stream
        );

    
     int __cdecl _fseek_nolock(
          FILE* _Stream,
             long  _Offset,
             int   _Origin
        );

    
     int __cdecl _fseeki64_nolock(
          FILE*   _Stream,
             __int64 _Offset,
             int     _Origin
        );

     
     long __cdecl _ftell_nolock(
          FILE* _Stream
        );

     
     __int64 __cdecl _ftelli64_nolock(
          FILE* _Stream
        );

    
     size_t __cdecl _fwrite_nolock(
          void const* _Buffer,
                                                    size_t      _ElementSize,
                                                    size_t      _ElementCount,
                                                 FILE*       _Stream
        );

    
     int __cdecl _getc_nolock(
          FILE* _Stream
        );

    
     int __cdecl _putc_nolock(
             int   _Character,
          FILE* _Stream
        );

    
     int __cdecl _ungetc_nolock(
             int   _Character,
          FILE* _Stream
        );

    #define _getchar_nolock()     _getc_nolock(stdin)
    #define _putchar_nolock(_Ch)  _putc_nolock(_Ch, stdout)
    #define _getwchar_nolock()    _getwc_nolock(stdin)
    #define _putwchar_nolock(_Ch) _putwc_nolock(_Ch, stdout)



    














#line 586 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"



     int* __cdecl __p__commode(void);

    


        #define _commode (*__p__commode())
    #line 596 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"



    
    

#line 603 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    
    
    
    
     int __cdecl __stdio_common_vfprintf(
                                             unsigned __int64 _Options,
                                          FILE*            _Stream,
            char const*      _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     int __cdecl __stdio_common_vfprintf_s(
                                             unsigned __int64 _Options,
                                          FILE*            _Stream,
            char const*      _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
     int __cdecl __stdio_common_vfprintf_p(
                                             unsigned __int64 _Options,
                                          FILE*            _Stream,
            char const*      _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

    
    __inline int __cdecl _vfprintf_l(
           FILE*       const _Stream,
            char const* const _Format,
          _locale_t   const _Locale,
                 va_list           _ArgList
        )
    

#line 644 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return __stdio_common_vfprintf((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
    }
    #line 648 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl vfprintf(
                                FILE*       const _Stream,
            char const* const _Format,
                                      va_list           _ArgList
        )
    

#line 658 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vfprintf_l(_Stream, _Format, ((void *)0), _ArgList);
    }
    #line 662 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _vfprintf_s_l(
           FILE*       const _Stream,
            char const* const _Format,
          _locale_t   const _Locale,
                 va_list           _ArgList
        )
    

#line 673 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return __stdio_common_vfprintf_s((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
    }
    #line 677 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    

        
        __inline int __cdecl vfprintf_s(
                                    FILE*       const _Stream,
                char const* const _Format,
                                          va_list           _ArgList
            )
    

#line 689 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
        {
            return _vfprintf_s_l(_Stream, _Format, ((void *)0), _ArgList);
        }
    #line 693 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    #line 695 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _vfprintf_p_l(
           FILE*       const _Stream,
            char const* const _Format,
          _locale_t   const _Locale,
                 va_list           _ArgList
        )
    

#line 706 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return __stdio_common_vfprintf_p((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
    }
    #line 710 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _vfprintf_p(
                                FILE*       const _Stream,
            char const* const _Format,
                                      va_list           _ArgList
        )
    

#line 720 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vfprintf_p_l(_Stream, _Format, ((void *)0), _ArgList);
    }
    #line 724 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _vprintf_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    

#line 734 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vfprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    }
    #line 738 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl vprintf(
            char const* const _Format,
                                      va_list           _ArgList
        )
    

#line 747 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vfprintf_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    }
    #line 751 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _vprintf_s_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    

#line 761 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vfprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    }
    #line 765 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    

        
        __inline int __cdecl vprintf_s(
                char const* const _Format,
                                          va_list           _ArgList
            )
    

#line 776 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
        {
            return _vfprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
        }
    #line 780 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    #line 782 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _vprintf_p_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    

#line 792 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vfprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    }
    #line 796 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _vprintf_p(
            char const* const _Format,
                                      va_list           _ArgList
        )
    

#line 805 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vfprintf_p_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    }
    #line 809 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _fprintf_l(
                                          FILE*       const _Stream,
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    

#line 819 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfprintf_l(_Stream, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 828 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl fprintf(
                                FILE*       const _Stream,
            char const* const _Format,
        ...)
    

#line 837 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfprintf_l(_Stream, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 846 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     int __cdecl _set_printf_count_output(
          int _Value
        );

     int __cdecl _get_printf_count_output(void);

    
    __inline int __cdecl _fprintf_s_l(
                                          FILE*       const _Stream,
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    

#line 862 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfprintf_s_l(_Stream, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 871 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    

        
        __inline int __cdecl fprintf_s(
                                    FILE*       const _Stream,
                char const* const _Format,
            ...)
    

#line 882 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
        {
            int _Result;
            va_list _ArgList;
            ((void)(__va_start(&_ArgList, _Format)));
            _Result = _vfprintf_s_l(_Stream, _Format, ((void *)0), _ArgList);
            ((void)(_ArgList = (va_list)0));
            return _Result;
        }
    #line 891 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    #line 893 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _fprintf_p_l(
                                          FILE*       const _Stream,
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    

#line 903 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfprintf_p_l(_Stream, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 912 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _fprintf_p(
                                FILE*       const _Stream,
            char const* const _Format,
        ...)
    

#line 921 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfprintf_p_l(_Stream, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 930 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _printf_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    

#line 939 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 948 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl printf(
            char const* const _Format,
        ...)
    

#line 956 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfprintf_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 965 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _printf_s_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    

#line 974 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 983 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    

        
        __inline int __cdecl printf_s(
                char const* const _Format,
            ...)
    

#line 993 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
        {
            int _Result;
            va_list _ArgList;
            ((void)(__va_start(&_ArgList, _Format)));
            _Result = _vfprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
            ((void)(_ArgList = (va_list)0));
            return _Result;
        }
    #line 1002 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    #line 1004 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _printf_p_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    

#line 1013 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1022 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _printf_p(
            char const* const _Format,
        ...)
    

#line 1030 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfprintf_p_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1039 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"


    
    
    
    
    
     int __cdecl __stdio_common_vfscanf(
                                            unsigned __int64 _Options,
                                         FILE*            _Stream,
            char const*      _Format,
                                        _locale_t        _Locale,
                                               va_list          _Arglist
        );

    
    __inline int __cdecl _vfscanf_l(
                                FILE*       const _Stream,
            char const* const _Format,
                               _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    

#line 1064 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return __stdio_common_vfscanf(
            (*__local_stdio_scanf_options ()),
            _Stream, _Format, _Locale, _ArgList);
    }
    #line 1070 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl vfscanf(
                                FILE*       const _Stream,
            char const* const _Format,
                                      va_list           _ArgList
        )
    

#line 1080 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vfscanf_l(_Stream, _Format, ((void *)0), _ArgList);
    }
    #line 1084 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _vfscanf_s_l(
                                FILE*       const _Stream,
            char const* const _Format,
                               _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    

#line 1095 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return __stdio_common_vfscanf(
            (*__local_stdio_scanf_options ()) | (1ULL << 0),
            _Stream, _Format, _Locale, _ArgList);
    }
    #line 1101 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"


    

        
        __inline int __cdecl vfscanf_s(
                                    FILE*       const _Stream,
                char const* const _Format,
                                          va_list           _ArgList
            )
    

#line 1114 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
        {
            return _vfscanf_s_l(_Stream, _Format, ((void *)0), _ArgList);
        }
    #line 1118 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    #line 1120 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _vscanf_l(
            char const* const _Format,
                               _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    

#line 1130 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vfscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    }
    #line 1134 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl vscanf(
            char const* const _Format,
                                      va_list           _ArgList
        )
    

#line 1143 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vfscanf_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
    }
    #line 1147 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _vscanf_s_l(
            char const* const _Format,
                               _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    

#line 1157 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vfscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    }
    #line 1161 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    

        
        __inline int __cdecl vscanf_s(
                char const* const _Format,
                                          va_list           _ArgList
            )
    

#line 1172 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
        {
            return _vfscanf_s_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
        }
    #line 1176 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    #line 1178 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    __inline int __cdecl _fscanf_l(
                                         FILE*       const _Stream,
            char const* const _Format,
                                        _locale_t   const _Locale,
        ...)
    

#line 1188 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfscanf_l(_Stream, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1197 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

      
    __inline int __cdecl fscanf(
                               FILE*       const _Stream,
            char const* const _Format,
        ...)
    

#line 1206 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfscanf_l(_Stream, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1215 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _fscanf_s_l(
                                           FILE*       const _Stream,
            char const* const _Format,
                                          _locale_t   const _Locale,
        ...)
    

#line 1225 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfscanf_s_l(_Stream, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1234 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    

        
        __inline int __cdecl fscanf_s(
                                     FILE*       const _Stream,
                char const* const _Format,
            ...)
    

#line 1245 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
        {
            int _Result;
            va_list _ArgList;
            ((void)(__va_start(&_ArgList, _Format)));
            _Result = _vfscanf_s_l(_Stream, _Format, ((void *)0), _ArgList);
            ((void)(_ArgList = (va_list)0));
            return _Result;
        }
    #line 1254 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    #line 1256 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    __inline int __cdecl _scanf_l(
            char const* const _Format,
                                        _locale_t   const _Locale,
        ...)
    

#line 1265 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1274 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

      
    __inline int __cdecl scanf(
            char const* const _Format,
        ...)
    

#line 1282 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vfscanf_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1291 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _scanf_s_l(
            char const* const _Format,
                                          _locale_t   const _Locale,
        ...)
    

#line 1300 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vfscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1309 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    

        
        __inline int __cdecl scanf_s(
                char const* const _Format,
            ...)
    

#line 1319 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
        {
            int _Result;
            va_list _ArgList;
            ((void)(__va_start(&_ArgList, _Format)));
            _Result = _vfscanf_s_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
            ((void)(_ArgList = (va_list)0));
            return _Result;
        }
    #line 1328 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    #line 1330 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"



    
    
    
    
    
     
     int __cdecl __stdio_common_vsprintf(
                                             unsigned __int64 _Options,
                 char*            _Buffer,
                                             size_t           _BufferCount,
            char const*      _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
     int __cdecl __stdio_common_vsprintf_s(
                                             unsigned __int64 _Options,
                     char*            _Buffer,
                                             size_t           _BufferCount,
            char const*      _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
     int __cdecl __stdio_common_vsnprintf_s(
                                             unsigned __int64 _Options,
                 char*            _Buffer,
                                             size_t           _BufferCount,
                                             size_t           _MaxCount,
            char const*      _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
     int __cdecl __stdio_common_vsprintf_p(
                                             unsigned __int64 _Options,
                     char*            _Buffer,
                                             size_t           _BufferCount,
            char const*      _Format,
                                         _locale_t        _Locale,
                                                va_list          _ArgList
        );

     
     
    __inline int __cdecl _vsnprintf_l(
            char*       const _Buffer,
                                                  size_t      const _BufferCount,
                 char const* const _Format,
                                              _locale_t   const _Locale,
                                                     va_list           _ArgList
        )
    

#line 1391 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int const _Result = __stdio_common_vsprintf(
            (*__local_stdio_printf_options()) | (1ULL << 0),
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }
    #line 1399 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl _vsnprintf(
            char*       const _Buffer,
                                                 size_t      const _BufferCount,
                          char const* const _Format,
                                                    va_list           _ArgList
        )
    

#line 1411 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vsnprintf_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    }
    #line 1415 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    








#line 1426 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl vsnprintf(
           char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                char const* const _Format,
                                                          va_list           _ArgList
        )
    

#line 1438 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int const _Result = __stdio_common_vsprintf(
            (*__local_stdio_printf_options()) | (1ULL << 1),
            _Buffer, _BufferCount, _Format, ((void *)0), _ArgList);

        return _Result < 0 ? -1 : _Result;
    }
    #line 1446 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
     
    __inline int __cdecl _vsprintf_l(
           char*       const _Buffer,
                                    char const* const _Format,
                                  _locale_t   const _Locale,
                                         va_list           _ArgList
        )
    

#line 1458 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vsnprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
    }
    #line 1462 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
     
    __inline int __cdecl vsprintf(
           char*       const _Buffer,
               char const* const _Format,
                                         va_list           _ArgList
        )
    

#line 1473 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vsnprintf_l(_Buffer, (size_t)-1, _Format, ((void *)0), _ArgList);
    }
    #line 1477 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl _vsprintf_s_l(
           char*       const _Buffer,
                                                   size_t      const _BufferCount,
                  char const* const _Format,
                                               _locale_t   const _Locale,
                                                      va_list           _ArgList
        )
    

#line 1490 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int const _Result = __stdio_common_vsprintf_s(
            (*__local_stdio_printf_options()),
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }
    #line 1498 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    

         
        
        __inline int __cdecl vsprintf_s(
               char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                char const* const _Format,
                                                          va_list           _ArgList
            )
    

#line 1512 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
        {
            return _vsprintf_s_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
        }
    #line 1516 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

        
#line 1524 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    #line 1526 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl _vsprintf_p_l(
           char*       const _Buffer,
                                                   size_t      const _BufferCount,
                  char const* const _Format,
                                               _locale_t   const _Locale,
                                                      va_list           _ArgList
        )
    

#line 1539 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int const _Result = __stdio_common_vsprintf_p(
            (*__local_stdio_printf_options()),
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }
    #line 1547 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl _vsprintf_p(
           char*       const _Buffer,
                                                   size_t      const _BufferCount,
                            char const* const _Format,
                                                      va_list           _ArgList
        )
    

#line 1559 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vsprintf_p_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    }
    #line 1563 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl _vsnprintf_s_l(
           char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                                       size_t      const _MaxCount,
                      char const* const _Format,
                                                   _locale_t   const _Locale,
                                                          va_list          _ArgList
        )
    

#line 1577 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int const _Result = __stdio_common_vsnprintf_s(
            (*__local_stdio_printf_options()),
            _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }
    #line 1585 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl _vsnprintf_s(
           char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                                       size_t      const _MaxCount,
                                char const* const _Format,
                                                          va_list           _ArgList
        )
    

#line 1598 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, ((void *)0), _ArgList);
    }
    #line 1602 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
#line 1611 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    

         
        
        __inline int __cdecl vsnprintf_s(
               char*       const _Buffer,
                                                           size_t      const _BufferCount,
                                                           size_t      const _MaxCount,
                                    char const* const _Format,
                                                              va_list           _ArgList
            )
    

#line 1626 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
        {
            return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, ((void *)0), _ArgList);
        }
    #line 1630 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

        
#line 1639 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    #line 1641 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _vscprintf_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    

#line 1651 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int const _Result = __stdio_common_vsprintf(
            (*__local_stdio_printf_options()) | (1ULL << 1),
            ((void *)0), 0, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }
    #line 1659 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    __inline int __cdecl _vscprintf(
            char const* const _Format,
                                      va_list           _ArgList
        )
    

#line 1668 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vscprintf_l(_Format, ((void *)0), _ArgList);
    }
    #line 1672 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _vscprintf_p_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    

#line 1682 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int const _Result = __stdio_common_vsprintf_p(
            (*__local_stdio_printf_options()) | (1ULL << 1),
            ((void *)0), 0, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }
    #line 1690 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    __inline int __cdecl _vscprintf_p(
            char const* const _Format,
                                      va_list           _ArgList
        )
    

#line 1699 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vscprintf_p_l(_Format, ((void *)0), _ArgList);
    }
    #line 1703 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _vsnprintf_c_l(
                   char*       const _Buffer,
                                             size_t      const _BufferCount,
            char const* const _Format,
                                         _locale_t   const _Locale,
                                                va_list           _ArgList
        )
    

#line 1715 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int const _Result = __stdio_common_vsprintf(
            (*__local_stdio_printf_options()),
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        return _Result < 0 ? -1 : _Result;
    }
    #line 1723 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl _vsnprintf_c(
          char*       const _Buffer,
                                    size_t      const _BufferCount,
             char const* const _Format,
                                       va_list           _ArgList
        )
    

#line 1735 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vsnprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
    }
    #line 1739 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
     
    __inline int __cdecl _sprintf_l(
                  char*       const _Buffer,
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    

#line 1750 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));

        _Result = _vsprintf_l(_Buffer, _Format, _Locale, _ArgList);

        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1761 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl sprintf(
           char*       const _Buffer,
               char const* const _Format,
        ...)
    

#line 1771 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));

        _Result = _vsprintf_l(_Buffer, _Format, ((void *)0), _ArgList);

        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1782 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

       int __cdecl sprintf(  char *_Buffer,  char const* _Format, ...);    int __cdecl vsprintf(  char *_Buffer,  char const* _Format, va_list _Args);
#line 1789 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl _sprintf_s_l(
           char*       const _Buffer,
                                                   size_t      const _BufferCount,
                  char const* const _Format,
                                               _locale_t   const _Locale,
        ...)
    

#line 1801 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1810 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    

         
        
        __inline int __cdecl sprintf_s(
               char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                char const* const _Format,
            ...)
    

#line 1823 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
        {
            int _Result;
            va_list _ArgList;
            ((void)(__va_start(&_ArgList, _Format)));
            _Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
            ((void)(_ArgList = (va_list)0));
            return _Result;
        }
    #line 1832 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    #line 1834 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
#line 1841 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl _sprintf_p_l(
           char*       const _Buffer,
                                                   size_t      const _BufferCount,
                  char const* const _Format,
                                               _locale_t   const _Locale,
        ...)
    

#line 1853 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1862 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl _sprintf_p(
           char*       const _Buffer,
                                                   size_t      const _BufferCount,
                            char const* const _Format,
        ...)
    

#line 1873 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1882 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
     
    __inline int __cdecl _snprintf_l(
            char*       const _Buffer,
                                                  size_t      const _BufferCount,
                 char const* const _Format,
                                              _locale_t   const _Locale,
        ...)
    

#line 1894 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));

        _Result = _vsnprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);

        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1905 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    








#line 1916 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl snprintf(
           char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                char const* const _Format,
        ...)
    

#line 1927 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = vsnprintf(_Buffer, _BufferCount, _Format, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1936 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl _snprintf(
            char*       const _Buffer,
                                                  size_t      const _BufferCount,
                           char const* const _Format,
        ...)
    

#line 1947 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vsnprintf(_Buffer, _BufferCount, _Format, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1956 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

        int __cdecl _snprintf(    char *_Buffer,   size_t _BufferCount,     char const* _Format, ...);     int __cdecl _vsnprintf(    char *_Buffer,   size_t _BufferCount,     char const* _Format, va_list _Args);
#line 1965 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl _snprintf_c_l(
                   char*       const _Buffer,
                                             size_t      const _BufferCount,
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    

#line 1977 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 1986 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl _snprintf_c(
          char*       const _Buffer,
                                    size_t      const _BufferCount,
             char const* const _Format,
        ...)
    

#line 1997 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2006 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl _snprintf_s_l(
           char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                                       size_t      const _MaxCount,
                      char const* const _Format,
                                                   _locale_t   const _Locale,
        ...)
    

#line 2019 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2028 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    
    __inline int __cdecl _snprintf_s(
           char*       const _Buffer,
                                                       size_t      const _BufferCount,
                                                       size_t      const _MaxCount,
                                char const* const _Format,
        ...)
    

#line 2040 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2049 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
#line 2057 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _scprintf_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    

#line 2066 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vscprintf_l(_Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2075 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    __inline int __cdecl _scprintf(
            char const* const _Format,
        ...)
    

#line 2083 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vscprintf_l(_Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2092 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _scprintf_p_l(
            char const* const _Format,
                                         _locale_t   const _Locale,
        ...)
    

#line 2101 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vscprintf_p_l(_Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2110 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    __inline int __cdecl _scprintf_p(
            char const* const _Format,
        ...)
    

#line 2118 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vscprintf_p(_Format, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2127 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    
    
    
    
     int __cdecl __stdio_common_vsscanf(
                                            unsigned __int64 _Options,
                  char const*      _Buffer,
                                            size_t           _BufferCount,
            char const*      _Format,
                                        _locale_t        _Locale,
                                               va_list          _ArgList
        );

    
    __inline int __cdecl _vsscanf_l(
                                 char const* const _Buffer,
            char const* const _Format,
                               _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    

#line 2152 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return __stdio_common_vsscanf(
            (*__local_stdio_scanf_options ()),
            _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
    }
    #line 2158 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl vsscanf(
                                 char const* const _Buffer,
            char const* const _Format,
                                      va_list           _ArgList
        )
    

#line 2168 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return _vsscanf_l(_Buffer, _Format, ((void *)0), _ArgList);
    }
    #line 2172 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _vsscanf_s_l(
                                 char const* const _Buffer,
            char const* const _Format,
                               _locale_t   const _Locale,
                                      va_list           _ArgList
        )
    

#line 2183 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        return __stdio_common_vsscanf(
            (*__local_stdio_scanf_options ()) | (1ULL << 0),
            _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
    }
    #line 2189 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    

        #pragma warning(push)
        #pragma warning(disable: 6530) 

        
        __inline int __cdecl vsscanf_s(
                                     char const* const _Buffer,
                char const* const _Format,
                                          va_list           _ArgList
            )
    

#line 2204 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
        {
            return _vsscanf_s_l(_Buffer, _Format, ((void *)0), _ArgList);
        }
    #line 2208 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

        
#line 2215 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

        #pragma warning(pop)

    #line 2219 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    __inline int __cdecl _sscanf_l(
                                          char const* const _Buffer,
            char const* const _Format,
                                        _locale_t   const _Locale,
        ...)
    

#line 2229 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vsscanf_l(_Buffer, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2238 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

      
    __inline int __cdecl sscanf(
                                char const* const _Buffer,
            char const* const _Format,
        ...)
    

#line 2247 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));
        _Result = _vsscanf_l(_Buffer, _Format, ((void *)0), _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2256 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _sscanf_s_l(
                                            char const* const _Buffer,
            char const* const _Format,
                                          _locale_t   const _Locale,
        ...)
    

#line 2266 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));
        _Result = _vsscanf_s_l(_Buffer, _Format, _Locale, _ArgList);
        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2275 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    

        
        __inline int __cdecl sscanf_s(
                                      char const* const _Buffer,
                char const* const _Format,
            ...)
    

#line 2286 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
        {
            int _Result;
            va_list _ArgList;
            ((void)(__va_start(&_ArgList, _Format)));

            _Result = vsscanf_s(_Buffer, _Format, _ArgList);

            ((void)(_ArgList = (va_list)0));
            return _Result;
        }
    #line 2297 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    #line 2299 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    #pragma warning(push)
    #pragma warning(disable: 6530) 

     
    __inline int __cdecl _snscanf_l(
            char const* const _Buffer,
                                            size_t      const _BufferCount,
            char const* const _Format,
                                        _locale_t   const _Locale,
        ...)
    

#line 2313 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));

        _Result = __stdio_common_vsscanf(
            (*__local_stdio_scanf_options ()),
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2326 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

     
    __inline int __cdecl _snscanf(
            char const* const _Buffer,
                                            size_t      const _BufferCount,
                      char const* const _Format,
        ...)
    

#line 2336 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));

        _Result = __stdio_common_vsscanf(
            (*__local_stdio_scanf_options ()),
            _Buffer, _BufferCount, _Format, ((void *)0), _ArgList);

        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2349 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"


    
    __inline int __cdecl _snscanf_s_l(
              char const* const _Buffer,
                                              size_t      const _BufferCount,
            char const* const _Format,
                                          _locale_t   const _Locale,
        ...)
    

#line 2361 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Locale)));

        _Result = __stdio_common_vsscanf(
            (*__local_stdio_scanf_options ()) | (1ULL << 0),
            _Buffer, _BufferCount, _Format, _Locale, _ArgList);

        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2374 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    
    __inline int __cdecl _snscanf_s(
            char const* const _Buffer,
                                            size_t      const _BufferCount,
                    char const* const _Format,
        ...)
    

#line 2384 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
    {
        int _Result;
        va_list _ArgList;
        ((void)(__va_start(&_ArgList, _Format)));

        _Result = __stdio_common_vsscanf(
            (*__local_stdio_scanf_options ()) | (1ULL << 0),
            _Buffer, _BufferCount, _Format, ((void *)0), _ArgList);

        ((void)(_ArgList = (va_list)0));
        return _Result;
    }
    #line 2397 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

    #pragma warning(pop)

    

#line 2403 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"



    
    
    
    
    
    

        #define SYS_OPEN  _SYS_OPEN

        


#line 2419 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_tempnam" ". See online help for details."))
         char* __cdecl tempnam(
              char const* _Directory,
              char const* _FilePrefix
            );

        

#line 2429 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"

         __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fcloseall" ". See online help for details."))  int   __cdecl fcloseall(void);
              __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fdopen" ". See online help for details."))     FILE* __cdecl fdopen(  int _FileHandle,   char const* _Format);
         __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fgetchar" ". See online help for details."))   int   __cdecl fgetchar(void);
              __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fileno" ". See online help for details."))     int   __cdecl fileno(  FILE* _Stream);
         __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_flushall" ". See online help for details."))   int   __cdecl flushall(void);
         __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fputchar" ". See online help for details."))   int   __cdecl fputchar(  int _Ch);
              __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_getw" ". See online help for details."))       int   __cdecl getw(  FILE* _Stream);
         __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_putw" ". See online help for details."))       int   __cdecl putw(  int _Ch,   FILE* _Stream);
              __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_rmtmp" ". See online help for details."))      int   __cdecl rmtmp(void);

    #line 2441 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
#line 2442 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"



__pragma(pack(pop))

#pragma warning(pop) 
#line 2449 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdio.h"
#line 5 "C:/opt/grass/build/output/lib/grass85/include/grass/arraystats.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"







#pragma once

#define _INC_STDLIB



#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_malloc.h"








#pragma once



#pragma warning(push)
#pragma warning(disable: 4324  4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )


__pragma(pack(push, 8))





































#line 56 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_malloc.h"

     
 __declspec(allocator) __declspec(restrict)
void* __cdecl _calloc_base(
      size_t _Count,
      size_t _Size
    );

     
  __declspec(allocator) __declspec(restrict) 
void* __cdecl calloc(
       size_t _Count,
       size_t _Size
    );

 
 int __cdecl _callnewh(
      size_t _Size
    );

     
 __declspec(allocator) 
void* __cdecl _expand(
                void*  _Block,
       size_t _Size
    );


void __cdecl _free_base(
        void* _Block
    );

 
void __cdecl free(
        void* _Block
    );

     
 __declspec(allocator) __declspec(restrict)
void* __cdecl _malloc_base(
      size_t _Size
    );

     
 __declspec(allocator)  __declspec(restrict) 
void* __cdecl malloc(
       size_t _Size
    );

 

size_t __cdecl _msize_base(
      void* _Block
    ) ;

 
 
size_t __cdecl _msize(
      void* _Block
    );

       
 __declspec(allocator) __declspec(restrict)
void* __cdecl _realloc_base(
         void*  _Block,
                                 size_t _Size
    );

       
 __declspec(allocator) __declspec(restrict) 
void* __cdecl realloc(
        void*  _Block,
              size_t _Size
    );

       
 __declspec(allocator) __declspec(restrict)
void* __cdecl _recalloc_base(
        void*  _Block,
                                size_t _Count,
                                size_t _Size
    );

       
 __declspec(allocator) __declspec(restrict)
void* __cdecl _recalloc(
        void*  _Block,
              size_t _Count,
              size_t _Size
    );


void __cdecl _aligned_free(
        void* _Block
    );

     
 __declspec(allocator) __declspec(restrict)
void* __cdecl _aligned_malloc(
       size_t _Size,
                         size_t _Alignment
    );

     
 __declspec(allocator) __declspec(restrict)
void* __cdecl _aligned_offset_malloc(
       size_t _Size,
                         size_t _Alignment,
                         size_t _Offset
    );

 

size_t __cdecl _aligned_msize(
      void*  _Block,
               size_t _Alignment,
               size_t _Offset
    );

       
 __declspec(allocator) __declspec(restrict)
void* __cdecl _aligned_offset_realloc(
        void*  _Block,
              size_t _Size,
                                size_t _Alignment,
                                size_t _Offset
    );

       
 __declspec(allocator) __declspec(restrict)
void* __cdecl _aligned_offset_recalloc(
        void*  _Block,
              size_t _Count,
              size_t _Size,
                                size_t _Alignment,
                                size_t _Offset
    );

       
 __declspec(allocator) __declspec(restrict)
void* __cdecl _aligned_realloc(
        void*  _Block,
              size_t _Size,
                                size_t _Alignment
    );

       
 __declspec(allocator) __declspec(restrict)
void* __cdecl _aligned_recalloc(
        void*  _Block,
              size_t _Count,
              size_t _Size,
                                size_t _Alignment
    );


















#line 229 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_malloc.h"



__pragma(pack(pop))

#pragma warning(pop) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_search.h"










#pragma once


#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stddef.h"







#pragma once

#define _INC_STDDEF




#pragma warning(push)
#pragma warning(disable: 4324  4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )


__pragma(pack(push, 8))
















     int* __cdecl _errno(void);
    #define errno (*_errno())

     errno_t __cdecl _set_errno(  int _Value);
     errno_t __cdecl _get_errno(  int* _Value);

#line 42 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stddef.h"




    


        #define offsetof(s,m) ((size_t)&(((s*)0)->m))
    #line 51 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stddef.h"


#line 54 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stddef.h"

 extern unsigned long  __cdecl __threadid(void);
#define _threadid (__threadid())
 extern uintptr_t __cdecl __threadhandle(void);



__pragma(pack(pop))

#pragma warning(pop) 
#line 65 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stddef.h"
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_search.h"

#pragma warning(push)
#pragma warning(disable: 4324  4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )


__pragma(pack(push, 8))


    typedef int (__cdecl* _CoreCrtSecureSearchSortCompareFunction)(void*, void const*, void const*);
    typedef int (__cdecl* _CoreCrtNonSecureSearchSortCompareFunction)(void const*, void const*);




     
     void* __cdecl bsearch_s(
                                                        void const* _Key,
          void const* _Base,
                                                        rsize_t     _NumOfElements,
                                                        rsize_t     _SizeOfElements,
                            _CoreCrtSecureSearchSortCompareFunction _CompareFunction,
                                                    void*       _Context
        );

     void __cdecl qsort_s(
          void*   _Base,
                                                             rsize_t _NumOfElements,
                                                             rsize_t _SizeOfElements,
                             _CoreCrtSecureSearchSortCompareFunction _CompareFunction,
                                                         void*   _Context
        );

#line 48 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_search.h"



 
 void* __cdecl bsearch(
                                                    void const* _Key,
      void const* _Base,
                                                    size_t      _NumOfElements,
                                                    size_t      _SizeOfElements,
                     _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
    );

 void __cdecl qsort(
      void*  _Base,
                                                         size_t _NumOfElements,
                                                         size_t _SizeOfElements,
                     _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
    );

 
 void* __cdecl _lfind_s(
                                                       void const*   _Key,
      void const*   _Base,
                                                    unsigned int* _NumOfElements,
                                                       size_t        _SizeOfElements,
                             _CoreCrtSecureSearchSortCompareFunction _CompareFunction,
                                                       void*         _Context
    );

 
 void* __cdecl _lfind(
                                                       void const*   _Key,
      void const*   _Base,
                                                    unsigned int* _NumOfElements,
                                                       unsigned int  _SizeOfElements,
                          _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
    );

 
 void* __cdecl _lsearch_s(
                                   void const*   _Key,
      void*         _Base,
                                                             unsigned int* _NumOfElements,
                                                                size_t        _SizeOfElements,
                                      _CoreCrtSecureSearchSortCompareFunction _CompareFunction,
                                                                void*         _Context
    );

 
 void* __cdecl _lsearch(
                                   void const*   _Key,
      void*         _Base,
                                                             unsigned int* _NumOfElements,
                                                                unsigned int  _SizeOfElements,
                                   _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
    );




















































































#line 189 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_search.h"





      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_lfind" ". See online help for details."))
     void* __cdecl lfind(
                                                           void const*   _Key,
          void const*   _Base,
                                                        unsigned int* _NumOfElements,
                                                           unsigned int  _SizeOfElements,
                              _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
        );

      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_lsearch" ". See online help for details."))
     void* __cdecl lsearch(
                                                                void const*   _Key,
          void*         _Base,
                                                             unsigned int* _NumOfElements,
                                                                unsigned int  _SizeOfElements,
                                   _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction
        );

#line 213 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_search.h"



__pragma(pack(pop))

#pragma warning(pop) 
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdlib.h"








#pragma once



#pragma warning(push)
#pragma warning(disable: 4324  4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )


__pragma(pack(push, 8))






#define _MAX_ITOSTR_BASE16_COUNT   (8  + 1)
#define _MAX_ITOSTR_BASE10_COUNT   (1 + 10 + 1)
#define _MAX_ITOSTR_BASE8_COUNT    (11 + 1)
#define _MAX_ITOSTR_BASE2_COUNT    (32 + 1)

#define _MAX_LTOSTR_BASE16_COUNT   (8  + 1)
#define _MAX_LTOSTR_BASE10_COUNT   (1 + 10 + 1)
#define _MAX_LTOSTR_BASE8_COUNT    (11 + 1)
#define _MAX_LTOSTR_BASE2_COUNT    (32 + 1)

#define _MAX_ULTOSTR_BASE16_COUNT  (8  + 1)
#define _MAX_ULTOSTR_BASE10_COUNT  (10 + 1)
#define _MAX_ULTOSTR_BASE8_COUNT   (11 + 1)
#define _MAX_ULTOSTR_BASE2_COUNT   (32 + 1)

#define _MAX_I64TOSTR_BASE16_COUNT (16 + 1)
#define _MAX_I64TOSTR_BASE10_COUNT (1 + 19 + 1)
#define _MAX_I64TOSTR_BASE8_COUNT  (22 + 1)
#define _MAX_I64TOSTR_BASE2_COUNT  (64 + 1)

#define _MAX_U64TOSTR_BASE16_COUNT (16 + 1)
#define _MAX_U64TOSTR_BASE10_COUNT (20 + 1)
#define _MAX_U64TOSTR_BASE8_COUNT  (22 + 1)
#define _MAX_U64TOSTR_BASE2_COUNT  (64 + 1)




     
    
     errno_t __cdecl _itow_s(
                                  int      _Value,
          wchar_t* _Buffer,
                                  size_t   _BufferCount,
                                  int      _Radix
        );

    
#line 67 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdlib.h"

      wchar_t* __cdecl _itow( int _Value,   wchar_t *_Buffer,  int _Radix);
#line 74 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdlib.h"

     
    
     errno_t __cdecl _ltow_s(
                                  long     _Value,
          wchar_t* _Buffer,
                                  size_t   _BufferCount,
                                  int      _Radix
        );

    
#line 90 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdlib.h"

      wchar_t* __cdecl _ltow( long _Value,   wchar_t *_Buffer,  int _Radix);
#line 97 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdlib.h"

    
     errno_t __cdecl _ultow_s(
                                  unsigned long _Value,
          wchar_t*      _Buffer,
                                  size_t        _BufferCount,
                                  int           _Radix
        );

    
#line 112 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdlib.h"

      wchar_t* __cdecl _ultow( unsigned long _Value,   wchar_t *_Buffer,  int _Radix);
#line 119 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdlib.h"

     
     double __cdecl wcstod(
                            wchar_t const* _String,
            wchar_t**      _EndPtr
        );

     
     double __cdecl _wcstod_l(
                            wchar_t const* _String,
            wchar_t**      _EndPtr,
                          _locale_t      _Locale
        );

     
     long __cdecl wcstol(
                            wchar_t const* _String,
            wchar_t**      _EndPtr,
                              int            _Radix
        );

     
     long __cdecl _wcstol_l(
                            wchar_t const* _String,
            wchar_t**      _EndPtr,
                              int            _Radix,
                          _locale_t      _Locale
        );

     
     long long __cdecl wcstoll(
                            wchar_t const* _String,
            wchar_t**      _EndPtr,
                              int            _Radix
        );

     
     long long __cdecl _wcstoll_l(
                            wchar_t const* _String,
            wchar_t**      _EndPtr,
                              int            _Radix,
                          _locale_t      _Locale
        );

     
     unsigned long __cdecl wcstoul(
                            wchar_t const* _String,
            wchar_t**      _EndPtr,
                              int            _Radix
        );

     
     unsigned long __cdecl _wcstoul_l(
                            wchar_t const* _String,
            wchar_t**      _EndPtr,
                              int            _Radix,
                          _locale_t      _Locale
        );

     
     unsigned long long __cdecl wcstoull(
                            wchar_t const* _String,
            wchar_t**      _EndPtr,
                              int            _Radix
        );

     
     unsigned long long __cdecl _wcstoull_l(
                            wchar_t const* _String,
            wchar_t**      _EndPtr,
                              int            _Radix,
                          _locale_t      _Locale
        );

     
     long double __cdecl wcstold(
                            wchar_t const* _String,
            wchar_t**      _EndPtr
        );

     
     long double __cdecl _wcstold_l(
                            wchar_t const* _String,
            wchar_t**      _EndPtr,
                          _locale_t      _Locale
        );

     
     float __cdecl wcstof(
                            wchar_t const* _String,
            wchar_t**      _EndPtr
        );

     
     float __cdecl _wcstof_l(
                            wchar_t const* _String,
            wchar_t**      _EndPtr,
                          _locale_t      _Locale
        );

     
     double __cdecl _wtof(
          wchar_t const* _String
        );

     
     double __cdecl _wtof_l(
            wchar_t const* _String,
          _locale_t      _Locale
        );

     
     int __cdecl _wtoi(
          wchar_t const* _String
        );

     
     int __cdecl _wtoi_l(
            wchar_t const* _String,
          _locale_t      _Locale
        );

     
     long __cdecl _wtol(
          wchar_t const* _String
        );

     
     long __cdecl _wtol_l(
            wchar_t const* _String,
          _locale_t      _Locale
        );

     
     long long __cdecl _wtoll(
          wchar_t const* _String
        );

     
     long long __cdecl _wtoll_l(
            wchar_t const* _String,
          _locale_t      _Locale
        );

    
     errno_t __cdecl _i64tow_s(
                                  __int64  _Value,
          wchar_t* _Buffer,
                                  size_t   _BufferCount,
                                  int      _Radix
        );

    
     wchar_t* __cdecl _i64tow(
                            __int64  _Value,
            wchar_t* _Buffer,
                            int      _Radix
        );

    
     errno_t __cdecl _ui64tow_s(
                                  unsigned __int64 _Value,
          wchar_t*         _Buffer,
                                  size_t           _BufferCount,
                                  int              _Radix
        );

    
     wchar_t* __cdecl _ui64tow(
                            unsigned __int64 _Value,
            wchar_t*         _Buffer,
                            int              _Radix
        );

     
     __int64 __cdecl _wtoi64(
          wchar_t const* _String
        );

     
     __int64 __cdecl _wtoi64_l(
            wchar_t const* _String,
          _locale_t      _Locale
        );

     
     __int64 __cdecl _wcstoi64(
                            wchar_t const* _String,
            wchar_t**      _EndPtr,
                              int            _Radix
        );

     
     __int64 __cdecl _wcstoi64_l(
                            wchar_t const* _String,
            wchar_t**      _EndPtr,
                              int            _Radix,
                          _locale_t      _Locale
        );

     
     unsigned __int64 __cdecl _wcstoui64(
                            wchar_t const* _String,
            wchar_t**      _EndPtr,
                              int            _Radix
        );

     
     unsigned __int64 __cdecl _wcstoui64_l(
                            wchar_t const* _String,
            wchar_t**      _EndPtr,
                              int            _Radix,
                          _locale_t      _Locale
        );

    
    

     
     
     __declspec(allocator) wchar_t* __cdecl _wfullpath(
          wchar_t*       _Buffer,
                                    wchar_t const* _Path,
                                      size_t         _BufferCount
        );

    

    
     errno_t __cdecl _wmakepath_s(
          wchar_t*       _Buffer,
                                  size_t         _BufferCount,
                            wchar_t const* _Drive,
                            wchar_t const* _Dir,
                            wchar_t const* _Filename,
                            wchar_t const* _Ext
        );

    
#line 365 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdlib.h"

  void __cdecl _wmakepath(  wchar_t *_Buffer,  wchar_t const* _Drive,  wchar_t const* _Dir,  wchar_t const* _Filename,  wchar_t const* _Ext);
#line 374 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdlib.h"

     void __cdecl _wperror(
          wchar_t const* _ErrorMessage
        );

    
     void __cdecl _wsplitpath(
                            wchar_t const* _FullPath,
            wchar_t*       _Drive,
            wchar_t*       _Dir,
            wchar_t*       _Filename,
            wchar_t*       _Ext
        );

     errno_t __cdecl _wsplitpath_s(
                                      wchar_t const* _FullPath,
             wchar_t*       _Drive,
                                        size_t         _DriveCount,
               wchar_t*       _Dir,
                                        size_t         _DirCount,
          wchar_t*       _Filename,
                                        size_t         _FilenameCount,
               wchar_t*       _Ext,
                                        size_t         _ExtCount
        );

    
#line 404 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdlib.h"

        
        

        
         errno_t __cdecl _wdupenv_s(
                wchar_t**      _Buffer,
                                                                                size_t*        _BufferCount,
                                                                                   wchar_t const* _VarName
            );

        

          
         wchar_t* __cdecl _wgetenv(
              wchar_t const* _VarName
            );

         
        
         errno_t __cdecl _wgetenv_s(
                                         size_t*        _RequiredCount,
              wchar_t*       _Buffer,
                                          size_t         _BufferCount,
                                        wchar_t const* _VarName
            );

        
#line 438 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdlib.h"

         
         int __cdecl _wputenv(
              wchar_t const* _EnvString
            );

        
         errno_t __cdecl _wputenv_s(
              wchar_t const* _Name,
              wchar_t const* _Value
            );

         errno_t __cdecl _wsearchenv_s(
                                    wchar_t const* _Filename,
                                    wchar_t const* _VarName,
              wchar_t*       _Buffer,
                                      size_t         _BufferCount
            );

        
#line 463 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdlib.h"

          void __cdecl _wsearchenv( wchar_t const* _Filename,  wchar_t const* _VarName,   wchar_t *_ResultPath);
#line 470 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdlib.h"

         int __cdecl _wsystem(
              wchar_t const* _Command
            );

#line 476 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wstdlib.h"



__pragma(pack(pop))

#pragma warning(pop) 
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"
#line 1 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\limits.h"







#pragma once
#define _INC_LIMITS




#pragma warning(push)
#pragma warning(disable:   4514 4820 )

__pragma(pack(push, 8))

#define CHAR_BIT      8
#define SCHAR_MIN   (-128)
#define SCHAR_MAX     127
#define UCHAR_MAX     0xff


    #define CHAR_MIN    SCHAR_MIN
    #define CHAR_MAX    SCHAR_MAX



#line 30 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\limits.h"

#define MB_LEN_MAX    5
#define SHRT_MIN    (-32768)
#define SHRT_MAX      32767
#define USHRT_MAX     0xffff
#define INT_MIN     (-2147483647 - 1)
#define INT_MAX       2147483647
#define UINT_MAX      0xffffffff
#define LONG_MIN    (-2147483647L - 1)
#define LONG_MAX      2147483647L
#define ULONG_MAX     0xffffffffUL
#define LLONG_MAX     9223372036854775807i64
#define LLONG_MIN   (-9223372036854775807i64 - 1)
#define ULLONG_MAX    0xffffffffffffffffui64

#define _I8_MIN     (-127i8 - 1)
#define _I8_MAX       127i8
#define _UI8_MAX      0xffui8

#define _I16_MIN    (-32767i16 - 1)
#define _I16_MAX      32767i16
#define _UI16_MAX     0xffffui16

#define _I32_MIN    (-2147483647i32 - 1)
#define _I32_MAX      2147483647i32
#define _UI32_MAX     0xffffffffui32

#define _I64_MIN    (-9223372036854775807i64 - 1)
#define _I64_MAX      9223372036854775807i64
#define _UI64_MAX     0xffffffffffffffffui64


    
    
        #define SIZE_MAX 0xffffffffffffffffui64
    

#line 68 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\limits.h"
#line 69 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\limits.h"


    #define RSIZE_MAX (SIZE_MAX >> 1)
#line 73 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\limits.h"

__pragma(pack(pop))

#pragma warning(pop) 
#line 17 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

#pragma warning(push)
#pragma warning(disable: 4324  4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )


__pragma(pack(push, 8))




    #define _countof __crt_countof
#line 29 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"




#define __max(a,b) (((a) > (b)) ? (a) : (b))
#define __min(a,b) (((a) < (b)) ? (a) : (b))



 void __cdecl _swab(
        char* _Buf1,
        char* _Buf2,
                                                                  int   _SizeInBytes
    );









#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1


     __declspec(noreturn) void __cdecl exit(  int _Code);
     __declspec(noreturn) void __cdecl _exit(  int _Code);
     __declspec(noreturn) void __cdecl _Exit(  int _Code);
     __declspec(noreturn) void __cdecl quick_exit(  int _Code);
     __declspec(noreturn) void __cdecl abort(void);
#line 62 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"


#define _WRITE_ABORT_MSG  0x1 // debug only, has no effect in release
#define _CALL_REPORTFAULT 0x2

 unsigned int __cdecl _set_abort_behavior(
      unsigned int _Flags,
      unsigned int _Mask
    );




    #define _CRT_ONEXIT_T_DEFINED


    typedef int (__cdecl* _onexit_t)(void);
    


#line 82 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"


    
    #define onexit_t _onexit_t
#line 87 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

























































    int       __cdecl atexit(void (__cdecl*)(void));
    _onexit_t __cdecl _onexit(  _onexit_t _Func);
#line 147 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

int __cdecl at_quick_exit(void (__cdecl*)(void));









    
    typedef void (__cdecl* _purecall_handler)(void);

    
    typedef void (__cdecl* _invalid_parameter_handler)(
        wchar_t const*,
        wchar_t const*,
        wchar_t const*,
        unsigned int,
        uintptr_t
        );

    
     _purecall_handler __cdecl _set_purecall_handler(
          _purecall_handler _Handler
        );

     _purecall_handler __cdecl _get_purecall_handler(void);

    
     _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(
          _invalid_parameter_handler _Handler
        );

     _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void);

     _invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(
          _invalid_parameter_handler _Handler
        );

     _invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(void);
#line 190 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"












#line 203 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"




#define _OUT_TO_DEFAULT 0
#define _OUT_TO_STDERR  1
#define _OUT_TO_MSGBOX  2
#define _REPORT_ERRMODE 3

  int __cdecl _set_error_mode(  int _Mode);




     int* __cdecl _errno(void);
    #define errno (*_errno())

     errno_t __cdecl _set_errno(  int _Value);
     errno_t __cdecl _get_errno(  int* _Value);

     unsigned long* __cdecl __doserrno(void);
    #define _doserrno (*__doserrno())

     errno_t __cdecl _set_doserrno(  unsigned long _Value);
     errno_t __cdecl _get_doserrno(  unsigned long * _Value);

    
      char** __cdecl __sys_errlist(void);
    #define _sys_errlist (__sys_errlist())

      int * __cdecl __sys_nerr(void);
    #define _sys_nerr (*__sys_nerr())

     void __cdecl perror(  char const* _ErrMsg);
#line 238 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"




  char**    __cdecl __p__pgmptr (void);
  wchar_t** __cdecl __p__wpgmptr(void);
  int*      __cdecl __p__fmode  (void);








    #define _pgmptr  (*__p__pgmptr ())
    #define _wpgmptr (*__p__wpgmptr())
    #define _fmode   (*__p__fmode  ())
#line 257 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

 
 errno_t __cdecl _get_pgmptr (  char**    _Value);

 
 errno_t __cdecl _get_wpgmptr(  wchar_t** _Value);

 errno_t __cdecl _set_fmode  (               int       _Mode );

 errno_t __cdecl _get_fmode  (              int*      _PMode);








typedef struct _div_t
{
    int quot;
    int rem;
} div_t;

typedef struct _ldiv_t
{
    long quot;
    long rem;
} ldiv_t;

typedef struct _lldiv_t
{
    long long quot;
    long long rem;
} lldiv_t;

  int       __cdecl abs   (  int       _Number);
  long      __cdecl labs  (  long      _Number);
  long long __cdecl llabs (  long long _Number);
  __int64   __cdecl _abs64(  __int64   _Number);

  unsigned short   __cdecl _byteswap_ushort(  unsigned short   _Number);
  unsigned long    __cdecl _byteswap_ulong (  unsigned long    _Number);
  unsigned __int64 __cdecl _byteswap_uint64(  unsigned __int64 _Number);

   div_t   __cdecl div  (  int       _Numerator,   int       _Denominator);
   ldiv_t  __cdecl ldiv (  long      _Numerator,   long      _Denominator);
   lldiv_t __cdecl lldiv(  long long _Numerator,   long long _Denominator);



#pragma warning(push)
#pragma warning(disable: 6540)

unsigned int __cdecl _rotl(
      unsigned int _Value,
      int          _Shift
    );

 
unsigned long __cdecl _lrotl(
      unsigned long _Value,
      int           _Shift
    );

unsigned __int64 __cdecl _rotl64(
      unsigned __int64 _Value,
      int              _Shift
    );

unsigned int __cdecl _rotr(
      unsigned int _Value,
      int          _Shift
    );

 
unsigned long __cdecl _lrotr(
      unsigned long _Value,
      int           _Shift
    );

unsigned __int64 __cdecl _rotr64(
      unsigned __int64 _Value,
      int              _Shift
    );

#pragma warning(pop)




#define RAND_MAX 0x7fff

 void __cdecl srand(  unsigned int _Seed);

   int __cdecl rand(void);



#line 357 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

































#define _CRT_DOUBLE_DEC




    #pragma pack(push, 4)
    typedef struct
    {
        unsigned char ld[10];
    } _LDOUBLE;
    #pragma pack(pop)

    #define _PTR_LD(x) ((unsigned char*)(&(x)->ld))











#line 414 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

typedef struct
{
    double x;
} _CRT_DOUBLE;

typedef struct
{
    float f;
} _CRT_FLOAT;





typedef struct
{
    long double x;
} _LONGDOUBLE;



#pragma pack(push, 4)
typedef struct
{
    unsigned char ld12[12];
} _LDBL12;
#pragma pack(pop)








                      double    __cdecl atof   (  char const* _String);
    int       __cdecl atoi   (  char const* _String);
                      long      __cdecl atol   (  char const* _String);
                      long long __cdecl atoll  (  char const* _String);
                      __int64   __cdecl _atoi64(  char const* _String);

   double    __cdecl _atof_l  (  char const* _String,   _locale_t _Locale);
   int       __cdecl _atoi_l  (  char const* _String,   _locale_t _Locale);
   long      __cdecl _atol_l  (  char const* _String,   _locale_t _Locale);
   long long __cdecl _atoll_l (  char const* _String,   _locale_t _Locale);
   __int64   __cdecl _atoi64_l(  char const* _String,   _locale_t _Locale);

   int __cdecl _atoflt (  _CRT_FLOAT*  _Result,   char const* _String);
   int __cdecl _atodbl (  _CRT_DOUBLE* _Result,   char*       _String);
   int __cdecl _atoldbl(  _LDOUBLE*    _Result,   char*       _String);

 
 int __cdecl _atoflt_l(
         _CRT_FLOAT* _Result,
        char const* _String,
      _locale_t   _Locale
    );

 
 int __cdecl _atodbl_l(
         _CRT_DOUBLE* _Result,
        char*        _String,
      _locale_t    _Locale
    );


 
 int __cdecl _atoldbl_l(
         _LDOUBLE* _Result,
        char*     _String,
      _locale_t _Locale
    );

 
 float __cdecl strtof(
                        char const* _String,
        char**      _EndPtr
    );

 
 float __cdecl _strtof_l(
                        char const* _String,
        char**      _EndPtr,
                      _locale_t   _Locale
    );

 
 double __cdecl strtod(
                        char const* _String,
        char**      _EndPtr
    );

 
 double __cdecl _strtod_l(
                        char const* _String,
        char**      _EndPtr,
                      _locale_t   _Locale
    );

 
 long double __cdecl strtold(
                        char const* _String,
        char**      _EndPtr
    );

 
 long double __cdecl _strtold_l(
                        char const* _String,
        char**      _EndPtr,
                      _locale_t   _Locale
    );

 
 long __cdecl strtol(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );

 
 long __cdecl _strtol_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );

 
 long long __cdecl strtoll(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );

 
 long long __cdecl _strtoll_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );

 
 unsigned long __cdecl strtoul(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );

 
 unsigned long __cdecl _strtoul_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );

 
 unsigned long long __cdecl strtoull(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );

 
 unsigned long long __cdecl _strtoull_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );

 
 __int64 __cdecl _strtoi64(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );

 
 __int64 __cdecl _strtoi64_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );

 
 unsigned __int64 __cdecl _strtoui64(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix
    );

 
 unsigned __int64 __cdecl _strtoui64_l(
                        char const* _String,
        char**      _EndPtr,
                          int         _Radix,
                      _locale_t   _Locale
    );








 

 errno_t __cdecl _itoa_s(
                              int    _Value,
      char*  _Buffer,
                              size_t _BufferCount,
                              int    _Radix
    );


#line 640 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

  char* __cdecl _itoa( int _Value,   char *_Buffer,  int _Radix);
#line 647 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

 

 errno_t __cdecl _ltoa_s(
                              long   _Value,
      char*  _Buffer,
                              size_t _BufferCount,
                              int    _Radix
    );


#line 663 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

  char* __cdecl _ltoa( long _Value,   char *_Buffer,  int _Radix);
#line 670 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

 

 errno_t __cdecl _ultoa_s(
                              unsigned long _Value,
      char*         _Buffer,
                              size_t        _BufferCount,
                              int           _Radix
    );


#line 686 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

  char* __cdecl _ultoa( unsigned long _Value,   char *_Buffer,  int _Radix);
#line 693 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

 

 errno_t __cdecl _i64toa_s(
                              __int64 _Value,
      char*   _Buffer,
                              size_t  _BufferCount,
                              int     _Radix
    );

 

 char* __cdecl _i64toa(
                        __int64 _Value,
        char*   _Buffer,
                        int     _Radix
    );

 

 errno_t __cdecl _ui64toa_s(
                              unsigned __int64 _Value,
      char*            _Buffer,
                              size_t           _BufferCount,
                              int              _Radix
    );


 char* __cdecl _ui64toa(
                        unsigned __int64 _Value,
        char*            _Buffer,
                        int              _Radix
    );











#define _CVTBUFSIZE (309 + 40) // # of digits in max. dp value + slop

 

 errno_t __cdecl _ecvt_s(
      char* _Buffer,
       size_t                       _BufferCount,
       double                       _Value,
       int                          _DigitCount,
      int*                         _PtDec,
      int*                         _PtSign
    );


#line 758 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

  
 char* __cdecl _ecvt(
       double _Value,
       int    _DigitCount,
      int*   _PtDec,
      int*   _PtSign
    );

 

 errno_t __cdecl _fcvt_s(
      char*  _Buffer,
                              size_t _BufferCount,
                              double _Value,
                              int    _FractionalDigitCount,
                             int*   _PtDec,
                             int*   _PtSign
    );


#line 787 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

 
  
 char* __cdecl _fcvt(
       double _Value,
       int    _FractionalDigitCount,
      int*   _PtDec,
      int*   _PtSign
    );

 
 errno_t __cdecl _gcvt_s(
      char*  _Buffer,
                              size_t _BufferCount,
                              double _Value,
                              int    _DigitCount
    );


#line 812 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"


 char* __cdecl _gcvt(
                        double _Value,
                        int    _DigitCount,
        char*  _Buffer
    );











    

#line 833 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"
        #define MB_CUR_MAX ___mb_cur_max_func()
    #line 835 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

    


        #define __mb_cur_max (___mb_cur_max_func())
    #line 841 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

     
     int __cdecl ___mb_cur_max_func(void);

     
     int __cdecl ___mb_cur_max_l_func(_locale_t _Locale);
#line 848 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"



 
 int __cdecl mblen(
        char const* _Ch,
                                             size_t      _MaxCount
    );

 
 int __cdecl _mblen_l(
        char const* _Ch,
                                             size_t      _MaxCount,
                                         _locale_t   _Locale
    );

 
 
 size_t __cdecl _mbstrlen(
      char const* _String
    );

 
 
 size_t __cdecl _mbstrlen_l(
        char const* _String,
      _locale_t   _Locale
    );

 
 
 size_t __cdecl _mbstrnlen(
      char const* _String,
        size_t      _MaxCount
    );

 
 
 size_t __cdecl _mbstrnlen_l(
        char const* _String,
          size_t      _MaxCount,
      _locale_t   _Locale
    );

 
 int __cdecl mbtowc(
                      wchar_t*    _DstCh,
      char const* _SrcCh,
                                      size_t      _SrcSizeInBytes
    );

 
 int __cdecl _mbtowc_l(
                      wchar_t*    _DstCh,
      char const* _SrcCh,
                                      size_t      _SrcSizeInBytes,
                                  _locale_t   _Locale
    );


 errno_t __cdecl mbstowcs_s(
                                                      size_t*     _PtNumOfCharConverted,
      wchar_t*    _DstBuf,
                                                           size_t      _SizeInWords,
                                     char const* _SrcBuf,
                                                           size_t      _MaxCount
    );


#line 923 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

  size_t __cdecl mbstowcs( wchar_t *_Dest,  char const* _Source,  size_t _MaxCount);
#line 930 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"


 errno_t __cdecl _mbstowcs_s_l(
                                                      size_t*     _PtNumOfCharConverted,
      wchar_t*    _DstBuf,
                                                           size_t      _SizeInWords,
                                     char const* _SrcBuf,
                                                           size_t      _MaxCount,
                                                       _locale_t   _Locale
    );


#line 949 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

  size_t __cdecl _mbstowcs_l(  wchar_t *_Dest,   char const* _Source,   size_t _MaxCount,   _locale_t _Locale);
#line 958 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"





 int __cdecl wctomb(
      char*   _MbCh,
                                wchar_t _WCh
    );


 int __cdecl _wctomb_l(
        char*     _MbCh,
                          wchar_t   _WCh,
                      _locale_t _Locale
    );



    
     errno_t __cdecl wctomb_s(
                                                         int*    _SizeConverted,
          char*   _MbCh,
                                                              rsize_t _SizeInBytes,
                                                              wchar_t _WCh
        );

#line 986 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"


 errno_t __cdecl _wctomb_s_l(
                             int*     _SizeConverted,
      char*     _MbCh,
                                  size_t    _SizeInBytes,
                                  wchar_t   _WCh,
                              _locale_t _Locale);


 errno_t __cdecl wcstombs_s(
                                                               size_t*        _PtNumOfCharConverted,
      char*          _Dst,
                                                                    size_t         _DstSizeInBytes,
                                                                  wchar_t const* _Src,
                                                                    size_t         _MaxCountInBytes
    );


#line 1011 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

  size_t __cdecl wcstombs( char *_Dest,  wchar_t const* _Source,  size_t _MaxCount);
#line 1018 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"


 errno_t __cdecl _wcstombs_s_l(
                                                               size_t*        _PtNumOfCharConverted,
      char*          _Dst,
                                                                    size_t         _DstSizeInBytes,
                                                                  wchar_t const* _Src,
                                                                    size_t         _MaxCountInBytes,
                                                                _locale_t      _Locale
    );


#line 1037 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

  size_t __cdecl _wcstombs_l(  char *_Dest,   wchar_t const* _Source,   size_t _MaxCount,   _locale_t _Locale);
#line 1046 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"










#define _MAX_PATH   260 // max. length of full pathname
#define _MAX_DRIVE  3   // max. length of drive component
#define _MAX_DIR    256 // max. length of path component
#define _MAX_FNAME  256 // max. length of file name component
#define _MAX_EXT    256 // max. length of extension component





 
 
 __declspec(allocator) char* __cdecl _fullpath(
      char*       _Buffer,
                                char const* _Path,
                                  size_t      _BufferCount
    );




 errno_t __cdecl _makepath_s(
      char*       _Buffer,
                              size_t      _BufferCount,
                        char const* _Drive,
                        char const* _Dir,
                        char const* _Filename,
                        char const* _Ext
    );


#line 1094 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

  void __cdecl _makepath(  char *_Buffer,  char const* _Drive,  char const* _Dir,  char const* _Filename,  char const* _Ext);
#line 1103 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"


 void __cdecl _splitpath(
                        char const* _FullPath,
        char*       _Drive,
        char*       _Dir,
        char*       _Filename,
        char*       _Ext
    );


 errno_t __cdecl _splitpath_s(
                                  char const* _FullPath,
         char*       _Drive,
                                    size_t      _DriveCount,
           char*       _Dir,
                                    size_t      _DirCount,
      char*       _Filename,
                                    size_t      _FilenameCount,
           char*       _Ext,
                                    size_t      _ExtCount
    );






 
 errno_t __cdecl getenv_s(
                                 size_t*     _RequiredCount,
      char*       _Buffer,
                                  rsize_t     _BufferCount,
                                char const* _VarName
    );

#line 1140 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"




 int*       __cdecl __p___argc (void);
 char***    __cdecl __p___argv (void);
 wchar_t*** __cdecl __p___wargv(void);






    #define __argc  (*__p___argc())  // Pointer to number of command line arguments
    #define __argv  (*__p___argv())  // Pointer to table of narrow command line arguments
    #define __wargv (*__p___wargv()) // Pointer to table of wide command line arguments
#line 1157 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

 char***    __cdecl __p__environ (void);
 wchar_t*** __cdecl __p__wenviron(void);


    #define _CRT_V12_LEGACY_FUNCTIONALITY

#line 1164 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"







    #define _environ  (*__p__environ())  // Pointer to narrow environment table
    #define _wenviron (*__p__wenviron()) // Pointer to wide environment table
#line 1174 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"




#define _MAX_ENV 32767




      
     char* __cdecl getenv(
          char const* _VarName
        );

    
#line 1194 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

    


#line 1199 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

    
     errno_t __cdecl _dupenv_s(
            char**      _Buffer,
                                                                            size_t*     _BufferCount,
                                                                               char const* _VarName
        );

    

#line 1210 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

     int __cdecl system(
          char const* _Command
        );

    
    
    #pragma warning(push)
    #pragma warning(disable: 6540)

     
     int __cdecl _putenv(
          char const* _EnvString
        );

    
     errno_t __cdecl _putenv_s(
          char const* _Name,
          char const* _Value
        );

    #pragma warning(pop)

     errno_t __cdecl _searchenv_s(
                                char const* _Filename,
                                char const* _VarName,
          char*       _Buffer,
                                  size_t      _BufferCount
        );

    
#line 1246 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

      void __cdecl _searchenv( char const* _Filename,  char const* _VarName,   char *_Buffer);
#line 1253 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

    
    __declspec(deprecated("This function or variable has been superceded by newer library " "or operating system functionality. Consider using " "SetErrorMode" " " "instead. See online help for details."))
     void __cdecl _seterrormode(
          int _Mode
        );

    __declspec(deprecated("This function or variable has been superceded by newer library " "or operating system functionality. Consider using " "Beep" " " "instead. See online help for details."))
     void __cdecl _beep(
          unsigned _Frequency,
          unsigned _Duration
        );

    __declspec(deprecated("This function or variable has been superceded by newer library " "or operating system functionality. Consider using " "Sleep" " " "instead. See online help for details."))
     void __cdecl _sleep(
          unsigned long _Duration
        );

#line 1272 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"









    
        #define max(a,b) (((a) > (b)) ? (a) : (b))
        #define min(a,b) (((a) < (b)) ? (a) : (b))
    #line 1285 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"

    #define sys_errlist _sys_errlist
    #define sys_nerr    _sys_nerr

    #pragma warning(push)
    #pragma warning(disable: 4141) 

      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_ecvt" ". See online help for details.")) 
     char* __cdecl ecvt(
           double _Value,
           int    _DigitCount,
          int*   _PtDec,
          int*   _PtSign
        );

      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fcvt" ". See online help for details.")) 
     char* __cdecl fcvt(
           double _Value,
           int    _FractionalDigitCount,
          int*   _PtDec,
          int*   _PtSign
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_gcvt" ". See online help for details.")) 
     char* __cdecl gcvt(
                            double _Value,
                            int    _DigitCount,
            char*  _DstBuf
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_itoa" ". See online help for details.")) 
     char* __cdecl itoa(
                            int   _Value,
            char* _Buffer,
                            int   _Radix
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_ltoa" ". See online help for details.")) 
     char* __cdecl ltoa(
                            long  _Value,
            char* _Buffer,
                            int   _Radix
        );


    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_swab" ". See online help for details."))
     void __cdecl swab(
          char* _Buf1,
          char* _Buf2,
                                     int   _SizeInBytes
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_ultoa" ". See online help for details.")) 
     char* __cdecl ultoa(
                            unsigned long _Value,
            char*         _Buffer,
                            int           _Radix
        );

    #define environ _environ

      __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_putenv" ". See online help for details."))
     int __cdecl putenv(
          char const* _EnvString
        );

    #pragma warning(pop)

    _onexit_t __cdecl onexit(  _onexit_t _Func);

#line 1356 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"



__pragma(pack(pop))

#pragma warning(pop) 
#line 1363 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\stdlib.h"
#line 6 "C:/opt/grass/build/output/lib/grass85/include/grass/arraystats.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\math.h"










#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"







#pragma once

#define _INC_MATH




#pragma warning(push)
#pragma warning(disable: 4324  4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )


__pragma(pack(push, 8))


    
    
    struct _exception
    {
        int    type;   
        char*  name;   
        double arg1;   
        double arg2;   
        double retval; 
    };

    
    
    
        #define _COMPLEX_DEFINED


        struct _complex
        {
            double x, y; 
        };

        
            
            #define complex _complex
        #line 46 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"
    #line 47 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"
#line 48 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"










#line 59 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"
    typedef float  float_t;
    typedef double double_t;
#line 62 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"




#define _DOMAIN     1   // argument domain error
#define _SING       2   // argument singularity
#define _OVERFLOW   3   // overflow range error
#define _UNDERFLOW  4   // underflow range error
#define _TLOSS      5   // total loss of precision
#define _PLOSS      6   // partial loss of precision





    
        extern double const _HUGE;
    

#line 82 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"
#line 83 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"




#define _UCRT_HAS_BUILTIN(x) 0
#line 89 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"


    #define _HUGE_ENUF  1e+300  // _HUGE_ENUF*_HUGE_ENUF must overflow
#line 93 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"

#define INFINITY   ((float)(_HUGE_ENUF))


#line 98 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"
#define HUGE_VAL   ((double)INFINITY)
#define HUGE_VALF  ((float)INFINITY)
#define HUGE_VALL  ((long double)INFINITY)


#define _UCRT_NAN (-(float)(((float)(_HUGE_ENUF * _HUGE_ENUF)) * 0.0F))


#line 107 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"




#define NAN _UCRT_NAN
#line 113 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"

#define _DENORM    (-2)
#define _FINITE    (-1)
#define _INFCODE   1
#define _NANCODE   2

#define FP_INFINITE  _INFCODE
#define FP_NAN       _NANCODE
#define FP_NORMAL    _FINITE
#define FP_SUBNORMAL _DENORM
#define FP_ZERO      0

#define _C2          1  // 0 if not 2's complement
#define FP_ILOGB0   (-0x7fffffff - _C2)
#define FP_ILOGBNAN 0x7fffffff

#define MATH_ERRNO        1
#define MATH_ERREXCEPT    2
#define math_errhandling  (MATH_ERRNO | MATH_ERREXCEPT)


#define _FE_DIVBYZERO 0x04
#define _FE_INEXACT   0x20
#define _FE_INVALID   0x01
#define _FE_OVERFLOW  0x08
#define _FE_UNDERFLOW 0x10

#define _D0_C  3 // little-endian, small long doubles
#define _D1_C  2
#define _D2_C  1
#define _D3_C  0

#define _DBIAS 0x3fe
#define _DOFF  4

#define _F0_C  1 // little-endian
#define _F1_C  0

#define _FBIAS 0x7e
#define _FOFF  7
#define _FRND  1

#define _L0_C  3 // little-endian, 64-bit long doubles
#define _L1_C  2
#define _L2_C  1
#define _L3_C  0

#define _LBIAS 0x3fe
#define _LOFF  4


#define _DFRAC  ((unsigned short)((1 << _DOFF) - 1))
#define _DMASK  ((unsigned short)(0x7fff & ~_DFRAC))
#define _DMAX   ((unsigned short)((1 << (15 - _DOFF)) - 1))
#define _DSIGN  ((unsigned short)0x8000)


#define _FFRAC  ((unsigned short)((1 << _FOFF) - 1))
#define _FMASK  ((unsigned short)(0x7fff & ~_FFRAC))
#define _FMAX   ((unsigned short)((1 << (15 - _FOFF)) - 1))
#define _FSIGN  ((unsigned short)0x8000)


#define _LFRAC  ((unsigned short)(-1))
#define _LMASK  ((unsigned short)0x7fff)
#define _LMAX   ((unsigned short)0x7fff)
#define _LSIGN  ((unsigned short)0x8000)

#define _DHUGE_EXP (int)(_DMAX * 900L / 1000)
#define _FHUGE_EXP (int)(_FMAX * 900L / 1000)
#define _LHUGE_EXP (int)(_LMAX * 900L / 1000)

#define _DSIGN_C(_Val)  (((_double_val *)(char*)&(_Val))->_Sh[_D0_C] & _DSIGN)
#define _FSIGN_C(_Val)  (((_float_val  *)(char*)&(_Val))->_Sh[_F0_C] & _FSIGN)
#define _LSIGN_C(_Val)  (((_ldouble_val*)(char*)&(_Val))->_Sh[_L0_C] & _LSIGN)

void __cdecl _fperrraise(  int _Except);

   short __cdecl _dclass(  double _X);
   short __cdecl _ldclass(  long double _X);
   short __cdecl _fdclass(  float _X);

   int __cdecl _dsign(  double _X);
   int __cdecl _ldsign(  long double _X);
   int __cdecl _fdsign(  float _X);

   int __cdecl _dpcomp(  double _X,   double _Y);
   int __cdecl _ldpcomp(  long double _X,   long double _Y);
   int __cdecl _fdpcomp(  float _X,   float _Y);

   short __cdecl _dtest(  double* _Px);
   short __cdecl _ldtest(  long double* _Px);
   short __cdecl _fdtest(  float* _Px);

 short __cdecl _d_int(  double* _Px,   short _Xexp);
 short __cdecl _ld_int(  long double* _Px,   short _Xexp);
 short __cdecl _fd_int(  float* _Px,   short _Xexp);

 short __cdecl _dscale(  double* _Px,   long _Lexp);
 short __cdecl _ldscale(  long double* _Px,   long _Lexp);
 short __cdecl _fdscale(  float* _Px,   long _Lexp);

 short __cdecl _dunscale(  short* _Pex,   double* _Px);
 short __cdecl _ldunscale(  short* _Pex,   long double* _Px);
 short __cdecl _fdunscale(  short* _Pex,   float* _Px);

   short __cdecl _dexp(  double* _Px,   double _Y,   long _Eoff);
   short __cdecl _ldexp(  long double* _Px,   long double _Y,   long _Eoff);
   short __cdecl _fdexp(  float* _Px,   float _Y,   long _Eoff);

   short __cdecl _dnorm(  unsigned short* _Ps);
   short __cdecl _fdnorm(  unsigned short* _Ps);

   double __cdecl _dpoly(  double _X,   double const* _Tab,   int _N);
   long double __cdecl _ldpoly(  long double _X,   long double const* _Tab,   int _N);
   float __cdecl _fdpoly(  float _X,   float const* _Tab,   int _N);

   double __cdecl _dlog(  double _X,   int _Baseflag);
   long double __cdecl _ldlog(  long double _X,   int _Baseflag);
   float __cdecl _fdlog(  float _X,   int _Baseflag);

   double __cdecl _dsin(  double _X,   unsigned int _Qoff);
   long double __cdecl _ldsin(  long double _X,   unsigned int _Qoff);
   float __cdecl _fdsin(  float _X,   unsigned int _Qoff);


typedef union
{   
    unsigned short _Sh[4];
    double _Val;
} _double_val;


typedef union
{   
    unsigned short _Sh[2];
    float _Val;
} _float_val;


typedef union
{   
    unsigned short _Sh[4];
    long double _Val;
} _ldouble_val;

typedef union
{   
    unsigned short _Word[4];
    float _Float;
    double _Double;
    long double _Long_double;
} _float_const;

extern const _float_const _Denorm_C,  _Inf_C,  _Nan_C,  _Snan_C, _Hugeval_C;
extern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C;
extern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C;

extern const _float_const _Eps_C,  _Rteps_C;
extern const _float_const _FEps_C, _FRteps_C;
extern const _float_const _LEps_C, _LRteps_C;

extern const double      _Zero_C,  _Xbig_C;
extern const float       _FZero_C, _FXbig_C;
extern const long double _LZero_C, _LXbig_C;

#define _FP_LT  1
#define _FP_EQ  2
#define _FP_GT  4



    #define _CLASS_ARG(_Val)                                  __pragma(warning(suppress:6334))(sizeof ((_Val) + (float)0) == sizeof (float) ? 'f' : sizeof ((_Val) + (double)0) == sizeof (double) ? 'd' : 'l')
    #define _CLASSIFY(_Val, _FFunc, _DFunc, _LDFunc)          (_CLASS_ARG(_Val) == 'f' ? _FFunc((float)(_Val)) : _CLASS_ARG(_Val) == 'd' ? _DFunc((double)(_Val)) : _LDFunc((long double)(_Val)))
    #define _CLASSIFY2(_Val1, _Val2, _FFunc, _DFunc, _LDFunc) (_CLASS_ARG((_Val1) + (_Val2)) == 'f' ? _FFunc((float)(_Val1), (float)(_Val2)) : _CLASS_ARG((_Val1) + (_Val2)) == 'd' ? _DFunc((double)(_Val1), (double)(_Val2)) : _LDFunc((long double)(_Val1), (long double)(_Val2)))



#line 292 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"
    #define fpclassify(_Val)      (_CLASSIFY(_Val, _fdclass, _dclass, _ldclass))
#line 294 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"
    #define _FPCOMPARE(_Val1, _Val2) (_CLASSIFY2(_Val1, _Val2, _fdpcomp, _dpcomp, _ldpcomp))

    #define isfinite(_Val)      (fpclassify(_Val) <= 0)
    #define isinf(_Val)         (fpclassify(_Val) == FP_INFINITE)
    #define isnan(_Val)         (fpclassify(_Val) == FP_NAN)
    #define isnormal(_Val)      (fpclassify(_Val) == FP_NORMAL)
    #define signbit(_Val)       (_CLASSIFY(_Val, _fdsign, _dsign, _ldsign))

    #define isgreater(x, y)      ((_FPCOMPARE(x, y) & _FP_GT) != 0)
    #define isgreaterequal(x, y) ((_FPCOMPARE(x, y) & (_FP_EQ | _FP_GT)) != 0)
    #define isless(x, y)         ((_FPCOMPARE(x, y) & _FP_LT) != 0)
    #define islessequal(x, y)    ((_FPCOMPARE(x, y) & (_FP_LT | _FP_EQ)) != 0)
    #define islessgreater(x, y)  ((_FPCOMPARE(x, y) & (_FP_LT | _FP_GT)) != 0)
    #define isunordered(x, y)    (_FPCOMPARE(x, y) == 0)


























































































































































































#line 495 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"





      int       __cdecl abs(  int _X);
      long      __cdecl labs(  long _X);
      long long __cdecl llabs(  long long _X);

      double __cdecl acos(  double _X);
      double __cdecl asin(  double _X);
      double __cdecl atan(  double _X);
      double __cdecl atan2(  double _Y,   double _X);

      double __cdecl cos(  double _X);
      double __cdecl cosh(  double _X);
      double __cdecl exp(  double _X);
       double __cdecl fabs(  double _X);
      double __cdecl fmod(  double _X,   double _Y);
      double __cdecl log(  double _X);
      double __cdecl log10(  double _X);
      double __cdecl pow(  double _X,   double _Y);
      double __cdecl sin(  double _X);
      double __cdecl sinh(  double _X);
       double __cdecl sqrt(  double _X);
      double __cdecl tan(  double _X);
      double __cdecl tanh(  double _X);

       double    __cdecl acosh(  double _X);
       double    __cdecl asinh(  double _X);
       double    __cdecl atanh(  double _X);
        double    __cdecl atof(  char const* _String);
        double    __cdecl _atof_l(  char const* _String,   _locale_t _Locale);
       double    __cdecl _cabs(  struct _complex _Complex_value);
       double    __cdecl cbrt(  double _X);
       double    __cdecl ceil(  double _X);
       double    __cdecl _chgsign(  double _X);
       double    __cdecl copysign(  double _Number,   double _Sign);
       double    __cdecl _copysign(  double _Number,   double _Sign);
       double    __cdecl erf(  double _X);
       double    __cdecl erfc(  double _X);
       double    __cdecl exp2(  double _X);
       double    __cdecl expm1(  double _X);
       double    __cdecl fdim(  double _X,   double _Y);
       double    __cdecl floor(  double _X);
       double    __cdecl fma(  double _X,   double _Y,   double _Z);
       double    __cdecl fmax(  double _X,   double _Y);
       double    __cdecl fmin(  double _X,   double _Y);
       double    __cdecl frexp(  double _X,   int* _Y);
       double    __cdecl hypot(  double _X,   double _Y);
       double    __cdecl _hypot(  double _X,   double _Y);
       int       __cdecl ilogb(  double _X);
       double    __cdecl ldexp(  double _X,   int _Y);
       double    __cdecl lgamma(  double _X);
       long long __cdecl llrint(  double _X);
       long long __cdecl llround(  double _X);
       double    __cdecl log1p(  double _X);
       double    __cdecl log2(  double _X);
       double    __cdecl logb(  double _X);
       long      __cdecl lrint(  double _X);
       long      __cdecl lround(  double _X);

    int __cdecl _matherr(  struct _exception* _Except);

       double __cdecl modf(  double _X,   double* _Y);
       double __cdecl nan(  char const* _X);
       double __cdecl nearbyint(  double _X);
       double __cdecl nextafter(  double _X,   double _Y);
       double __cdecl nexttoward(  double _X,   long double _Y);
       double __cdecl remainder(  double _X,   double _Y);
       double __cdecl remquo(  double _X,   double _Y,   int* _Z);
       double __cdecl rint(  double _X);
       double __cdecl round(  double _X);
       double __cdecl scalbln(  double _X,   long _Y);
       double __cdecl scalbn(  double _X,   int _Y);
       double __cdecl tgamma(  double _X);
       double __cdecl trunc(  double _X);
       double __cdecl _j0(  double _X );
       double __cdecl _j1(  double _X );
       double __cdecl _jn(int _X,   double _Y);
       double __cdecl _y0(  double _X);
       double __cdecl _y1(  double _X);
       double __cdecl _yn(  int _X,   double _Y);

       float     __cdecl acoshf(  float _X);
       float     __cdecl asinhf(  float _X);
       float     __cdecl atanhf(  float _X);
       float     __cdecl cbrtf(  float _X);
       float     __cdecl _chgsignf(  float _X);
       float     __cdecl copysignf(  float _Number,   float _Sign);
       float     __cdecl _copysignf(  float _Number,   float _Sign);
       float     __cdecl erff(  float _X);
       float     __cdecl erfcf(  float _X);
       float     __cdecl expm1f(  float _X);
       float     __cdecl exp2f(  float _X);
       float     __cdecl fdimf(  float _X,   float _Y);
       float     __cdecl fmaf(  float _X,   float _Y,   float _Z);
       float     __cdecl fmaxf(  float _X,   float _Y);
       float     __cdecl fminf(  float _X,   float _Y);
       float     __cdecl _hypotf(  float _X,   float _Y);
       int       __cdecl ilogbf(  float _X);
       float     __cdecl lgammaf(  float _X);
       long long __cdecl llrintf(  float _X);
       long long __cdecl llroundf(  float _X);
       float     __cdecl log1pf(  float _X);
       float     __cdecl log2f(  float _X);
       float     __cdecl logbf(  float _X);
       long      __cdecl lrintf(  float _X);
       long      __cdecl lroundf(  float _X);
       float     __cdecl nanf(  char const* _X);
       float     __cdecl nearbyintf(  float _X);
       float     __cdecl nextafterf(  float _X,   float _Y);
       float     __cdecl nexttowardf(  float _X,   long double _Y);
       float     __cdecl remainderf(  float _X,   float _Y);
       float     __cdecl remquof(  float _X,   float _Y,   int* _Z);
       float     __cdecl rintf(  float _X);
       float     __cdecl roundf(  float _X);
       float     __cdecl scalblnf(  float _X,   long _Y);
       float     __cdecl scalbnf(  float _X,   int _Y);
       float     __cdecl tgammaf(  float _X);
       float     __cdecl truncf(  float _X);

    



#line 622 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"

    

           float __cdecl _logbf(  float _X);
           float __cdecl _nextafterf(  float _X,   float _Y);
           int   __cdecl _finitef(  float _X);
           int   __cdecl _isnanf(  float _X);
           int   __cdecl _fpclassf(  float _X);

           int   __cdecl _set_FMA3_enable(  int _Flag);
           int   __cdecl _get_FMA3_enable(void);

    




#line 640 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"



    

           float __cdecl acosf(  float _X);
           float __cdecl asinf(  float _X);
           float __cdecl atan2f(  float _Y,   float _X);
           float __cdecl atanf(  float _X);
           float __cdecl ceilf(  float _X);
           float __cdecl cosf(  float _X);
           float __cdecl coshf(  float _X);
           float __cdecl expf(  float _X);

    









































#line 697 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"

    



#line 703 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"

    


#line 708 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"

          __inline float __cdecl fabsf(  float _X)
        {
            return (float)fabs(_X);
        }

    #line 715 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"

    

           float __cdecl floorf(  float _X);
           float __cdecl fmodf(  float _X,   float _Y);

    











#line 734 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"

      __inline float __cdecl frexpf(  float _X,   int *_Y)
    {
        return (float)frexp(_X, _Y);
    }

      __inline float __cdecl hypotf(  float _X,   float _Y)
    {
        return _hypotf(_X, _Y);
    }

      __inline float __cdecl ldexpf(  float _X,   int _Y)
    {
        return (float)ldexp(_X, _Y);
    }

    

           float  __cdecl log10f(  float _X);
           float  __cdecl logf(  float _X);
           float  __cdecl modff(  float _X,   float *_Y);
           float  __cdecl powf(  float _X,   float _Y);
           float  __cdecl sinf(  float _X);
           float  __cdecl sinhf(  float _X);
           float  __cdecl sqrtf(  float _X);
           float  __cdecl tanf(  float _X);
           float  __cdecl tanhf(  float _X);

    

















































#line 813 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"

       long double __cdecl acoshl(  long double _X);

      __inline long double __cdecl acosl(  long double _X)
    {
        return acos((double)_X);
    }

       long double __cdecl asinhl(  long double _X);

      __inline long double __cdecl asinl(  long double _X)
    {
        return asin((double)_X);
    }

      __inline long double __cdecl atan2l(  long double _Y,   long double _X)
    {
        return atan2((double)_Y, (double)_X);
    }

       long double __cdecl atanhl(  long double _X);

      __inline long double __cdecl atanl(  long double _X)
    {
        return atan((double)_X);
    }

       long double __cdecl cbrtl(  long double _X);

      __inline long double __cdecl ceill(  long double _X)
    {
        return ceil((double)_X);
    }

      __inline long double __cdecl _chgsignl(  long double _X)
    {
        return _chgsign((double)_X);
    }

       long double __cdecl copysignl(  long double _Number,   long double _Sign);

      __inline long double __cdecl _copysignl(  long double _Number,   long double _Sign)
    {
        return _copysign((double)_Number, (double)_Sign);
    }

      __inline long double __cdecl coshl(  long double _X)
    {
        return cosh((double)_X);
    }

      __inline long double __cdecl cosl(  long double _X)
    {
        return cos((double)_X);
    }

       long double __cdecl erfl(  long double _X);
       long double __cdecl erfcl(  long double _X);

      __inline long double __cdecl expl(  long double _X)
    {
        return exp((double)_X);
    }

       long double __cdecl exp2l(  long double _X);
       long double __cdecl expm1l(  long double _X);

      __inline long double __cdecl fabsl(  long double _X)
    {
        return fabs((double)_X);
    }

       long double __cdecl fdiml(  long double _X,   long double _Y);

      __inline long double __cdecl floorl(  long double _X)
    {
        return floor((double)_X);
    }

       long double __cdecl fmal(  long double _X,   long double _Y,   long double _Z);
       long double __cdecl fmaxl(  long double _X,   long double _Y);
       long double __cdecl fminl(  long double _X,   long double _Y);

      __inline long double __cdecl fmodl(  long double _X,   long double _Y)
    {
        return fmod((double)_X, (double)_Y);
    }

      __inline long double __cdecl frexpl(  long double _X,   int *_Y)
    {
        return frexp((double)_X, _Y);
    }

       int __cdecl ilogbl(  long double _X);

      __inline long double __cdecl _hypotl(  long double _X,   long double _Y)
    {
        return _hypot((double)_X, (double)_Y);
    }

      __inline long double __cdecl hypotl(  long double _X,   long double _Y)
    {
        return _hypot((double)_X, (double)_Y);
    }

      __inline long double __cdecl ldexpl(  long double _X,   int _Y)
    {
        return ldexp((double)_X, _Y);
    }

       long double __cdecl lgammal(  long double _X);
       long long __cdecl llrintl(  long double _X);
       long long __cdecl llroundl(  long double _X);

      __inline long double __cdecl logl(  long double _X)
    {
        return log((double)_X);
    }

      __inline long double __cdecl log10l(  long double _X)
    {
        return log10((double)_X);
    }

       long double __cdecl log1pl(  long double _X);
       long double __cdecl log2l(  long double _X);
       long double __cdecl logbl(  long double _X);
       long __cdecl lrintl(  long double _X);
       long __cdecl lroundl(  long double _X);

      __inline long double __cdecl modfl(  long double _X,   long double* _Y)
    {
        double _F, _I;
        _F = modf((double)_X, &_I);
        *_Y = _I;
        return _F;
    }

       long double __cdecl nanl(  char const* _X);
       long double __cdecl nearbyintl(  long double _X);
       long double __cdecl nextafterl(  long double _X,   long double _Y);
       long double __cdecl nexttowardl(  long double _X,   long double _Y);

      __inline long double __cdecl powl(  long double _X,   long double _Y)
    {
        return pow((double)_X, (double)_Y);
    }

       long double __cdecl remainderl(  long double _X,   long double _Y);
       long double __cdecl remquol(  long double _X,   long double _Y,   int* _Z);
       long double __cdecl rintl(  long double _X);
       long double __cdecl roundl(  long double _X);
       long double __cdecl scalblnl(  long double _X,   long _Y);
       long double __cdecl scalbnl(  long double _X,   int _Y);

      __inline long double __cdecl sinhl(  long double _X)
    {
        return sinh((double)_X);
    }

      __inline long double __cdecl sinl(  long double _X)
    {
        return sin((double)_X);
    }

      __inline long double __cdecl sqrtl(  long double _X)
    {
        return sqrt((double)_X);
    }

      __inline long double __cdecl tanhl(  long double _X)
    {
        return tanh((double)_X);
    }

      __inline long double __cdecl tanl(  long double _X)
    {
        return tan((double)_X);
    }

       long double __cdecl tgammal(  long double _X);
       long double __cdecl truncl(  long double _X);

    
        #define _matherrl _matherr
    #line 999 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"

#line 1001 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"



    #define DOMAIN      _DOMAIN
    #define SING        _SING
    #define OVERFLOW    _OVERFLOW
    #define UNDERFLOW   _UNDERFLOW
    #define TLOSS       _TLOSS
    #define PLOSS       _PLOSS

    #define matherr     _matherr

    
        
            extern double HUGE;
        

#line 1019 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"

        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_j0" ". See online help for details."))    double __cdecl j0(  double _X);
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_j1" ". See online help for details."))    double __cdecl j1(  double _X);
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_jn" ". See online help for details."))    double __cdecl jn(  int _X,   double _Y);
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_y0" ". See online help for details."))    double __cdecl y0(  double _X);
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_y1" ". See online help for details."))    double __cdecl y1(  double _X);
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_yn" ". See online help for details."))    double __cdecl yn(  int _X,   double _Y);
    #line 1027 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"

#line 1029 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"

__pragma(pack(pop))

#pragma warning(pop) 
#line 1034 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_math.h"
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\math.h"




#line 7 "C:/opt/grass/build/output/lib/grass85/include/grass/arraystats.h"
#line 1 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"

















#define GRASS_GIS_H






#line 1 "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.44.35207\\include\\stdarg.h"







#pragma once
#define _INC_STDARG




#pragma warning(push)
#pragma warning(disable:   4514 4820 )

__pragma(pack(push, 8))



#define va_start __crt_va_start
#define va_arg   __crt_va_arg
#define va_end   __crt_va_end
#define va_copy(destination, source) ((destination) = (source))



__pragma(pack(pop))

#pragma warning(pop) 
#line 25 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"


#line 1 "C:/opt/grass/build/output/lib/grass85/include\\grass/config.h"






#define _config_h














#define HAVE_CAIRO_H 1




















#define HAVE_FFTW3_H 1








#define HAVE_FT2BUILD_H 1


#define HAVE_FTIME 1





#define HAVE_GDAL 1


#define HAVE_GEOS 1

















#define HAVE_ICONV_H 1














#define HAVE_LIBBLAS 1





#define HAVE_LIBLAPACK 1








#define HAVE_LIBPQ_FE_H 1








#define HAVE_LIMITS_H 1


#define HAVE_LONG_LONG_INT 1

















#define HAVE_OGR 1




















#define HAVE_PNG_H 1


#define HAVE_POSTGRES 1





#define HAVE_PROJ_H 1





#define HAVE_PUTENV 1











#define HAVE_PCRE_H 1




















#define HAVE_SQLITE 1


#define HAVE_SQLITE3_H 1



































#define HAVE_SYS_TIMEB_H 1





#define HAVE_SYS_TYPES_H 1











#define HAVE_TIFFIO_H 1


#define HAVE_TIME 1





#define HAVE_UNISTD_H 1








#define HAVE_ZLIB_H 1


#define HAVE_ZSTD_H 1
















































#define X_DISPLAY_MISSING 1



























#line 366 "C:/opt/grass/build/output/lib/grass85/include\\grass/config.h"





#define HAVE_LARGEFILES 1






















#line 395 "C:/opt/grass/build/output/lib/grass85/include\\grass/config.h"




#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\sys/types.h"







#pragma once



#pragma warning(push)
#pragma warning(disable: 4324  4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )



    #define _INO_T_DEFINED


    typedef unsigned short _ino_t; 

    
        typedef _ino_t ino_t;
    #line 24 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\sys/types.h"
#line 25 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\sys/types.h"




    #define _DEV_T_DEFINED


    typedef unsigned int _dev_t; 

    
        typedef _dev_t dev_t;
    #line 36 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\sys/types.h"
#line 37 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\sys/types.h"




    #define _OFF_T_DEFINED


    typedef long _off_t; 

    
        typedef _off_t off_t;
    #line 48 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\sys/types.h"
#line 49 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\sys/types.h"


#pragma warning(pop) 
#line 400 "C:/opt/grass/build/output/lib/grass85/include\\grass/config.h"
#define off_t __int64

#define fseek _fseeki64
#define ftell _ftelli64
#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\io.h"







#pragma once

#define _INC_IO


#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_io.h"








#pragma once

#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_share.h"








#pragma once



#pragma warning(push)
#pragma warning(disable: 4324  4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )


#define _SH_DENYRW      0x10    // deny read/write mode
#define _SH_DENYWR      0x20    // deny write mode
#define _SH_DENYRD      0x30    // deny read mode
#define _SH_DENYNO      0x40    // deny none mode
#define _SH_SECURE      0x80    // secure mode




    #define SH_DENYRW _SH_DENYRW
    #define SH_DENYWR _SH_DENYWR
    #define SH_DENYRD _SH_DENYRD
    #define SH_DENYNO _SH_DENYNO
#line 31 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_share.h"


#pragma warning(pop) 
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_io.h"
#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wio.h"








#pragma once




#pragma warning(push)
#pragma warning(disable: 4324  4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )


__pragma(pack(push, 8))










    #define _wfinddata_t    _wfinddata64i32_t
    #define _wfinddatai64_t _wfinddata64_t
#line 32 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wio.h"

typedef unsigned long _fsize_t;

struct _wfinddata32_t
{
    unsigned   attrib;
    __time32_t time_create;    
    __time32_t time_access;    
    __time32_t time_write;
    _fsize_t   size;
    wchar_t    name[260];
};

struct _wfinddata32i64_t
{
    unsigned   attrib;
    __time32_t time_create;    
    __time32_t time_access;    
    __time32_t time_write;
    __int64    size;
    wchar_t    name[260];
};

struct _wfinddata64i32_t
{
    unsigned   attrib;
    __time64_t time_create;    
    __time64_t time_access;    
    __time64_t time_write;
    _fsize_t   size;
    wchar_t    name[260];
};

struct _wfinddata64_t
{
    unsigned   attrib;
    __time64_t time_create;    
    __time64_t time_access;    
    __time64_t time_write;
    __int64    size;
    wchar_t    name[260];
};














    #define _wfindfirst     _wfindfirst64i32
    #define _wfindnext      _wfindnext64i32
    #define _wfindfirsti64  _wfindfirst64
    #define _wfindnexti64   _wfindnext64
#line 93 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wio.h"

 
 int __cdecl _waccess(
      wchar_t const* _FileName,
        int            _AccessMode
    );


 errno_t __cdecl _waccess_s(
      wchar_t const* _FileName,
        int            _AccessMode
    );

 
 int __cdecl _wchmod(
      wchar_t const* _FileName,
        int            _Mode
    );

  
 int __cdecl _wcreat(
      wchar_t const* _FileName,
        int            _PermissionMode
    );

 
 
 intptr_t __cdecl _wfindfirst32(
      wchar_t const*         _FileName,
       struct _wfinddata32_t* _FindData
    );

 
 
 int __cdecl _wfindnext32(
       intptr_t               _FindHandle,
      struct _wfinddata32_t* _FindData
    );

 int __cdecl _wunlink(
      wchar_t const* _FileName
    );

 
 int __cdecl _wrename(
      wchar_t const* _OldFileName,
      wchar_t const* _NewFileName
    );

 errno_t __cdecl _wmktemp_s(
      wchar_t* _TemplateName,
                                 size_t   _SizeInWords
    );


#line 151 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wio.h"

 
  wchar_t* __cdecl _wmktemp( wchar_t *_TemplateName);
#line 157 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wio.h"

 
 
 intptr_t __cdecl _wfindfirst32i64(
      wchar_t const*            _FileName,
       struct _wfinddata32i64_t* _FindData
    );

 
 
 intptr_t __cdecl _wfindfirst64i32(
      wchar_t const*            _FileName,
       struct _wfinddata64i32_t* _FindData
    );

 
 
 intptr_t __cdecl _wfindfirst64(
      wchar_t const*         _FileName,
       struct _wfinddata64_t* _FindData
    );

 
 
 int __cdecl _wfindnext32i64(
       intptr_t                  _FindHandle,
      struct _wfinddata32i64_t* _FindData
    );

 
 
 int __cdecl _wfindnext64i32(
       intptr_t                  _FindHandle,
      struct _wfinddata64i32_t* _FindData
    );

 
 
 int __cdecl _wfindnext64(
       intptr_t               _FindHandle,
      struct _wfinddata64_t* _FindData
    );


 errno_t __cdecl _wsopen_s(
       int*           _FileHandle,
      wchar_t const* _FileName,
        int            _OpenFlag,
        int            _ShareFlag,
        int            _PermissionFlag
    );

 errno_t __cdecl _wsopen_dispatch(
      wchar_t const* _FileName,
        int            _OFlag,
        int            _ShFlag,
        int            _PMode,
       int*           _PFileHandle,
        int            _BSecure
    );


































#line 252 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wio.h"

      
     int __cdecl _wopen(
          wchar_t const* _FileName,
            int            _OpenFlag,
        ...);

      
     int __cdecl _wsopen(
          wchar_t const* _FileName,
            int            _OpenFlag,
            int            _ShareFlag,
        ...);

#line 267 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_wio.h"

__pragma(pack(pop))

#pragma warning(pop) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_io.h"

#pragma warning(push)
#pragma warning(disable: 4324  4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )


__pragma(pack(push, 8))












    #define _finddata_t     _finddata64i32_t
    #define _finddatai64_t  __finddata64_t
#line 34 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_io.h"

struct _finddata32_t
{
    unsigned    attrib;
    __time32_t  time_create;    
    __time32_t  time_access;    
    __time32_t  time_write;
    _fsize_t    size;
    char        name[260];
};

struct _finddata32i64_t
{
    unsigned    attrib;
    __time32_t  time_create;    
    __time32_t  time_access;    
    __time32_t  time_write;
    __int64     size;
    char        name[260];
};

struct _finddata64i32_t
{
    unsigned    attrib;
    __time64_t  time_create;    
    __time64_t  time_access;    
    __time64_t  time_write;
    _fsize_t    size;
    char        name[260];
};

struct __finddata64_t
{
    unsigned    attrib;
    __time64_t  time_create;    
    __time64_t  time_access;    
    __time64_t  time_write;
    __int64     size;
    char        name[260];
};







#define _A_NORMAL 0x00 // Normal file - No read/write restrictions
#define _A_RDONLY 0x01 // Read only file
#define _A_HIDDEN 0x02 // Hidden file
#define _A_SYSTEM 0x04 // System file
#define _A_SUBDIR 0x10 // Subdirectory
#define _A_ARCH   0x20 // Archive file














    #define _findfirst      _findfirst64i32
    #define _findnext       _findnext64i32
    #define _findfirsti64   _findfirst64
    #define _findnexti64    _findnext64
#line 106 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_io.h"



     
     int __cdecl _access(
          char const* _FileName,
            int         _AccessMode
        );

    
     errno_t __cdecl _access_s(
          char const* _FileName,
            int         _AccessMode
        );

     
     int __cdecl _chmod(
          char const* _FileName,
            int         _Mode
        );

     
     int __cdecl _chsize(
          int  _FileHandle,
          long _Size
        );

    
     errno_t __cdecl _chsize_s(
          int     _FileHandle,
          __int64 _Size
        );

    
     int __cdecl _close(
          int _FileHandle
        );

    
     int __cdecl _commit(
          int _FileHandle
        );

      
     int __cdecl _creat(
          char const* _FileName,
            int         _PermissionMode
        );

     
     int __cdecl _dup(
          int _FileHandle
        );

     
     int __cdecl _dup2(
          int _FileHandleSrc,
          int _FileHandleDst
        );

     
     int __cdecl _eof(
          int _FileHandle
        );

     
     long __cdecl _filelength(
          int _FileHandle
        );

     
     
     intptr_t __cdecl _findfirst32(
          char const*           _FileName,
           struct _finddata32_t* _FindData
        );

     
     
     int __cdecl _findnext32(
           intptr_t              _FindHandle,
          struct _finddata32_t* _FindData
        );

    
     int __cdecl _findclose(
          intptr_t _FindHandle
        );

     intptr_t __cdecl _get_osfhandle(
              int _FileHandle
            );

     
     int __cdecl _isatty(
          int _FileHandle
        );

     int __cdecl _locking(
              int  _FileHandle,
              int  _LockMode,
              long _NumOfBytes
            );

    
     long __cdecl _lseek(
          int  _FileHandle,
          long _Offset,
          int  _Origin
        );

     
    
     errno_t __cdecl _mktemp_s(
          char*  _TemplateName,
                              size_t _Size
        );

    
#line 228 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_io.h"

     
        char * __cdecl _mktemp( char *_TemplateName);
#line 234 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_io.h"

     int __cdecl _open_osfhandle(
          intptr_t _OSFileHandle,
          int      _Flags
        );

    
         
         
         int __cdecl _pipe(
                 int*         _PtHandles,
                            unsigned int _PipeSize,
                            int          _TextMode
            );
    #line 249 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_io.h"

     
     
     int __cdecl _read(
                                       int          _FileHandle,
          void*        _DstBuf,
                                       unsigned int _MaxCharCount
        );

     int __cdecl remove(
          char const* _FileName
        );

     
     int __cdecl rename(
          char const* _OldFilename,
          char const* _NewFilename
        );

     int __cdecl _unlink(
          char const* _FileName
        );

     
     int __cdecl _setmode(
          int _FileHandle,
          int _Mode
        );

     
     long __cdecl _tell(
          int _FileHandle
        );

    
     int __cdecl _umask(
          int _Mode
        );

    
     errno_t __cdecl _umask_s(
           int  _NewMode,
          int* _OldMode
        );

     int __cdecl _write(
                                     int          _FileHandle,
          void const*  _Buf,
                                     unsigned int _MaxCharCount
        );

     
     __int64 __cdecl _filelengthi64(
          int _FileHandle
        );

     
     
     intptr_t __cdecl _findfirst32i64(
          char const*              _FileName,
           struct _finddata32i64_t* _FindData
        );

     
     
     intptr_t __cdecl _findfirst64i32(
          char const*              _FileName,
           struct _finddata64i32_t* _FindData
        );

     
     
     intptr_t __cdecl _findfirst64(
          char const*            _FileName,
           struct __finddata64_t* _FindData
        );

     
     
     int __cdecl _findnext32i64(
           intptr_t                 _FindHandle,
          struct _finddata32i64_t* _FindData
        );

     
     
     int __cdecl _findnext64i32(
           intptr_t                 _FindHandle,
          struct _finddata64i32_t* _FindData
        );

     
     
     int __cdecl _findnext64(
           intptr_t               _FindHandle,
          struct __finddata64_t* _FindData
        );

    
     __int64 __cdecl _lseeki64(
          int     _FileHandle,
          __int64 _Offset,
          int     _Origin
        );

     
     __int64 __cdecl _telli64(
          int _FileHandle
        );

    
     errno_t __cdecl _sopen_s(
           int*        _FileHandle,
          char const* _FileName,
            int         _OpenFlag,
            int         _ShareFlag,
            int         _PermissionMode
        );

     
     errno_t __cdecl _sopen_s_nolock(
           int*        _FileHandle,
          char const* _FileName,
            int         _OpenFlag,
            int         _ShareFlag,
            int         _PermissionMode
        );

     errno_t __cdecl _sopen_dispatch(
          char const* _FileName,
            int         _OFlag,
            int         _ShFlag,
            int         _PMode,
           int*        _PFileHandle,
            int         _BSecure
        );



    































          
         int __cdecl _open(
              char const* _FileName,
                int         _OpenFlag,
            ...);

          
         int __cdecl _sopen(
              char const* _FileName,
                int         _OpenFlag,
                int         _ShareFlag,
            ...);

    #line 434 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_io.h"



    
        
        #pragma warning(push)
        #pragma warning(disable: 4141)

          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_access" ". See online help for details."))
         int __cdecl access(
              char const* _FileName,
                int         _AccessMode
            );

          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_chmod" ". See online help for details."))
         int __cdecl chmod(
              char const* _FileName,
                int         _AccessMode
            );

          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_chsize" ". See online help for details."))
         int __cdecl chsize(
              int  _FileHandle,
              long _Size
            );

         __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_close" ". See online help for details."))
         int __cdecl close(
              int _FileHandle
        );

          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_creat" ". See online help for details.")) 
         int __cdecl creat(
              char const* _FileName,
                int         _PermissionMode
            );

          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_dup" ". See online help for details."))
         int __cdecl dup(
              int _FileHandle
            );

          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_dup2" ". See online help for details."))
         int __cdecl dup2(
              int _FileHandleSrc,
              int _FileHandleDst
            );

          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_eof" ". See online help for details."))
         int __cdecl eof(
              int _FileHandle
            );

          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_filelength" ". See online help for details."))
         long __cdecl filelength(
              int _FileHandle
            );

          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_isatty" ". See online help for details."))
         int __cdecl isatty(
              int _FileHandle
            );

          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_locking" ". See online help for details."))
         int __cdecl locking(
              int  _FileHandle,
              int  _LockMode,
              long _NumOfBytes
            );

         __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_lseek" ". See online help for details."))
         long __cdecl lseek(
              int  _FileHandle,
              long _Offset,
              int  _Origin
            );

         
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_mktemp" ". See online help for details.")) 
         char * __cdecl mktemp(
              char* _TemplateName
            );

          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_open" ". See online help for details.")) 
         int __cdecl open(
              char const* _FileName,
                int         _OpenFlag,
            ...);

         
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_read" ". See online help for details."))
         int __cdecl read(
                                           int          _FileHandle,
              void*        _DstBuf,
                                           unsigned int _MaxCharCount
            );

          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_setmode" ". See online help for details."))
         int __cdecl setmode(
              int _FileHandle,
              int _Mode
            );

        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_sopen" ". See online help for details.")) 
         int __cdecl sopen(
              char const* _FileName,
              int         _OpenFlag,
              int         _ShareFlag,
            ...);

          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_tell" ". See online help for details."))
         long __cdecl tell(
              int _FileHandle
            );

        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_umask" ". See online help for details.")) 
         int __cdecl umask(
              int _Mode
            );

        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_unlink" ". See online help for details."))
         int __cdecl unlink(
              char const* _FileName
            );

          __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_write" ". See online help for details."))
         int __cdecl write(
                                         int          _FileHandle,
              void const*  _Buf,
                                         unsigned int _MaxCharCount
            );

        #pragma warning(pop)
    #line 568 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_io.h"
#line 569 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\corecrt_io.h"

__pragma(pack(pop))

#pragma warning(pop) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\io.h"
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\io.h"
#line 405 "C:/opt/grass/build/output/lib/grass85/include\\grass/config.h"

#define lseek _lseeki64
#line 1 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\sys/stat.h"







#pragma once




#pragma warning(push)
#pragma warning(disable: 4324  4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 )


__pragma(pack(push, 8))






struct _stat32
{
    _dev_t         st_dev;
    _ino_t         st_ino;
    unsigned short st_mode;
    short          st_nlink;
    short          st_uid;
    short          st_gid;
    _dev_t         st_rdev;
    _off_t         st_size;
    __time32_t     st_atime;
    __time32_t     st_mtime;
    __time32_t     st_ctime;
};

struct _stat32i64
{
    _dev_t         st_dev;
    _ino_t         st_ino;
    unsigned short st_mode;
    short          st_nlink;
    short          st_uid;
    short          st_gid;
    _dev_t         st_rdev;
    __int64        st_size;
    __time32_t     st_atime;
    __time32_t     st_mtime;
    __time32_t     st_ctime;
};

struct _stat64i32
{
    _dev_t         st_dev;
    _ino_t         st_ino;
    unsigned short st_mode;
    short          st_nlink;
    short          st_uid;
    short          st_gid;
    _dev_t         st_rdev;
    _off_t         st_size;
    __time64_t     st_atime;
    __time64_t     st_mtime;
    __time64_t     st_ctime;
};

struct _stat64
{
    _dev_t         st_dev;
    _ino_t         st_ino;
    unsigned short st_mode;
    short          st_nlink;
    short          st_uid;
    short          st_gid;
    _dev_t         st_rdev;
    __int64        st_size;
    __time64_t     st_atime;
    __time64_t     st_mtime;
    __time64_t     st_ctime;
};

#define __stat64 _stat64 // For legacy compatibility


    struct stat
    {
        _dev_t         st_dev;
        _ino_t         st_ino;
        unsigned short st_mode;
        short          st_nlink;
        short          st_uid;
        short          st_gid;
        _dev_t         st_rdev;
        _off_t         st_size;
        time_t         st_atime;
        time_t         st_mtime;
        time_t         st_ctime;
    };
#line 102 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\sys/stat.h"








#define _S_IFMT   0xF000 // File type mask
#define _S_IFDIR  0x4000 // Directory
#define _S_IFCHR  0x2000 // Character special
#define _S_IFIFO  0x1000 // Pipe
#define _S_IFREG  0x8000 // Regular
#define _S_IREAD  0x0100 // Read permission, owner
#define _S_IWRITE 0x0080 // Write permission, owner
#define _S_IEXEC  0x0040 // Execute/search permission, owner


    #define S_IFMT   _S_IFMT
    #define S_IFDIR  _S_IFDIR
    #define S_IFCHR  _S_IFCHR
    #define S_IFREG  _S_IFREG
    #define S_IREAD  _S_IREAD
    #define S_IWRITE _S_IWRITE
    #define S_IEXEC  _S_IEXEC
#line 128 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\sys/stat.h"
















    #define _fstat      _fstat64i32
    #define _fstati64   _fstat64
    #define _stat       _stat64i32
    #define _stati64    _stat64
    #define _wstat      _wstat64i32
    #define _wstati64   _wstat64
#line 151 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\sys/stat.h"



 int __cdecl _fstat32(
       int             _FileHandle,
      struct _stat32* _Stat
    );

 int __cdecl _fstat32i64(
       int                _FileHandle,
      struct _stat32i64* _Stat
    );

 int __cdecl _fstat64i32(
       int                _FileHandle,
      struct _stat64i32* _Stat
    );

 int __cdecl _fstat64(
       int             _FileHandle,
      struct _stat64* _Stat
    );

 int __cdecl _stat32(
      char const*     _FileName,
       struct _stat32* _Stat
    );

 int __cdecl _stat32i64(
      char const*        _FileName,
       struct _stat32i64* _Stat
    );

 int __cdecl _stat64i32(
      char const*        _FileName,
       struct _stat64i32* _Stat
    );

 int __cdecl _stat64(
      char const*     _FileName,
       struct _stat64* _Stat
    );

 int __cdecl _wstat32(
      wchar_t const*  _FileName,
       struct _stat32* _Stat
    );

 int __cdecl _wstat32i64(
      wchar_t const*     _FileName,
       struct _stat32i64* _Stat
    );

 int __cdecl _wstat64i32(
      wchar_t const*     _FileName,
       struct _stat64i32* _Stat
    );

 int __cdecl _wstat64(
      wchar_t const*  _FileName,
       struct _stat64* _Stat
    );




    















        static __inline int __cdecl fstat(int const _FileHandle, struct stat* const _Stat)
        {
            typedef char __static_assert_t[(sizeof(struct stat) == sizeof(struct _stat64i32)) != 0];
            return _fstat64i32(_FileHandle, (struct _stat64i32*)_Stat);
        }
        static __inline int __cdecl stat(char const* const _FileName, struct stat* const _Stat)
        {
            typedef char __static_assert_t[(sizeof(struct stat) == sizeof(struct _stat64i32)) != 0];
            return _stat64i32(_FileName, (struct _stat64i32*)_Stat);
        }

    #line 245 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\sys/stat.h"
#line 246 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\ucrt\\sys/stat.h"

__pragma(pack(pop))

#pragma warning(pop) 
#line 408 "C:/opt/grass/build/output/lib/grass85/include\\grass/config.h"
#define stat _stati64
#define fstat _fstati64
#line 411 "C:/opt/grass/build/output/lib/grass85/include\\grass/config.h"


typedef int gid_t;


typedef int uid_t;


typedef int pid_t;

#line 422 "C:/opt/grass/build/output/lib/grass85/include\\grass/config.h"



#define GRASS_CMAKE_BUILD 1
#line 427 "C:/opt/grass/build/output/lib/grass85/include\\grass/config.h"
#line 28 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"
#line 1 "C:/opt/grass/build/output/lib/grass85/include\\grass/datetime.h"

#define GRASS_DATETIME_H


#define DATETIME_ABSOLUTE 1
#define DATETIME_RELATIVE 2




#define DATETIME_YEAR     101
#define DATETIME_MONTH    102
#define DATETIME_DAY      103
#define DATETIME_HOUR     104
#define DATETIME_MINUTE   105
#define DATETIME_SECOND   106

typedef struct DateTime {
    int mode; 
    int from, to;
    int fracsec; 
    int year, month, day;
    int hour, minute;
    double second;
    int positive;
    int tz; 
} DateTime;


#line 1 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/datetime.h"

#define GRASS_DATETIMEDEFS_H



int datetime_is_between(int x, int a, int b);


int datetime_change_from_to(DateTime *dt, int from, int to, int round);


void datetime_copy(DateTime *src, const DateTime *dst);


int datetime_difference(const DateTime *a, const DateTime *b, DateTime *result);


int datetime_error(int code, char *msg);
int datetime_error_code(void);
char *datetime_error_msg(void);
void datetime_clear_error(void);


int datetime_format(const DateTime *dt, char *buf);


int datetime_increment(DateTime *src, DateTime *incr);


int datetime_is_valid_increment(const DateTime *src, const DateTime *incr);
int datetime_check_increment(const DateTime *src, const DateTime *incr);


int datetime_get_increment_type(const DateTime *dt, int *mode, int *from,
                                int *to, int *fracsec);
int datetime_set_increment_type(const DateTime *src, DateTime *incr);


int datetime_get_local_timezone(int *minutes);
void datetime_get_local_time(DateTime *dt);


int datetime_days_in_month(int year, int month, int ad);
int datetime_is_leap_year(int year, int ad);
int datetime_days_in_year(int year, int ad);


int datetime_is_same(const DateTime *src, const DateTime *dst);


int datetime_scan(DateTime *dt, const char *buf);


int datetime_is_positive(const DateTime *dt);
int datetime_is_negative(const DateTime *dt);
void datetime_set_positive(DateTime *dt);
void datetime_set_negative(DateTime *dt);
void datetime_invert_sign(DateTime *dt);


int datetime_set_type(DateTime *dt, int mode, int from, int to, int fracsec);
int datetime_get_type(const DateTime *dt, int *mode, int *from, int *to,
                      int *fracsec);
int datetime_is_valid_type(const DateTime *dt);
int datetime_check_type(const DateTime *dt);
int datetime_in_interval_year_month(int x);
int datetime_in_interval_day_second(int x);
int datetime_is_absolute(const DateTime *dt);
int datetime_is_relative(const DateTime *dt);


int datetime_check_timezone(const DateTime *dt, int minutes);
int datetime_get_timezone(const DateTime *dt, int *minutes);
int datetime_set_timezone(DateTime *dt, int minutes);
int datetime_unset_timezone(DateTime *dt);
int datetime_is_valid_timezone(int minutes);


int datetime_change_timezone(DateTime *dt, int minutes);
int datetime_change_to_utc(DateTime *dt);
void datetime_decompose_timezone(int tz, int *hours, int *minutes);


int datetime_check_year(const DateTime *dt, int year);
int datetime_check_month(const DateTime *dt, int month);
int datetime_check_day(const DateTime *dt, int day);
int datetime_check_hour(const DateTime *dt, int hour);
int datetime_check_minute(const DateTime *dt, int minute);
int datetime_check_second(const DateTime *dt, double second);
int datetime_check_fracsec(const DateTime *dt, int fracsec);
int datetime_get_year(const DateTime *dt, int *year);
int datetime_set_year(DateTime *dt, int year);
int datetime_get_month(const DateTime *dt, int *month);
int datetime_set_month(DateTime *dt, int month);
int datetime_get_day(const DateTime *dt, int *day);
int datetime_set_day(DateTime *dt, int day);
int datetime_get_hour(const DateTime *dt, int *hour);
int datetime_set_hour(DateTime *dt, int hour);
int datetime_get_minute(const DateTime *dt, int *minute);
int datetime_set_minute(DateTime *dt, int minute);
int datetime_get_second(const DateTime *dt, double *second);
int datetime_set_second(DateTime *dt, double second);
int datetime_get_fracsec(const DateTime *dt, int *fracsec);
int datetime_set_fracsec(DateTime *dt, int fracsec);

#line 106 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/datetime.h"
#line 30 "C:/opt/grass/build/output/lib/grass85/include\\grass/datetime.h"

#line 32 "C:/opt/grass/build/output/lib/grass85/include\\grass/datetime.h"
#line 29 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"
#line 1 "C:/opt/grass/build/output/lib/grass85/include\\grass/version.h"
#define GRASS_VERSION_STRING   "8.5.0dev (2025)"
#define GRASS_VERSION_MAJOR    8
#define GRASS_VERSION_MINOR    5
#define GRASS_VERSION_RELEASE  "0dev"
#define GRASS_HEADERS_VERSION  "e60e702570"
#define GRASS_HEADERS_DATE     "2025-08-24T17:19:32+00:00"
#line 30 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"





#define __attribute__(x)
#line 37 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"








#line 46 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"
#define UNUSED

#line 48 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"

static const char *GRASS_copyright  = "GRASS GNU GPL licensed Software";







#line 59 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"
#define FALLTHROUGH ((void)0)
#line 61 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"




#define GIS_H_VERSION  GRASS_HEADERS_VERSION



#define GIS_H_DATE     GRASS_HEADERS_DATE

#define G_gisinit(pgm) G__gisinit(GIS_H_VERSION, (pgm))
#define G_no_gisinit() G__no_gisinit(GIS_H_VERSION)





#define TRUE 1
#line 80 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"


#define FALSE 0
#line 84 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"


#define NEWLINE '\n'



#define HOST_NEWLINE "\n"
#line 92 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"




#line 97 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"
#define WARN_UNUSED_RESULT

#line 99 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"




#define U_UNDEFINED      -1
#define U_UNKNOWN        0
#define U_ACRES          1
#define U_HECTARES       2
#define U_KILOMETERS     3
#define U_METERS         4
#define U_MILES          5
#define U_FEET           6
#define U_RADIANS        7
#define U_DEGREES        8
#define U_USFEET         9

#define U_YEARS          DATETIME_YEAR
#define U_MONTHS         DATETIME_MONTH
#define U_DAYS           DATETIME_DAY
#define U_HOURS          DATETIME_HOUR
#define U_MINUTES        DATETIME_MINUTE
#define U_SECONDS        DATETIME_SECOND


#define PROJECTION_XY    0

#define PROJECTION_UTM   1

#define PROJECTION_SP    2

#define PROJECTION_LL    3

#define PROJECTION_OTHER 99

#define PROJECTION_FILE  "PROJ_INFO"
#define UNIT_FILE        "PROJ_UNITS"
#define EPSG_FILE        "PROJ_EPSG"
#define WKT_FILE         "PROJ_WKT"
#define SRID_FILE        "PROJ_SRID"




#define CONFIG_DIR ".grass8"
#line 144 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"




#define MAX(a, b) ((a) > (b) ? (a) : (b))




#define MIN(a, b) ((a) < (b) ? (a) : (b))



#define M_PI 3.14159265358979323846 /* pi */


#define M_PI_2 1.57079632679489661923 /* pi/2 */





#define M_PI_4 0.785398163397448309616 /* pi/4 */


#line 170 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"


#define M_R2D 57.295779513082320877 /* 180/pi */


#define M_D2R               0.017453292519943295769 /* pi/180 */


#define GRASS_EPSILON       1.0e-15


#define G_VAR_GISRC         0
#define G_VAR_MAPSET        1


#define G_GISRC_MODE_FILE   0 /* files */
#define G_GISRC_MODE_MEMORY 1 /* memory only */


#define TYPE_INTEGER        1
#define TYPE_DOUBLE         2
#define TYPE_STRING         3
#define YES                 1
#define NO                  0


#define GNAME_MAX           256
#define GMAPSET_MAX         256

#define GPATH_MAX           4096


#define GBASENAME_SEP       "_"






#define serialize_int32_le(buf, x)     \
    do {                               \
        (buf)[0] = ((x) >> 0) & 0xFF;  \
        (buf)[1] = ((x) >> 8) & 0xFF;  \
        (buf)[2] = ((x) >> 16) & 0xFF; \
        (buf)[3] = ((x) >> 24) & 0xFF; \
    } while (0)


#define deserialize_int32_le(buf) \
    (((buf)[0] << 0) | ((buf)[1] << 8) | ((buf)[2] << 16) | ((buf)[3] << 24))


#define serialize_int32_be(buf, x)     \
    do {                               \
        (buf)[0] = ((x) >> 24) & 0xFF; \
        (buf)[1] = ((x) >> 16) & 0xFF; \
        (buf)[2] = ((x) >> 8) & 0xFF;  \
        (buf)[3] = ((x) >> 0) & 0xFF;  \
    } while (0)


#define deserialize_int32_be(buf) \
    (((buf)[0] << 24) | ((buf)[1] << 16) | ((buf)[2] << 8) | ((buf)[3] << 0))


#define GRASS_DIRSEP '/'




#define HOST_DIRSEP '/'
#define G_DEV_NULL  "/dev/null"
#line 243 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"


















typedef enum {
    G_OPT_UNDEFINED,
    G_OPT_DB_SQL,       
    G_OPT_DB_WHERE,     
    G_OPT_DB_TABLE,     
    G_OPT_DB_DRIVER,    
    G_OPT_DB_DATABASE,  
    G_OPT_DB_SCHEMA,    
    G_OPT_DB_COLUMN,    
    G_OPT_DB_COLUMNS,   
    G_OPT_DB_KEYCOLUMN, 

    G_OPT_I_GROUP,    
    G_OPT_I_SUBGROUP, 

    G_OPT_MEMORYMB,      

    G_OPT_R_INPUT,       
    G_OPT_R_INPUTS,      
    G_OPT_R_OUTPUT,      
    G_OPT_R_OUTPUTS,     
    G_OPT_R_MAP,         
    G_OPT_R_MAPS,        
    G_OPT_R_BASE,        
    G_OPT_R_COVER,       
    G_OPT_R_ELEV,        
    G_OPT_R_ELEVS,       
    G_OPT_R_TYPE,        
    G_OPT_R_INTERP_TYPE, 
    G_OPT_R_BASENAME_INPUT,  
    G_OPT_R_BASENAME_OUTPUT, 

    G_OPT_R3_INPUT,  
    G_OPT_R3_INPUTS, 
    G_OPT_R3_OUTPUT, 
    G_OPT_R3_MAP,    
    G_OPT_R3_MAPS,   
    G_OPT_R3_TYPE,   
    G_OPT_R3_PRECISION, 
    G_OPT_R3_TILE_DIMENSION, 

    G_OPT_R3_COMPRESSION, 


    G_OPT_V_INPUT,     
    G_OPT_V_INPUTS,    
    G_OPT_V_OUTPUT,    
    G_OPT_V_MAP,       
    G_OPT_V_MAPS,      
    G_OPT_V_TYPE,      
    G_OPT_V3_TYPE,     
    G_OPT_V_FIELD,     
    G_OPT_V_FIELD_ALL, 
    G_OPT_V_CAT,       
    G_OPT_V_CATS,      
    G_OPT_V_ID,        
    G_OPT_V_IDS,       

    G_OPT_F_INPUT,     
    G_OPT_F_BIN_INPUT, 
    G_OPT_F_OUTPUT,    
    G_OPT_F_SEP,       

    G_OPT_C,        
    G_OPT_CN,       
    G_OPT_C_FORMAT, 

    G_OPT_M_UNITS,      
    G_OPT_M_DATATYPE,   
    G_OPT_M_MAPSET,     
    G_OPT_M_LOCATION,   
    G_OPT_M_DBASE,      
    G_OPT_M_COORDS,     
    G_OPT_M_COLR,       
    G_OPT_M_DIR,        
    G_OPT_M_REGION,     
    G_OPT_M_NULL_VALUE, 
    G_OPT_M_NPROCS,     
    G_OPT_M_SEED,       

    G_OPT_STDS_INPUT, 

    G_OPT_STDS_INPUTS,   
    G_OPT_STDS_OUTPUT,   
    G_OPT_STRDS_INPUT,   
    G_OPT_STRDS_INPUTS,  
    G_OPT_STRDS_OUTPUT,  
    G_OPT_STRDS_OUTPUTS, 
    G_OPT_STR3DS_INPUT,  
    G_OPT_STR3DS_INPUTS, 
    G_OPT_STR3DS_OUTPUT, 
    G_OPT_STVDS_INPUT,   
    G_OPT_STVDS_INPUTS,  
    G_OPT_STVDS_OUTPUT,  
    G_OPT_MAP_INPUT,  
    G_OPT_MAP_INPUTS, 
    G_OPT_STDS_TYPE, 

    G_OPT_MAP_TYPE,  
    G_OPT_T_TYPE,    
    G_OPT_T_WHERE,   
    G_OPT_T_SAMPLE,  

    G_OPT_F_FORMAT, 
} STD_OPT;










 typedef enum {
    G_FLG_UNDEFINED,
    G_FLG_V_TABLE, 
    G_FLG_V_TOPO   
} STD_FLG;


enum rule_type {
    RULE_EXCLUSIVE,
    RULE_REQUIRED,
    RULE_REQUIRES,
    RULE_REQUIRES_ALL,
    RULE_EXCLUDES,
    RULE_COLLECTIVE
};


#define G_INFO_FORMAT_STANDARD \
    0 /* GRASS_MESSAGE_FORMAT=standard or not defined */
#define G_INFO_FORMAT_GUI    1 /* GRASS_MESSAGE_FORMAT=gui */
#define G_INFO_FORMAT_SILENT 2 /* GRASS_MESSAGE_FORMAT=silent */
#define G_INFO_FORMAT_PLAIN  3 /* GRASS_MESSAGE_FORMAT=plain */


#define G_ICON_CROSS         0
#define G_ICON_BOX           1
#define G_ICON_ARROW         2


#define DEFAULT_FG_COLOR     "black"
#define DEFAULT_BG_COLOR     "white"
#define DEFAULT_COLOR_TABLE  "viridis"


#define G_FATAL_EXIT         0
#define G_FATAL_PRINT        1
#define G_FATAL_RETURN       2


#define ENDIAN_LITTLE        0
#define ENDIAN_BIG           1
#define ENDIAN_OTHER         2





#define GV_KEY_COLUMN        "cat"







enum {                            
       G_ELEMENT_RASTER = 1,      
       G_ELEMENT_RASTER3D = 2,    
       G_ELEMENT_VECTOR = 3,      
       G_ELEMENT_ASCIIVECTOR = 4, 
       G_ELEMENT_LABEL = 5,       
       G_ELEMENT_REGION = 6,      
       G_ELEMENT_GROUP = 7        
};






struct Cell_head {
    




    int format;
    





    int compressed;
    
    int rows;
    
    int rows3;
    
    int cols;
    
    int cols3;
    
    int depths;
    







    int proj;
    
    int zone;
    
    double ew_res;
    
    double ew_res3;
    
    double ns_res;
    
    double ns_res3;
    
    double tb_res;
    
    double north;
    
    double south;
    
    double east;
    
    double west;
    
    double top;
    
    double bottom;
};




struct G_3dview {
    char pgm_id[40];     
    float from_to[2][3]; 
    float fov;           
    float twist;         
    float exag;          
    int mesh_freq;       
    int poly_freq;       
    int display_type;    
    int lightson;        
    int dozero;          
    int colorgrid;       
    int shading;         
    int fringe;          
    int surfonly;        
    int doavg;           
    char grid_col[40];   
    char bg_col[40];     
    char other_col[40];  
    float lightpos[4];   
    float lightcol[3];   
    float ambient;
    float shine;
    struct Cell_head vwin;
};

struct Key_Value {
    int nitems;
    int nalloc;
    char **key;
    char **value;
};























struct Option {
    const char *key;     
    int type;            
    int required;        
    int multiple;        
    const char *options; 
    const char **opts;   
    const char *key_desc; 
    const char *label; 
    const char *description;  
    const char *descriptions; 

    const char **descs;       

    char *answer;             
    const char *def;          
    char **answers;           
    struct Option *next_opt;  
    const char *gisprompt;    
    const char *guisection; 

    const char *guidependency;    
    int (*checker)(const char *); 
    int count;
};






struct Flag {
    char key;                
    char answer;             
    char suppress_required;  
    char suppress_overwrite; 
    const char *label; 
    const char *description; 
    const char *guisection; 

    struct Flag *next_flag; 
};






struct GModule {
    const char *label;       
    const char *description; 
    const char **keywords;   
    
    int overwrite; 
    int verbose;   
};

struct TimeStamp {
    DateTime dt[2]; 
    int count;
};

struct Counter {
    int value;
};

struct Popen {
    FILE *fp;
    int pid;
};

typedef int CELL;
typedef double DCELL;
typedef float FCELL;





#line 643 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"

#line 645 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"
typedef long long int grass_int64;




#line 651 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"


typedef grass_int64 LCELL;

struct _Color_Value_ {
    DCELL value;
    unsigned char red;
    unsigned char grn;
    unsigned char blu;
};

struct _Color_Rule_ {
    struct _Color_Value_ low, high;
    struct _Color_Rule_ *next;
    struct _Color_Rule_ *prev;
};

struct _Color_Info_ {
    struct _Color_Rule_ *rules;
    int n_rules;

    struct {
        unsigned char *red;
        unsigned char *grn;
        unsigned char *blu;
        unsigned char *set;
        int nalloc;
        int active;
    } lookup;

    struct {
        DCELL *vals;
        
        struct _Color_Rule_ **rules;
        int nalloc;
        int active;
    } fp_lookup;

    DCELL min, max;
};

struct Colors {
    int version; 
    DCELL shift;
    int invert;
    int is_float; 
    int null_set; 
    unsigned char null_red;
    unsigned char null_grn;
    unsigned char null_blu;
    int undef_set; 
    unsigned char undef_red;
    unsigned char undef_grn;
    unsigned char undef_blu;
    struct _Color_Info_ fixed;
    struct _Color_Info_ modular;
    DCELL cmin;
    DCELL cmax;
    int organizing;
};




struct ilist {
    


    int *value;
    


    int n_values;
    


    int alloc_values;
};





#line 1 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/gis.h"

















#define GRASS_GISDEFS_H







































#define G_alloca(n) G_malloc(n)
#define G_freea(p)  G_free(p)
#line 60 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/gis.h"












#define RELDIR "?"
#line 74 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/gis.h"


void G_adjust_Cell_head(struct Cell_head *, int, int);
void G_adjust_Cell_head3(struct Cell_head *, int, int, int);
int G_adjust_window_ll(struct Cell_head *cellhd);


#define G_incr_void_ptr(ptr, size) \
    ((void *)((const unsigned char *)(ptr) + (size)))

void *G__malloc(const char *, int, size_t);
void *G__calloc(const char *, int, size_t, size_t);
void *G__realloc(const char *, int, void *, size_t);
void G_free(void *);










#define G_malloc(n)     G__malloc("<ctypesgen>", 0, (n))
#define G_calloc(m, n)  G__calloc("<ctypesgen>", 0, (m), (n))
#define G_realloc(p, n) G__realloc("<ctypesgen>", 0, (p), (n))
#line 102 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/gis.h"


int G_begin_cell_area_calculations(void);
double G_area_of_cell_at_row(int);
int G_begin_polygon_area_calculations(void);
double G_area_of_polygon(const double *, const double *, int);


void G_begin_zone_area_on_ellipsoid(double, double, double);
double G_darea0_on_ellipsoid(double);
double G_area_for_zone_on_ellipsoid(double, double);


void G_begin_ellipsoid_polygon_area(double, double);
double G_ellipsoid_polygon_area(const double *, const double *, int);


double G_planimetric_polygon_area(const double *, const double *, int);


void G_begin_zone_area_on_sphere(double, double);
double G_darea0_on_sphere(double);
double G_area_for_zone_on_sphere(double, double);


void G_ascii_check(char *);










int G_vasprintf(char **, const char *, va_list);
int G_asprintf(char **, const char *, ...)
    ;

int G_rasprintf(char **, size_t *, const char *, ...)
    ;


int G_aprintf(const char *, ...);
int G_faprintf(FILE *, const char *, ...);
int G_saprintf(char *, const char *, ...);
int G_snaprintf(char *, size_t, const char *, ...);
int G_vaprintf(const char *, va_list);
int G_vfaprintf(FILE *, const char *, va_list);
int G_vsaprintf(char *, const char *, va_list);
int G_vsnaprintf(char *, size_t, const char *, va_list);


size_t G_strlcat(char *, const char *, size_t);


size_t G_strlcpy(char *, const char *, size_t);


char *G_basename(char *, const char *);
size_t G_get_num_decimals(const char *);
char *G_double_to_basename_format(double, size_t, size_t);
char *G_get_basename_separator(void);
char *G_join_basename_strings(const char **, size_t);
char *G_generate_basename(const char *, double, size_t, size_t);


void G_bresenham_line(int, int, int, int, int (*)(int, int));


void G_clicker(void);


char *G_color_rules_options(void);
char *G_color_rules_descriptions(void);
char *G_color_rules_description_type(void);
void G_list_color_rules(FILE *);
void G_list_color_rules_description_type(FILE *, char *);
int G_find_color_rule(const char *);


int G_num_standard_colors(void);


int G_insert_commas(char *);
void G_remove_commas(char *);


int G_compressor_number(char *);
char *G_compressor_name(int);
int G_default_compressor(void);
int G_check_compressor(int);
int G_write_compressed(int, unsigned char *, int, int);
int G_write_unompressed(int, unsigned char *, int);
int G_read_compressed(int, int, unsigned char *, int, int);
int G_compress_bound(int, int);
int G_compress(unsigned char *, int, unsigned char *, int, int);
int G_expand(unsigned char *, int, unsigned char *, int, int);


int G_no_compress(unsigned char *src, int src_sz, unsigned char *dst,
                  int dst_sz);
int G_no_expand(unsigned char *src, int src_sz, unsigned char *dst, int dst_sz);


int G_rle_compress(unsigned char *src, int src_sz, unsigned char *dst,
                   int dst_sz);
int G_rle_expand(unsigned char *src, int src_sz, unsigned char *dst,
                 int dst_sz);


int G_zlib_compress(unsigned char *src, int src_sz, unsigned char *dst,
                    int dst_sz);
int G_zlib_expand(unsigned char *src, int src_sz, unsigned char *dst,
                  int dst_sz);


int G_lz4_compress(unsigned char *src, int src_sz, unsigned char *dst,
                   int dst_sz);
int G_lz4_expand(unsigned char *src, int src_sz, unsigned char *dst,
                 int dst_sz);



int G_bz2_compress(unsigned char *src, int src_sz, unsigned char *dst,
                   int dst_sz);
int G_bz2_expand(unsigned char *src, int src_sz, unsigned char *dst,
                 int dst_sz);


int G_zstd_compress(unsigned char *src, int src_sz, unsigned char *dst,
                    int dst_sz);
int G_zstd_expand(unsigned char *src, int src_sz, unsigned char *dst,
                  int dst_sz);




int G_recursive_copy(const char *, const char *);


int G_copy_file(const char *, const char *);


int G_is_initialized(int *);
void G_initialize_done(int *);
void G_init_counter(struct Counter *, int);
int G_counter_next(struct Counter *);


const char *G_date(void);


int G_get_datum_by_name(const char *);
const char *G_datum_name(int);
const char *G_datum_description(int);
const char *G_datum_ellipsoid(int);
int G_get_datumparams_from_projinfo(const struct Key_Value *, char *, char *);
void G_read_datum_table(void);


void G_init_debug(void);
int G_debug(int, const char *, ...) ;


int G_begin_distance_calculations(void);
double G_distance(double, double, double, double);
double G_distance_between_line_segments(double, double, double, double, double,
                                        double, double, double);
double G_distance_point_to_line_segment(double, double, double, double, double,
                                        double);


void G_done_msg(const char *, ...) ;


int G_is_little_endian(void);


void G_init_env(void);
const char *G_getenv(const char *);
const char *G_getenv2(const char *, int);
const char *G_getenv_nofatal(const char *);
const char *G_getenv_nofatal2(const char *, int);
void G_setenv(const char *, const char *);
void G_setenv2(const char *, const char *, int);
void G_setenv_nogisrc(const char *, const char *);
void G_setenv_nogisrc2(const char *, const char *, int);
void G_unsetenv(const char *);
void G_unsetenv2(const char *, int);
const char *G_get_env_name(int);
void G_set_gisrc_mode(int);
int G_get_gisrc_mode(void);
void G_create_alt_env(void);
void G_switch_env(void);
void G__read_mapset_env(void);
void G__read_gisrc_env(void);
void G__read_gisrc_path(void);






int G_info_format(void);
void G_message(const char *, ...) ;
void G_verbose_message(const char *, ...) ;
void G_important_message(const char *, ...)
    ;
void G_fatal_error(const char *, ...) 
;
void G_warning(const char *, ...) ;
int G_suppress_warnings(int);
int G_sleep_on_error(int);
void G_set_error_routine(int (*)(const char *, int));
void G_unset_error_routine(void);
void G_init_logging(void);


char *G_file_name(char *, const char *, const char *, const char *);
char *G_file_name_misc(char *, const char *, const char *, const char *,
                       const char *);
char *G_file_name_tmp(char *, const char *, const char *, const char *);
char *G_file_name_basedir(char *, const char *, const char *, const char *,
                          const char *);


const char *G_find_file(const char *, char *, const char *);
const char *G_find_file2(const char *, const char *, const char *);
const char *G_find_file_misc(const char *, const char *, char *, const char *);
const char *G_find_file2_misc(const char *, const char *, const char *,
                              const char *);


char *G_find_etc(const char *);


const char *G_find_raster(char *, const char *);
const char *G_find_raster2(const char *, const char *);


const char *G_find_raster3d(const char *, const char *);


const char *G_find_vector(char *, const char *);
const char *G_find_vector2(const char *, const char *);


int G_begin_geodesic_equation(double, double, double, double);
double G_geodesic_lat_from_lon(double);


void G_begin_geodesic_distance(double, double);
void G_set_geodesic_distance_lat1(double);
void G_set_geodesic_distance_lat2(double);
double G_geodesic_distance_lon_to_lon(double, double);
double G_geodesic_distance(double, double, double, double);


int G_get_ellipsoid_parameters(double *, double *);
int G_get_spheroid_by_name(const char *, double *, double *, double *);
int G_get_ellipsoid_by_name(const char *, double *, double *);
const char *G_ellipsoid_name(int);
const char *G_ellipsoid_description(int);
int G_read_ellipsoid_table(int);


struct Key_Value *G_get_projunits(void);
struct Key_Value *G_get_projinfo(void);
struct Key_Value *G_get_projepsg(void);
char *G_get_projwkt(void);
char *G_get_projsrid(void);


void G_get_window(struct Cell_head *);
void G_get_default_window(struct Cell_head *);
void G_get_element_window(struct Cell_head *, const char *, const char *,
                          const char *);


int G_getl(char *, int, FILE *);
int G_getl2(char *, int, FILE *);


const char *G_gisbase(void);


const char *G_gisdbase(void);


void G__gisinit(const char *, const char *);
void G__no_gisinit(const char *);
void G_init_all(void);


void G_add_error_handler(void (*)(void *), void *);
void G_remove_error_handler(void (*)(void *), void *);


const char *G_home(void);
const char *G_config_path(void);


void G_init_ilist(struct ilist *);
void G_free_ilist(struct ilist *);
struct ilist *G_new_ilist(void);
void G_ilist_add(struct ilist *, int);


int G_intersect_line_segments(double, double, double, double, double, double,
                              double, double, double *, double *, double *,
                              double *);


int G_is_gisbase(const char *);
int G_is_location(const char *);
int G_is_mapset(const char *);


struct Key_Value *G_create_key_value(void);
void G_set_key_value(const char *, const char *, struct Key_Value *);
const char *G_find_key_value(const char *, const struct Key_Value *);
void G_free_key_value(struct Key_Value *);


int G_fwrite_key_value(FILE *, const struct Key_Value *);
struct Key_Value *G_fread_key_value(FILE *);


void G_write_key_value_file(const char *, const struct Key_Value *);
struct Key_Value *G_read_key_value_file(const char *);


void G_update_key_value_file(const char *, const char *, const char *);
int G_lookup_key_value_from_file(const char *, const char *, char[], int);


int G_legal_filename(const char *);
int G_check_input_output_name(const char *, const char *, int);


void G_set_distance_to_line_tolerance(double);
double G_distance2_point_to_line(double, double, double, double, double,
                                 double);


void G_list_element(const char *, const char *, const char *,
                    int (*)(const char *, const char *, char *));
char **G_list(int, const char *, const char *, const char *);
void G_free_list(char **);


void G_lat_format(double, char *);
const char *G_lat_format_string(void);
void G_lon_format(double, char *);
const char *G_lon_format_string(void);
void G_llres_format(double, char *);
const char *G_llres_format_string(void);
void G_lat_parts(double, int *, int *, double *, char *);
void G_lon_parts(double, int *, int *, double *, char *);


int G_lat_scan(const char *, double *);
int G_lon_scan(const char *, double *);
int G_llres_scan(const char *, double *);


const char *G_location(void);
char *G_location_path(void);


void G_srand48(long);
long G_srand48_auto(void);
long G_lrand48(void);
long G_mrand48(void);
double G_drand48(void);


void G_set_ls_filter(int (*)(const char *, void *), void *);
void G_set_ls_exclude_filter(int (*)(const char *, void *), void *);
char **G_ls2(const char *, int *);
void G_ls(const char *, FILE *);
void G_ls_format(char **, int, int, FILE *);



void *G_ls_regex_filter(const char *, int, int, int);
void *G_ls_glob_filter(const char *, int, int);
void G_free_ls_filter(void *);
#line 493 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/gis.h"


int G_make_location(const char *, struct Cell_head *, const struct Key_Value *,
                    const struct Key_Value *);
int G_make_location_epsg(const char *, struct Cell_head *,
                         const struct Key_Value *, const struct Key_Value *,
                         const struct Key_Value *);
int G_make_location_crs(const char *, struct Cell_head *,
                        const struct Key_Value *, const struct Key_Value *,
                        const char *, const char *);
int G_write_projsrid(const char *, const char *);
int G_write_projwkt(const char *, const char *);
int G_compare_projections(const struct Key_Value *, const struct Key_Value *,
                          const struct Key_Value *, const struct Key_Value *);


int G_make_mapset(const char *, const char *, const char *);


char *G_tolcase(char *);
char *G_toucase(char *);


const char *G_mapset(void);
char *G_mapset_path(void);


int G_make_mapset_element(const char *);
int G_make_mapset_element_tmp(const char *);
int G_make_mapset_object_group(const char *);
int G_make_mapset_dir_object(const char *, const char *);
int G_make_mapset_object_group_tmp(const char *);
int G_make_mapset_object_group_basedir(const char *, const char *);
int G__make_mapset_element_misc(const char *, const char *);
int G_mapset_permissions(const char *);
int G_mapset_permissions2(const char *, const char *, const char *);


const char *G_get_mapset_name(int);
void G_create_alt_search_path(void);
void G_switch_search_path(void);
void G_reset_mapsets(void);
char **G_get_available_mapsets(void);
void G_add_mapset_to_search_path(const char *);
int G_is_mapset_in_search_path(const char *);


char *G_myname(void);


int G_color_values(const char *, float *, float *, float *);
const char *G_color_name(int);


void G_newlines_to_spaces(char *);


int G_name_is_fully_qualified(const char *, char *, char *);
char *G_fully_qualified_name(const char *, const char *);
int G_unqualified_name(const char *, const char *, char *, char *);


int G_set_omp_num_threads(struct Option *);


int G_open_new(const char *, const char *);
int G_open_old(const char *, const char *, const char *);
int G_open_update(const char *, const char *);
FILE *G_fopen_new(const char *, const char *);
FILE *G_fopen_old(const char *, const char *, const char *);
FILE *G_fopen_append(const char *, const char *);
FILE *G_fopen_modify(const char *, const char *);


int G_open_new_misc(const char *, const char *, const char *);
int G_open_old_misc(const char *, const char *, const char *, const char *);
int G_open_update_misc(const char *, const char *, const char *);
FILE *G_fopen_new_misc(const char *, const char *, const char *);
FILE *G_fopen_old_misc(const char *, const char *, const char *, const char *);
FILE *G_fopen_append_misc(const char *, const char *, const char *);
FILE *G_fopen_modify_misc(const char *, const char *, const char *);


int G_check_overwrite(int argc, char **argv);


FILE *G_open_pager(struct Popen *);
void G_close_pager(struct Popen *);
FILE *G_open_mail(struct Popen *);
void G_close_mail(struct Popen *);


void G_disable_interactive(void);
struct GModule *G_define_module(void);
struct Flag *G_define_flag(void);
struct Option *G_define_option(void);
struct Option *G_define_standard_option(int);
struct Flag *G_define_standard_flag(int);
int G_parser(int, char **);
void G_usage(void);
char *G_recreate_command(void);
void G_add_keyword(const char *);
void G_set_keywords(const char *);
int G_get_overwrite(void);
char *G_option_to_separator(const struct Option *);
FILE *G_open_option_file(const struct Option *);
void G_close_option_file(FILE *);


void G_option_rule(int, int, void **);
void G_option_exclusive(void *, ...);
void G_option_required(void *, ...);
void G_option_requires(void *, ...);
void G_option_requires_all(void *, ...);
void G_option_excludes(void *, ...);
void G_option_collective(void *, ...);


int G_mkdir(const char *);
int G_is_dirsep(char);
int G_is_absolute_path(const char *);
char *G_convert_dirseps_to_host(char *);
char *G_convert_dirseps_from_host(char *);
int G_lstat(const char *, struct _stat64 *);
int G_stat(const char *, struct _stat64 *);
int G_owner(const char *);


void G_percent(long, long, int);
void G_percent_reset(void);
void G_progress(long, int);
void G_set_percent_routine(int (*)(int));
void G_unset_percent_routine(void);


void G_popen_clear(struct Popen *);
FILE *G_popen_write(struct Popen *, const char *, const char **);
FILE *G_popen_read(struct Popen *, const char *, const char **);
void G_popen_close(struct Popen *);


void G_setup_plot(double, double, double, double, int (*)(int, int),
                  int (*)(int, int));
void G_setup_fill(int);
void G_plot_where_xy(double, double, int *, int *);
void G_plot_where_en(int, int, double *, double *);
void G_plot_point(double, double);
void G_plot_line(double, double, double, double);
void G_plot_line2(double, double, double, double);
int G_plot_polygon(const double *, const double *, int);
int G_plot_area(double *const *, double *const *, int *, int);
void G_plot_fx(double (*)(double), double, double);


int G_pole_in_polygon(const double *, const double *, int);


const char *G_program_name(void);
const char *G_original_program_name(void);
void G_set_program_name(const char *);


int G_projection(void);


int G_projection_units(int);
const char *G_projection_name(int);


const char *G_database_unit_name(int);
int G_database_unit(void);
const char *G_database_projection_name(void);
const char *G_database_datum_name(void);
const char *G_database_ellipse_name(void);
double G_database_units_to_meters_factor(void);
const char *G_database_epsg_code(void);


int G_put_window(const struct Cell_head *);
int G_put_element_window(const struct Cell_head *, const char *, const char *);


void G_putenv(const char *, const char *);


double G_meridional_radius_of_curvature(double, double, double);
double G_transverse_radius_of_curvature(double, double, double);
double G_radius_of_conformal_tangent_sphere(double, double, double);


void G__read_Cell_head(FILE *, struct Cell_head *);
void G__read_Cell_head_array(char **, struct Cell_head *);


int G_remove(const char *, const char *);
int G_remove_misc(const char *, const char *, const char *);
int G_recursive_remove(const char *);


int G_rename_file(const char *, const char *);
int G_rename(const char *, const char *, const char *);


int G_begin_rhumbline_equation(double, double, double, double);
double G_rhumbline_lat_from_lon(double);


void G_rotate_around_point(double, double, double *, double *, double);
void G_rotate_around_point_int(int, int, int *, int *, double);


__int64 G_ftell(FILE *);
void G_fseek(FILE *, __int64, int);


void G_get_set_window(struct Cell_head *);
void G_set_window(struct Cell_head *);
void G_unset_window(void);


void G_shortest_way(double *, double *);


void G_sleep(unsigned int);


int G_snprintf(char *, size_t, const char *, ...)
    ;


int G_strcasecmp(const char *, const char *);
int G_strncasecmp(const char *, const char *, int);
char *G_store(const char *);
char *G_store_upper(const char *);
char *G_store_lower(const char *);
char *G_strchg(char *, char, char);
char *G_str_replace(const char *, const char *, const char *);
char *G_str_concat(const char **, int, const char *, int);
void G_strip(char *);
char *G_chop(char *);
void G_str_to_upper(char *);
void G_str_to_lower(char *);
int G_str_to_sql(char *);
void G_squeeze(char *);
char *G_strcasestr(const char *, const char *);


void G_init_tempfile(void);
char *G_tempfile(void);
char *G_tempfile_basedir(const char *);
char *G_tempfile_pid(int);
char *G_tempfile_pid_basedir(int, const char *);
void G_temp_element(char *);
void G__temp_element(char *, int);
void G__temp_element_basedir(char *, const char *);


char *G_mktemp(char *);
int G_mkstemp(char *, int, int);
FILE *G_mkstemp_fp(char *, int, int);


void G_init_timestamp(struct TimeStamp *);
void G_set_timestamp(struct TimeStamp *, const struct DateTime *);
void G_set_timestamp_range(struct TimeStamp *, const struct DateTime *,
                           const struct DateTime *);
int G_write_timestamp(FILE *, const struct TimeStamp *);
void G_get_timestamps(const struct TimeStamp *, struct DateTime *,
                      struct DateTime *, int *);
int G_format_timestamp(const struct TimeStamp *, char *);
int G_scan_timestamp(struct TimeStamp *, const char *);
int G_has_raster_timestamp(const char *, const char *);
int G_read_raster_timestamp(const char *, const char *, struct TimeStamp *);
int G_write_raster_timestamp(const char *, const struct TimeStamp *);
int G_remove_raster_timestamp(const char *);
int G_has_vector_timestamp(const char *, const char *, const char *);
int G_read_vector_timestamp(const char *, const char *, const char *,
                            struct TimeStamp *);
int G_write_vector_timestamp(const char *, const char *,
                             const struct TimeStamp *);
int G_remove_vector_timestamp(const char *, const char *);
int G_has_raster3d_timestamp(const char *, const char *);
int G_read_raster3d_timestamp(const char *, const char *, struct TimeStamp *);
int G_remove_raster3d_timestamp(const char *);
int G_write_raster3d_timestamp(const char *, const struct TimeStamp *);


char **G_tokenize(const char *, const char *);
char **G_tokenize2(const char *, const char *, const char *);
int G_number_of_tokens(char **);
void G_free_tokens(char **);


void G_trim_decimal(char *);


double G_meters_to_units_factor(int);
double G_meters_to_units_factor_sq(int);
const char *G_get_units_name(int, int, int);
int G_units(const char *);
int G_is_units_type_spatial(int);
int G_is_units_type_temporal(int);



char *G_rc_path(const char *, const char *);
#line 800 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/gis.h"


int G_verbose(void);
int G_verbose_min(void);
int G_verbose_std(void);
int G_verbose_max(void);
int G_set_verbose(int);


void G_3dview_warning(int);
int G_get_3dview_defaults(struct G_3dview *, struct Cell_head *);
int G_put_3dview(const char *, const struct G_3dview *,
                 const struct Cell_head *);
int G_get_3dview(const char *, const char *, struct G_3dview *);


const char *G_whoami(void);


void G_adjust_window_to_box(const struct Cell_head *, struct Cell_head *, int,
                            int);


void G_format_northing(double, char *, int);
void G_format_easting(double, char *, int);
void G_format_resolution(double, char *, int);


int G_point_in_region(double, double);
int G_point_in_window(double, double, const struct Cell_head *);


int G_limit_east(double *, int);
int G_limit_west(double *, int);
int G_limit_north(double *, int);
int G_limit_south(double *, int);


int G_window_overlap(const struct Cell_head *, double, double, double, double);
double G_window_percentage_overlap(const struct Cell_head *, double, double,
                                   double, double);


int G_scan_northing(const char *, double *, int);
int G_scan_easting(const char *, double *, int);
int G_scan_resolution(const char *, double *, int);


double G_adjust_east_longitude(double, double);
double G_adjust_easting(double, const struct Cell_head *);
void G__init_window(void);


void G_begin_execute(void (*func)(void *), void *, void **, int);
void G_end_execute(void **);
void G_init_workers(void);
void G_finish_workers(void);


void G__write_Cell_head(FILE *, const struct Cell_head *, int);
void G__write_Cell_head3(FILE *, const struct Cell_head *, int);


void G_write_zeros(int, size_t);


void G_xdr_get_int(int *, const void *);
void G_xdr_put_int(void *, const int *);
void G_xdr_get_float(float *, const void *);
void G_xdr_put_float(void *, const float *);
void G_xdr_get_double(double *, const void *);
void G_xdr_put_double(void *, const double *);


void G_zero(void *, int);


int G_zone(void);

#line 880 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/gis.h"
#line 735 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"

#line 737 "C:/opt/grass/build/output/lib/grass85/include\\grass/gis.h"
#line 8 "C:/opt/grass/build/output/lib/grass85/include/grass/arraystats.h"
#line 1 "C:/opt/grass/build/output/lib/grass85/include\\grass/glocale.h"

#define GRASS_GLOCALE_H




#line 1 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/glocale.h"

#define GRASS_GLOCALEDEFS_H



#undef __attribute__

#define __attribute__(x)
#line 8 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/glocale.h"

extern void G_init_locale(void);
extern char *G_gettext(const char *, const char *)
    ;
extern char *G_ngettext(const char *, const char *, const char *,
                        unsigned long int)
    ;

#line 17 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/glocale.h"
#line 7 "C:/opt/grass/build/output/lib/grass85/include\\grass/glocale.h"





#line 13 "C:/opt/grass/build/output/lib/grass85/include\\grass/glocale.h"
#define _(str)              (str)
#define n_(strs, strp, num) ((num == 1) ? (strs) : (strp))
#line 16 "C:/opt/grass/build/output/lib/grass85/include\\grass/glocale.h"

#line 18 "C:/opt/grass/build/output/lib/grass85/include\\grass/glocale.h"
#line 9 "C:/opt/grass/build/output/lib/grass85/include/grass/arraystats.h"
#line 1 "C:/opt/grass/build/output/lib/grass85/include\\grass/dbmi.h"












#define GRASS_DBMI_H





#define DB_VERSION "0"


#define DB_DEFAULT_DRIVER "sqlite"


#line 25 "C:/opt/grass/build/output/lib/grass85/include\\grass/dbmi.h"


#define DB_PROC_VERSION              999

#define DB_PROC_CLOSE_DATABASE       101
#define DB_PROC_CREATE_DATABASE      102
#define DB_PROC_DELETE_DATABASE      103
#define DB_PROC_FIND_DATABASE        104
#define DB_PROC_LIST_DATABASES       105
#define DB_PROC_OPEN_DATABASE        106
#define DB_PROC_SHUTDOWN_DRIVER      107

#define DB_PROC_CLOSE_CURSOR         201
#define DB_PROC_DELETE               202
#define DB_PROC_FETCH                203
#define DB_PROC_INSERT               204
#define DB_PROC_OPEN_INSERT_CURSOR   205
#define DB_PROC_OPEN_SELECT_CURSOR   206
#define DB_PROC_OPEN_UPDATE_CURSOR   207
#define DB_PROC_UPDATE               208
#define DB_PROC_ROWS                 209
#define DB_PROC_BIND_UPDATE          220
#define DB_PROC_BIND_INSERT          221

#define DB_PROC_EXECUTE_IMMEDIATE    301
#define DB_PROC_BEGIN_TRANSACTION    302
#define DB_PROC_COMMIT_TRANSACTION   303

#define DB_PROC_CREATE_TABLE         401
#define DB_PROC_DESCRIBE_TABLE       402
#define DB_PROC_DROP_TABLE           403
#define DB_PROC_LIST_TABLES          404
#define DB_PROC_ADD_COLUMN           405
#define DB_PROC_DROP_COLUMN          406
#define DB_PROC_GRANT_ON_TABLE       407

#define DB_PROC_CREATE_INDEX         701
#define DB_PROC_LIST_INDEXES         702
#define DB_PROC_DROP_INDEX           703


#define DB_PERM_R                    01
#define DB_PERM_W                    02
#define DB_PERM_X                    04


#define DB_OK                        0
#define DB_FAILED                    1
#define DB_NOPROC                    2
#define DB_MEMORY_ERR                -1
#define DB_PROTOCOL_ERR              -2
#define DB_EOF                       -1


#define DB_SQL_TYPE_UNKNOWN          0

#define DB_SQL_TYPE_CHARACTER        1
#define DB_SQL_TYPE_SMALLINT         2
#define DB_SQL_TYPE_INTEGER          3
#define DB_SQL_TYPE_REAL             4
#define DB_SQL_TYPE_DOUBLE_PRECISION 6
#define DB_SQL_TYPE_DECIMAL          7
#define DB_SQL_TYPE_NUMERIC          8
#define DB_SQL_TYPE_DATE             9
#define DB_SQL_TYPE_TIME             10
#define DB_SQL_TYPE_TIMESTAMP        11
#define DB_SQL_TYPE_INTERVAL         12
#define DB_SQL_TYPE_TEXT             13 /* length not defined */

#define DB_SQL_TYPE_SERIAL           21


#define DB_YEAR                      0x4000
#define DB_MONTH                     0x2000
#define DB_DAY                       0x1000
#define DB_HOUR                      0x0800
#define DB_MINUTE                    0x0400
#define DB_SECOND                    0x0200
#define DB_FRACTION                  0x0100
#define DB_DATETIME_MASK             0xFF00


#define DB_C_TYPE_STRING             1
#define DB_C_TYPE_INT                2
#define DB_C_TYPE_DOUBLE             3
#define DB_C_TYPE_DATETIME           4


#define DB_CURRENT                   1
#define DB_NEXT                      2
#define DB_PREVIOUS                  3
#define DB_FIRST                     4
#define DB_LAST                      5


#define DB_READONLY                  1
#define DB_INSERT                    2
#define DB_UPDATE                    3
#define DB_SEQUENTIAL                0
#define DB_SCROLL                    1
#define DB_INSENSITIVE               4


#define DB_GRANTED                   1
#define DB_NOT_GRANTED               -1


#define DB_PRIV_SELECT               0x01

#define DB_GROUP                     0x01
#define DB_PUBLIC                    0x02


#define DB_DEFINED                   1
#define DB_UNDEFINED                 2


#define DB_SQL_MAX                   65536

typedef void *dbAddress;
typedef int dbToken;

typedef struct _db_string {
    char *string;
    int nalloc;
} dbString;

typedef struct _dbmscap {
    char driverName[256];  
    char startup[256];     
    char comment[256];     
    struct _dbmscap *next; 
} dbDbmscap;

typedef struct _db_dirent {
    dbString name; 
    int isdir;     
    int perm;      
} dbDirent;

typedef struct _db_driver {
    dbDbmscap dbmscap; 
    FILE *send, *recv; 
    int pid;           
} dbDriver;

typedef struct _db_handle {
    dbString dbName;       
     
    dbString dbSchema;     
} dbHandle;

typedef struct _db_date_time {
    char current;
    int year;
    int month;
    int day;
    int hour;
    int minute;
    double seconds;
} dbDateTime;

typedef struct _db_value {
    char isNull;
    int i;
    double d;
    dbString s;
    dbDateTime t;
} dbValue;

typedef struct _db_column {
    dbString columnName;
    dbString description;
    int sqlDataType;
    int hostDataType;
    dbValue value;
    int dataLen;
    int precision;
    int scale;
    char nullAllowed;
    char hasDefaultValue;
    char useDefaultValue;
    dbValue defaultValue;
    int select;
    int update;
} dbColumn;

typedef struct _db_table {
    dbString tableName;
    dbString description;
    int numColumns;
    dbColumn *columns;
    int priv_insert;
    int priv_delete;
} dbTable;

typedef struct _db_cursor {
    dbToken token;
    dbDriver *driver;
    dbTable *table;
    short *column_flags;
    int type;
    int mode;
} dbCursor;

typedef struct _db_index {
    dbString indexName;
    dbString tableName;
    int numColumns;
    dbString *columnNames;
    char unique;
} dbIndex;

typedef struct _db_driver_state {
    char *dbname;
    char *dbschema;
    int open;
    int ncursors;
    dbCursor **cursor_list;
} dbDriverState;


typedef struct {
    int cat; 
    int val; 
} dbCatValI;


typedef struct {
    int cat; 
    int isNull;
    union {
        int i;
        double d;
        



        dbString *s;
        dbDateTime *t;
    } val;
} dbCatVal;


typedef struct {
    int n_values;
    int alloc;
    int ctype; 
    dbCatVal *value;
} dbCatValArray;


typedef struct _db_connection {
    char *driverName;
    char *hostName;
    char *databaseName;
    char *schemaName;
    char *port;
    char *user;
    char *password;
    char *keycol; 
    char *group;  
} dbConnection;


typedef struct {
    int count;    
    int alloc;    
    char *table;  
    char *key;    
    int *cat;     
    char **where; 
    char **label; 
} dbRclsRule;

#line 1 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/dbmi.h"

#define GRASS_DBMIDEFS_H


void db_Cstring_to_lowercase(char *);
void db_Cstring_to_uppercase(char *);
int db_add_column(dbDriver *, dbString *, dbColumn *);
void db__add_cursor_to_driver_state(dbCursor *);
int db_alloc_cursor_column_flags(dbCursor *);
int db_alloc_cursor_table(dbCursor *, int);
int db_append_table_column(dbTable *, dbColumn *);
dbDirent *db_alloc_dirent_array(int);
dbHandle *db_alloc_handle_array(int);
dbIndex *db_alloc_index_array(int);
int db_alloc_index_columns(dbIndex *, int);
dbString *db_alloc_string_array(int);
dbTable *db_alloc_table(int);
int db_append_string(dbString *, const char *);
void db_auto_print_errors(int);
void db_auto_print_protocol_errors(int);
int db_bind_update(dbCursor *);
void *db_calloc(int, int);
int db_CatValArray_alloc(dbCatValArray *, int);
int db_CatValArray_realloc(dbCatValArray *, int);
void db_CatValArray_free(dbCatValArray *);
void db_CatValArray_init(dbCatValArray *);
void db_CatValArray_sort(dbCatValArray *);
int db_CatValArray_sort_by_value(dbCatValArray *);
int db_CatValArray_get_value(dbCatValArray *, int, dbCatVal **);
int db_CatValArray_get_value_int(dbCatValArray *, int, int *);
int db_CatValArray_get_value_double(dbCatValArray *, int, double *);
void db_char_to_lowercase(char *);
void db_char_to_uppercase(char *);
void db_clear_error(void);
dbTable *db_clone_table(dbTable *);
void db__close_all_cursors(void);
int db_close_cursor(dbCursor *);
int db_close_database(dbDriver *);
int db_close_database_shutdown_driver(dbDriver *);
int db_column_sqltype(dbDriver *, const char *, const char *);
int db_column_Ctype(dbDriver *, const char *, const char *);
int db_convert_Cstring_to_column_default_value(const char *, dbColumn *);
int db_convert_Cstring_to_column_value(const char *, dbColumn *);
int db_convert_Cstring_to_value(const char *, int, dbValue *);
int db_convert_Cstring_to_value_datetime(const char *, int, dbValue *);
int db_convert_column_default_value_to_string(dbColumn *, dbString *);
int db_convert_column_value_to_string(dbColumn *, dbString *);
int db_convert_value_datetime_into_string(dbValue *, int, dbString *);
int db_convert_value_to_string(dbValue *, int, dbString *);
dbColumn *db_copy_column(dbColumn *, dbColumn *);
void db_copy_dbmscap_entry(dbDbmscap *, dbDbmscap *);
int db_copy_string(dbString *, const dbString *);
int db_table_to_sql(dbTable *, dbString *);
int db_copy_table(const char *, const char *, const char *, const char *,
                  const char *, const char *);
int db_copy_table_where(const char *, const char *, const char *, const char *,
                        const char *, const char *, const char *);
int db_copy_table_select(const char *, const char *, const char *, const char *,
                         const char *, const char *, const char *);
int db_copy_table_by_ints(const char *, const char *, const char *,
                          const char *, const char *, const char *,
                          const char *, int *, int);
void db_copy_value(dbValue *, dbValue *);
int db_create_database(dbDriver *, dbHandle *);
int db_create_index(dbDriver *, dbIndex *);
int db_create_index2(dbDriver *, const char *, const char *);
int db_create_table(dbDriver *, dbTable *);
int db_d_add_column(void);
int db_d_bind_update(void);
const char *db_dbmscap_filename(void);
int db_d_close_cursor(void);
int db_d_close_database(void);
int db_d_create_database(void);
int db_d_create_index(void);
int db_d_create_table(void);
int db_d_delete(void);
int db_d_delete_database(void);
int db_d_describe_table(void);
int db_d_drop_column(void);
int db_d_drop_index(void);
int db_d_drop_table(void);
void db_debug(const char *);
void db_debug_off(void);
void db_debug_on(void);
int db_delete(dbCursor *);
int db_delete_database(dbDriver *, dbHandle *);
int db_delete_table(const char *, const char *, const char *);
int db_describe_table(dbDriver *, dbString *, dbTable **);
int db_d_execute_immediate(void);
int db_d_begin_transaction(void);
int db_d_commit_transaction(void);
int db_d_fetch(void);
int db_d_find_database(void);
int db_d_get_num_rows(void);
int db_d_grant_on_table(void);
int db_d_insert(void);
void db_d_init_error(const char *);
void db_d_append_error(const char *, ...) ;
void db_d_report_error(void);
dbDirent *db_dirent(const char *, int *);
int db_d_list_databases(void);
int db_d_list_indexes(void);
int db_d_list_tables(void);
int db_d_open_database(void);
int db_d_open_insert_cursor(void);
int db_d_open_select_cursor(void);
int db_d_open_update_cursor(void);
void db_double_quote_string(dbString *);
int db_driver(int, char **);

int db_driver_mkdir(const char *, int, int);
int db_drop_column(dbDriver *, dbString *, dbString *);
void db__drop_cursor_from_driver_state(dbCursor *);
int db_drop_index(dbDriver *, dbString *);
int db_drop_table(dbDriver *, dbString *);
void db_drop_token(dbToken);
int db_d_update(void);
int db_d_version(void);
int db_enlarge_string(dbString *, int);
void db_error(const char *);
int db_execute_immediate(dbDriver *, dbString *);
int db_begin_transaction(dbDriver *);
int db_commit_transaction(dbDriver *);
int db_fetch(dbCursor *, int, int *);
int db_find_database(dbDriver *, dbHandle *, int *);
dbAddress db_find_token(dbToken);
void db_free(void *);
void db_free_column(dbColumn *);
void db_free_cursor(dbCursor *);
void db_free_cursor_column_flags(dbCursor *);
void db_free_dbmscap(dbDbmscap *);
void db_free_dirent_array(dbDirent *, int);
void db_free_handle(dbHandle *);
void db_free_handle_array(dbHandle *, int);
void db_free_index(dbIndex *);
void db_free_index_array(dbIndex *, int);
void db_free_string(dbString *);
void db_free_string_array(dbString *, int);
void db_free_table(dbTable *);
int db_get_column(dbDriver *, const char *, const char *, dbColumn **);
dbValue *db_get_column_default_value(dbColumn *);
const char *db_get_column_description(dbColumn *);
int db_get_column_host_type(dbColumn *);
int db_get_column_length(dbColumn *);
const char *db_get_column_name(dbColumn *);
int db_get_column_precision(dbColumn *);
int db_get_column_scale(dbColumn *);
int db_get_column_select_priv(dbColumn *);
int db_get_column_sqltype(dbColumn *);
int db_get_column_update_priv(dbColumn *);
dbValue *db_get_column_value(dbColumn *);
int db_get_connection(dbConnection *);
int db_get_cursor_number_of_columns(dbCursor *);
dbTable *db_get_cursor_table(dbCursor *);
dbToken db_get_cursor_token(dbCursor *);
const char *db_get_default_driver_name(void);
const char *db_get_default_database_name(void);
const char *db_get_default_schema_name(void);
const char *db_get_default_group_name(void);
dbDriverState *db__get_driver_state(void);
int db_get_error_code(void);
const char *db_get_error_msg(void);
const char *db_get_error_who(void);
const char *db_get_handle_dbname(dbHandle *);
const char *db_get_handle_dbschema(dbHandle *);
const char *db_get_index_column_name(dbIndex *, int);
const char *db_get_index_name(dbIndex *);
int db_get_index_number_of_columns(dbIndex *);
const char *db_get_index_table_name(dbIndex *);
int db_get_num_rows(dbCursor *);
char *db_get_string(const dbString *);
dbColumn *db_get_table_column(dbTable *, int);
dbColumn *db_get_table_column_by_name(dbTable *, const char *);
int db_get_table_delete_priv(dbTable *);
const char *db_get_table_description(dbTable *);
int db_get_table_insert_priv(dbTable *);
const char *db_get_table_name(dbTable *);
int db_get_table_number_of_columns(dbTable *);
int db_get_table_number_of_rows(dbDriver *, dbString *);
int db_get_table_select_priv(dbTable *);
int db_get_table_update_priv(dbTable *);
double db_get_value_as_double(dbValue *, int);
int db_get_value_day(dbValue *);
double db_get_value_double(dbValue *);
int db_get_value_hour(dbValue *);
int db_get_value_int(dbValue *);
int db_get_value_minute(dbValue *);
int db_get_value_month(dbValue *);
double db_get_value_seconds(dbValue *);
const char *db_get_value_string(dbValue *);
int db_get_value_year(dbValue *);
int db_grant_on_table(dbDriver *, const char *, int, int);
int db_has_dbms(void);
void db_init_column(dbColumn *);
void db_init_cursor(dbCursor *);
void db__init_driver_state(void);
void db_init_handle(dbHandle *);
void db_init_index(dbIndex *);
void db_init_string(dbString *);
void db_init_table(dbTable *);
int db_insert(dbCursor *);
void db_interval_range(int, int *, int *);
int db_isdir(const char *);
int db_legal_tablename(const char *);
int db_list_databases(dbDriver *, dbString *, int, dbHandle **, int *);
const char *db_list_drivers(void);
int db_list_indexes(dbDriver *, dbString *, dbIndex **, int *);
int db_list_tables(dbDriver *, dbString **, int *, int);
void *db_malloc(int);
void db__mark_database_closed(void);
void db__mark_database_open(const char *, const char *);
void db_memory_error(void);
dbToken db_new_token(dbAddress);
int db_nocase_compare(const char *, const char *);
void db_noproc_error(int);
int db_open_database(dbDriver *, dbHandle *);
int db_open_insert_cursor(dbDriver *, dbCursor *);
int db_open_select_cursor(dbDriver *, dbString *, dbCursor *, int);
int db_open_update_cursor(dbDriver *, dbString *_name, dbString *, dbCursor *,
                          int);
void db_print_column_definition(FILE *, dbColumn *);
void db_print_error(void);
void db_print_index(FILE *, dbIndex *);
void db_print_table_definition(FILE *, dbTable *);
void db_procedure_not_implemented(const char *);
void db_protocol_error(void);
dbDbmscap *db_read_dbmscap(void);
void *db_realloc(void *, int);
int db__recv_char(char *);
int db__recv_column_default_value(dbColumn *);
int db__recv_column_definition(dbColumn *);
int db__recv_column_value(dbColumn *);
int db__recv_datetime(dbDateTime *);
int db__recv_double(double *);
int db__recv_double_array(double **, int *);
int db__recv_float(float *);
int db__recv_float_array(float **, int *);
int db__recv_handle(dbHandle *);
int db__recv_index(dbIndex *);
int db__recv_index_array(dbIndex **, int *);
int db__recv_int(int *);
int db__recv_int_array(int **, int *);
int db__recv_procnum(int *);
int db__recv_return_code(int *);
int db__recv_short(short *);
int db__recv_short_array(short **, int *);
int db__recv_string(dbString *);
int db__recv_string_array(dbString **, int *);
int db__recv_table_data(dbTable *);
int db__recv_table_definition(dbTable **);
int db__recv_token(dbToken *);
int db__recv_value(dbValue *, int);
int db__send_Cstring(const char *);
int db__send_char(int);
int db__send_column_default_value(dbColumn *);
int db__send_column_definition(dbColumn *);
int db__send_column_value(dbColumn *);
int db__send_datetime(dbDateTime *);
int db__send_double(double);
int db__send_double_array(const double *, int);
int db__send_failure(void);
int db__send_float(float);
int db__send_float_array(const float *, int);
int db__send_handle(dbHandle *);
int db__send_index(dbIndex *);
int db__send_index_array(dbIndex *, int);
int db__send_int(int);
int db__send_int_array(const int *, int);
int db__send_procedure_not_implemented(int);
int db__send_procedure_ok(int);
int db__send_short(int);
int db__send_short_array(const short *, int);
int db__send_string(dbString *);
int db__send_string_array(dbString *, int);
int db__send_success(void);
int db__send_table_data(dbTable *);
int db__send_table_definition(dbTable *);
int db__send_token(dbToken *);
int db__send_value(dbValue *, int);
int db_select_CatValArray(dbDriver *, const char *, const char *, const char *,
                          const char *, dbCatValArray *);
int db_select_int(dbDriver *, const char *, const char *, const char *, int **);
int db_select_value(dbDriver *, const char *, const char *, int, const char *,
                    dbValue *);
int db_set_column_description(dbColumn *, const char *);
void db_set_column_has_defined_default_value(dbColumn *);
void db_set_column_has_undefined_default_value(dbColumn *);
void db_set_column_host_type(dbColumn *, int);
void db_set_column_length(dbColumn *, int);
int db_set_column_name(dbColumn *, const char *);
void db_set_column_null_allowed(dbColumn *);
void db_set_column_precision(dbColumn *, int);
void db_set_column_scale(dbColumn *, int);
void db_set_column_select_priv_granted(dbColumn *);
void db_set_column_select_priv_not_granted(dbColumn *);
void db_set_column_sqltype(dbColumn *, int);
void db_set_column_update_priv_granted(dbColumn *);
void db_set_column_update_priv_not_granted(dbColumn *);
void db_set_column_use_default_value(dbColumn *);
int db_set_connection(dbConnection *);
void db_set_cursor_column_flag(dbCursor *, int);
void db_set_cursor_column_for_update(dbCursor *, int);
void db_set_cursor_mode(dbCursor *, int);
void db_set_cursor_mode_insensitive(dbCursor *);
void db_set_cursor_mode_scroll(dbCursor *);
void db_set_cursor_table(dbCursor *, dbTable *);
void db_set_cursor_token(dbCursor *, dbToken);
void db_set_cursor_type_insert(dbCursor *);
void db_set_cursor_type_readonly(dbCursor *);
void db_set_cursor_type_update(dbCursor *);
int db_set_default_connection(void);
void db_set_error_who(const char *);
int db_set_handle(dbHandle *, const char *, const char *);
void db_set_error_handler_driver(dbDriver *);
void db_unset_error_handler_driver(dbDriver *);
int db_set_index_column_name(dbIndex *, int, const char *);
int db_set_index_name(dbIndex *, const char *);
int db_set_index_table_name(dbIndex *, const char *);
int db_set_index_type_non_unique(dbIndex *);
int db_set_index_type_unique(dbIndex *);
void db__set_protocol_fds(FILE *, FILE *);
int db_set_string(dbString *, const char *);
int db_set_string_no_copy(dbString *, char *);
int db_set_table_column(dbTable *, int, dbColumn *);
void db_set_table_delete_priv_granted(dbTable *);
void db_set_table_delete_priv_not_granted(dbTable *);
int db_set_table_description(dbTable *, const char *);
void db_set_table_insert_priv_granted(dbTable *);
void db_set_table_insert_priv_not_granted(dbTable *);
int db_set_table_name(dbTable *, const char *);
void db_set_table_select_priv_granted(dbTable *);
void db_set_table_select_priv_not_granted(dbTable *);
void db_set_table_update_priv_granted(dbTable *);
void db_set_table_update_priv_not_granted(dbTable *);
void db_set_value_datetime_current(dbValue *);
void db_set_value_datetime_not_current(dbValue *);
void db_set_value_day(dbValue *, int);
void db_set_value_double(dbValue *, double);
void db_set_value_hour(dbValue *, int);
void db_set_value_int(dbValue *, int);
void db_set_value_minute(dbValue *, int);
void db_set_value_month(dbValue *, int);
void db_set_value_not_null(dbValue *);
void db_set_value_null(dbValue *);
void db_set_value_seconds(dbValue *, double);
int db_set_value_string(dbValue *, const char *);
void db_set_value_year(dbValue *, int);
int db_shutdown_driver(dbDriver *);
const char *db_sqltype_name(int);
int db_sqltype_to_Ctype(int);
dbDriver *db_start_driver(const char *);
dbDriver *db_start_driver_open_database(const char *, const char *);
int db__start_procedure_call(int);
char *db_store(const char *);
void db_strip(char *);
void db_syserror(const char *);
int db_table_exists(const char *, const char *, const char *);
int db_test_column_has_default_value(dbColumn *);
int db_test_column_has_defined_default_value(dbColumn *);
int db_test_column_has_undefined_default_value(dbColumn *);
int db_test_column_null_allowed(dbColumn *);
int db_test_column_use_default_value(dbColumn *);
int db_test_cursor_any_column_flag(dbCursor *);
int db_test_cursor_any_column_for_update(dbCursor *);
int db_test_cursor_column_flag(dbCursor *, int);
int db_test_cursor_column_for_update(dbCursor *, int);
int db_test_cursor_mode_insensitive(dbCursor *);
int db_test_cursor_mode_scroll(dbCursor *);
int db_test_cursor_type_fetch(dbCursor *);
int db_test_cursor_type_insert(dbCursor *);
int db_test_cursor_type_update(dbCursor *);
int db__test_database_open(void);
int db_test_index_type_unique(dbIndex *);
int db_test_value_datetime_current(dbValue *);
int db_test_value_isnull(dbValue *);
void db_unset_column_has_default_value(dbColumn *);
void db_unset_column_null_allowed(dbColumn *);
void db_unset_column_use_default_value(dbColumn *);
void db_unset_cursor_column_flag(dbCursor *, int);
void db_unset_cursor_column_for_update(dbCursor *, int);
void db_unset_cursor_mode(dbCursor *);
void db_unset_cursor_mode_insensitive(dbCursor *);
void db_unset_cursor_mode_scroll(dbCursor *);
int db_update(dbCursor *);
int db_gversion(dbDriver *, dbString *, dbString *);
const char *db_whoami(void);
void db_zero(void *, int);
void db_zero_string(dbString *);
unsigned int db_sizeof_string(const dbString *);
int db_set_login(const char *, const char *, const char *, const char *,
                 const char *, const char *, int);
int db_set_login2(const char *, const char *, const char *, const char *,
                  const char *, const char *, int);
int db_get_login(const char *, const char *, const char **, const char **,
                 const char **, const char **);
int db_get_login2(const char *, const char *, const char **, const char **,
                  const char **, const char **);
int db_get_login_dump(FILE *);

#line 400 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/dbmi.h"
#line 301 "C:/opt/grass/build/output/lib/grass85/include\\grass/dbmi.h"

#line 303 "C:/opt/grass/build/output/lib/grass85/include\\grass/dbmi.h"
#line 10 "C:/opt/grass/build/output/lib/grass85/include/grass/arraystats.h"

struct GASTATS {
    double count;
    double min;
    double max;
    double sum;
    double sumsq;
    double sumabs;
    double mean;
    double meanabs;
    double var;
    double stdev;
};

#define CLASS_INTERVAL 1
#define CLASS_STDEV    2
#define CLASS_QUANT    3
#define CLASS_EQUIPROB 4
#define CLASS_DISCONT  5

#line 1 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/arraystats.h"

#define GRASS_ARRAYSTATSDEFS_H



void AS_eqdrt(double[], double[], int, int, double *, double *, double *);
void AS_basic_stats(const double[], int, struct GASTATS *);


int AS_option_to_algorithm(const struct Option *);
double AS_class_apply_algorithm(int, const double[], int, int *, double[]);
int AS_class_interval(const double[], int, int, double[]);
int AS_class_quant(const double[], int, int, double[]);
double AS_class_discont(const double[], int, int, double[]);
double AS_class_stdev(const double[], int, int, double[]);
int AS_class_equiprob(const double[], int, int *, double[]);
int AS_class_frequencies(const double[], int, int, double[], int[]);

#line 19 "C:/opt/grass/build/output/lib/grass85/include\\grass/defs/arraystats.h"
#line 31 "C:/opt/grass/build/output/lib/grass85/include/grass/arraystats.h"

#line 33 "C:/opt/grass/build/output/lib/grass85/include/grass/arraystats.h"
