/* Module: encn3260.dll
   Function: FUN_66493560
   Address: 66493560
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66493560(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)param_1 + 0x7d);
  *param_1 = &PTR_FUN_664de770;
  param_1[0x1a] = &PTR_LAB_664de758;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x7d) = 0;
  }
  piVar1 = (int *)param_1[0x1c];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1c] = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x89);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x89) = 0;
  }
  FUN_6648d3f0(param_1);
  return;
}


