/* Module: sfmarket2.dll
   Function: FUN_0040ef30
   Address: 0040ef30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040ef30(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(*param_3 + 0xc))(param_3,param_1,param_2,&local_4);
  if ((-1 < iVar1) && (param_2 != param_1)) {
    iVar1 = -0x7ffb1fc8;
  }
  return iVar1;
}


