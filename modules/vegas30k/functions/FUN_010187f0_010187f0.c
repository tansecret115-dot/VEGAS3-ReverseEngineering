/* Module: vegas30k.dll
   Function: FUN_010187f0
   Address: 010187f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010187f0(int param_1,int *param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    *param_3 = *param_3 + 1;
    uVar1 = *(uint *)(param_1 + 0x330);
    uVar2 = *param_4;
    iVar6 = *(int *)(param_1 + 0x334);
    *param_4 = uVar2 + uVar1;
    param_4[1] = param_4[1] + iVar6 + (uint)CARRY4(uVar2,uVar1);
  }
  else {
    *param_2 = *param_2 + 1;
  }
  iVar6 = 0;
  while( true ) {
    piVar3 = *(int **)(param_1 + 0x214);
    if (piVar3 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar3;
    }
    if (iVar5 <= iVar6) break;
    if (piVar3 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar3;
    }
    if ((iVar6 < 0) || (iVar5 + -1 < iVar6)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(piVar3[2] + iVar6 * 4);
    }
    if (((*(uint *)(iVar5 + 8) & 0x10) != 0) &&
       (iVar4 = FUN_010187f0(iVar5,param_2,param_3,param_4), iVar4 < 0)) {
      return iVar4;
    }
    iVar6 = iVar6 + 1;
  }
  return iVar4;
}


