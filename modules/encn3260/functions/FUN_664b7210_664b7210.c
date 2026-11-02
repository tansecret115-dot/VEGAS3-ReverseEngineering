/* Module: encn3260.dll
   Function: FUN_664b7210
   Address: 664b7210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664b7210(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_6649f610(*(int *)(param_1 + 0x40));
  if (iVar1 == 0) {
    return 0x80040009;
  }
  FUN_6649f620(*(void **)(param_1 + 0x40),(undefined4 *)0x0);
  return 0;
}


