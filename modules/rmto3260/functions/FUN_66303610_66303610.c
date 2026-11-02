/* Module: rmto3260.dll
   Function: FUN_66303610
   Address: 66303610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66303610(int param_1,uint param_2,int *param_3,int *param_4,uint *param_5)

{
  int iVar1;
  
  *param_3 = *(int *)(param_1 + 0x18);
  *param_5 = 0;
  iVar1 = *param_3;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (**(code **)(**(int **)*param_3 + 0x18))(*(int **)*param_3);
    *param_4 = iVar1;
    if (param_2 < iVar1 + *param_5) break;
    *param_5 = iVar1 + *param_5;
    iVar1 = *(int *)(*param_3 + 8);
    *param_3 = iVar1;
  }
  return 0;
}


