/* Module: rmbe3260.dll
   Function: FUN_6603d690
   Address: 6603d690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6603d690(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(int *)(param_1 + 0x58) != 0) || (*(int *)(param_1 + 0x5c) == 0)) ||
     (*(int *)(*(int *)(param_1 + 0x4c) + -8) != 0)) {
    uVar1 = 0xfff2;
  }
  return uVar1;
}


