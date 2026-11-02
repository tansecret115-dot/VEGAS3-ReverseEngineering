/* Module: vegas30k.dll
   Function: FUN_01016b30
   Address: 01016b30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01016b30(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0x348) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x348) + 0x10c) = 0;
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    iVar5 = 0;
    while( true ) {
      piVar1 = *(int **)(param_1 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (iVar4 <= iVar5) break;
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
      if ((iVar5 < 0) || (iVar2 + -1 < iVar5)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(piVar1[2] + iVar5 * 4);
      }
      iVar2 = FUN_01016b30(uVar3);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar5 = iVar5 + 1;
    }
  }
  return iVar2;
}


