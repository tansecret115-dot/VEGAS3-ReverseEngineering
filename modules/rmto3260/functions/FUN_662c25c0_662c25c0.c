/* Module: rmto3260.dll
   Function: FUN_662c25c0
   Address: 662c25c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c25c0(int param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 0x80040007;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    return 0x80004005;
  }
  *param_2 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x5c) != 0) {
    (**(code **)(*(int *)*param_2 + 4))((int *)*param_2);
  }
  return 0;
}


