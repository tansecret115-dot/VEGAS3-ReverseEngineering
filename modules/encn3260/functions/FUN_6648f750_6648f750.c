/* Module: encn3260.dll
   Function: FUN_6648f750
   Address: 6648f750
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6648f750(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 local_30 [4];
  int local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  *(undefined4 *)((int)this + 0x70) = 0;
  local_8 = (undefined1 *)0x0;
  local_c = (undefined1 *)0x0;
  local_10 = (undefined1 *)0x0;
  (**(code **)(**(int **)((int)this + 0x10) + 0x18))(*(int **)((int)this + 0x10),&local_20);
  local_18 = local_1c / 1000 + local_20 * 1000;
  FUN_664d9e30(local_30);
  local_14 = operator_new(0x5a);
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    FUN_664db520(local_14 + 0x3e,10);
    *local_14 = 0;
    local_14[1] = 0;
    local_14[2] = 0;
    local_14[3] = 0;
    *(undefined2 *)(local_14 + 4) = 0;
    *(undefined4 *)(local_14 + 6) = 0;
    *(undefined4 *)(local_14 + 10) = 0;
    *(undefined4 *)(local_14 + 0xe) = 0;
    *(undefined4 *)(local_14 + 0x12) = 0;
    *(undefined4 *)(local_14 + 0x16) = 0;
    *(undefined4 *)(local_14 + 0x1a) = 0;
    *(undefined4 *)(local_14 + 0x1e) = 0;
    *(undefined4 *)(local_14 + 0x22) = 0;
    *(undefined4 *)(local_14 + 0x26) = 0;
    *(undefined4 *)(local_14 + 0x2a) = 0;
    *(undefined4 *)(local_14 + 0x2e) = 0;
    *(undefined4 *)(local_14 + 0x3a) = 0;
    *(undefined4 *)(local_14 + 0x56) = 0;
  }
  if (*(int *)((int)this + 0x30) == 0) {
    iVar1 = FUN_664d9690(*(void **)((int)this + 0x8c),local_14,local_18);
  }
  else {
    iVar1 = FUN_664d9600(*(void **)((int)this + 0x8c),local_14,local_18);
  }
  if (iVar1 == 0) {
    puVar2 = operator_new(0x5a);
    if (puVar2 == (undefined1 *)0x0) {
      local_8 = (undefined1 *)0x0;
    }
    else {
      FUN_664db520(puVar2 + 0x3e,10);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined2 *)(puVar2 + 4) = 0;
      *(undefined4 *)(puVar2 + 6) = 0;
      *(undefined4 *)(puVar2 + 10) = 0;
      *(undefined4 *)(puVar2 + 0xe) = 0;
      *(undefined4 *)(puVar2 + 0x12) = 0;
      *(undefined4 *)(puVar2 + 0x16) = 0;
      *(undefined4 *)(puVar2 + 0x1a) = 0;
      *(undefined4 *)(puVar2 + 0x1e) = 0;
      *(undefined4 *)(puVar2 + 0x22) = 0;
      *(undefined4 *)(puVar2 + 0x26) = 0;
      *(undefined4 *)(puVar2 + 0x2a) = 0;
      *(undefined4 *)(puVar2 + 0x2e) = 0;
      *(undefined4 *)(puVar2 + 0x3a) = 0;
      *(undefined4 *)(puVar2 + 0x56) = 0;
      local_8 = puVar2;
    }
    iVar1 = FUN_664d9800(*(void **)((int)this + 0x8c),local_8,*(char **)((int)this + 0x88));
    if (iVar1 == 0) {
      puVar2 = operator_new(0x5a);
      if (puVar2 == (undefined1 *)0x0) {
        local_c = (undefined1 *)0x0;
      }
      else {
        FUN_664db520(puVar2 + 0x3e,10);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(undefined2 *)(puVar2 + 4) = 0;
        *(undefined4 *)(puVar2 + 6) = 0;
        *(undefined4 *)(puVar2 + 10) = 0;
        *(undefined4 *)(puVar2 + 0xe) = 0;
        *(undefined4 *)(puVar2 + 0x12) = 0;
        *(undefined4 *)(puVar2 + 0x16) = 0;
        *(undefined4 *)(puVar2 + 0x1a) = 0;
        *(undefined4 *)(puVar2 + 0x1e) = 0;
        *(undefined4 *)(puVar2 + 0x22) = 0;
        *(undefined4 *)(puVar2 + 0x26) = 0;
        *(undefined4 *)(puVar2 + 0x2a) = 0;
        *(undefined4 *)(puVar2 + 0x2e) = 0;
        *(undefined4 *)(puVar2 + 0x3a) = 0;
        *(undefined4 *)(puVar2 + 0x56) = 0;
        local_c = puVar2;
      }
      iVar1 = FUN_664d99a0(*(void **)((int)this + 0x8c),local_c);
      if (iVar1 == 0) {
        if (*(int *)((int)this + 0x30) != 0) {
          puVar2 = operator_new(0x5a);
          if (puVar2 == (undefined1 *)0x0) {
            local_10 = (undefined1 *)0x0;
          }
          else {
            FUN_664db520(puVar2 + 0x3e,10);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            *(undefined2 *)(puVar2 + 4) = 0;
            *(undefined4 *)(puVar2 + 6) = 0;
            *(undefined4 *)(puVar2 + 10) = 0;
            *(undefined4 *)(puVar2 + 0xe) = 0;
            *(undefined4 *)(puVar2 + 0x12) = 0;
            *(undefined4 *)(puVar2 + 0x16) = 0;
            *(undefined4 *)(puVar2 + 0x1a) = 0;
            *(undefined4 *)(puVar2 + 0x1e) = 0;
            *(undefined4 *)(puVar2 + 0x22) = 0;
            *(undefined4 *)(puVar2 + 0x26) = 0;
            *(undefined4 *)(puVar2 + 0x2a) = 0;
            *(undefined4 *)(puVar2 + 0x2e) = 0;
            *(undefined4 *)(puVar2 + 0x3a) = 0;
            *(undefined4 *)(puVar2 + 0x56) = 0;
            local_10 = puVar2;
          }
          iVar1 = FUN_664d9a20(*(void **)((int)this + 0x8c),local_10);
          if (iVar1 != 0) goto LAB_6648f9dc;
        }
        iVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0xc))
                          (*(int **)((int)this + 0xc),&DAT_664dcf60,param_1);
        if (iVar1 == 0) {
          FUN_664d9e40(local_30,(int)local_14);
          FUN_664d9e40(local_30,(int)local_8);
          FUN_664d9e40(local_30,(int)local_c);
          if (*(int *)((int)this + 0x30) != 0) {
            FUN_664d9e40(local_30,(int)local_10);
          }
          iVar1 = FUN_664da590(local_30,param_1);
        }
      }
    }
  }
LAB_6648f9dc:
  puVar2 = local_14;
  if (local_14 != (undefined1 *)0x0) {
    FUN_6648fa70((int)local_14);
    thunk_FUN_664bbcb0((undefined4 *)(puVar2 + 0x3e));
    operator_delete(puVar2);
  }
  puVar2 = local_8;
  if (local_8 != (undefined1 *)0x0) {
    FUN_6648fa70((int)local_8);
    thunk_FUN_664bbcb0((undefined4 *)(puVar2 + 0x3e));
    operator_delete(puVar2);
  }
  puVar2 = local_c;
  if (local_c != (undefined1 *)0x0) {
    FUN_6648fa70((int)local_c);
    thunk_FUN_664bbcb0((undefined4 *)(puVar2 + 0x3e));
    operator_delete(puVar2);
  }
  puVar2 = local_10;
  if (local_10 != (undefined1 *)0x0) {
    FUN_6648fa70((int)local_10);
    thunk_FUN_664bbcb0((undefined4 *)(puVar2 + 0x3e));
    operator_delete(puVar2);
  }
  return iVar1;
}


