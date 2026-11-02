/* Module: vegas30k.dll
   Function: FUN_011944e0
   Address: 011944e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011944e0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x638) == 0) {
    return 0x8000ffff;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((uVar1 & 0x60) == 0) {
    *(uint *)(param_1 + 0x20) = uVar1 | 0x800;
    FUN_011af200();
    *(undefined4 *)(param_1 + 0x63c) = 1;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x638) + 0x34))(*(int **)(param_1 + 0x638));
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x63c) = 0;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffff7ff;
      FUN_011af240();
      return 0;
    }
  }
  else {
    *(uint *)(param_1 + 0x20) = uVar1 | 0x800;
  }
  return 0;
}


