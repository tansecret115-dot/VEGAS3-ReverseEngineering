/* Module: rmme3260.dll
   Function: FUN_66225600
   Address: 66225600
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66225600(void *this,uint param_1,int param_2)

{
  byte bVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 auStackY_78 [15];
  uint *puStackY_3c;
  int local_28 [3];
  byte *local_1c [3];
  int local_10;
  void *local_c;
  uint local_8;
  
  iVar9 = 0;
  local_c = this;
  FUN_662500f0(local_1c);
  uVar3 = param_1 & 0xffff;
  local_8 = 0;
  if ((int)uVar3 < *(int *)((int)this + 0x2a)) {
    local_10 = uVar3 * 4;
    pvVar2 = *(void **)(*(int *)((int)this + 0x26) + local_10);
    if (pvVar2 == (void *)0x0) {
      iVar9 = -0x7ff8ffa9;
    }
    else {
      puStackY_3c = (uint *)0x6622565a;
      piVar4 = FUN_66218240(pvVar2,local_28);
      puStackY_3c = (uint *)0x66225663;
      FUN_662503a0(local_1c,piVar4);
      FUN_66250210(local_28);
      pcVar7 = s_audio_x_pn_multirate_realaudio_6626f7a4;
      pbVar5 = local_1c[0];
      do {
        bVar1 = *pbVar5;
        bVar11 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_66225697:
          iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_6622569c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar11 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_66225697;
        pbVar5 = pbVar5 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_6622569c:
      if (iVar6 == 0) {
        *(uint *)((int)this + 100) = uVar3;
        *(int *)((int)this + 0x68) = param_2;
        if (param_2 == 0) {
          *(undefined4 *)((int)this + 0x6c) = 0xffffffff;
        }
        else {
          iVar9 = *(int *)(*(int *)((int)this + 0x26) + local_10);
          if (iVar9 == 0) {
            iVar9 = -0x7fffbffb;
          }
          else {
            puStackY_3c = &local_8;
            puVar8 = (undefined4 *)(iVar9 + 0xc);
            puVar10 = auStackY_78;
            for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            *(undefined2 *)puVar10 = *(undefined2 *)puVar8;
            iVar9 = FUN_66224cc0();
            if (iVar9 == 0) {
              *(uint *)((int)this + 0x6c) = local_8 & 0xffff;
            }
          }
        }
      }
      else {
        pcVar7 = s_video_x_pn_multirate_realvideo_6626f864;
        pbVar5 = local_1c[0];
        do {
          bVar1 = *pbVar5;
          bVar11 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_66225738:
            iVar9 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_6622573d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar11 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_66225738;
          pbVar5 = pbVar5 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        iVar9 = 0;
LAB_6622573d:
        if (iVar9 == 0) {
          *(uint *)((int)this + 0x54) = uVar3;
          *(int *)((int)this + 0x58) = param_2;
          iVar6 = *(int *)(*(int *)((int)this + 0x26) + local_10);
          if (iVar6 == 0) {
            iVar9 = -0x7fffbffb;
          }
          else {
            if (param_2 == 0) {
              *(undefined4 *)((int)local_c + 0x5c) = 0xffffffff;
            }
            else {
              puStackY_3c = &local_8;
              puVar8 = (undefined4 *)(iVar6 + 0xc);
              puVar10 = auStackY_78;
              for (iVar9 = 0xe; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar10 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar10 = puVar10 + 1;
              }
              *(undefined2 *)puVar10 = *(undefined2 *)puVar8;
              pvVar2 = local_c;
              iVar9 = FUN_66224cc0();
              if (iVar9 != 0) goto LAB_6622586c;
              *(uint *)((int)pvVar2 + 0x5c) = local_8 & 0xffff;
            }
            puStackY_3c = &local_8;
            puVar8 = (undefined4 *)(iVar6 + 0xc);
            puVar10 = auStackY_78;
            for (iVar9 = 0xe; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            *(undefined2 *)puVar10 = *(undefined2 *)puVar8;
            pvVar2 = local_c;
            iVar9 = FUN_66224cc0();
            if (iVar9 == 0) {
              *(uint *)((int)pvVar2 + 0x60) = local_8 & 0xffff;
            }
            else {
              *(undefined4 *)((int)pvVar2 + 0x60) = 0xffffffff;
            }
          }
        }
        else {
          pcVar7 = s_application_x_pn_multirate_reale_6626f83c;
          pbVar5 = local_1c[0];
          do {
            bVar1 = *pbVar5;
            bVar11 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_66225822:
              iVar9 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_66225827;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar11 = bVar1 < (byte)pcVar7[1];
            if (bVar1 != pcVar7[1]) goto LAB_66225822;
            pbVar5 = pbVar5 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar1 != 0);
          iVar9 = 0;
LAB_66225827:
          if (iVar9 != 0) {
            pcVar7 = s_application_x_pn_multirate_image_6626f818;
            do {
              bVar1 = *local_1c[0];
              bVar11 = bVar1 < (byte)*pcVar7;
              if (bVar1 != *pcVar7) {
LAB_6622585a:
                iVar9 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_6622585f;
              }
              if (bVar1 == 0) break;
              bVar1 = local_1c[0][1];
              bVar11 = bVar1 < (byte)pcVar7[1];
              if (bVar1 != pcVar7[1]) goto LAB_6622585a;
              local_1c[0] = local_1c[0] + 2;
              pcVar7 = pcVar7 + 2;
            } while (bVar1 != 0);
            iVar9 = 0;
LAB_6622585f:
            if (iVar9 != 0) {
              iVar9 = -0x7ff8ffa9;
              goto LAB_6622586c;
            }
          }
          iVar9 = 0;
        }
      }
    }
  }
  else {
    iVar9 = -0x7ff8ffa9;
  }
LAB_6622586c:
  FUN_66250210((int *)local_1c);
  return iVar9;
}


