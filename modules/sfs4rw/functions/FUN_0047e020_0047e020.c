/* Module: sfs4rw.dll
   Function: FUN_0047e020
   Address: 0047e020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047e020(int *param_1)

{
  FUN_004888b0(param_1);
  if (*(char *)((int)param_1 + 0xe5) == '\0') {
    FUN_00488130(param_1);
    FUN_00487710(param_1);
    FUN_00487160(param_1,'\0');
  }
  FUN_00486bb0(param_1);
  if (*(char *)((int)param_1 + 0xe6) == '\0') {
    if ((char)param_1[0x41] == '\0') {
      FUN_004856f0((int)param_1);
    }
    else {
      FUN_00485ff0((int)param_1);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)(param_1);
  }
  FUN_00484b60((int)param_1);
  FUN_004849d0(param_1);
  FUN_00474530((int)param_1);
  (**(code **)(param_1[1] + 0x18))(param_1);
  (**(code **)(*(int *)((int)param_1 + 0x179) + 4))(param_1);
  return;
}


