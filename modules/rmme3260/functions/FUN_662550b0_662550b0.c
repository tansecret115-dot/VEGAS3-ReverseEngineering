/* Module: rmme3260.dll
   Function: FUN_662550b0
   Address: 662550b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_662550b0(void *this,undefined4 *param_1,uint param_2)

{
  uint in_EAX;
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  ushort uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if ((ushort)param_2 != 0) {
    in_EAX = *(uint *)((int)this + 0xc);
    uVar2 = *(ushort *)((int)this + 0x14);
    iVar3 = in_EAX - *(uint *)((int)this + 8);
    uVar8 = uVar2;
    if (-1 < iVar3) {
      uVar8 = 0;
    }
    if ((ushort)param_2 <= (ushort)((uVar2 - ((short)iVar3 + uVar8)) - 1)) {
      if (in_EAX < *(uint *)((int)this + 8)) {
        puVar7 = (undefined4 *)(in_EAX + 1);
        for (uVar4 = (param_2 & 0xffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *param_1;
          param_1 = param_1 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)param_1;
          param_1 = (undefined4 *)((int)param_1 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        iVar3 = *(int *)((int)this + 0xc) + (param_2 & 0xffff);
        *(int *)((int)this + 0xc) = iVar3;
        return CONCAT22((short)((uint)iVar3 >> 0x10),(ushort)param_2);
      }
      for (puVar7 = (undefined4 *)(in_EAX + 1); *(undefined4 **)((int)this + 0x10) <= puVar7;
          puVar7 = (undefined4 *)((int)puVar7 - (uint)uVar2)) {
      }
      uVar2 = *(short *)((int)this + 0x10) - (short)puVar7;
      uVar4 = (uint)uVar2;
      if ((ushort)param_2 <= uVar2) {
        uVar4 = param_2;
      }
      puVar9 = param_1;
      puVar10 = puVar7;
      for (uVar5 = (uVar4 & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      puVar1 = (undefined1 *)((int)puVar7 + ((uVar4 & 0xffff) - 1));
      uVar5 = param_2 - uVar4;
      *(undefined1 **)((int)this + 0xc) = puVar1;
      if ((short)uVar5 != 0) {
        puVar7 = (undefined4 *)((int)param_1 + (uVar4 & 0xffff));
        puVar9 = *(undefined4 **)((int)this + 4);
        for (uVar6 = (uVar5 & 0xffff) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        puVar1 = (undefined1 *)(((uVar5 & 0xffff) - 1) + *(int *)((int)this + 4));
        *(undefined1 **)((int)this + 0xc) = puVar1;
      }
      return CONCAT22((short)((uint)puVar1 >> 0x10),(ushort)param_2);
    }
  }
  return in_EAX & 0xffff0000;
}


