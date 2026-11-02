/* Module: mcplugrw.dll
   Function: FUN_0047e0a0
   Address: 0047e0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047e0a0(int *param_1)

{
  FUN_00488930(param_1);
  if (*(char *)((int)param_1 + 0xe5) == '\0') {
    FUN_004881b0(param_1);
    FUN_00487790(param_1);
    FUN_004871e0(param_1,'\0');
  }
  FUN_00486c30(param_1);
  if (*(char *)((int)param_1 + 0xe6) == '\0') {
    if ((char)param_1[0x41] == '\0') {
      FUN_00485770((int)param_1);
    }
    else {
      FUN_00486070((int)param_1);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)(param_1);
  }
  FUN_00484be0((int)param_1);
  FUN_00484a50(param_1);
  FUN_004745b0((int)param_1);
  (**(code **)(param_1[1] + 0x18))(param_1);
  (**(code **)(*(int *)((int)param_1 + 0x179) + 4))(param_1);
  return;
}


