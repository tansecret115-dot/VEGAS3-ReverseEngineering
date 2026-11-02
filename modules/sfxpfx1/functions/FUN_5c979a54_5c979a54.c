/* Module: sfxpfx1.dll
   Function: FUN_5c979a54
   Address: 5c979a54
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c979a54(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x29];
  *param_1 = &PTR_FUN_5c991ee8;
  param_1[3] = &PTR_LAB_5c991ea0;
  param_1[4] = &PTR_LAB_5c991e88;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_5c9774b6((int)param_1);
  return;
}


