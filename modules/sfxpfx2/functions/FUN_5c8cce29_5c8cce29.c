/* Module: sfxpfx2.dll
   Function: FUN_5c8cce29
   Address: 5c8cce29
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c8cce29(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 4),0xffffffff);
  return *(undefined4 *)(param_1 + 0xc);
}


