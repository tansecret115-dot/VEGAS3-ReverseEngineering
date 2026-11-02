/* Module: vegas30.exe
   Function: FUN_00478b00
   Address: 00478b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_00478b00(uint param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    if (*(int *)(param_2 + 8) != 0) {
      return *(undefined1 *)(*(int *)(param_2 + 8) + param_1);
    }
    piVar1 = *(int **)(param_3 + 0x18);
    iVar2 = *(int *)(param_3 + 0x40);
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if ((iVar2 < 0) || (iVar3 + -1 < iVar2)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(piVar1[2] + iVar2 * 4);
    }
    if (iVar2 == param_2) {
      if ((*(uint *)(param_3 + 0x48) <= param_1) &&
         (param_1 < *(int *)(param_3 + 0x4c) + *(uint *)(param_3 + 0x48))) {
        return 1;
      }
    }
  }
  return 0;
}


