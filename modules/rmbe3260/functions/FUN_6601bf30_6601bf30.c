/* Module: rmbe3260.dll
   Function: FUN_6601bf30
   Address: 6601bf30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601bf30(int param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (param_2 == (byte *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    return 0x80040258;
  }
  uVar2 = 0x80070057;
  pcVar3 = s_audio_x_pn_realaudio_6606cc78;
  pbVar5 = param_2;
  do {
    bVar1 = *pcVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_6601bf92:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_6601bf97;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_6601bf92;
    pcVar3 = pcVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_6601bf97:
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x98) = param_3;
    return 0;
  }
  pcVar3 = s_video_x_pn_realvideo_6606cde8;
  pbVar5 = param_2;
  do {
    bVar1 = *pcVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_6601bfdb:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_6601bfe0;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_6601bfdb;
    pcVar3 = pcVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_6601bfe0:
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x9c) = param_3;
    return 0;
  }
  pcVar3 = s_application_x_pn_realevent_6606c850;
  pbVar5 = param_2;
  do {
    bVar1 = *pcVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_6601c024:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_6601c029;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_6601c024;
    pcVar3 = pcVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_6601c029:
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0xa0) = param_3;
    return 0;
  }
  pcVar3 = s_application_x_pn_imagemap_6606c998;
  pbVar5 = param_2;
  do {
    bVar1 = *pcVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_6601c06d:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_6601c072;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_6601c06d;
    pcVar3 = pcVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_6601c072:
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0xa4) = param_3;
    return 0;
  }
  pcVar3 = s_application_x_pn_realpix_6606c3d8;
  do {
    bVar1 = *pcVar3;
    bVar6 = bVar1 < *param_2;
    if (bVar1 != *param_2) {
LAB_6601c0b6:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_6601c0bb;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar3[1];
    bVar6 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) goto LAB_6601c0b6;
    pcVar3 = pcVar3 + 2;
    param_2 = param_2 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_6601c0bb:
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0xa8) = param_3;
    uVar2 = 0;
  }
  return uVar2;
}


