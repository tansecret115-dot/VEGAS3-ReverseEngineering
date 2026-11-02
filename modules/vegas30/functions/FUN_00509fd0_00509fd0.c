/* Module: vegas30.exe
   Function: FUN_00509fd0
   Address: 00509fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00509fd0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar2 = 4;
    bVar5 = true;
    piVar4 = param_2;
    piVar1 = param_1;
    do {
      piVar1 = piVar1 + 1;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *piVar1 == *piVar4;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      return param_1;
    }
    if ((int *)param_1[0x48] == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)param_1[0x48];
    }
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        piVar1 = (int *)FUN_00509fd0(*(undefined4 *)(*(int *)(param_1[0x48] + 8) + iVar3 * 4),
                                     param_2);
        if (piVar1 != (int *)0x0) {
          return piVar1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  return (int *)0x0;
}


