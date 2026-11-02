/* Module: vegas30.exe
   Function: FUN_004c42b0
   Address: 004c42b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c42b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 0x1ff;
  if (iVar1 <= *(int *)(*(int *)(param_1 + 0x5d0) + 8)) {
    if (param_2 == 0) {
      iVar1 = 2;
    }
    FUN_004c3de0(param_1,0,iVar1);
  }
  return;
}


