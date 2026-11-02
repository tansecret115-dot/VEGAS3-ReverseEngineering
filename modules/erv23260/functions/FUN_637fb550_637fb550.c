/* Module: erv23260.dll
   Function: FUN_637fb550
   Address: 637fb550
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_637fb550(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4) - *(int *)(param_1 + 0xbc);
  iVar2 = iVar1 + 1;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}


