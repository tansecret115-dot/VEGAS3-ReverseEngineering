/* Module: aviplug.dll
   Function: FUN_5f945800
   Address: 5f945800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f945800(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + -0x194) == -1) {
    return 0;
  }
  piVar1 = (int *)(param_1 + -0x19c);
  (**(code **)(*(int *)(param_1 + -0x19c) + 0x7c))(piVar1,1);
  CloseHandle(*(HANDLE *)(param_1 + -0x194));
  *(undefined4 *)(param_1 + -0x194) = 0xffffffff;
  *(undefined4 *)(param_1 + -0xec) = 1;
  (**(code **)(*piVar1 + 0x80))(piVar1,1,1);
  (**(code **)(*piVar1 + 0x7c))(piVar1,0);
  return 0;
}


