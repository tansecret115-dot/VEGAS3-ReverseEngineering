/* Module: vidcap30.exe
   Function: FUN_005827e0
   Address: 005827e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005827e0(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 4),0xffffffff);
  return *(undefined4 *)(param_1 + 0xc);
}


