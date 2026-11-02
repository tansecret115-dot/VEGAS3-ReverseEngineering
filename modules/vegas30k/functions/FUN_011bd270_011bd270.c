/* Module: vegas30k.dll
   Function: FUN_011bd270
   Address: 011bd270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011bd270(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  *param_3 = 0;
  piVar2 = param_2;
  piVar3 = &DAT_011dab80;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = &DAT_011d9d50;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *param_2 == *piVar2;
      param_2 = param_2 + 1;
      piVar2 = piVar2 + 1;
    } while (bVar4);
    if (!bVar4) {
      return 0x80004002;
    }
  }
  *param_3 = param_1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return 0;
}


