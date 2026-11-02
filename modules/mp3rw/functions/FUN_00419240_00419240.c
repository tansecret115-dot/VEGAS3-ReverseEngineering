/* Module: mp3rw.dll
   Function: FUN_00419240
   Address: 00419240
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_00419240(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00417f80(*(uint *)(param_1 + 8),0);
  return uVar1 >> 0x11;
}


