/* Module: sfmarket2.dll
   Function: FUN_00485910
   Address: 00485910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00485910(int *param_1)

{
  FUN_00490540(param_1);
  if (*(char *)((int)param_1 + 0xe5) == '\0') {
    FUN_0048fdc0(param_1);
    FUN_0048f3a0(param_1);
    FUN_0048edf0(param_1,'\0');
  }
  FUN_0048e840(param_1);
  if (*(char *)((int)param_1 + 0xe6) == '\0') {
    if ((char)param_1[0x41] == '\0') {
      FUN_0048d380((int)param_1);
    }
    else {
      FUN_0048dc80((int)param_1);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)(param_1);
  }
  FUN_0048c7f0((int)param_1);
  FUN_0048c660(param_1);
  FUN_0047cda0((int)param_1);
  (**(code **)(param_1[1] + 0x18))(param_1);
  (**(code **)(*(int *)((int)param_1 + 0x179) + 4))(param_1);
  return;
}


