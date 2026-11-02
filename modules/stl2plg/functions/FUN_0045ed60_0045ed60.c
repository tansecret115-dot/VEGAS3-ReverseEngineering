/* Module: stl2plg.dll
   Function: FUN_0045ed60
   Address: 0045ed60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045ed60(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 0x1d1);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x96)) {
    piVar5 = (int *)(iVar1 + 0x31);
    do {
      iVar2 = 0;
      if (0 < iVar4) {
        piVar3 = (int *)(iVar1 + 0x1d);
        do {
          if (piVar5[-5] == *piVar3) {
            piVar3 = *(int **)(iVar1 + 0x31 + iVar2 * 4);
            if (piVar3 != (int *)0x0) goto LAB_0045eda6;
            break;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar2 < iVar4);
      }
      piVar3 = FUN_0045edc0(param_1);
LAB_0045eda6:
      *piVar5 = (int)piVar3;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x96));
  }
  return;
}


