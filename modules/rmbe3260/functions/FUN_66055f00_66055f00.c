/* Module: rmbe3260.dll
   Function: FUN_66055f00
   Address: 66055f00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_66055f00(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_66057870(*(uint **)(param_1 + 0x1e));
  return uVar1 >> 0x10 ^ uVar1 & 0x3fff;
}


