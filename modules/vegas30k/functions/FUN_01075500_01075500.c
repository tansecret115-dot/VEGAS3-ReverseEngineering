/* Module: vegas30k.dll
   Function: FUN_01075500
   Address: 01075500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01075500(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_010739f0(param_1,param_2);
  if ((*(uint *)(param_2 + 8) & 0x10) != 0) {
    iVar4 = 0;
    while( true ) {
      piVar1 = *(int **)(param_2 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if (iVar3 <= iVar4) break;
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(piVar1[2] + iVar4 * 4);
      }
      iVar3 = FUN_01075500(param_1,uVar2);
      if (iVar3 < 0) {
        return;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return;
}


