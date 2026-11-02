/* Module: wmfplug2.dll
   Function: FUN_00411810
   Address: 00411810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00411810(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 == (int *)0x0) {
    return 0x8000ffff;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    (**(code **)(*piVar1 + 0x68))(piVar1,*(int *)(param_1 + 0x34));
  }
  (**(code **)(**(int **)(param_1 + 0x2c) + 8))(*(int **)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return 0;
}


