/* Module: rmbe3260.dll
   Function: FUN_66027210
   Address: 66027210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66027210(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 8);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


