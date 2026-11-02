/* Module: pncrt.dll
   Function: set_new_handler
   Address: 78001060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void (__cdecl*__cdecl set_new_handler(void (__cdecl*)(void)))(void) */

_func_void * __cdecl set_new_handler(_func_void *param_1)

{
                    /* 0x1060  43  ?set_new_handler@@YAP6AXXZP6AXXZ@Z */
  if (param_1 != (_func_void *)0x0) {
    assert("new_p == 0","setnewh.cpp",0x34);
  }
  _set_new_handler((_func_int_uint *)0x0);
  return (_func_void *)0x0;
}


