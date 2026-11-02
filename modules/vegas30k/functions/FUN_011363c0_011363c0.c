/* Module: vegas30k.dll
   Function: FUN_011363c0
   Address: 011363c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011363c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_011e6a3c;
  FUN_01137000();
  if (param_1[9] != 0) {
    FUN_01137930();
  }
  piVar1 = (int *)param_1[5];
  param_1[9] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[7];
  param_1[5] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[7] = 0;
  return;
}


