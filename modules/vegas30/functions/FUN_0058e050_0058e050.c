/* Module: vegas30.exe
   Function: FUN_0058e050
   Address: 0058e050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0058e050(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x18) == 0) {
    iVar1 = _SfQueueFindAndRemove_12(param_1 + 0x890,&LAB_0058e080,param_2);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x18) = 1;
    }
  }
  return;
}


