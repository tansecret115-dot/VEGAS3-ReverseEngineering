/* Module: sfmarket2.dll
   Function: FUN_0047dc10
   Address: 0047dc10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047dc10(int *param_1)

{
  switch(*(undefined4 *)((int)param_1 + 0x61)) {
  case 0:
    FUN_0047dc90(param_1,0);
    return;
  case 1:
    FUN_0047dc90(param_1,1);
    return;
  case 2:
  case 3:
    FUN_0047dc90(param_1,3);
    return;
  case 4:
    FUN_0047dc90(param_1,4);
    return;
  case 5:
    FUN_0047dc90(param_1,5);
    return;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 7;
    (**(code **)*param_1)(param_1);
    return;
  }
}


