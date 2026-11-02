/* Module: vegas30k.dll
   Function: FUN_011adbe0
   Address: 011adbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011adbe0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x1e0))(param_1,&local_4,param_3);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0xfc))(param_1);
    (**(code **)(*param_4 + 8))(param_4);
  }
  return iVar1;
}


