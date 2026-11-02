/* Module: vegas30.exe
   Function: FUN_005633e0
   Address: 005633e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005633e0(int param_1)

{
  int *piVar1;
  
  DAT_0064761c = DAT_0064761c & 0xffffbfff;
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return 0;
}


