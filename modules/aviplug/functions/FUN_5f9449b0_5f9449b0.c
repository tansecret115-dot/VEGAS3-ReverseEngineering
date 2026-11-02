/* Module: aviplug.dll
   Function: FUN_5f9449b0
   Address: 5f9449b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f9449b0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = &DAT_5f9d9cb0;
  piVar3 = param_2;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (bVar4) {
LAB_5f944a51:
    if (param_1 != (int *)0x0) {
      piVar2 = param_1 + 0x67;
      goto LAB_5f944a63;
    }
  }
  else {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = &DAT_5f9d9c80;
    piVar3 = param_2;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (bVar4) goto LAB_5f944a51;
    iVar1 = 4;
    bVar4 = true;
    piVar2 = &DAT_5f9eee08;
    piVar3 = param_2;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (bVar4) goto LAB_5f944a51;
    iVar1 = 4;
    bVar4 = true;
    piVar2 = &DAT_5f9da4c0;
    piVar3 = param_2;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      *param_3 = (int)param_1;
      (**(code **)(*param_1 + 4))(param_1);
      return 0;
    }
    iVar1 = 4;
    bVar4 = true;
    piVar2 = &DAT_5f9da4e0;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *param_2;
      piVar2 = piVar2 + 1;
      param_2 = param_2 + 1;
    } while (bVar4);
    if (!bVar4) {
      *param_3 = 0;
      return 0x80004002;
    }
    if (param_1 != (int *)0x0) {
      piVar2 = param_1 + 0x66;
      goto LAB_5f944a63;
    }
  }
  piVar2 = (int *)0x0;
LAB_5f944a63:
  *param_3 = (int)piVar2;
  (**(code **)(*piVar2 + 4))(piVar2);
  return 0;
}


