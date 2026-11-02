/* Module: vidcap30.exe
   Function: FUN_0055f490
   Address: 0055f490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055f490(int *param_1)

{
  undefined4 uVar1;
  
  FUN_0056ad80(param_1,0);
  if (*(char *)((int)param_1 + 0xe5) == '\0') {
    FUN_0056a600(param_1);
    FUN_00569be0(param_1);
    FUN_00569630(param_1,0);
  }
  FUN_00569080(param_1);
  if (*(char *)((int)param_1 + 0xe6) == '\0') {
    if ((char)param_1[0x41] == '\0') {
      FUN_00567bc0(param_1);
    }
    else {
      FUN_005684c0(param_1);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)(param_1);
  }
  if ((*(int *)((int)param_1 + 0xdd) < 2) && (*(char *)((int)param_1 + 0xe7) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_00567030(param_1,uVar1);
  FUN_00566ea0(param_1,0);
  FUN_00553b80(param_1);
  (**(code **)(param_1[1] + 0x18))(param_1);
  (**(code **)(*(int *)((int)param_1 + 0x179) + 4))(param_1);
  return;
}


