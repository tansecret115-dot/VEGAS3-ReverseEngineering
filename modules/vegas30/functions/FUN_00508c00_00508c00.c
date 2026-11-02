/* Module: vegas30.exe
   Function: FUN_00508c00
   Address: 00508c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00508c00(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x120);
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if ((-1 < param_2) && (param_2 <= iVar2)) {
      return *(undefined4 *)(piVar1[2] + param_2 * 4);
    }
  }
  return 0;
}


