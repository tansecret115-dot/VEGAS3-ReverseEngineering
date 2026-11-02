/* Module: vegas30.exe
   Function: FUN_0050a040
   Address: 0050a040
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0050a040(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == param_2) {
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
        piVar1 = (int *)FUN_0050a040(*(undefined4 *)(*(int *)(param_1[0x48] + 8) + iVar3 * 4),
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


