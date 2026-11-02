/* Module: aviplug.dll
   Function: FUN_5f9474a0
   Address: 5f9474a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f9474a0(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  iVar2 = 4;
  bVar4 = true;
  piVar1 = &DAT_5f9d9c90;
  piVar3 = param_2;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar4 = *piVar1 == *piVar3;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar2 = 4;
    bVar4 = true;
    piVar1 = &DAT_5f9d9c80;
    piVar3 = param_2;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar4 = *piVar1 == *piVar3;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      iVar2 = 4;
      bVar4 = true;
      piVar1 = &DAT_5f9eee08;
      piVar3 = param_2;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar4 = *piVar1 == *piVar3;
        piVar1 = piVar1 + 1;
        piVar3 = piVar3 + 1;
      } while (bVar4);
      if (!bVar4) {
        iVar2 = 4;
        bVar4 = true;
        piVar1 = &DAT_5f9da4c0;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar4 = *piVar1 == *param_2;
          piVar1 = piVar1 + 1;
          param_2 = param_2 + 1;
        } while (bVar4);
        if (bVar4) {
          *param_3 = param_1;
          (**(code **)(*param_1 + 4))(param_1);
          return 0;
        }
        *param_3 = 0;
        return 0x80004002;
      }
    }
  }
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = param_1 + 0x66;
  }
  *param_3 = piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  return 0;
}


