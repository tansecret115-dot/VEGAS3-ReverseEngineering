/* Module: sfs4rw.dll
   Function: FUN_00486560
   Address: 00486560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00486560(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x35);
  if (iVar1 != 0) {
    uVar2 = 0;
    while (iVar1 = iVar1 >> 1, iVar1 != 0) {
      uVar2 = uVar2 + 1;
    }
    FUN_00486450(param_1,*(int *)(param_1 + 0x31),uVar2 << 4);
    if (uVar2 != 0) {
      FUN_00486340(param_1,*(uint *)(param_1 + 0x35),uVar2);
    }
    *(undefined4 *)(param_1 + 0x35) = 0;
    FUN_004865c0(param_1,*(char **)(param_1 + 0x3d),*(int *)(param_1 + 0x39));
    *(undefined4 *)(param_1 + 0x39) = 0;
  }
  return;
}


