/* Module: vidcap30.exe
   Function: FUN_005837a0
   Address: 005837a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005837a0(int param_1)

{
  if (*(int *)(param_1 + 0xdc) == 0) {
    *(undefined4 *)(param_1 + 0xdc) = 1;
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_0057ca60(1,0,*(int *)(param_1 + 0x28) + 0xc);
      return;
    }
    FUN_0057ca60(1,0,0);
  }
  return;
}


