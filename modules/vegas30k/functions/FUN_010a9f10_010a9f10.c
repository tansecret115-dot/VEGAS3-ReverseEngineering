/* Module: vegas30k.dll
   Function: FUN_010a9f10
   Address: 010a9f10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010a9f10(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_010a9f60(param_2);
  return *(int *)(param_1 + 0x28) +
         (int)(((longlong)iVar1 * (longlong)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10))) /
              (longlong)*(int *)(param_1 + 0x2c));
}


