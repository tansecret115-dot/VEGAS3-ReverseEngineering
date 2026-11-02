/* Module: encn3260.dll
   Function: FUN_6648afe0
   Address: 6648afe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6648afe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_LAB_664de1b0;
  param_1[1] = &PTR_LAB_664dde40;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_664ba900(param_1 + 0x10);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *param_1 = &PTR_FUN_664de190;
  param_1[1] = &PTR_LAB_664de180;
  puVar1 = operator_new(0x1a);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_664be6e0(puVar1,0x200,1);
    *puVar1 = &PTR_LAB_664de168;
  }
  param_1[0x17] = puVar1;
  FUN_664be8a0(puVar1,0x7fff);
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_664da650(puVar1);
  }
  param_1[0x18] = puVar1;
  FUN_664bbfc0((undefined4 *)((int)param_1 + 0x6e));
  return param_1;
}


