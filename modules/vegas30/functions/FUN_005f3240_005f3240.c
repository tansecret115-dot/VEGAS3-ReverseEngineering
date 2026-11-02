/* Module: vegas30.exe
   Function: FUN_005f3240
   Address: 005f3240
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005f3240(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *local_4;
  
  local_4 = param_1;
  if (param_1[0x53] == 0) {
    iVar1 = FUN_005f1150(&local_4);
    if (iVar1 < 0) {
      return;
    }
    (**(code **)(*local_4 + 8))(local_4);
  }
  *param_2 = 0;
  param_2[1] = 0;
  (**(code **)(*(int *)param_1[0x53] + 0x18))((int *)param_1[0x53],param_2,8,1);
  return;
}


