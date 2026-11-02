/* Module: erv23260.dll
   Function: FUN_637fd230
   Address: 637fd230
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_637fd230(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4) - *(int *)(param_1 + 8);
  iVar2 = iVar1 + 1;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}


