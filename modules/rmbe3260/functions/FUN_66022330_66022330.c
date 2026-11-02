/* Module: rmbe3260.dll
   Function: FUN_66022330
   Address: 66022330
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66022330(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *param_1 = (int)&PTR_FUN_66066e60;
  param_1[4] = (int)&PTR_LAB_66066e18;
  FUN_66023e20(param_1);
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[10] = 0;
  }
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[9] = 0;
  }
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xb] = 0;
  }
  piVar1 = (int *)param_1[0x1f];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1f] = 0;
  }
  piVar1 = (int *)param_1[0x20];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x20] = 0;
  }
  piVar1 = (int *)param_1[0xc];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xc] = 0;
  }
  piVar1 = (int *)param_1[0xd];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xd] = 0;
  }
  puVar2 = (undefined4 *)param_1[0xe];
  if (puVar2 != (undefined4 *)0x0) {
    FUN_66010dc0(puVar2);
    operator_delete(puVar2);
    param_1[0xe] = 0;
  }
  FUN_6605cdb0(param_1 + 0x1b);
  FUN_6605cdb0(param_1 + 0x17);
  FUN_6605cdb0(param_1 + 0x13);
  FUN_6605cdb0(param_1 + 0xf);
  *param_1 = (int)&PTR_FUN_66063e30;
  return;
}


