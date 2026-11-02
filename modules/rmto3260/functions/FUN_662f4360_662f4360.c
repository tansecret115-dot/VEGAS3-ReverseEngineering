/* Module: rmto3260.dll
   Function: FUN_662f4360
   Address: 662f4360
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_662f4360(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_662f47e0(*(uint **)(param_1 + 0x1e));
  return uVar1 >> 0x10 ^ uVar1 & 0x3fff;
}


