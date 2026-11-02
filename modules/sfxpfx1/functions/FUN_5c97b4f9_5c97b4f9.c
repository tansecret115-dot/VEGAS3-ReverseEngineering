/* Module: sfxpfx1.dll
   Function: FUN_5c97b4f9
   Address: 5c97b4f9
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c97b4f9(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 4),0xffffffff);
  return *(undefined4 *)(param_1 + 0xc);
}


