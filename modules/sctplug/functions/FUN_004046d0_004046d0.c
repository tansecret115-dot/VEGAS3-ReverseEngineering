/* Module: sctplug.dll
   Function: FUN_004046d0
   Address: 004046d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004046d0(int param_1,LPWSTR param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_00404c50(param_1);
  if ((-1 < iVar1) && (param_4 == 0)) {
    FUN_00405a10(*(int *)(*(int *)(param_1 + 600) + 0x20),param_2,param_3,param_5);
  }
  return;
}


