/* Module: sfcdi.dll
   Function: FUN_5bf3d150
   Address: 5bf3d150
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3d150(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0x348) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x348) + 0x10c) = 0;
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    iVar4 = 0;
    while( true ) {
      piVar1 = *(int **)(param_1 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if (iVar3 <= iVar4) break;
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
      iVar2 = FUN_5bf3d150(iVar2);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return iVar2;
}


