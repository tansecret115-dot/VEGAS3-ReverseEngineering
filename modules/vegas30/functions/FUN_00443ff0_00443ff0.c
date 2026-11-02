/* Module: vegas30.exe
   Function: FUN_00443ff0
   Address: 00443ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_00443ff0(uint *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = *(int **)((int)param_1 + 0x60);
  if (piVar1 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar1;
  }
  iVar4 = 0;
  param_1 = (uint *)0x0;
  puVar3 = (uint *)0x0;
  if (0 < iVar5) {
    do {
      iVar2 = *(int *)(piVar1[1] * iVar4 + 4 + piVar1[2]);
      puVar3 = (uint *)(piVar1[1] * iVar4 + piVar1[2]);
      if ((param_3 <= iVar2) && ((param_3 < iVar2 || (param_2 <= *puVar3)))) {
        param_1 = puVar3;
      }
      iVar4 = iVar4 + 1;
      puVar3 = param_1;
    } while (iVar4 < iVar5);
  }
  return puVar3;
}


