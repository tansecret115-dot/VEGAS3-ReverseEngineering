/* Module: rmme3260.dll
   Function: FUN_662653d0
   Address: 662653d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_662653d0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_662675c0(*(uint **)(param_1 + 0x1e));
  return uVar1 >> 0x10 ^ uVar1 & 0x3fff;
}


