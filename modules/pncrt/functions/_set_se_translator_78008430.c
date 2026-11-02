/* Module: pncrt.dll
   Function: _set_se_translator
   Address: 78008430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void (__cdecl*__cdecl _set_se_translator(void (__cdecl*)(unsigned int,struct _EXCEPTION_POINTERS
   *)))(unsigned int,struct _EXCEPTION_POINTERS *) */

_func_void_uint__EXCEPTION_POINTERS_ptr * __cdecl
_set_se_translator(_func_void_uint__EXCEPTION_POINTERS_ptr *param_1)

{
  _func_void_uint__EXCEPTION_POINTERS_ptr *p_Var1;
  DWORD *pDVar2;
  
                    /* 0x8430  39  ?_set_se_translator@@YAP6AXIPAU_EXCEPTION_POINTERS@@@ZP6AXI0@Z@Z
                        */
  pDVar2 = FUN_78009cc0();
  p_Var1 = (_func_void_uint__EXCEPTION_POINTERS_ptr *)pDVar2[0x1a];
  pDVar2 = FUN_78009cc0();
  pDVar2[0x1a] = (DWORD)param_1;
  return p_Var1;
}


