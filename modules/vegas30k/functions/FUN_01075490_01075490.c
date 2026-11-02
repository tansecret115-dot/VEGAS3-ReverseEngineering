/* Module: vegas30k.dll
   Function: FUN_01075490
   Address: 01075490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01075490(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_010746f0(param_1,param_2);
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
        FUN_01075490(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        FUN_01075490(param_1,*(undefined4 *)(piVar1[2] + iVar3 * 4));
        iVar3 = iVar3 + 1;
      }
    }
  }
  return;
}


