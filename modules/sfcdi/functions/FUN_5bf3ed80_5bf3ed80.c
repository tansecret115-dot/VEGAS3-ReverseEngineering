/* Module: sfcdi.dll
   Function: FUN_5bf3ed80
   Address: 5bf3ed80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3ed80(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    FUN_5bf3ce50(param_1,(LPCSTR)0x0);
    iVar2 = FUN_5bf3d640(param_1,param_2);
    if ((-1 < iVar2) && ((*(uint *)(param_2 + 8) & 0x10) != 0)) {
      if (*(int **)(param_2 + 0x214) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = **(int **)(param_2 + 0x214);
      }
      iVar4 = 0;
      if (0 < iVar3) {
        do {
          piVar1 = *(int **)(param_2 + 0x214);
          if (piVar1 == (int *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *piVar1;
          }
          if ((iVar4 < 0) || (iVar2 + -1 < iVar4)) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(piVar1[2] + iVar4 * 4);
          }
          iVar2 = FUN_5bf3ed80(param_1,iVar2);
        } while ((-1 < iVar2) && (iVar4 = iVar4 + 1, iVar4 < iVar3));
      }
    }
    return iVar2;
  }
  return 1;
}


