/* Module: encn3260.dll
   Function: FUN_664b4c70
   Address: 664b4c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664b4c70(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  int local_40;
  int local_3c;
  void *local_38;
  undefined4 *local_34;
  int local_30 [3];
  int local_24;
  int local_20;
  void *local_1c;
  undefined4 *local_18;
  int local_14 [3];
  void *local_8;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = (void *)0x0;
  local_18 = (undefined4 *)0x0;
  local_8 = this;
  FUN_664bb2c0(local_14);
  FUN_664b49d0(&local_40,(int)this,-(uint)(*(int *)((int)this + 8) != 0));
  local_24 = local_40;
  local_20 = local_3c;
  local_18 = local_34;
  local_1c = local_38;
  FUN_664bb570(local_14,local_30);
  FUN_664bb3e0(local_30);
  while( true ) {
    local_40 = 0;
    local_3c = 0;
    local_38 = local_8;
    local_34 = (undefined4 *)0x0;
    FUN_664bb2c0(local_30);
    if (local_40 != 0) {
      FUN_664be080(local_38,&local_3c,local_30,&local_34);
    }
    bVar3 = local_24 == local_40;
    FUN_664bb3e0(local_30);
    puVar1 = local_18;
    if (bVar3) break;
    puVar2 = operator_new(0x10);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    FUN_664baab0(param_1,puVar2);
    local_24 = local_20;
    if (local_20 != 0) {
      FUN_664be080(local_1c,&local_20,local_14,&local_18);
    }
  }
  FUN_664bb3e0(local_14);
  return;
}


