/* Module: vegas30k.dll
   Function: FUN_01168190
   Address: 01168190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01168190(int *param_1)

{
  undefined4 uVar1;
  
  FUN_01173a80(param_1,0);
  if (*(char *)((int)param_1 + 0xe5) == '\0') {
    FUN_01173300(param_1);
    FUN_011728e0(param_1);
    FUN_01172330(param_1,0);
  }
  FUN_01171d80(param_1);
  if (*(char *)((int)param_1 + 0xe6) == '\0') {
    if ((char)param_1[0x41] == '\0') {
      FUN_011708c0(param_1);
    }
    else {
      FUN_011711c0(param_1);
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
  FUN_0116fd30(param_1,uVar1);
  FUN_0116fba0(param_1,0);
  FUN_0115edb0(param_1);
  (**(code **)(param_1[1] + 0x18))(param_1);
  (**(code **)(*(int *)((int)param_1 + 0x179) + 4))(param_1);
  return;
}


