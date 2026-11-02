/* Module: sfcdi.dll
   Function: FUN_5bf434c0
   Address: 5bf434c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf434c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_5bf419b0(param_1,param_2);
  if ((*(uint *)(param_2 + 8) & 0x10) != 0) {
    iVar3 = 0;
    while( true ) {
      piVar1 = *(int **)(param_2 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
      if (iVar2 <= iVar3) break;
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
      if ((iVar3 < 0) || (iVar2 + -1 < iVar3)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(piVar1[2] + iVar3 * 4);
      }
      iVar2 = FUN_5bf434c0(param_1,iVar2);
      if (iVar2 < 0) {
        return;
      }
      iVar3 = iVar3 + 1;
    }
  }
  return;
}


