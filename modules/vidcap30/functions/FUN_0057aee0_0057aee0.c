/* Module: vidcap30.exe
   Function: FUN_0057aee0
   Address: 0057aee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0057aee0(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    return *(undefined4 *)(param_1 + 0x28);
  }
  return 0;
}


