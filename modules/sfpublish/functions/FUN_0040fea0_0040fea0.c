/* Module: sfpublish.dll
   Function: FUN_0040fea0
   Address: 0040fea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040fea0(undefined2 *param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_9(param_1);
  if (iVar1 < 0) {
    *param_1 = 10;
    *(int *)(param_1 + 4) = iVar1;
  }
  return;
}


