/* Module: mpgaout.dll
   Function: FUN_10003088
   Address: 10003088
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10003088(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_10002610(param_1,0,0,1);
    FUN_10001050(param_1,"   Avg slots/frame = %.3f; b/smp = %.2f; br = %.3f kbps.");
  }
  (**(code **)(*(int *)(param_1 + 0x44e00) + 0x14))(*(int *)(param_1 + 0x44e00));
  return;
}


