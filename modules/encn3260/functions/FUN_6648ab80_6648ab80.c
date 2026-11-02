/* Module: encn3260.dll
   Function: FUN_6648ab80
   Address: 6648ab80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6648ab80(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 8) + 0x30);
  (**(code **)(*piVar1 + 4))(piVar1);
  FUN_6648a7a0(*(int *)(param_1 + 8));
  (**(code **)(*(int *)(*(int *)(param_1 + 8) + 0x30) + 8))(*(int *)(param_1 + 8) + 0x30);
  return 0;
}


