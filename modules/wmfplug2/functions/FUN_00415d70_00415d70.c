/* Module: wmfplug2.dll
   Function: FUN_00415d70
   Address: 00415d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00415d70(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_0047c8d4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((int *)param_1[3] != (int *)0x0) {
    FUN_00415dd0((int *)param_1[3]);
    param_1[3] = 0;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((int *)param_1[5] != (int *)0x0) {
    FUN_00415dd0((int *)param_1[5]);
    param_1[5] = 0;
  }
  return;
}


