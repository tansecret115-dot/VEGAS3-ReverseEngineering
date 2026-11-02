/* Module: encn3260.dll
   Function: FUN_664af6b0
   Address: 664af6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664af6b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_664b7950((HDC)(param_1 + 0x3f));
  if (iVar1 == 0) {
    *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) | 2;
  }
  return;
}


