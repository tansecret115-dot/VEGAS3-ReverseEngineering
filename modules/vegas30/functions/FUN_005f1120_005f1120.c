/* Module: vegas30.exe
   Function: FUN_005f1120
   Address: 005f1120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005f1120(int param_1)

{
  int *piVar1;
  
  FUN_005f10e0();
  piVar1 = *(int **)(param_1 + 0x14c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  return;
}


