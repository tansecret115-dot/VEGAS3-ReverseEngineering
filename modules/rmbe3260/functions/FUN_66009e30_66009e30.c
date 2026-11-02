/* Module: rmbe3260.dll
   Function: FUN_66009e30
   Address: 66009e30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66009e30(int param_1)

{
  undefined4 uVar1;
  
  if (*(void **)(param_1 + 0x3c) != (void *)0x0) {
    uVar1 = FUN_660096a0(*(void **)(param_1 + 0x3c),(CPNWindow *)(param_1 + -0xd0));
    return uVar1;
  }
  return 1;
}


