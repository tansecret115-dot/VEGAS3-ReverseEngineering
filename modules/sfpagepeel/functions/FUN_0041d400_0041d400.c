/* Module: sfpagepeel.dll
   Function: FUN_0041d400
   Address: 0041d400
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041d400(byte *param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x90) != -1) {
    if (*(int *)(param_1 + 0x90) == 5) {
      *(uint *)(param_1 + 0x7c) = (uint)((param_4 & 10) != 0);
      FUN_0041cf00(param_1,param_2,param_3,5);
      return;
    }
    iVar1 = FUN_0041cdc0((int)param_1,param_2,param_3);
    FUN_0041ce80((int)param_1,iVar1,0);
  }
  return;
}


