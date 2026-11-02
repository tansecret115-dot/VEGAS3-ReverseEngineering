/* Module: rmme3260.dll
   Function: FUN_66244770
   Address: 66244770
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66244770(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[3];
  *param_1 = &PTR_FUN_6626c7d0;
  param_1[1] = &PTR_LAB_6626c798;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x933) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x933))(1);
    *(undefined4 *)((int)param_1 + 0x933) = 0;
  }
  if ((*(byte *)((int)param_1 + 0x26) & 2) != 0) {
    FUN_66244910((int)param_1);
  }
  return;
}


