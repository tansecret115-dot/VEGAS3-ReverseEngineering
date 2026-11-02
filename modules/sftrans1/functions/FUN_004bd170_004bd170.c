/* Module: sftrans1.dll
   Function: FUN_004bd170
   Address: 004bd170
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004bd170(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004bd1c0(param_2);
  return *(int *)(param_1 + 0x54) +
         (int)(((longlong)iVar1 * (longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44))) /
              (longlong)*(int *)(param_1 + 0x58));
}


