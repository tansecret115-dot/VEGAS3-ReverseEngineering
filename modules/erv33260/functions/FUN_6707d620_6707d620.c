/* Module: erv33260.dll
   Function: FUN_6707d620
   Address: 6707d620
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6707d620(int param_1)

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


