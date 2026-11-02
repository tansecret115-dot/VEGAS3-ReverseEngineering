/* Module: rmto3260.dll
   Function: FUN_662fef10
   Address: 662fef10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_662fef10(void *this,ushort *param_1,ushort *param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  ushort *puVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  
  *(uint *)((int)this + 0x10) = (uint)*param_2 * (uint)*param_3;
  *(ushort *)((int)this + 0x14) = *param_2;
  uVar1 = *param_1;
  *(ushort *)((int)this + 0x16) = uVar1;
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x10) / (uint)uVar1;
  uVar5 = *(uint *)((int)this + 0x10) / (uint)*(ushort *)((int)this + 0x14);
  *(uint *)((int)this + 0x20) = uVar5;
  *(int *)((int)this + 0x24) =
       (int)((ulonglong)(uint)*(ushort *)((int)this + 0x14) /
            (ulonglong)(longlong)(int)(uint)*(ushort *)((int)this + 0x16));
  pvVar6 = operator_new(uVar5 * 4);
  *(void **)((int)this + 0x28) = pvVar6;
  if (pvVar6 == (void *)0x0) {
    return 0x80004005;
  }
  pvVar6 = operator_new(*(int *)((int)this + 0x1c) << 1);
  *(void **)((int)this + 0x2c) = pvVar6;
  if (pvVar6 == (void *)0x0) {
    return 0x80004005;
  }
  pvVar6 = operator_new(*(int *)((int)this + 0x1c) << 1);
  *(void **)((int)this + 0x30) = pvVar6;
  if (pvVar6 == (void *)0x0) {
    return 0x80004005;
  }
  uVar5 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    do {
      uVar10 = *(uint *)((int)this + 0x24);
      uVar7 = 0;
      if (uVar10 != 0) {
        do {
          *(short *)(*(int *)((int)this + 0x2c) + (uVar5 * uVar10 + uVar7) * 2) = (short)uVar5;
          *(short *)(*(int *)((int)this + 0x30) + (uVar5 * *(int *)((int)this + 0x24) + uVar7) * 2)
               = (short)uVar7;
          uVar10 = *(uint *)((int)this + 0x24);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar10);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)((int)this + 0x20));
  }
  pvVar6 = operator_new(*(int *)((int)this + 0x1c) << 1);
  *(void **)((int)this + 0x18) = pvVar6;
  if (pvVar6 == (void *)0x0) {
    return 0x80004005;
  }
  if (param_4 == 0) {
    if (*param_3 == 1) {
      uVar5 = 0;
      if (*(int *)((int)this + 0x1c) != 0) {
        do {
          *(short *)(*(int *)((int)this + 0x18) + uVar5 * 2) = (short)uVar5;
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)((int)this + 0x1c));
        return 0;
      }
    }
    else {
      uVar10 = 0;
      uVar5 = 0;
      bVar4 = true;
      param_2 = (ushort *)0x0;
      if (*(int *)((int)this + 0x1c) != 0) {
        do {
          sVar3 = (short)uVar5;
          uVar5 = uVar5 + 2;
          *(short *)(*(int *)((int)this + 0x18) + uVar10 * 2) =
               sVar3 * *(short *)((int)this + 0x24) + (short)param_2;
          uVar10 = uVar10 + 1;
          if (*(uint *)((int)this + 0x20) <= uVar5) {
            if (bVar4) {
              bVar4 = false;
              uVar5 = 1;
            }
            else {
              uVar5 = 0;
              param_2 = (ushort *)((int)param_2 + 1);
              bVar4 = true;
            }
          }
        } while (uVar10 < *(uint *)((int)this + 0x1c));
      }
    }
  }
  else {
    uVar5 = 0;
    if (*(int *)((int)this + 0x1c) != 0) {
      do {
        *(undefined2 *)(*(int *)((int)this + 0x18) + uVar5 * 2) =
             *(undefined2 *)(param_4 + uVar5 * 2);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)((int)this + 0x1c));
    }
    puVar2 = *(ushort **)((int)this + 0x1c);
    param_2 = (ushort *)0x0;
    if (puVar2 != (ushort *)0x0) {
      while( true ) {
        iVar11 = 0;
        if (puVar2 != (ushort *)0x0) {
          puVar8 = *(ushort **)((int)this + 0x18);
          puVar9 = puVar2;
          do {
            if ((ushort *)(uint)*puVar8 == param_2) {
              iVar11 = iVar11 + 1;
            }
            puVar8 = puVar8 + 1;
            puVar9 = (ushort *)((int)puVar9 - 1);
          } while (puVar9 != (ushort *)0x0);
        }
        if (iVar11 != 1) break;
        param_2 = (ushort *)((int)param_2 + 1);
        if (puVar2 <= param_2) {
          return 0;
        }
      }
      return 0x80004005;
    }
  }
  return 0;
}


