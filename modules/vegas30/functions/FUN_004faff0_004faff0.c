/* Module: vegas30.exe
   Function: FUN_004faff0
   Address: 004faff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004faff0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  piVar1 = *(int **)(param_1 + 0x178);
  iVar2 = *(int *)(param_1 + 0x180);
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  if ((iVar2 < 0) || (iVar4 + -1 < iVar2)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(piVar1[2] + iVar2 * 4);
  }
  if (((iVar4 != 0) && (iVar3 = *(int *)(iVar4 + 0x150), iVar3 < 0)) ||
     (**(int **)(param_1 + 0x17c) <= iVar3)) {
    iVar3 = 0;
  }
  FUN_004fb050(param_1,iVar2,iVar3,0,1,0);
  return;
}


