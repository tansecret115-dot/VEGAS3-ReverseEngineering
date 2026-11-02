/* Module: pncrt.dll
   Function: set_unexpected
   Address: 78008410
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void (__cdecl*__cdecl set_unexpected(void (__cdecl*)(void)))(void) */

_func_void * __cdecl set_unexpected(_func_void *param_1)

{
  _func_void *p_Var1;
  DWORD *pDVar2;
  
                    /* 0x8410  45  ?set_unexpected@@YAP6AXXZP6AXXZ@Z */
  pDVar2 = FUN_78009cc0();
  p_Var1 = (_func_void *)pDVar2[0x19];
  pDVar2 = FUN_78009cc0();
  pDVar2[0x19] = (DWORD)param_1;
  return p_Var1;
}


