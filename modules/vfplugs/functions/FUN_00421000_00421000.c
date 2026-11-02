/* Module: vfplugs.dll
   Function: FUN_00421000
   Address: 00421000
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00421000(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00421050(param_2);
  return *(int *)(param_1 + 0x54) +
         (int)(((longlong)iVar1 * (longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44))) /
              (longlong)*(int *)(param_1 + 0x58));
}


