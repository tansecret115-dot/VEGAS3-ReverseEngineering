/* Module: vidcap30.exe
   Function: FUN_00568a30
   Address: 00568a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00568a30(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x35);
  if (iVar1 != 0) {
    iVar2 = 0;
    while (iVar1 = iVar1 >> 1, iVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
    FUN_00568920(param_1,*(undefined4 *)(param_1 + 0x31),iVar2 << 4);
    if (iVar2 != 0) {
      FUN_00568810(param_1,*(undefined4 *)(param_1 + 0x35),iVar2);
    }
    *(undefined4 *)(param_1 + 0x35) = 0;
    FUN_00568a90(param_1,*(undefined4 *)(param_1 + 0x3d),*(undefined4 *)(param_1 + 0x39));
    *(undefined4 *)(param_1 + 0x39) = 0;
  }
  return;
}


