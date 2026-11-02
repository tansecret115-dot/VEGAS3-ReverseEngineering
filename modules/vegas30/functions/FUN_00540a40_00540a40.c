/* Module: vegas30.exe
   Function: FUN_00540a40
   Address: 00540a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00540a40(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (int *)0x0)) {
    return 0x80070057;
  }
  piVar1 = *(int **)(param_1 + 0x228);
  if (piVar1 == (int *)0x0) {
    return 0x80004005;
  }
  iVar5 = 0;
  if (0 < *piVar1) {
    iVar2 = *(int *)(param_2 + 0x14);
    piVar6 = (int *)piVar1[2];
    do {
      iVar3 = *piVar6;
      iVar4 = *(int *)(iVar3 + 0x14);
      if ((iVar2 < iVar4) ||
         ((iVar2 <= iVar4 && (*(uint *)(param_2 + 0x10) < *(uint *)(iVar3 + 0x10))))) break;
      if ((*(uint *)(param_2 + 0x10) == *(uint *)(iVar3 + 0x10)) && (iVar2 == iVar4)) {
        if ((*(int *)(iVar3 + 0x24) < *(int *)(param_2 + 0x24)) ||
           ((*(int *)(iVar3 + 0x24) <= *(int *)(param_2 + 0x24) &&
            (*(uint *)(iVar3 + 0x20) <= *(uint *)(param_2 + 0x20))))) break;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < *piVar1);
  }
  *param_3 = iVar5;
  return 0;
}


