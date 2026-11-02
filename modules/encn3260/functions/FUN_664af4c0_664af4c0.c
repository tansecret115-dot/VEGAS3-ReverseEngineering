/* Module: encn3260.dll
   Function: FUN_664af4c0
   Address: 664af4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664af4c0(int param_1)

{
  FUN_664b0020();
  FUN_664b8610(param_1 + 0x3f);
  *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xfc;
  return;
}


