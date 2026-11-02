/* Module: rmme3260.dll
   Function: FUN_66226580
   Address: 66226580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66226580(void *this,ushort param_1,ushort param_2)

{
  byte bVar1;
  void *this_00;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  void *pvVar8;
  int iVar9;
  byte **ppbVar10;
  uint uVar11;
  void *pvVar12;
  byte *pbVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined1 auStack_74 [4];
  undefined4 uStack_70;
  undefined4 uStack_68;
  int local_4c [3];
  byte *local_40 [3];
  int local_34 [3];
  byte *local_28 [3];
  byte *local_1c [3];
  int local_10;
  void *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = this;
  FUN_662500f0(local_28);
  FUN_662500f0(local_1c);
  if (param_1 != param_2) {
    if (((int)(uint)param_1 < *(int *)((int)this + 0x2a)) &&
       (uVar11 = (uint)param_2, (int)uVar11 < *(int *)((int)this + 0x2a))) {
      _param_2 = *(void **)(*(int *)((int)this + 0x26) + (uint)param_1 * 4);
      if ((_param_2 != (void *)0x0) &&
         (pvVar12 = *(void **)(*(int *)((int)this + 0x26) + uVar11 * 4), pvVar12 != (void *)0x0)) {
        piVar3 = FUN_66218240(_param_2,local_40);
        FUN_662503a0(local_28,piVar3);
        FUN_66250210((int *)local_40);
        piVar3 = FUN_66218240(pvVar12,local_40);
        FUN_662503a0(local_1c,piVar3);
        FUN_66250210((int *)local_40);
        do {
          bVar1 = *local_28[0];
          bVar15 = bVar1 < *local_1c[0];
          if (bVar1 != *local_1c[0]) {
LAB_66226653:
            iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_66226658;
          }
          if (bVar1 == 0) break;
          bVar1 = local_28[0][1];
          bVar15 = bVar1 < local_1c[0][1];
          if (bVar1 != local_1c[0][1]) goto LAB_66226653;
          local_28[0] = local_28[0] + 2;
          local_1c[0] = local_1c[0] + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_66226658:
        if (((iVar4 != 0) && (iVar4 = FUN_66250890(local_28,s_logical__6626f798), iVar4 != 0)) &&
           (iVar4 = FUN_66250890(local_1c,s_logical__6626f798), iVar4 != 0)) {
          if (*(short *)((int)this + 0x14) == 0) {
            FUN_662500f0(local_34);
            local_10 = 0;
            uStack_68 = 0x662266b8;
            piVar3 = FUN_662504f0(local_40,local_28,s_logical_stream_6626f884);
            FUN_662503a0(local_34,piVar3);
            FUN_66250210((int *)local_40);
            uStack_70 = 0x662266de;
            FUN_66250110(&uStack_68,(int *)local_28);
            FUN_66250110(auStack_74,local_34);
            FUN_66226070(this);
            uStack_68 = 0x66226705;
            piVar3 = FUN_662504f0(local_40,local_1c,s_logical_stream_6626f884);
            FUN_662503a0(local_34,piVar3);
            FUN_66250210((int *)local_40);
            uStack_70 = 0x6622672b;
            FUN_66250110(&uStack_68,(int *)local_1c);
            FUN_66250110(auStack_74,local_34);
            FUN_66226070(this);
            FUN_66250210(local_34);
          }
          else if (*(short *)((int)this + 0x14) == 1) {
            FUN_662500f0(local_34);
            local_10 = 0;
            FUN_66218240(_param_2,local_40);
            uStack_68 = 0x66226ad7;
            puVar5 = FUN_66250550(local_4c,s_logical__6626f798,local_28);
            pbVar13 = (byte *)*puVar5;
            pbVar7 = local_40[0];
            do {
              bVar1 = *pbVar13;
              bVar15 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_66226b03:
                iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                goto LAB_66226b08;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar13[1];
              bVar15 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_66226b03;
              pbVar13 = pbVar13 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_66226b08:
            FUN_66250210(local_4c);
            if (iVar4 == 0) {
              uStack_68 = 0x66226b26;
              piVar3 = FUN_662504f0(local_4c,local_1c,s_logical_stream_6626f884);
              FUN_662503a0(local_34,piVar3);
              FUN_66250210(local_4c);
              ppbVar10 = local_1c;
            }
            else {
              uStack_68 = 0x66226b5d;
              puVar5 = FUN_66250550(local_4c,s_logical__6626f798,local_1c);
              pbVar13 = (byte *)*puVar5;
              do {
                bVar1 = *pbVar13;
                bVar15 = bVar1 < *local_40[0];
                if (bVar1 != *local_40[0]) {
LAB_66226b89:
                  iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_66226b8e;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar13[1];
                bVar15 = bVar1 < local_40[0][1];
                if (bVar1 != local_40[0][1]) goto LAB_66226b89;
                pbVar13 = pbVar13 + 2;
                local_40[0] = local_40[0] + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_66226b8e:
              FUN_66250210(local_4c);
              if (iVar4 != 0) {
                uVar14 = 0x80004005;
                FUN_66250210((int *)local_40);
                FUN_66250210(local_34);
                goto LAB_66226a86;
              }
              uStack_68 = 0x66226bac;
              piVar3 = FUN_662504f0(local_4c,local_28,s_logical_stream_6626f884);
              FUN_662503a0(local_34,piVar3);
              FUN_66250210(local_4c);
              ppbVar10 = local_28;
            }
            uStack_70 = 0x66226bd2;
            FUN_66250110(&uStack_68,(int *)ppbVar10);
            FUN_66250110(auStack_74,local_34);
            FUN_66226070(this);
            FUN_66250210((int *)local_40);
            FUN_66250210(local_34);
          }
          pvVar8 = (void *)**(undefined4 **)((int)local_c + 0x16);
          this_00 = (void *)(*(undefined4 **)((int)local_c + 0x16))[1];
          if ((pvVar8 != (void *)0x0) && (this_00 != (void *)0x0)) {
            puVar5 = FUN_66218240(pvVar8,local_40);
            uStack_68 = 0x66226782;
            puVar6 = FUN_66250550(local_4c,s_logical__6626f798,local_28);
            pbVar13 = (byte *)*puVar5;
            pbVar7 = (byte *)*puVar6;
            do {
              bVar1 = *pbVar7;
              bVar15 = bVar1 < *pbVar13;
              if (bVar1 != *pbVar13) {
LAB_662267ad:
                iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                goto LAB_662267b2;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar15 = bVar1 < pbVar13[1];
              if (bVar1 != pbVar13[1]) goto LAB_662267ad;
              pbVar7 = pbVar7 + 2;
              pbVar13 = pbVar13 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_662267b2:
            FUN_66250210(local_4c);
            FUN_66250210((int *)local_40);
            if (iVar4 == 0) {
              puVar5 = FUN_66218240(this_00,local_40);
              uStack_68 = 0x662267e5;
              puVar6 = FUN_66250550(local_4c,s_logical__6626f798,local_1c);
              pbVar13 = (byte *)*puVar5;
              pbVar7 = (byte *)*puVar6;
              do {
                bVar1 = *pbVar7;
                bVar15 = bVar1 < *pbVar13;
                if (bVar1 != *pbVar13) {
LAB_66226814:
                  iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_66226819;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar7[1];
                bVar15 = bVar1 < pbVar13[1];
                if (bVar1 != pbVar13[1]) goto LAB_66226814;
                pbVar7 = pbVar7 + 2;
                pbVar13 = pbVar13 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_66226819:
              FUN_66250210(local_4c);
              FUN_66250210((int *)local_40);
              _param_1 = _param_2;
              _param_2 = pvVar12;
              if (iVar4 != 0) {
                local_8 = 0x80004005;
                uVar14 = 0x80004005;
                goto LAB_66226a86;
              }
LAB_66226952:
              pvVar12 = local_c;
              iVar4 = *(int *)((int)local_c + 0x174) + 1;
              local_10 = iVar4;
              pvVar8 = operator_new(iVar4 * 0x10);
              if (pvVar8 == (void *)0x0) {
                local_8 = 0x8007000e;
                uVar14 = 0x8007000e;
              }
              else {
                if (((*(int *)((int)pvVar12 + 0x174) != 0) && (*(int *)((int)pvVar12 + 0x170) != 0))
                   && (uVar11 = 0, *(int *)((int)pvVar12 + 0x174) != 0)) {
                  iVar9 = 0;
                  do {
                    puVar5 = (undefined4 *)((int)pvVar8 + iVar9);
                    puVar6 = (undefined4 *)(*(int *)((int)pvVar12 + 0x170) + iVar9);
                    uVar11 = uVar11 + 1;
                    iVar9 = iVar9 + 0x10;
                    *puVar5 = *puVar6;
                    puVar5[1] = puVar6[1];
                    puVar5[2] = puVar6[2];
                    puVar5[3] = puVar6[3];
                    pvVar12 = local_c;
                    iVar4 = local_10;
                  } while (uVar11 < *(uint *)((int)local_c + 0x174));
                }
                uVar2 = FUN_662182a0((int)_param_1);
                *(undefined2 *)(*(int *)((int)pvVar12 + 0x174) * 0x10 + (int)pvVar8) = uVar2;
                FUN_66217fa0(_param_1,(undefined4 *)0x0,
                             (undefined4 *)(*(int *)((int)pvVar12 + 0x174) * 0x10 + 2 + (int)pvVar8)
                            );
                uVar2 = FUN_662182a0((int)_param_2);
                *(undefined2 *)(*(int *)((int)pvVar12 + 0x174) * 0x10 + 6 + (int)pvVar8) = uVar2;
                FUN_66217fa0(_param_2,(undefined4 *)0x0,
                             (undefined4 *)(*(int *)((int)pvVar12 + 0x174) * 0x10 + 8 + (int)pvVar8)
                            );
                iVar9 = *(int *)((int)pvVar12 + 0x174) * 0x10;
                *(int *)((int)pvVar8 + iVar9 + 0xc) =
                     *(int *)(iVar9 + 2 + (int)pvVar8) + *(int *)(iVar9 + 8 + (int)pvVar8);
                *(int *)((int)pvVar12 + 0x174) = iVar4;
                if (*(void **)((int)pvVar12 + 0x170) != (void *)0x0) {
                  operator_delete(*(void **)((int)pvVar12 + 0x170));
                  *(undefined4 *)((int)pvVar12 + 0x170) = 0;
                }
                *(void **)((int)pvVar12 + 0x170) = pvVar8;
                uVar14 = local_8;
              }
              goto LAB_66226a86;
            }
            puVar5 = FUN_66218240(pvVar8,local_40);
            uStack_68 = 0x6622685f;
            puVar6 = FUN_66250550(local_4c,s_logical__6626f798,local_1c);
            pbVar13 = (byte *)*puVar5;
            pbVar7 = (byte *)*puVar6;
            do {
              bVar1 = *pbVar7;
              bVar15 = bVar1 < *pbVar13;
              if (bVar1 != *pbVar13) {
LAB_6622688a:
                iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                goto LAB_6622688f;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar15 = bVar1 < pbVar13[1];
              if (bVar1 != pbVar13[1]) goto LAB_6622688a;
              pbVar7 = pbVar7 + 2;
              pbVar13 = pbVar13 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_6622688f:
            FUN_66250210(local_4c);
            FUN_66250210((int *)local_40);
            if (iVar4 == 0) {
              puVar5 = FUN_66218240(this_00,local_40);
              uStack_68 = 0x662268c6;
              puVar6 = FUN_66250550(local_4c,s_logical__6626f798,local_28);
              pbVar13 = (byte *)*puVar5;
              pbVar7 = (byte *)*puVar6;
              do {
                bVar1 = *pbVar7;
                bVar15 = bVar1 < *pbVar13;
                if (bVar1 != *pbVar13) {
LAB_662268f5:
                  iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_662268fa;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar7[1];
                bVar15 = bVar1 < pbVar13[1];
                if (bVar1 != pbVar13[1]) goto LAB_662268f5;
                pbVar7 = pbVar7 + 2;
                pbVar13 = pbVar13 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_662268fa:
              FUN_66250210(local_4c);
              FUN_66250210((int *)local_40);
              if (iVar4 == 0) {
                FUN_662500f0(local_40);
                FUN_662503a0(local_40,(int *)local_28);
                FUN_662503a0(local_28,(int *)local_1c);
                FUN_662503a0(local_1c,(int *)local_40);
                FUN_66250210((int *)local_40);
                _param_1 = pvVar12;
                goto LAB_66226952;
              }
            }
          }
          local_8 = 0x80004005;
          uVar14 = 0x80004005;
          goto LAB_66226a86;
        }
      }
    }
  }
  uVar14 = 0x80070057;
LAB_66226a86:
  FUN_66250210((int *)local_1c);
  FUN_66250210((int *)local_28);
  return uVar14;
}


