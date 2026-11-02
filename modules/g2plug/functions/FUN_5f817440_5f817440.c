/* Module: g2plug.dll
   Function: FUN_5f817440
   Address: 5f817440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f817440(undefined4 *param_1,LPCSTR param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    LoadIconA((HINSTANCE)*param_1,param_2);
    return;
  }
  LoadIconA((HINSTANCE)0x0,param_2);
  return;
}


