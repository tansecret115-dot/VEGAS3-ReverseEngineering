/* Module: rmme3260.dll
   Function: FUN_66218fa0
   Address: 66218fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66218fa0(void *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined4 in_EAX;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined2 local_30;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = CONCAT22((short)((uint)in_EAX >> 0x10),*(undefined2 *)((int)this + 0x4c));
  uVar1 = local_8 + 1;
  uVar8 = uVar1 & 0xffff;
  uVar2 = uVar8 * 2;
  pvVar4 = operator_new(uVar2);
  uVar8 = uVar8 * 4;
  pvVar5 = operator_new(uVar8);
  if ((short)local_8 != 0) {
    local_8 = local_8 & 0xffff;
    iVar6 = 0;
    iVar7 = 0;
    do {
      *(undefined2 *)((int)pvVar4 + iVar6) =
           *(undefined2 *)(*(int *)((int)this + 0x4e) + -2 + iVar6 + 2);
      *(undefined4 *)((int)pvVar5 + iVar7) =
           *(undefined4 *)(*(int *)((int)this + 0x52) + -4 + iVar7 + 4);
      local_8 = local_8 - 1;
      iVar6 = iVar6 + 2;
      iVar7 = iVar7 + 4;
    } while (local_8 != 0);
  }
  uVar3 = FUN_662182a0((int)param_1);
  *(undefined2 *)((int)pvVar4 + (uVar2 - 2)) = uVar3;
  local_30 = (undefined2)uVar1;
  *(undefined4 *)((int)pvVar5 + (uVar8 - 4)) = 0;
  *(undefined2 *)((int)this + 0x4c) = local_30;
  operator_delete(*(void **)((int)this + 0x4e));
  *(void **)((int)this + 0x4e) = pvVar4;
  operator_delete(*(void **)((int)this + 0x52));
  *(void **)((int)this + 0x52) = pvVar5;
  iVar6 = FUN_66218eb0((int)this + 0x46);
  *(int *)((int)this + 0x46) = iVar6;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_c = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_66218070(param_1,&local_c,&local_14,&local_10);
  if (local_c < *(uint *)((int)this + 0x28)) {
    *(uint *)((int)this + 0x28) = local_c;
  }
  if (*(uint *)((int)this + 0x30) < local_10) {
    *(uint *)((int)this + 0x30) = local_10;
  }
  if (*(uint *)((int)this + 0x2c) < local_14) {
    *(uint *)((int)this + 0x2c) = local_14;
  }
  FUN_66217fa0(param_1,&local_18,&local_1c);
  if (*(uint *)((int)this + 0x18) < local_18) {
    *(uint *)((int)this + 0x18) = local_18;
  }
  if (*(uint *)((int)this + 0x1c) < local_1c) {
    *(uint *)((int)this + 0x1c) = local_1c;
  }
  FUN_66217ff0(param_1,&local_20,&local_24);
  if (*(uint *)((int)this + 0x20) < local_20) {
    *(uint *)((int)this + 0x20) = local_20;
  }
  if (*(uint *)((int)this + 0x24) < local_24) {
    *(uint *)((int)this + 0x24) = local_24;
  }
  return 0;
}


