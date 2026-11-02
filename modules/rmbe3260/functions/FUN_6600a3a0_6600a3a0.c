/* Module: rmbe3260.dll
   Function: FUN_6600a3a0
   Address: 6600a3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600a3a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(void **)(param_1 + 0x54) != (void *)0x0) {
    uVar1 = FUN_660096a0(*(void **)(param_1 + 0x54),(CPNWindow *)(param_1 + -0xd0));
    return uVar1;
  }
  return 1;
}


