/* Module: sfnetmedia.dll
   Function: FUN_00418020
   Address: 00418020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418020(undefined4 *param_1,LPCSTR param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    LoadIconA((HINSTANCE)*param_1,param_2);
    return;
  }
  LoadIconA((HINSTANCE)0x0,param_2);
  return;
}


