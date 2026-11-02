/* Module: mp3plug.dll
   Function: FUN_5f697df0
   Address: 5f697df0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f697df0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_5f72d2a4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[2] = 0;
  return;
}


