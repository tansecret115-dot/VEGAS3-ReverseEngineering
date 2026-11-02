/* Module: vegas30k.dll
   Function: FUN_011d2510
   Address: 011d2510
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011d2510(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_011c6280(param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x4c),
                       param_1 + 0x1f0);
  if (-1 < iVar1) {
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffffe;
    iVar1 = 0;
  }
  return iVar1;
}


