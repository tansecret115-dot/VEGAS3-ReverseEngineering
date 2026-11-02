/* Module: rmme3260.dll
   Function: FUN_66244b00
   Address: 66244b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66244b00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_6624cdd0((HDC)(param_1 + 0x3f));
  if (iVar1 == 0) {
    *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) | 2;
  }
  return;
}


