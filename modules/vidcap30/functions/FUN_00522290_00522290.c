/* Module: vidcap30.exe
   Function: FUN_00522290
   Address: 00522290
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00522290(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_0059bcf0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_00522740();
  FUN_00522120();
  param_1[0x16] = &PTR_LAB_0059bcfc;
  param_1[0x13] = &PTR_LAB_0059bd18;
  param_1[0x10] = &PTR_LAB_0059bd3c;
  param_1[0xd] = &PTR_LAB_0059bd78;
  return;
}


