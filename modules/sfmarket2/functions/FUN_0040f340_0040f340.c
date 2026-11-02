/* Module: sfmarket2.dll
   Function: FUN_0040f340
   Address: 0040f340
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040f340(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(*param_3 + 0x10))(param_3,param_1,param_2,&local_4);
  if ((-1 < iVar1) && (param_2 != param_1)) {
    iVar1 = -0x7ffb1fc7;
  }
  return iVar1;
}


