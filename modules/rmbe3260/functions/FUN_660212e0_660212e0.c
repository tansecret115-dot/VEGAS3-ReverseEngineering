/* Module: rmbe3260.dll
   Function: FUN_660212e0
   Address: 660212e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660212e0(int param_1,byte *param_2,char *param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  char *local_10 [3];
  
  if ((param_2 == (byte *)0x0) || (param_3 == (char *)0x0)) {
    return 0x80004003;
  }
  pcVar3 = s_audio_x_pn_realaudio_6606cc78;
  pbVar8 = param_2;
  do {
    bVar2 = *pcVar3;
    bVar10 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_6602132f:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_66021334;
    }
    if (bVar2 == 0) break;
    bVar2 = pcVar3[1];
    bVar10 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_6602132f;
    pcVar3 = pcVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_66021334:
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x70) == 0) {
      piVar5 = (int *)(param_1 + 0xa4);
    }
    else {
      piVar5 = (int *)(param_1 + 0xbc);
    }
    FUN_6605b670(local_10,piVar5);
    if (param_4 <= *(uint *)(local_10[0] + -8)) {
      FUN_6605b770((int *)local_10);
      return 0x8004000d;
    }
    uVar6 = 0xffffffff;
    do {
      pcVar3 = local_10[0];
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = local_10[0] + 1;
      cVar1 = *local_10[0];
      local_10[0] = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar3 + -uVar6;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)param_3 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      param_3 = param_3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *param_3 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      param_3 = param_3 + 1;
    }
    FUN_6605b770((int *)local_10);
    return 0;
  }
  pcVar3 = s_video_x_pn_realvideo_6606cde8;
  pbVar8 = param_2;
  do {
    bVar2 = *pcVar3;
    bVar10 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_660213da:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_660213df;
    }
    if (bVar2 == 0) break;
    bVar2 = pcVar3[1];
    bVar10 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_660213da;
    pcVar3 = pcVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_660213df:
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x70) == 0) {
      piVar5 = (int *)(param_1 + 0xb0);
    }
    else {
      piVar5 = (int *)(param_1 + 0xbc);
    }
    FUN_6605b670(local_10,piVar5);
    if (param_4 <= *(uint *)(local_10[0] + -8)) {
      FUN_6605b770((int *)local_10);
      return 0x8004000d;
    }
    uVar6 = 0xffffffff;
    do {
      pcVar3 = local_10[0];
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = local_10[0] + 1;
      cVar1 = *local_10[0];
      local_10[0] = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar3 + -uVar6;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)param_3 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      param_3 = param_3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *param_3 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      param_3 = param_3 + 1;
    }
    FUN_6605b770((int *)local_10);
    return 0;
  }
  pcVar3 = s_application_x_pn_realevent_6606c850;
  pbVar8 = param_2;
  do {
    bVar2 = *pcVar3;
    bVar10 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_66021485:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_6602148a;
    }
    if (bVar2 == 0) break;
    bVar2 = pcVar3[1];
    bVar10 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_66021485;
    pcVar3 = pcVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_6602148a:
  if (iVar4 == 0) {
    if (*(uint *)(*(char **)(param_1 + 200) + -8) < param_4) {
      uVar6 = 0xffffffff;
      pcVar3 = *(char **)(param_1 + 200);
      do {
        pcVar9 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar3 = pcVar9 + -uVar6;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)param_3 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        param_3 = param_3 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *param_3 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        param_3 = param_3 + 1;
      }
      return 0;
    }
  }
  else {
    pcVar3 = s_application_x_pn_imagemap_6606c998;
    do {
      bVar2 = *pcVar3;
      bVar10 = bVar2 < *param_2;
      if (bVar2 != *param_2) {
LAB_660214fb:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_66021500;
      }
      if (bVar2 == 0) break;
      bVar2 = pcVar3[1];
      bVar10 = bVar2 < param_2[1];
      if (bVar2 != param_2[1]) goto LAB_660214fb;
      pcVar3 = pcVar3 + 2;
      param_2 = param_2 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_66021500:
    if (iVar4 != 0) {
      return 0x80070057;
    }
    if (*(uint *)(*(int *)(param_1 + 0xd4) + -8) < param_4) {
      uVar6 = 0xffffffff;
      pcVar3 = *(char **)(param_1 + 200);
      do {
        pcVar9 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar3 = pcVar9 + -uVar6;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)param_3 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        param_3 = param_3 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *param_3 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        param_3 = param_3 + 1;
      }
      return 0;
    }
  }
  return 0x8004000d;
}


