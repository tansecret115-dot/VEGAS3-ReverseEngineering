/* Module: erv33260.dll
   Function: FUN_67074800
   Address: 67074800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_67074800(void *this,ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
            uint param_5,byte *param_6,byte *param_7)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong *puVar8;
  undefined4 *puVar9;
  ulonglong *local_c;
  
  if (*(int *)((int)this + 0x2c) == 0) {
    return 1;
  }
  if (((((((uint)param_4 & 3) == 0) && ((param_5 & 1) == 0)) && (((uint)param_6 & 3) == 0)) &&
      ((((uint)param_7 & 3) == 0 && ((byte *)0x7 < param_6)))) && ((byte *)0x7 < param_7)) {
    if ((*(byte *)((int)this + 0x40) & 2) != 0) {
      FUN_6707c880(this,(byte *)param_1,(undefined4 *)param_2,(undefined4 *)param_3,(byte *)param_4,
                   param_5,param_6,(uint)param_7);
    }
    if ((*(byte *)((int)this + 0x40) & 5) == 0) {
      return 1;
    }
    iVar1 = FUN_67074b20(this,(int)param_4,param_5,(uint)param_6,(uint)param_7);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 4) != 0) {
        if ((*(byte *)((int)this + 0x40) & 1) != 0) {
          if ((*(int *)((int)this + 0x3c) == 0) || (((uint)param_4 & 7) != 0)) {
            FUN_6707bb20(this,(byte *)param_1,*(uint *)((int)this + 0x5c),(int)param_4,(uint)param_6
                         ,param_7);
          }
          else {
            FUN_6708f000(param_1,*(ulonglong **)((int)this + 0x5c),(int)param_4,(int)param_6,
                         (int)param_7,(ulonglong *)((int)this + 0x80),(int *)((int)this + 0x38));
          }
        }
        if ((*(byte *)((int)this + 0x40) & 4) != 0) {
          FUN_6707d0f0(this,(byte *)param_1,*(byte **)((int)this + 0x5c),(int)param_4,(uint)param_6,
                       (int)param_7);
        }
      }
      pbVar3 = (byte *)((uint)param_7 >> 1);
      uVar6 = (int)param_4 * (int)pbVar3;
      uVar2 = 0;
      if (uVar6 != 0) {
        local_c = (ulonglong *)(uVar6 + (int)param_1);
        do {
          puVar7 = (undefined4 *)((int)param_1 + uVar2);
          puVar9 = (undefined4 *)(uVar2 + *(int *)((int)this + 0x5c));
          for (uVar4 = (uint)param_6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar4 = (uint)param_6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          puVar8 = local_c;
          puVar7 = (undefined4 *)(uVar6 + uVar2 + *(int *)((int)this + 0x5c));
          for (uVar4 = (uint)param_6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = (int)*puVar8;
            puVar8 = (ulonglong *)((int)puVar8 + 4);
            puVar7 = puVar7 + 1;
          }
          for (uVar4 = (uint)param_6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(char *)puVar7 = (char)*puVar8;
            puVar8 = (ulonglong *)((int)puVar8 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          uVar2 = uVar2 + (int)param_4;
          local_c = (ulonglong *)((int)local_c + (int)param_4);
        } while (uVar2 < uVar6);
      }
      uVar2 = (uint)param_6 >> 1;
      if ((*(int *)((int)this + 8) != 0) && ((*(byte *)((int)this + 0x40) & 1) != 0)) {
        if ((*(int *)((int)this + 0x3c) == 0) || ((param_5 & 7) != 0)) {
          FUN_6707bb20(this,(byte *)param_2,*(uint *)((int)this + 0x60),param_5,uVar2,pbVar3);
        }
        else {
          FUN_6708f000(param_2,*(ulonglong **)((int)this + 0x60),param_5,uVar2,(int)pbVar3,
                       (ulonglong *)((int)this + 0x80),(int *)((int)this + 0x38));
        }
      }
      if ((*(int *)((int)this + 0xc) != 0) && ((*(byte *)((int)this + 0x40) & 1) != 0)) {
        if ((*(int *)((int)this + 0x3c) == 0) || ((param_5 & 7) != 0)) {
          FUN_6707bb20(this,(byte *)param_3,*(uint *)((int)this + 100),param_5,uVar2,pbVar3);
        }
        else {
          FUN_6708f000(param_3,*(ulonglong **)((int)this + 100),param_5,uVar2,(int)pbVar3,
                       (ulonglong *)((int)this + 0x80),(int *)((int)this + 0x38));
        }
      }
      uVar4 = ((uint)param_7 >> 2) * param_5;
      uVar6 = 0;
      if (uVar4 != 0) {
        param_4 = (ulonglong *)(uVar4 + (int)param_3);
        do {
          puVar7 = (undefined4 *)(((int)param_2 - (int)param_3) + (int)(uVar6 + (int)param_3));
          puVar9 = (undefined4 *)(uVar6 + *(int *)((int)this + 0x60));
          for (uVar5 = (uint)param_6 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          puVar7 = (undefined4 *)((int)param_4 + ((int)param_2 - (int)param_3));
          puVar9 = (undefined4 *)(uVar4 + uVar6 + *(int *)((int)this + 0x60));
          for (uVar5 = (uint)param_6 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          puVar7 = (undefined4 *)(uVar6 + (int)param_3);
          puVar9 = (undefined4 *)(uVar6 + *(int *)((int)this + 100));
          for (uVar5 = (uint)param_6 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          puVar8 = param_4;
          puVar7 = (undefined4 *)(uVar4 + uVar6 + *(int *)((int)this + 100));
          for (uVar5 = (uint)param_6 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar7 = (int)*puVar8;
            puVar8 = (ulonglong *)((int)puVar8 + 4);
            puVar7 = puVar7 + 1;
          }
          for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(char *)puVar7 = (char)*puVar8;
            puVar8 = (ulonglong *)((int)puVar8 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          uVar6 = uVar6 + param_5;
          param_4 = (ulonglong *)((int)param_4 + param_5);
        } while (uVar6 < uVar4);
      }
      *(undefined4 *)((int)this + 0x34) = 0;
      return 1;
    }
  }
  return 0;
}


