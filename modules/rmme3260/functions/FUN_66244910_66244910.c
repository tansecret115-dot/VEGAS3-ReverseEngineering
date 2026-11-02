/* Module: rmme3260.dll
   Function: FUN_66244910
   Address: 66244910
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66244910(int param_1)

{
  FUN_66245470();
  FUN_6624da90(param_1 + 0x3f);
  *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xfc;
  return;
}


