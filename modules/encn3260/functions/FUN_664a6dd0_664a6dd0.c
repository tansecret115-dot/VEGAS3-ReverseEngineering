/* Module: encn3260.dll
   Function: FUN_664a6dd0
   Address: 664a6dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a6dd0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 100) != 0) {
    iVar1 = FUN_664aa870(*(int *)(param_1 + 100));
  }
  *(int *)(param_1 + 0xd8) = iVar1 + 1;
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    FUN_664aa6d0(*(void **)(param_1 + 0x68),1,0);
  }
  return 0x80004001;
}


