/* Module: vegas30k.dll
   Function: FUN_01185f70
   Address: 01185f70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x011863e4) */

longlong __thiscall
FUN_01185f70(int param_1,void *param_2,uint param_3,int param_4,uint param_5,uint param_6,
            int param_7)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int unaff_EDI;
  uint uVar12;
  bool bVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  uint local_40;
  int local_3c;
  uint local_30;
  int local_2c;
  int local_24;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar15 = CONCAT44(param_4,param_3);
  local_18 = 0;
  uVar12 = *(uint *)(param_1 + 0x568);
  iVar11 = *(int *)(param_1 + 0x56c);
  local_14 = 0x3ff00000;
  local_10 = 0;
  local_c = 0x3ff00000;
  if ((*(int *)(param_1 + 0x5ac) != 0) && (*(int *)(param_1 + 0x5cc) == 0)) {
    uVar7 = *(uint *)(param_1 + 0x5a0) + *(uint *)(param_1 + 0x590);
    iVar4 = *(int *)(param_1 + 0x5a4) + *(int *)(param_1 + 0x594) +
            (uint)CARRY4(*(uint *)(param_1 + 0x5a0),*(uint *)(param_1 + 0x590));
    if ((*(int *)(param_1 + 0x534) <= iVar4) &&
       ((*(int *)(param_1 + 0x534) < iVar4 || (*(uint *)(param_1 + 0x530) <= uVar7)))) {
      iVar11 = iVar4;
      uVar12 = uVar7;
    }
  }
  iVar4 = *(int *)(param_1 + 0x8a4);
  if (((iVar11 < iVar4) ||
      (((iVar11 <= iVar4 && (uVar12 <= *(uint *)(param_1 + 0x8a0))) ||
       (*(int *)(param_1 + 0x48) != 0)))) &&
     ((iVar4 < 0 ||
      (((iVar4 < 1 && (*(uint *)(param_1 + 0x8a0) == 0)) || (*(int *)(param_1 + 0x48) == 0)))))) {
    _SfAudio_FillSilence_12(param_1 + 0x4f8,param_2,param_3);
  }
  else {
    lVar14 = FUN_01184f60(param_2,param_3,param_4,param_5);
    iVar11 = (int)((ulonglong)lVar14 >> 0x20);
    uVar12 = (uint)lVar14;
    if (lVar14 == -3) {
      return -3;
    }
    lVar15 = FUN_011851d0(param_3,param_4,param_5);
    if (lVar15 == -3) {
      return -3;
    }
    if ((*(int *)(param_1 + 0x48) == 0) && (*(int *)(*(int *)(param_1 + 0x2c) + 0x808) == 0)) {
      FUN_01185190(param_2,*(undefined4 *)(param_1 + 0x8a0),*(undefined4 *)(param_1 + 0x8a4),param_3
                   ,param_4,0);
    }
    if ((param_7 < param_4) || ((param_7 <= param_4 && (param_6 <= param_3)))) {
      for (piVar3 = *(int **)(param_1 + 0x608); lVar15 = lVar14, piVar3 != (int *)0x0;
          piVar3 = (int *)piVar3[0x5b]) {
        iVar4 = *(int *)(*piVar3 + 0x648);
        if ((piVar3[9] != 0) && ((*(byte *)(piVar3 + 0xe) & 4) != 0)) {
          uVar7 = 0;
          local_24 = 0;
          if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
            while( true ) {
              iVar9 = piVar3[0xd];
              uVar5 = piVar3[0xc];
              if ((iVar9 < 0) || ((iVar9 < 1 && (uVar5 == 0)))) break;
              if (piVar3[0xb] == 0) {
                piVar10 = &local_18;
                if (iVar4 == 0) {
                  piVar10 = piVar3 + 0x1a;
                }
                if ((param_4 <= iVar9) && ((param_4 < iVar9 || (param_3 < uVar5)))) {
                  uVar5 = param_3;
                }
                _SfAudio_MixChannels_28
                          (param_1 + 0x4f8,param_2,piVar3 + 1,piVar3[9],uVar5,piVar3[6],piVar10);
              }
              iVar9 = piVar3[0xd];
              uVar5 = piVar3[0xc];
              if ((param_4 <= iVar9) && ((param_4 < iVar9 || (param_3 < uVar5)))) {
                uVar5 = param_3;
                iVar9 = param_4;
              }
              bVar13 = CARRY4(uVar7,uVar5);
              uVar7 = uVar7 + uVar5;
              local_24 = local_24 + iVar9 + (uint)bVar13;
              if ((param_4 <= local_24) && ((param_4 < local_24 || (param_3 <= uVar7)))) break;
            }
          }
          piVar3[0xf] = piVar3[0xf] & 0xefffffff;
        }
      }
    }
    else {
      uVar16 = __allrem(param_6,param_7,param_3,param_4);
      uVar7 = param_6 - (uint)uVar16;
      iVar4 = (param_7 - (int)((ulonglong)uVar16 >> 0x20)) - (uint)(param_6 < (uint)uVar16);
      local_40 = 0;
      local_3c = 0;
      _SfAudio_FillSilence_12(param_1 + 0x4f8,param_2,uVar7);
      lVar15 = 0;
      if ((-1 < iVar4) && ((0 < iVar4 || (lVar15 = 0, uVar7 != 0)))) {
        do {
          piVar3 = *(int **)(param_1 + 0x608);
          while (piVar3 != (int *)0x0) {
            iVar9 = *(int *)(*piVar3 + 0x648);
            if (piVar3[9] == 0) {
              piVar3 = (int *)piVar3[0x5b];
            }
            else if ((*(byte *)(piVar3 + 0xe) & 4) == 0) {
              piVar3 = (int *)piVar3[0x5b];
            }
            else {
              local_30 = 0;
              local_2c = 0;
              if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
                while( true ) {
                  iVar8 = piVar3[0xd];
                  uVar5 = piVar3[0xc];
                  if ((iVar8 < 0) || ((iVar8 < 1 && (uVar5 == 0)))) break;
                  if (piVar3[0xb] == 0) {
                    piVar10 = &local_18;
                    if (iVar9 == 0) {
                      piVar10 = piVar3 + 0x1a;
                    }
                    if ((param_4 <= iVar8) && ((param_4 < iVar8 || (param_3 < uVar5)))) {
                      uVar5 = param_3;
                    }
                    _SfAudio_MixChannels_28
                              (param_1 + 0x4f8,
                               (void *)(*(ushort *)(param_1 + 0x504) * local_40 + (int)param_2),
                               piVar3 + 1,piVar3[9],uVar5,piVar3[6],piVar10);
                  }
                  iVar8 = piVar3[0xd];
                  uVar5 = piVar3[0xc];
                  if ((param_4 <= iVar8) && ((param_4 < iVar8 || (param_3 < uVar5)))) {
                    uVar5 = param_3;
                    iVar8 = param_4;
                  }
                  bVar13 = CARRY4(local_30,uVar5);
                  local_30 = local_30 + uVar5;
                  local_2c = local_2c + iVar8 + (uint)bVar13;
                  if ((param_4 <= local_2c) && ((param_4 < local_2c || (param_3 <= local_30))))
                  break;
                }
              }
              piVar3[0xf] = piVar3[0xf] & 0xefffffff;
              piVar3 = (int *)piVar3[0x5b];
            }
          }
          bVar13 = CARRY4(local_40,param_3);
          local_40 = local_40 + param_3;
          local_3c = local_3c + param_4 + (uint)bVar13;
        } while ((local_3c < iVar4) ||
                ((lVar15 = CONCAT44(local_3c,local_40), local_3c <= iVar4 &&
                 (lVar15 = CONCAT44(local_3c,local_40), local_40 < uVar7))));
      }
    }
    if ((param_5 & 0x20000000) != 0) {
      plVar1 = (longlong *)(param_1 + 0x888);
      if ((-1 < *(int *)(param_1 + 0x88c)) &&
         ((((0 < *(int *)(param_1 + 0x88c) || (*(int *)plVar1 != 0)) &&
           (*(int *)(param_1 + 0x890) == 0)) &&
          ((*(int *)(param_1 + 0x6a4) == 0 || ((*(uint *)(param_1 + 0x20) & 0x200) == 0)))))) {
        if (*plVar1 < lVar14) {
          lVar14 = *plVar1;
        }
        *(longlong *)(param_1 + 0x888) = lVar14;
        SfAudio_DoFlushFade(param_2,*(void **)(param_1 + 0x880),(tWAVEFORMATEX *)(param_1 + 0x4f8),
                            *(long *)(param_1 + 0x888));
        *(undefined4 *)(param_1 + 0x888) = 0;
        *(undefined4 *)(param_1 + 0x88c) = 0;
      }
    }
    puVar2 = (uint *)(param_1 + 0x8a0);
    if (*(__int64 **)(param_1 + 0x48) == (__int64 *)0x0) {
      uVar7 = *puVar2;
      *puVar2 = *puVar2 + uVar12;
      iVar11 = *(int *)(param_1 + 0x8a4) + iVar11 + (uint)CARRY4(uVar7,uVar12);
    }
    else {
      uVar7 = *puVar2;
      *puVar2 = *puVar2 - uVar12;
      iVar11 = (*(int *)(param_1 + 0x8a4) - iVar11) - (uint)(uVar7 < uVar12);
    }
    *(int *)(param_1 + 0x8a4) = iVar11;
    *(uint *)(param_1 + 0x8c4) = *(uint *)(param_1 + 0x8c4) & 0xefffffff;
    if ((*(int *)(param_1 + 0x5cc) == 0) &&
       (lVar6 = SFMixer_AdjustforLoop
                          ((_tag_looppoint *)(param_1 + 0x588),
                           CONCAT44(puVar2,*(undefined4 *)(param_1 + 0x534)),
                           *(__int64 **)(param_1 + 0x48),unaff_EDI), lVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0x590);
      *(undefined4 *)(param_1 + 0x544) = *(undefined4 *)(param_1 + 0x594);
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 1;
      iVar11 = *(int *)(param_1 + 0x608);
      *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 1;
      for (; iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x16c)) {
        *(uint *)(iVar11 + 0x3c) = *(uint *)(iVar11 + 0x3c) | 0x10000000;
      }
      *(uint *)(param_1 + 0x8c4) = *(uint *)(param_1 + 0x8c4) | 0x10000000;
      return lVar15;
    }
  }
  return lVar15;
}


