/* Module: mpegin.dll
   Function: FUN_10015286
   Address: 10015286
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10015286(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    FUN_10012de5((uint)param_1);
    uVar1 = FUN_100152b7(param_1);
    FUN_10012e37((uint)param_1);
  }
  else {
    param_1[3] = 0;
  }
  return uVar1;
}


