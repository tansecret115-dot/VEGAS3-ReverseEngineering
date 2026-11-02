/* Module: mcplugrw.dll
   Function: FUN_0043eae0
   Address: 0043eae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043eae0(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  param_1[1] = 0;
  if (param_2 != 0x3d) {
    *(undefined4 *)(*param_1 + 0x14) = 10;
    *(undefined4 *)(*param_1 + 0x18) = 0x3d;
    *(int *)(*param_1 + 0x1c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x1d5) {
    *(undefined4 *)(*param_1 + 0x14) = 0x13;
    *(undefined4 *)(*param_1 + 0x18) = 0x1d5;
    *(int *)(*param_1 + 0x1c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  iVar3 = *param_1;
  piVar4 = param_1;
  for (iVar2 = 0x75; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  *(undefined1 *)piVar4 = 0;
  *param_1 = iVar3;
  *(undefined1 *)(param_1 + 3) = 1;
  FUN_00452890(param_1);
  param_1[2] = 0;
  *(undefined4 *)((int)param_1 + 0x51) = 0;
  *(undefined4 *)((int)param_1 + 0xc2) = 0;
  *(undefined4 *)((int)param_1 + 0xc6) = 0;
  iVar3 = 4;
  *(undefined4 *)((int)param_1 + 0xca) = 0;
  *(undefined4 *)((int)param_1 + 0xce) = 0;
  puVar1 = (undefined4 *)((int)param_1 + 0xe2);
  do {
    puVar1[-4] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00450ff0((int)param_1);
  FUN_00450810((int)param_1);
  *(undefined4 *)((int)param_1 + 0xd) = 200;
  return;
}


