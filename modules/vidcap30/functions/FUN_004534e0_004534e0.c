/* Module: vidcap30.exe
   Function: FUN_004534e0
   Address: 004534e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004534e0(int param_1)

{
  if (DAT_005bc400 != (code *)0x0) {
    if (*(int *)(param_1 + 0x110) != 0) {
      (*DAT_005bc400)(*(int *)(param_1 + 0x110));
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return;
}


