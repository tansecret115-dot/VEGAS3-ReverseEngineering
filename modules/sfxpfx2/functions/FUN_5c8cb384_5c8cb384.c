/* Module: sfxpfx2.dll
   Function: FUN_5c8cb384
   Address: 5c8cb384
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c8cb384(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x29];
  *param_1 = &PTR_FUN_5c8e31d0;
  param_1[3] = &PTR_LAB_5c8e3188;
  param_1[4] = &PTR_LAB_5c8e3170;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_5c8c8de6((int)param_1);
  return;
}


