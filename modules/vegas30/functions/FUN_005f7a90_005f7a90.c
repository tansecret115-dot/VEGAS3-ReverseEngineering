/* Module: vegas30.exe
   Function: FUN_005f7a90
   Address: 005f7a90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005f7a90(int param_1,int *param_2)

{
  int iVar1;
  int *local_4;
  
  local_4 = (int *)0x0;
  iVar1 = FUN_005f1150(&local_4);
  if (-1 < iVar1) {
    *param_2 = 0;
    param_2[1] = 0;
    iVar1 = (**(code **)(*local_4 + 0x1c))(local_4,param_2,8,*(undefined4 *)(param_1 + 0x10),2);
    (**(code **)(*param_2 + 8))(param_2);
  }
  return iVar1;
}


