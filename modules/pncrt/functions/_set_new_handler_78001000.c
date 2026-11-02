/* Module: pncrt.dll
   Function: _set_new_handler
   Address: 78001000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int) */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
                    /* 0x1000  37  ?_set_new_handler@@YAP6AHI@ZP6AHI@Z@Z */
  _lock(9);
  p_Var1 = DAT_78041a80;
  DAT_78041a80 = param_1;
  _unlock(9);
  return p_Var1;
}


