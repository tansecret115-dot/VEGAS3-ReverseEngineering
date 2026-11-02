/* Module: sfcdi.dll
   Function: FUN_5bf51040
   Address: 5bf51040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf51040(int param_1,void *param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20);
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((iVar3 < 0) || (iVar2 + -1 < iVar3)) {
    iVar3 = 0;
  }
  else {
    iVar3 = piVar1[1] * iVar3 + piVar1[2];
  }
  memmove(param_2,(void *)(iVar3 + 0xc),8);
  memmove((void *)((int)param_2 + 8),(void *)(*(int *)(*(int *)(iVar3 + 0x14) + 0x350) + 8),0x800);
  *param_4 = 0x91c;
  return 0;
}


