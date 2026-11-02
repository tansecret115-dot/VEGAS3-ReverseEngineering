/* Module: mp3rw.dll
   Function: FUN_004865e0
   Address: 004865e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004865e0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x35);
  if (iVar1 != 0) {
    uVar2 = 0;
    while (iVar1 = iVar1 >> 1, iVar1 != 0) {
      uVar2 = uVar2 + 1;
    }
    FUN_004864d0(param_1,*(int *)(param_1 + 0x31),uVar2 << 4);
    if (uVar2 != 0) {
      FUN_004863c0(param_1,*(uint *)(param_1 + 0x35),uVar2);
    }
    *(undefined4 *)(param_1 + 0x35) = 0;
    FUN_00486640(param_1,*(char **)(param_1 + 0x3d),*(int *)(param_1 + 0x39));
    *(undefined4 *)(param_1 + 0x39) = 0;
  }
  return;
}


