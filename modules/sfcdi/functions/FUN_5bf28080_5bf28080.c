/* Module: sfcdi.dll
   Function: FUN_5bf28080
   Address: 5bf28080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf28080(undefined4 *param_1,LPCSTR param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    LoadIconA((HINSTANCE)*param_1,param_2);
    return;
  }
  LoadIconA((HINSTANCE)0x0,param_2);
  return;
}


