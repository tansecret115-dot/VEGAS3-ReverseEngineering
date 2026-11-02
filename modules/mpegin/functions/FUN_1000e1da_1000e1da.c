/* Module: mpegin.dll
   Function: FUN_1000e1da
   Address: 1000e1da
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1000e1da(undefined1 *param_1,byte *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_1000f557((int *)&local_24,param_2,param_3);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1000f43f(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}


