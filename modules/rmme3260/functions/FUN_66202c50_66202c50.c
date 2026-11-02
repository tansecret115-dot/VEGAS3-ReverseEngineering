/* Module: rmme3260.dll
   Function: FUN_66202c50
   Address: 66202c50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66202c50(byte *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  int local_8;
  
  local_8 = 0;
  if (param_2 == (uint *)0x0) {
    return -0x7ff8ffa9;
  }
  pcVar6 = s_video_x_pn_realvideo_6626f114;
  pbVar3 = param_1;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_66202c9f:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_66202ca4;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_66202c9f;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_66202ca4:
  if (iVar4 == 0) {
    uVar5 = FUN_66204480();
    *param_2 = uVar5;
  }
  else {
    pcVar6 = s_audio_x_pn_realaudio_6626f0fc;
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_66202cdf:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_66202ce4;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_66202cdf;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_66202ce4:
    if (iVar4 == 0) {
      uVar5 = FUN_66205270();
      *param_2 = uVar5;
    }
    else {
      pcVar6 = s_application_x_pn_realevent_6626f0e0;
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_66202d1f:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_66202d24;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < (byte)pcVar6[1];
        if (bVar1 != pcVar6[1]) goto LAB_66202d1f;
        pbVar3 = pbVar3 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_66202d24:
      if (iVar4 == 0) {
        uVar5 = FUN_66205fd0();
        *param_2 = uVar5;
      }
      else {
        pcVar6 = s_application_x_pn_imagemap_6626f0c4;
        do {
          bVar1 = *param_1;
          bVar7 = bVar1 < (byte)*pcVar6;
          if (bVar1 != *pcVar6) {
LAB_66202d5c:
            iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_66202d61;
          }
          if (bVar1 == 0) break;
          bVar1 = param_1[1];
          bVar7 = bVar1 < (byte)pcVar6[1];
          if (bVar1 != pcVar6[1]) goto LAB_66202d5c;
          param_1 = param_1 + 2;
          pcVar6 = pcVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_66202d61:
        if (iVar4 == 0) {
          uVar5 = FUN_66206210();
          *param_2 = uVar5;
        }
        else {
          local_8 = -0x7ff8ffa9;
        }
      }
    }
  }
  if (-1 < local_8) {
    piVar2 = (int *)*param_2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
      return 0;
    }
    if ((-1 < local_8) && (*param_2 == 0)) {
      local_8 = -0x7ff8fff2;
    }
  }
  return local_8;
}


