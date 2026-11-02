/* Module: vegas30k.dll
   Function: FUN_0119a9c0
   Address: 0119a9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0119a9c0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x638) == 0) {
    return -0x7fff0001;
  }
  iVar3 = *(int *)(param_1 + 0x624) + 1;
  *(int *)(param_1 + 0x624) = iVar3;
  if (*(int *)(param_1 + 0x61c) == iVar3) {
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 | 0x20);
    uVar1 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = uVar1 | 0x20;
    if (((uVar1 & 0x800) == 0) && (*(int *)(param_1 + 0x24) == 0)) {
      *(undefined4 *)(param_1 + 0x63c) = 1;
      FUN_011af200();
      *(undefined4 *)(param_1 + 0x8d0) = *(undefined4 *)(param_1 + 0x8c8);
      *(undefined4 *)(param_1 + 0x8d4) = *(undefined4 *)(param_1 + 0x8cc);
      iVar3 = (**(code **)(**(int **)(param_1 + 0x638) + 0x34))(*(int **)(param_1 + 0x638));
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x63c) = 0;
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffdf;
        FUN_011af240();
        FUN_011aaee0(param_1,uVar2 & 0xffffffdf);
      }
      ResetEvent(*(HANDLE *)(param_1 + 0x81c));
      FUN_0119ad40(*(undefined4 *)(param_1 + 0x81c));
      return iVar3;
    }
  }
  return 0;
}


