/* Module: sfpagepeel.dll
   Function: FUN_0041bfe0
   Address: 0041bfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041bfe0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041c030(param_2);
  return *(int *)(param_1 + 0x54) +
         (int)(((longlong)iVar1 * (longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44))) /
              (longlong)*(int *)(param_1 + 0x58));
}


