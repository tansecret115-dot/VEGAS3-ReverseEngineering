/* Module: aviplug.dll
   Function: FUN_5f9382d0
   Address: 5f9382d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f9382d0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uStack_34;
  SIZE_T SStack_2c;
  int iStack_28;
  double dStack_24;
  double dStack_1c;
  
  if (param_1[0x49] == 0) {
    return -0x7fff0001;
  }
  puVar1 = (undefined4 *)(param_1[0x49] + param_1[0x48] * 0x48);
  iVar3 = (**(code **)*param_2)(param_2,&DAT_5f9d9c90,puVar1);
  if (iVar3 < 0) goto LAB_5f9387c7;
  pvVar4 = GlobalAlloc(0x42,0x84);
  pvVar5 = GlobalLock(pvVar4);
  puVar1[0x11] = pvVar5;
  if (pvVar5 != (LPVOID)0x0) {
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x2c))((int *)*puVar1);
    if ((iVar3 < 0) ||
       (iVar3 = (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1,0,0,&SStack_2c,0,0), iVar3 < 0)
       ) goto LAB_5f9387c7;
    pvVar4 = GlobalAlloc(0x42,SStack_2c);
    pvVar5 = GlobalLock(pvVar4);
    *(LPVOID *)(puVar1[0x11] + 0x58) = pvVar5;
    if (*(int *)(puVar1[0x11] + 0x58) != 0) {
      iVar3 = (**(code **)(*(int *)*puVar1 + 0x30))
                        ((int *)*puVar1,*(int *)(puVar1[0x11] + 0x58),SStack_2c,0,0,0);
      if (iVar3 < 0) goto LAB_5f9387c7;
      iStack_28 = *(int *)(puVar1[0x11] + 0x58);
      psVar11 = *(short **)(*(short **)(param_1[0x61] + 0x424) + 0xb);
      if (psVar11 == (short *)0x0) {
        psVar11 = *(short **)(param_1[0x61] + 0x424);
      }
      if (((*psVar11 == 3) || (*psVar11 == 1)) ||
         (SStack_2c = (ushort)psVar11[8] + 0x12, SStack_2c < 0x13)) {
        SStack_2c = 0x12;
      }
      pvVar4 = GlobalAlloc(0x42,SStack_2c);
      pvVar5 = GlobalLock(pvVar4);
      *(LPVOID *)(puVar1[0x11] + 0x5c) = pvVar5;
      if (*(undefined4 **)(puVar1[0x11] + 0x5c) != (undefined4 *)0x0) {
        if ((*psVar11 == 3) || (*psVar11 == 1)) {
          uVar9 = 0x10;
        }
        else {
          uVar9 = (ushort)psVar11[8] + 0x12;
        }
        puVar12 = *(undefined4 **)(puVar1[0x11] + 0x5c);
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar12 = *(undefined4 *)psVar11;
          psVar11 = psVar11 + 2;
          puVar12 = puVar12 + 1;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(char *)puVar12 = (char)*psVar11;
          psVar11 = (short *)((int)psVar11 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        psVar11 = *(short **)(puVar1[0x11] + 0x5c);
        if ((*psVar11 == 1) || (*psVar11 == 3)) {
          puVar1[3] = 4;
        }
        else {
          iVar3 = -0x7ffb1fe2;
          iVar6 = acmStreamOpen(puVar1[0x11],0,iStack_28,psVar11,0,0,0);
          if (iVar6 != 0) goto LAB_5f9387c7;
          uVar2 = psVar11[6];
          iVar6 = acmStreamSize(*(undefined4 *)puVar1[0x11],(uint)uVar2,&stack0xffffffc4);
          uVar9 = (uint)uVar2;
          if (iVar6 != 0) {
            uVar10 = (uint)(ushort)psVar11[6];
            if (uVar10 < *(ushort *)(iStack_28 + 0xc)) {
              uVar10 = (*(ushort *)(iStack_28 + 0xc) * uVar10 + -1 + uVar10) / uVar10;
            }
            uVar9 = uVar10;
            uStack_34 = uVar10;
            if (uVar10 < (uint)(*(int *)(psVar11 + 4) << 8)) {
              do {
                uVar10 = uStack_34;
                iVar6 = acmStreamSize(*(undefined4 *)puVar1[0x11],uVar10,&stack0xffffffc4);
                if ((iVar6 == 0) && (uStack_34 = uVar10, *(short *)(iStack_28 + 0xc) == 0))
                goto LAB_5f93854b;
                uStack_34 = uVar10 * 2;
                uVar9 = uVar10;
              } while (uStack_34 < (uint)(*(int *)(psVar11 + 4) << 8));
            }
            uVar9 = uVar10;
            if (iVar6 != 0) goto LAB_5f9387c7;
LAB_5f93854b:
            uVar7 = (uint)(ushort)psVar11[6];
            uVar10 = uVar9;
            if (uVar7 < uStack_34 - uVar9) {
              do {
                uVar7 = ((((uStack_34 + uVar10) * uVar7 >> 1) - 1) + uVar7) / uVar7;
                iVar6 = acmStreamSize(*(undefined4 *)puVar1[0x11],uVar7,&stack0xffffffc4);
                uVar9 = uVar7;
                if (iVar6 == 0) {
                  uVar9 = uVar10;
                  uStack_34 = uVar7;
                }
                uVar7 = (uint)(ushort)psVar11[6];
                uVar10 = uVar9;
              } while (uVar7 < uStack_34 - uVar9);
            }
            iVar6 = acmStreamSize(*(undefined4 *)puVar1[0x11],uVar9,&stack0xffffffc4);
            if ((iVar6 != 0) &&
               (iVar6 = acmStreamSize(*(undefined4 *)puVar1[0x11],uStack_34,&stack0xffffffc4),
               uVar9 = uStack_34, iVar6 != 0)) goto LAB_5f9387c7;
          }
          iVar6 = 0;
          *(undefined4 *)(puVar1[0x11] + 0x60) = 0;
          *(uint *)(puVar1[0x11] + 100) = uVar9;
          dStack_24 = (double)*(longlong *)(param_1 + 0x50) * _DAT_5f9d7ce0;
          dStack_1c = dStack_24 + dStack_24;
          if (dStack_1c <= _DAT_5f9d7cd8) {
            do {
              ceil((double)*(uint *)(psVar11 + 4) * dStack_1c);
              iVar6 = ftol();
              uVar9 = ((iVar6 + 1) * (uint)(ushort)psVar11[6] - 1) / (uint)(ushort)psVar11[6];
              iVar6 = acmStreamSize(*(undefined4 *)puVar1[0x11],uVar9,&stack0xffffffc4);
              dStack_1c = dStack_1c + dStack_24;
            } while (dStack_1c <= _DAT_5f9d7cd8);
          }
          if ((iVar6 != 0) ||
             (iVar6 = acmStreamSize(*(undefined4 *)puVar1[0x11],0,&stack0xffffffc0), iVar6 != 0))
          goto LAB_5f9387c7;
          iVar6 = puVar1[0x11];
          pvVar4 = GlobalAlloc(0x42,0);
          pvVar5 = GlobalLock(pvVar4);
          *(LPVOID *)(iVar6 + 0x10) = pvVar5;
          pvVar4 = GlobalAlloc(0x42,uVar9);
          pvVar5 = GlobalLock(pvVar4);
          *(LPVOID *)(iVar6 + 0x20) = pvVar5;
          if ((pvVar5 == (LPVOID)0x0) || (*(int *)(iVar6 + 0x10) == 0)) goto LAB_5f9387de;
          *(undefined4 *)(iVar6 + 4) = 0x54;
          *(undefined4 *)(iVar6 + 8) = 0;
          *(undefined4 *)(iVar6 + 0xc) = 0;
          *(undefined4 *)(iVar6 + 0x14) = 0;
          *(undefined4 *)(iVar6 + 0x18) = 0;
          *(undefined4 *)(iVar6 + 0x1c) = 0;
          *(uint *)(iVar6 + 0x24) = uVar9;
          *(undefined4 *)(iVar6 + 0x28) = 0;
          *(uint *)(iVar6 + 0x2c) = uVar9;
          iVar8 = acmStreamPrepareHeader(*(undefined4 *)puVar1[0x11],(undefined4 *)(iVar6 + 4));
          if (iVar8 != 0) goto LAB_5f9387c7;
          *(undefined4 *)(iVar6 + 0x14) = 0;
          puVar1[3] = 5;
          iVar3 = 0;
        }
        uVar2 = *(ushort *)(*(int *)(puVar1[0x11] + 0x5c) + 0xc);
        puVar1[0xc] = 10000000;
        puVar1[4] = (uint)uVar2;
        puVar1[0xd] = 0;
        uVar13 = __alldiv(10000000,0,*(uint *)(iStack_28 + 4),0);
        *(undefined8 *)(puVar1 + 0xc) = uVar13;
        lVar14 = __allmul(puVar1[8],puVar1[9],puVar1[0xc],(int)((ulonglong)uVar13 >> 0x20));
        *(longlong *)(puVar1 + 10) = lVar14;
        param_1[0x48] = param_1[0x48] + 1;
        if (-1 < iVar3) {
          return iVar3;
        }
        goto LAB_5f9387c7;
      }
    }
  }
LAB_5f9387de:
  iVar3 = -0x7ff8fff2;
LAB_5f9387c7:
  (**(code **)(*param_1 + 0x6c))(param_1,puVar1);
  return iVar3;
}


