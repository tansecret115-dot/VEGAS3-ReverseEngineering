/* Module: vidcap30.exe
   Function: FUN_0042f360
   Address: 0042f360
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0042f360(int param_1)

{
  int iVar1;
  
  FUN_0042f4b0(param_1,0);
  iVar1 = *(int *)(param_1 + 0x518);
  FUN_0042f5d0(param_1,0);
  return iVar1 == 1;
}


