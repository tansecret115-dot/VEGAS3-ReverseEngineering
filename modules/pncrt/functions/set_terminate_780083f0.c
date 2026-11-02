/* Module: pncrt.dll
   Function: set_terminate
   Address: 780083f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void (__cdecl*__cdecl set_terminate(void (__cdecl*)(void)))(void) */

_func_void * __cdecl set_terminate(_func_void *param_1)

{
  _func_void *p_Var1;
  DWORD *pDVar2;
  
                    /* 0x83f0  44  ?set_terminate@@YAP6AXXZP6AXXZ@Z */
  pDVar2 = FUN_78009cc0();
  p_Var1 = (_func_void *)pDVar2[0x18];
  pDVar2 = FUN_78009cc0();
  pDVar2[0x18] = (DWORD)param_1;
  return p_Var1;
}


