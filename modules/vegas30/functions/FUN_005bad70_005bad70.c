/* Module: vegas30.exe
   Function: FUN_005bad70
   Address: 005bad70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005bad70(int *param_1,int *param_2)

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


