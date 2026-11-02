/* Module: vegas30k.dll
   Function: FUN_011bbc50
   Address: 011bbc50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011bbc50(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = param_1;
  iVar7 = 0;
  iVar3 = 0;
  *param_2 = 0;
  iVar6 = 0;
  iVar5 = 1;
  if (*(int **)(param_1 + 0x7f8) == (int *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = **(int **)(param_1 + 0x7f8);
  }
  if (0 < param_1) {
    do {
      if (iVar3 < 0) break;
      piVar1 = *(int **)(*(int *)(*(int *)(iVar2 + 0x7f8) + 8) + iVar7 * 4);
      uVar4 = piVar1[2];
      if (((((uVar4 & 1) != 0) && ((uVar4 & 2) != 0)) && ((uVar4 & 4) != 0)) &&
         (((uVar4 & 8) != 0 && ((uVar4 & 0x30) == 0)))) {
        iVar3 = (**(code **)(*piVar1 + 0x50))(piVar1);
        if (iVar3 == 0) {
          iVar5 = 0;
          iVar6 = iVar6 + 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_1);
  }
  uVar4 = (uint)(iVar5 == 0) << 9;
  *(uint *)(iVar2 + 0x7ec) = (~uVar4 >> 9 & 1) << 6 | uVar4 | *(uint *)(iVar2 + 0x7ec) & 0xfffffdbf;
  *param_2 = iVar6;
  return iVar5;
}


