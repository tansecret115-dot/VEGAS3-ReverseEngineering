/* Module: encn3260.dll
   Function: FUN_664bab60
   Address: 664bab60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_664bab60(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 4);
  return iVar1 + 8;
}


