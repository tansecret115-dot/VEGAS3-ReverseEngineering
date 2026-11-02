/* Module: vegas30k.dll
   Function: FUN_011362b0
   Address: 011362b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_011362b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = _SfQueueWait_8(param_1 + 0x24,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01135f80();
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 2;
    }
  }
  iVar2 = _SfQueueRemove_8(param_1 + 0x24,0xffffffff);
  piVar1 = *(int **)(iVar2 + 8);
  (**(code **)(*piVar1 + 4))(piVar1);
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  return piVar1;
}


