/* Module: sfcdi.dll
   Function: FUN_5bf3d970
   Address: 5bf3d970
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf3d970(undefined2 *param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    param_2._0_2_ = CONCAT11((char)*param_1,(char)((ushort)*param_1 >> 8));
    *param_1 = (undefined2)param_2;
    param_1 = param_1 + 1;
  }
  return;
}


