/* Module: mcplugrw.dll
   Function: FUN_00484ca0
   Address: 00484ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00484ca0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x175);
  *(undefined4 *)(iVar1 + 8) = 0;
  FUN_00484d40((int)param_1);
  if (param_2 == 0) {
    if (*(int *)(iVar1 + 0x40) != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)(param_1);
    }
    *(undefined1 **)(iVar1 + 4) = &LAB_00484da0;
    return;
  }
  if (param_2 != 2) {
    if (param_2 != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)(param_1);
      return;
    }
    if (*(int *)(iVar1 + 0x40) == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)(param_1);
    }
    *(undefined1 **)(iVar1 + 4) = &LAB_00485000;
    return;
  }
  if (*(int *)(iVar1 + 0x40) == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)(param_1);
  }
  *(code **)(iVar1 + 4) = FUN_00485240;
  return;
}


