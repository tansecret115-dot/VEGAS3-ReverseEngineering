/* Module: vidcap30.exe
   Function: FUN_0057af90
   Address: 0057af90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057af90(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    CoTaskMemFree(*(LPVOID *)(param_1 + 0x44));
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}


