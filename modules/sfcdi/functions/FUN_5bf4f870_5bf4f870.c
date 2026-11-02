/* Module: sfcdi.dll
   Function: FUN_5bf4f870
   Address: 5bf4f870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf4f870(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x20);
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
  iVar2 = *(int *)(*(int *)(iVar3 + 0x14) + 0x350);
  memmove((void *)(param_2 + 0x10),(void *)(iVar3 + 0xc),8);
  memmove((void *)(param_2 + 0x18),(void *)(iVar2 + 8),0x800);
  *param_4 = 0x930;
  return 0;
}


