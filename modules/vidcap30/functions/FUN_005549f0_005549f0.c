/* Module: vidcap30.exe
   Function: FUN_005549f0
   Address: 005549f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005549f0(int *param_1)

{
  switch(*(undefined4 *)((int)param_1 + 0x61)) {
  case 0:
    FUN_00554a70(param_1,0);
    return;
  case 1:
    FUN_00554a70(param_1,1);
    return;
  case 2:
  case 3:
    FUN_00554a70(param_1,3);
    return;
  case 4:
    FUN_00554a70(param_1,4);
    return;
  case 5:
    FUN_00554a70(param_1,5);
    return;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 7;
    (**(code **)*param_1)(param_1);
    return;
  }
}


