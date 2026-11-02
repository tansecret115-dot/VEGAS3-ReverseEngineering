/* Module: vegas30.exe
   Function: FUN_005c6910
   Address: 005c6910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c6910(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (-1 < param_2) {
    piVar1 = *(int **)(param_1 + 0x54);
    if (piVar1 == (int *)0x0) {
      if (param_2 < 1) goto LAB_005c6945;
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if (iVar2 + -1 < param_2) {
      return 0;
    }
    return *(undefined4 *)(piVar1[2] + param_2 * 4);
  }
LAB_005c6945:
  return *(undefined4 *)(param_1 + 0x50);
}


