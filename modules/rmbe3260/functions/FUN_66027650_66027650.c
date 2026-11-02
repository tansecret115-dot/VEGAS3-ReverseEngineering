/* Module: rmbe3260.dll
   Function: FUN_66027650
   Address: 66027650
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66027650(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_8;
  
  *param_1 = &PTR_FUN_66067578;
  param_1[0x12] = &PTR_LAB_66067548;
  param_1[0x23] = &PTR_LAB_66067530;
  param_1[0x24] = &PTR_LAB_66067518;
  param_1[0x25] = &PTR_LAB_66067508;
  param_1[0x26] = &PTR_LAB_660674d8;
  param_1[0x27] = &PTR_LAB_660674c8;
  piVar1 = param_1 + 0x2f;
  local_8 = 9;
  do {
    iVar3 = 0;
    if (0 < piVar1[1]) {
      do {
        operator_delete(*(void **)(*piVar1 + iVar3 * 4));
        iVar3 = iVar3 + 1;
      } while (iVar3 < piVar1[1]);
    }
    FUN_6605cdc0(piVar1,0,0xffffffff);
    piVar1 = piVar1 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar1 = (int *)param_1[0x7a];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x7a] = 0;
  }
  FUN_660518e0(param_1 + 0x7e);
  FUN_66029730(param_1,0);
  FUN_6605b770(param_1 + 0x84);
  FUN_66051720(param_1 + 0x7e);
  FUN_6602b000(param_1 + 0x53);
  puVar2 = param_1 + 0x53;
  iVar3 = 9;
  do {
    puVar2 = puVar2 + -4;
    FUN_6605cdb0(puVar2);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_66014cd0(param_1);
  return;
}


