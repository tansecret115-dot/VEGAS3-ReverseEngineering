/* Module: rmbe3260.dll
   Function: FUN_6604d8a0
   Address: 6604d8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_6604d8a0(int param_1,int param_2)

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
  
  if (DAT_660753a0 == 1) {
    uVar2 = 0;
    if ((short)_DAT_6607533c != 0) {
      do {
        uVar6 = DAT_6607539c;
        uVar4 = DAT_6607539c & 0xffff;
        puVar8 = (undefined4 *)(*(ushort *)(DAT_660753a4 + (uint)uVar2 * 2) * uVar4 + param_1);
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
      } while (uVar2 < (ushort)_DAT_6607533c);
    }
    if ((DAT_66075390 != 0) && (uVar2 = 0, (short)DAT_66075338 != 0)) {
      do {
        uVar6 = DAT_66075394;
        uVar7 = 0;
        puVar8 = DAT_660753ac;
        for (uVar4 = (DAT_66075394 & 0xffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar8 = 0;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        if ((short)_DAT_66075390 != 0) {
          do {
            FUN_6604e510(DAT_660753a8,
                         (byte *)(((_DAT_66075390 & 0xffff) * (uint)uVar2 + (uint)uVar7) *
                                  (DAT_6607539c & 0xffff) + param_1),(ushort)DAT_66075394 >> 1);
            uVar3 = 0;
            if ((DAT_66075394 & 0xfffe) != 0) {
              do {
                psVar1 = (short *)((int)DAT_660753ac + (uint)uVar3 * 2);
                *psVar1 = *psVar1 + *(short *)((int)DAT_660753a8 + (uint)uVar3 * 2);
                uVar3 = uVar3 + 1;
              } while (uVar3 < (ushort)((ushort)DAT_66075394 >> 1));
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < (ushort)_DAT_66075390);
        }
        uVar6 = DAT_66075394;
        puVar8 = DAT_660753ac;
        puVar9 = (undefined4 *)
                 ((DAT_6607539c & 0xffff) * (_DAT_6607533c & 0xffff) +
                 param_2 + (uint)uVar2 * (DAT_66075394 & 0xffff));
        for (uVar4 = (DAT_66075394 & 0xffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
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
      } while (uVar2 < (ushort)DAT_66075338);
    }
    uVar6 = DAT_6607538c;
    puVar8 = (undefined4 *)
             ((DAT_66075394 & 0xffff) * (DAT_66075338 & 0xffff) +
             param_2 + (DAT_6607539c & 0xffff) * (_DAT_6607533c & 0xffff));
    for (uVar4 = (DAT_6607538c & 0xffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
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


