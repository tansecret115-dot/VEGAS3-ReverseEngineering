/* Module: vegas30.exe
   Function: FUN_005f7e80
   Address: 005f7e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005f7e80(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return 0;
}


