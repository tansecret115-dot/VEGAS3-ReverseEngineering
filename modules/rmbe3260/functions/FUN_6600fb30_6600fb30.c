/* Module: rmbe3260.dll
   Function: FUN_6600fb30
   Address: 6600fb30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6600fb30(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 local_50 [18];
  undefined4 local_8;
  
  local_8 = 0;
  FUN_660347a0(local_50);
  if ((*(int *)(param_1 + 0x88) == 0) && (*(int *)(param_1 + 0x90) == 0)) {
    local_8 = 0x80004005;
    FUN_660347f0(local_50);
    return local_8;
  }
  if (*(void **)(param_1 + 0xcc) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0xcc));
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  if (*(void **)(param_1 + 0xd0) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0xd0));
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  puVar3 = (undefined4 *)0x6600fbbb;
  FUN_66034810(local_50,100,100);
  FUN_6605b7e0(&stack0xffffff9c,s_application_x_pn_realevent_6606c850);
  FUN_66034930(local_50,puVar3);
  uVar1 = FUN_66033e50((int)local_50);
  if (*(int *)(param_1 + 0x88) != 0) {
    puVar2 = operator_new(uVar1);
    *(undefined1 **)(param_1 + 0xcc) = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      local_8 = 0x8007000e;
      FUN_660347f0(local_50);
      return local_8;
    }
    FUN_66033e60(local_50,puVar2,uVar1);
    (**(code **)(**(int **)(param_1 + 0x88) + 0x1c))();
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    puVar2 = operator_new(uVar1);
    *(undefined1 **)(param_1 + 0xd0) = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      local_8 = 0x8007000e;
      FUN_660347f0(local_50);
      return local_8;
    }
    FUN_66033e60(local_50,puVar2,uVar1);
    (**(code **)(**(int **)(param_1 + 0x90) + 0x1c))();
  }
  FUN_660347f0(local_50);
  return local_8;
}


