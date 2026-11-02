/* Module: vegas30.exe
   Function: FUN_00598a80
   Address: 00598a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_00598a80(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x5d0) + -1;
  if (iVar2 < 0) {
    return 0x7fffffffffffffff;
  }
  iVar2 = *(int *)((*(int **)(param_1 + 0x5d0))[2] + iVar2 * 4);
  uVar1 = *(uint *)(iVar2 + 0x28);
  return CONCAT44(((int)uVar1 >> 0x1f) + *(int *)(iVar2 + 0x1c) +
                  (uint)CARRY4(uVar1,*(uint *)(iVar2 + 0x18)),uVar1 + *(uint *)(iVar2 + 0x18));
}


