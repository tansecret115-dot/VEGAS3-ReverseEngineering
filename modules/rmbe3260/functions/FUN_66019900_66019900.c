/* Module: rmbe3260.dll
   Function: FUN_66019900
   Address: 66019900
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66019900(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  int *local_8;
  
  iVar4 = 0;
  local_8 = (int *)0x0;
  pcVar2 = s_audio_x_pn_realaudio_6606cc78;
  pbVar5 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_6601993a:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_6601993f;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_6601993a;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_6601993f:
  if (iVar3 == 0) {
    iVar4 = FUN_66019c60(&local_8);
  }
  else {
    pcVar2 = s_video_x_pn_realvideo_6606cde8;
    pbVar5 = param_1;
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_66019981:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_66019986;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_66019981;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_66019986:
    if (iVar3 == 0) {
      iVar4 = FUN_66019fe0(&local_8);
    }
    else {
      pcVar2 = s_application_x_pn_realpix_6606c3d8;
      pbVar5 = param_1;
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_660199c8:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_660199cd;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_660199c8;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_660199cd:
      if (iVar3 == 0) {
        iVar4 = FUN_6600e940(&local_8);
      }
      else {
        pcVar2 = s_application_x_pn_realevent_6606c850;
        pbVar5 = param_1;
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_66019a0c:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_66019a11;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_66019a0c;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_66019a11:
        if (iVar3 != 0) {
          pcVar2 = s_application_x_pn_imagemap_6606c998;
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *param_1;
            if (bVar1 != *param_1) {
LAB_66019a40:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_66019a45;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < param_1[1];
            if (bVar1 != param_1[1]) goto LAB_66019a40;
            pcVar2 = pcVar2 + 2;
            param_1 = param_1 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_66019a45:
          if (iVar3 != 0) goto LAB_66019a4e;
        }
        iVar4 = -0x7ffbfff7;
      }
    }
  }
LAB_66019a4e:
  if (-1 < iVar4) {
    iVar4 = (**(code **)*local_8)(local_8,&DAT_66065a18,param_2);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar4;
}


