/* Module: vegas30k.dll
   Function: FUN_0113bbe0
   Address: 0113bbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0113bbe0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_011e6b84;
  param_1[1] = &PTR_LAB_011e6b3c;
  (**(code **)(*(int *)param_1[0x57] + 8))((int *)param_1[0x57]);
  piVar1 = (int *)param_1[0x58];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x59];
  param_1[0x58] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x59] = 0;
  FUN_0113b3b0();
  return;
}


