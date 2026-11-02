/* Module: mcplug.dll
   Function: FUN_00419090
   Address: 00419090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00419090(undefined4 *param_1,LPCSTR param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    LoadBitmapA((HINSTANCE)*param_1,param_2);
    return;
  }
  LoadBitmapA((HINSTANCE)0x0,param_2);
  return;
}


