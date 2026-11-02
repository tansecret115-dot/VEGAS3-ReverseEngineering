/* Module: pncrt.dll
   Function: FUN_7801a9f0
   Address: 7801a9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_7801a9f0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(*param_1 + -4) + 8);
  iVar2 = (int)param_1 - *(int *)(*(int *)(*param_1 + -4) + 4);
  if (iVar1 != 0) {
    iVar2 = iVar2 + *(int *)((int)param_1 - iVar1);
  }
  return iVar2;
}


