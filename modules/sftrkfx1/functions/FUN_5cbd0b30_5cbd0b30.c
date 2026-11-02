/* Module: sftrkfx1.dll
   Function: FUN_5cbd0b30
   Address: 5cbd0b30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbd0b30(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_5cbd0b80(param_2);
  return *(int *)(param_1 + 0x28) +
         (int)(((longlong)iVar1 * (longlong)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10))) /
              (longlong)*(int *)(param_1 + 0x2c));
}


