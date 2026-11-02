/* Module: atrc3260.dll
   Function: FUN_68002ad0
   Address: 68002ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_68002ad0(void *this,undefined *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int local_40 [3];
  int local_34 [3];
  undefined4 *local_28 [3];
  int local_1c [3];
  void *local_10;
  void *local_c;
  int local_8;
  
  local_8 = -(uint)(*(int *)((int)this + 0x10) != 0);
  iVar5 = 0;
  local_10 = this;
  if (local_8 != 0) {
    do {
      FUN_68003140(local_28);
      FUN_68003140(local_1c);
      FUN_680039e0((void *)((int)this + 8),&local_8,local_28,local_1c);
      iVar5 = iVar5 + 2 + *(int *)(local_1c[0] + -8) + local_28[0][-2];
      FUN_68003260(local_1c);
      FUN_68003260((int *)local_28);
    } while (local_8 != 0);
  }
  if (iVar5 != 0) {
    local_c = operator_new(iVar5 + 1);
    if (local_c == (void *)0x0) {
      return 0x80004005;
    }
    local_8 = -(uint)(*(int *)((int)this + 0x10) != 0);
    iVar5 = 0;
    if (local_8 != 0) {
      local_10 = (void *)((int)local_10 + 8);
      do {
        pvVar2 = local_c;
        FUN_68003140(local_34);
        FUN_68003140(local_1c);
        FUN_680039e0(local_10,&local_8,local_34,local_1c);
        piVar7 = local_1c;
        puVar3 = FUN_68003500(local_40,local_34,&DAT_6800519c);
        FUN_680034b0(local_28,puVar3,piVar7);
        FUN_68003260(local_40);
        iVar1 = local_28[0][-2];
        puVar3 = local_28[0];
        puVar6 = (undefined4 *)((int)pvVar2 + iVar5);
        for (uVar4 = iVar1 + 1U >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar4 = iVar1 + 1U & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        iVar5 = iVar5 + 1 + local_28[0][-2];
        FUN_68003260((int *)local_28);
        FUN_68003260(local_1c);
        FUN_68003260(local_34);
      } while (local_8 != 0);
    }
    pvVar2 = local_c;
    *(undefined1 *)(iVar5 + (int)local_c) = 0;
    (*(code *)param_1)(local_c);
    operator_delete(pvVar2);
  }
  return 0;
}


