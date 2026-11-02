/* Module: vegas30.exe
   Function: FUN_004fb2e0
   Address: 004fb2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fb2e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = **(int **)(param_1 + 0x17c);
  if (iVar1 != 0) {
    piVar2 = *(int **)(param_1 + 0x178);
    iVar3 = *(int *)(param_1 + 0x180);
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if ((iVar3 < 0) || (iVar5 + -1 < iVar3)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(piVar2[2] + iVar3 * 4);
    }
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar5 + 0x150);
    }
    iVar6 = *(int *)(param_1 + 0x170);
    iVar4 = (iVar5 / iVar6) * iVar6;
    iVar6 = iVar6 + -1 + iVar4;
    if (iVar1 <= iVar6) {
      iVar6 = iVar1 + -1;
    }
    param_2 = param_2 + iVar5;
    if ((iVar4 <= param_2) && (iVar4 = param_2, iVar6 < param_2)) {
      iVar4 = iVar6;
    }
    FUN_004fb050(param_1,iVar3,iVar4,param_3 != 0,1,0);
  }
  return;
}


