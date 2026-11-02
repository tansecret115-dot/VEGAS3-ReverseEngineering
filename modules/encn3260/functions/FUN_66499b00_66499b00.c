/* Module: encn3260.dll
   Function: FUN_66499b00
   Address: 66499b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66499b00(int param_1,int param_2)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
    piVar1 = (int *)(param_1 + -8);
    (**(code **)(*(int *)(param_1 + -8) + 4))(piVar1);
    (**(code **)(**(int **)(param_1 + 0x70) + 4))();
    if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
      if (param_2 == 0) {
        FUN_66499890(piVar1);
      }
      else if (param_2 == 1) {
        FUN_664999f0((int)piVar1);
      }
      else {
        FUN_66499890(piVar1);
        FUN_664999f0((int)piVar1);
      }
    }
    (**(code **)(**(int **)(param_1 + 0x70) + 8))();
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return 0;
}


