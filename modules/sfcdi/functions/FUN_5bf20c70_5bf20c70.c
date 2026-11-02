/* Module: sfcdi.dll
   Function: FUN_5bf20c70
   Address: 5bf20c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5bf20c70(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x768];
  *param_1 = &PTR_LAB_5bf56538;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  if ((int *)param_1[3] != (int *)0x0) {
    FUN_5bf2b040((int *)param_1[3]);
    param_1[3] = 0;
  }
  return;
}


