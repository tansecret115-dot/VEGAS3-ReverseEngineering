/* Module: sfppack3.dll
   Function: FUN_5cc5bbd0
   Address: 5cc5bbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc5bbd0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_5cc5bc20(param_2);
  return *(int *)(param_1 + 0x28) +
         (int)(((longlong)iVar1 * (longlong)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10))) /
              (longlong)*(int *)(param_1 + 0x2c));
}


