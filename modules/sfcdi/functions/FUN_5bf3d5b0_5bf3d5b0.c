/* Module: sfcdi.dll
   Function: FUN_5bf3d5b0
   Address: 5bf3d5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3d5b0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (param_1 == 0) {
    return 1;
  }
  FUN_5bf3ce50(param_1,(LPCSTR)0x0);
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    iVar3 = (**(code **)(param_1 + 0x3c))(*(undefined4 *)(param_1 + 0x4c),param_2);
  }
  if ((*(uint *)(param_2 + 8) & 0x10) != 0) {
    iVar4 = 0;
    while( true ) {
      piVar1 = *(int **)(param_2 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
      if (iVar2 <= iVar4) break;
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(piVar1[2] + iVar4 * 4);
      }
      iVar3 = FUN_5bf3d5b0(param_1,iVar3);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return iVar3;
}


