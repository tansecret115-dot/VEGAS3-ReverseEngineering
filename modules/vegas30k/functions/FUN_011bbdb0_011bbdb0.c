/* Module: vegas30k.dll
   Function: FUN_011bbdb0
   Address: 011bbdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011bbdb0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar4 = 1;
  if (*(int **)(param_1 + 0x7f8) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int **)(param_1 + 0x7f8);
  }
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      if (iVar3 < 0) break;
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x7f8) + 8) + iVar6 * 4);
      uVar2 = piVar1[2];
      if (((((uVar2 & 1) != 0) && ((uVar2 & 2) != 0)) && ((uVar2 & 4) != 0)) &&
         (((uVar2 & 8) == 0 || ((uVar2 & 0x20) != 0)))) {
        iVar3 = (**(code **)(*piVar1 + 0x60))(piVar1,0,0);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  *(uint *)(param_1 + 0x7ec) = (uint)(iVar4 == 0) << 6 | *(uint *)(param_1 + 0x7ec) & 0xffffffbf;
  return iVar4;
}


