/* Module: erv23260.dll
   Function: FUN_637f8200
   Address: 637f8200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637f8200(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_8;
  
  *param_1 = &PTR_FUN_63829398;
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 0x1c))();
    if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[4])(1);
    }
    param_1[4] = 0;
  }
  if ((void *)param_1[0xb5] != (void *)0x0) {
    FUN_637f1080((void *)param_1[0xb5]);
    param_1[0xb6] = 0;
    param_1[0xb5] = 0;
  }
  puVar1 = param_1 + 0x54;
  puVar2 = param_1 + 199;
  local_8 = 2;
  do {
    FUN_637f3440((void *)*puVar2);
    if ((void *)*puVar1 != (void *)0x0) {
      FUN_637f1080((void *)*puVar1);
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
    }
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 0x51;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}


