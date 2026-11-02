/* Module: vidcap30.exe
   Function: FUN_0042efa0
   Address: 0042efa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042efa0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  FUN_0042f4b0(param_1,0);
  iVar1 = *(int *)(param_1 + 0x518) * 0x40;
  *param_2 = *(undefined4 *)(iVar1 + 0x450 + param_1);
  param_2[1] = *(undefined4 *)(iVar1 + 0x454 + param_1);
  FUN_0042f5d0(param_1,0);
  return;
}


