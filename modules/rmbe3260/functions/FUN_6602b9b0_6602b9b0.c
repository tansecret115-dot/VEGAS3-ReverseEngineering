/* Module: rmbe3260.dll
   Function: FUN_6602b9b0
   Address: 6602b9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6602b9b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -1;
  *puVar1 = &PTR_FUN_66067938;
  *param_1 = &PTR_FUN_66067928;
  param_1[2] = &PTR_LAB_66067900;
  FUN_6602d5a0((int)puVar1);
  if ((((int *)param_1[6] != (int *)0x0) && (param_1[0xf] != 0)) && (param_1[0x10] == 0)) {
    (**(code **)(*(int *)param_1[6] + 0xc))();
  }
  FUN_6602bc60((int)puVar1);
  FUN_6602d4a0((int)puVar1);
  FUN_6605b770(param_1 + 0x38);
  thunk_FUN_6605c880(param_1 + 0x23);
  FUN_6605cdb0(param_1 + 0x1f);
  FUN_6605cdb0(param_1 + 0x1b);
  FUN_6605cdb0(param_1 + 0x17);
  *(undefined ***)(-(uint)(puVar1 != (undefined4 *)0x0) & (uint)(param_1 + 2)) = &PTR_FUN_66063e30;
  CPNRouter::~CPNRouter((CPNRouter *)(-(uint)(puVar1 != (undefined4 *)0x0) & (uint)param_1));
  return;
}


