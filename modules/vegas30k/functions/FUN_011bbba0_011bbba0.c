/* Module: vegas30k.dll
   Function: FUN_011bbba0
   Address: 011bbba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011bbba0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_1;
  iVar6 = 0;
  iVar5 = 0;
  bVar3 = true;
  if (*(int **)(param_1 + 0x7f8) == (int *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = **(int **)(param_1 + 0x7f8);
  }
  if (0 < param_1) {
    do {
      if (iVar5 < 0) break;
      piVar1 = *(int **)(*(int *)(*(int *)(iVar4 + 0x7f8) + 8) + iVar6 * 4);
      uVar2 = piVar1[2];
      if (((((uVar2 & 1) != 0) && ((uVar2 & 2) != 0)) && ((uVar2 & 4) != 0)) &&
         ((((uVar2 & 8) == 0 || ((uVar2 & 0x20) != 0)) &&
          (iVar5 = (**(code **)(*piVar1 + 0x60))(piVar1,param_2,param_3), iVar5 == 0)))) {
        bVar3 = false;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1);
  }
  *(uint *)(iVar4 + 0x7ec) = (uint)!bVar3 << 6 | *(uint *)(iVar4 + 0x7ec) & 0xffffffbf;
  return;
}


