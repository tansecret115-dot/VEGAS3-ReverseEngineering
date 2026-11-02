/* Module: vegas30.exe
   Function: FUN_005f1430
   Address: 005f1430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005f1430(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x130);
  uVar2 = 0;
  if ((((piVar1 != (int *)0x0) && (0 < *piVar1)) && (-1 < param_2)) && (param_2 < *piVar1)) {
    uVar2 = *(undefined4 *)(piVar1[2] + param_2 * 4);
  }
  return uVar2;
}


