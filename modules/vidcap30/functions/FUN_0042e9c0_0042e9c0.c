/* Module: vidcap30.exe
   Function: FUN_0042e9c0
   Address: 0042e9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042e9c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_0042f4b0(param_1,1);
  iVar1 = *(int *)(param_1 + 0x518) * 0x40;
  *(undefined4 *)(iVar1 + 0x418 + param_1) = param_2;
  *(undefined4 *)(iVar1 + 0x41c + param_1) = param_3;
  FUN_0042f5d0(param_1,1);
  return;
}


