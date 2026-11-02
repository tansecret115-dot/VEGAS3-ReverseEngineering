/* Module: vidpcore.dll
   Function: FUN_5deac010
   Address: 5deac010
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5deac010(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_5deac060(param_2);
  return *(int *)(param_1 + 0x54) +
         (int)(((longlong)iVar1 * (longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44))) /
              (longlong)*(int *)(param_1 + 0x58));
}


