/* Module: vidcap30.exe
   Function: FUN_00427440
   Address: 00427440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427440(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = 1;
  *param_2 = 0;
  local_8 = 0;
  local_4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,0,0,1,&local_8);
  if (-1 < iVar1) {
    *param_2 = *param_2 + iVar2;
  }
  return;
}


