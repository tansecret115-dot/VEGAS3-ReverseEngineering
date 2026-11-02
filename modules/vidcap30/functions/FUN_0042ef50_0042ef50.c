/* Module: vidcap30.exe
   Function: FUN_0042ef50
   Address: 0042ef50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042ef50(int param_1,int *param_2)

{
  int iVar1;
  
  FUN_0042f4b0(param_1,1);
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    iVar1 = *(int *)(param_1 + 0x518) * 0x40;
    *(int *)(iVar1 + 0x450 + param_1) = *param_2;
    *(int *)(iVar1 + 0x454 + param_1) = param_2[1];
  }
  FUN_0042f5d0(param_1,1);
  return;
}


