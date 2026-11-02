/* Module: rmbe3260.dll
   Function: FUN_66017760
   Address: 66017760
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66017760(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_66066640;
  param_1[4] = &PTR_LAB_66066628;
  param_1[5] = &PTR_LAB_660665e0;
  if ((param_1[0xe] != 0) && ((void *)param_1[0xc] != (void *)0x0)) {
    operator_delete((void *)param_1[0xc]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  uVar1 = param_1[0x14];
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      operator_delete(*(void **)(param_1[0x13] + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  FUN_6605cdc0(param_1 + 0x13,0,0xffffffff);
  uVar1 = param_1[0x10];
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      operator_delete(*(void **)(param_1[0xf] + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  FUN_6605cdc0(param_1 + 0xf,0,0xffffffff);
  uVar1 = param_1[0x18];
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      operator_delete(*(void **)(param_1[0x17] + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  FUN_6605cdc0(param_1 + 0x17,0,0xffffffff);
  FUN_6605cdb0(param_1 + 0x17);
  FUN_6605cdb0(param_1 + 0x13);
  FUN_6605cdb0(param_1 + 0xf);
  *param_1 = &PTR_FUN_66063e30;
  return;
}


