/* Module: pncrt.dll
   Function: atexit
   Address: 78021dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
                    /* 0x21dc0  581  atexit */
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


