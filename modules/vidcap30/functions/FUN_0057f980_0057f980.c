/* Module: vidcap30.exe
   Function: FUN_0057f980
   Address: 0057f980
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057f980(int param_1)

{
  SetEvent(*(HANDLE *)(param_1 + 0xd0));
  FUN_0057e350();
  return;
}


