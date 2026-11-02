/* Module: vidcap30.exe
   Function: FUN_0057b1c0
   Address: 0057b1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0057b1c0(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    FUN_0057b270(param_1);
    CoTaskMemFree(param_1);
  }
  return;
}


