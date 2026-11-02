/* Module: vegas30.exe
   Function: FUN_005351d0
   Address: 005351d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005351d0(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x900) != 0) {
    if (DAT_00647630 != 0) {
      FUN_004a45b0(DAT_00647630,param_2 + 0x8e0,param_2 + 0x8f0);
    }
    if ((*(int *)(param_2 + 0x900) != 0) &&
       ((*(int *)(param_2 + 0x8f0) != 0 || (*(int *)(param_2 + 0x8f4) != 0)))) goto LAB_00535244;
  }
  uVar1 = FUN_005b8d80(param_1);
  *(undefined4 *)(param_2 + 0x8e0) = 0;
  *(int *)(param_2 + 0x8f0) = (int)uVar1;
  *(undefined4 *)(param_2 + 0x8e4) = 0;
  *(int *)(param_2 + 0x8f4) = (int)((ulonglong)uVar1 >> 0x20);
LAB_00535244:
  FUN_00532840(param_2);
  return;
}


