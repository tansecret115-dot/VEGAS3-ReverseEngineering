/* Module: g2plug.dll
   Function: FUN_5f80d9d0
   Address: 5f80d9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f80d9d0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *param_1;
  while ((iVar2 != param_2 && (iVar2 != 0))) {
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar3 = iVar3 + 1;
    iVar2 = *piVar1;
  }
  return iVar3;
}


