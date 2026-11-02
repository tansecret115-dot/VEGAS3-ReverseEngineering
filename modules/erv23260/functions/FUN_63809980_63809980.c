/* Module: erv23260.dll
   Function: FUN_63809980
   Address: 63809980
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63809980(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
    *(int *)(param_1 + 4) = iVar1;
    FUN_637f2010(*(void **)(iVar1 + 8));
    iVar1 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar1;
  }
  return;
}


