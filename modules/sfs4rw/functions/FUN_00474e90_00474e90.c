/* Module: sfs4rw.dll
   Function: FUN_00474e90
   Address: 00474e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00474e90(int *param_1,char param_2)

{
  if (*(int *)((int)param_1 + 0xd) != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  if (param_2 != '\0') {
    FUN_004461c0((int)param_1,0);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(*(int *)((int)param_1 + 0x51) + 8))(param_1);
  FUN_0047e020(param_1);
  (*(code *)**(undefined4 **)((int)param_1 + 0x169))(param_1);
  param_1[0x40] = 0;
  *(uint *)((int)param_1 + 0xd) = (*(char *)((int)param_1 + 0xe5) != '\0') + 0x65;
  return;
}


