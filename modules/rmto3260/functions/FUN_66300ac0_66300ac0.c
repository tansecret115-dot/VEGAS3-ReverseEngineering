/* Module: rmto3260.dll
   Function: FUN_66300ac0
   Address: 66300ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_66300ac0(int param_1,int param_2)

{
  short *psVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (DAT_66311e00 == 1) {
    uVar2 = 0;
    if ((short)_DAT_66311d9c != 0) {
      do {
        uVar6 = DAT_66311dfc;
        uVar4 = DAT_66311dfc & 0xffff;
        puVar8 = (undefined4 *)(*(ushort *)(DAT_66311e04 + (uint)uVar2 * 2) * uVar4 + param_1);
        puVar9 = (undefined4 *)(uVar2 * uVar4 + param_2);
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        uVar2 = uVar2 + 1;
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      } while (uVar2 < (ushort)_DAT_66311d9c);
    }
    if ((DAT_66311df0 != 0) && (uVar2 = 0, (short)DAT_66311d98 != 0)) {
      do {
        uVar6 = DAT_66311df4;
        uVar7 = 0;
        puVar8 = DAT_66311e0c;
        for (uVar4 = (DAT_66311df4 & 0xffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar8 = 0;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        if ((short)_DAT_66311df0 != 0) {
          do {
            FUN_66301730(DAT_66311e08,
                         (byte *)(((_DAT_66311df0 & 0xffff) * (uint)uVar2 + (uint)uVar7) *
                                  (DAT_66311dfc & 0xffff) + param_1),(ushort)DAT_66311df4 >> 1);
            uVar3 = 0;
            if ((DAT_66311df4 & 0xfffe) != 0) {
              do {
                psVar1 = (short *)((int)DAT_66311e0c + (uint)uVar3 * 2);
                *psVar1 = *psVar1 + *(short *)((int)DAT_66311e08 + (uint)uVar3 * 2);
                uVar3 = uVar3 + 1;
              } while (uVar3 < (ushort)((ushort)DAT_66311df4 >> 1));
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < (ushort)_DAT_66311df0);
        }
        uVar6 = DAT_66311df4;
        puVar8 = DAT_66311e0c;
        puVar9 = (undefined4 *)
                 ((DAT_66311dfc & 0xffff) * (_DAT_66311d9c & 0xffff) +
                 param_2 + (uint)uVar2 * (DAT_66311df4 & 0xffff));
        for (uVar4 = (DAT_66311df4 & 0xffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        uVar2 = uVar2 + 1;
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      } while (uVar2 < (ushort)DAT_66311d98);
    }
    uVar6 = DAT_66311dec;
    puVar8 = (undefined4 *)
             ((DAT_66311df4 & 0xffff) * (DAT_66311d98 & 0xffff) +
             param_2 + (DAT_66311dfc & 0xffff) * (_DAT_66311d9c & 0xffff));
    for (uVar4 = (DAT_66311dec & 0xffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    return 0;
  }
  return 0xffffffff;
}


