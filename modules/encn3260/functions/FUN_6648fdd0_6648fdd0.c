/* Module: encn3260.dll
   Function: FUN_6648fdd0
   Address: 6648fdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6648fdd0(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 local_30 [4];
  int local_20;
  uint local_1c;
  undefined4 local_18;
  void *pvStack_14;
  uint local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_8 = (undefined1 *)0x0;
  pvStack_14 = this;
  (**(code **)(**(int **)((int)this + 0x10) + 0x18))(*(int **)((int)this + 0x10),&local_20);
  local_10 = local_1c / 1000 + local_20 * 1000;
  FUN_664d9e30(local_30);
  local_c = operator_new(0x5a);
  if (local_c == (undefined1 *)0x0) {
    local_c = (undefined1 *)0x0;
  }
  else {
    FUN_664db520(local_c + 0x3e,10);
    *local_c = 0;
    local_c[1] = 0;
    local_c[2] = 0;
    local_c[3] = 0;
    *(undefined2 *)(local_c + 4) = 0;
    *(undefined4 *)(local_c + 6) = 0;
    *(undefined4 *)(local_c + 10) = 0;
    *(undefined4 *)(local_c + 0xe) = 0;
    *(undefined4 *)(local_c + 0x12) = 0;
    *(undefined4 *)(local_c + 0x16) = 0;
    *(undefined4 *)(local_c + 0x1a) = 0;
    *(undefined4 *)(local_c + 0x1e) = 0;
    *(undefined4 *)(local_c + 0x22) = 0;
    *(undefined4 *)(local_c + 0x26) = 0;
    *(undefined4 *)(local_c + 0x2a) = 0;
    *(undefined4 *)(local_c + 0x2e) = 0;
    *(undefined4 *)(local_c + 0x3a) = 0;
    *(undefined4 *)(local_c + 0x56) = 0;
  }
  iVar2 = FUN_664d9690(*(void **)((int)this + 0x8c),local_c,local_10);
  if (iVar2 == 0) {
    puVar3 = operator_new(0x5a);
    if (puVar3 == (undefined1 *)0x0) {
      local_8 = (undefined1 *)0x0;
    }
    else {
      FUN_664db520(puVar3 + 0x3e,10);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined2 *)(puVar3 + 4) = 0;
      *(undefined4 *)(puVar3 + 6) = 0;
      *(undefined4 *)(puVar3 + 10) = 0;
      *(undefined4 *)(puVar3 + 0xe) = 0;
      *(undefined4 *)(puVar3 + 0x12) = 0;
      *(undefined4 *)(puVar3 + 0x16) = 0;
      *(undefined4 *)(puVar3 + 0x1a) = 0;
      *(undefined4 *)(puVar3 + 0x1e) = 0;
      *(undefined4 *)(puVar3 + 0x22) = 0;
      *(undefined4 *)(puVar3 + 0x26) = 0;
      *(undefined4 *)(puVar3 + 0x2a) = 0;
      *(undefined4 *)(puVar3 + 0x2e) = 0;
      *(undefined4 *)(puVar3 + 0x3a) = 0;
      *(undefined4 *)(puVar3 + 0x56) = 0;
      local_8 = puVar3;
    }
    pvVar1 = pvStack_14;
    iVar2 = FUN_664d9800(*(void **)((int)pvStack_14 + 0x8c),local_8,
                         *(char **)((int)pvStack_14 + 0x88));
    if (iVar2 == 0) {
      iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0xc) + 0xc))
                        (*(int **)((int)pvVar1 + 0xc),&DAT_664dcf60,param_1);
      if (iVar2 == 0) {
        FUN_664d9e40(local_30,(int)local_c);
        FUN_664d9e40(local_30,(int)local_8);
        iVar2 = FUN_664da590(local_30,param_1);
        if (iVar2 == 0) {
          local_18 = (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1);
          pvStack_14 = (void *)0x0;
          uVar4 = ftol();
          *(undefined4 *)(*(int *)((int)pvVar1 + 0x8c) + 0x3c) = uVar4;
          *(undefined4 *)((int)pvVar1 + 0x70) = 1;
        }
      }
    }
  }
  puVar3 = local_c;
  if (local_c != (undefined1 *)0x0) {
    FUN_6648fa70((int)local_c);
    thunk_FUN_664bbcb0((undefined4 *)(puVar3 + 0x3e));
    operator_delete(puVar3);
  }
  puVar3 = local_8;
  if (local_8 != (undefined1 *)0x0) {
    FUN_6648fa70((int)local_8);
    thunk_FUN_664bbcb0((undefined4 *)(puVar3 + 0x3e));
    operator_delete(puVar3);
  }
  return iVar2;
}


