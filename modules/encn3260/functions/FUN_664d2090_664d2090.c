/* Module: encn3260.dll
   Function: FUN_664d2090
   Address: 664d2090
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_664d2090(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_664d78d0(*(uint **)(param_1 + 0x1e));
  return uVar1 >> 0x10 ^ uVar1 & 0x3fff;
}


