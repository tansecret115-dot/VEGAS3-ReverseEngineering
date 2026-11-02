/* Module: vidpcore.dll
   Function: FUN_5deb7980
   Address: 5deb7980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deb7980(undefined4 *param_1,LPCSTR param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    LoadIconA((HINSTANCE)*param_1,param_2);
    return;
  }
  LoadIconA((HINSTANCE)0x0,param_2);
  return;
}


