/* Module: rmbe3260.dll
   Function: FUN_6603d740
   Address: 6603d740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6603d740(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xfff1;
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    uVar1 = FUN_6603e330(*(int **)(param_1 + 0x18));
  }
  return uVar1;
}


