/* Module: vegas30.exe
   Function: FUN_005c0420
   Address: 005c0420
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005c0420(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) == 3) {
    if (param_2 != 0) {
      FUN_004eb2b0(*(undefined4 *)(param_1 + 8));
    }
    FUN_004ea040(*(undefined4 *)(param_1 + 8),param_2 == 0);
    FUN_005410b0(*(undefined4 *)(param_1 + 8),param_1,0);
  }
  return;
}


