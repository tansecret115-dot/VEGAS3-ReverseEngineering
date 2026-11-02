/* Module: mp3plug.dll
   Function: FUN_5f6e6d60
   Address: 5f6e6d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e6d60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_5f6e65a0(1,*(int *)(param_1 + 0x1c));
  *(int *)(param_1 + 0x44) = iVar1;
  return;
}


