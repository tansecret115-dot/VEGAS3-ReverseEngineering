/* Module: encn3260.dll
   Function: FUN_66495fc0
   Address: 66495fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66495fc0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x18) + *(int *)(param_2 + 0x10);
  for (iVar1 = *(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x1c); 999999 < iVar1;
      iVar1 = iVar1 + -1000000) {
    iVar2 = iVar2 + 1;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  return;
}


