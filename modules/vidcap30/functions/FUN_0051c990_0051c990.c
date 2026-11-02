/* Module: vidcap30.exe
   Function: FUN_0051c990
   Address: 0051c990
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0051c990(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0051c9e0(param_2);
  return *(int *)(param_1 + 0x28) +
         (int)(((longlong)iVar1 * (longlong)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10))) /
              (longlong)*(int *)(param_1 + 0x2c));
}


