/* Module: vegas30k.dll
   Function: FUN_011d2ab0
   Address: 011d2ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011d2ab0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_011c6310(param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x4c));
  if (-1 < iVar1) {
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffffd | 4;
  }
  return;
}


