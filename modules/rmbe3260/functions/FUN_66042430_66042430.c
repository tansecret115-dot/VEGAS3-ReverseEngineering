/* Module: rmbe3260.dll
   Function: FUN_66042430
   Address: 66042430
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66042430(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10c) != 0) {
    uVar1 = ftol();
    *(undefined4 *)(param_1 + 0x140) = uVar1;
  }
  return;
}


