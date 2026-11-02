/* Module: rmme3260.dll
   Function: FUN_662296f0
   Address: 662296f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662296f0(void *this,int param_1,int param_2,int *param_3)

{
  byte bVar1;
  void *this_00;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  byte *local_20 [3];
  int local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  uint local_8;
  
  FUN_662500f0(local_20);
  this_00 = *(void **)(*(int *)((int)this + 0x26) + (uint)*(ushort *)(param_1 + 4) * 4);
  piVar2 = FUN_66218240(this_00,&local_14);
  FUN_662503a0(local_20,piVar2);
  FUN_66250210(&local_14);
  pcVar5 = s_audio_x_pn_multirate_realaudio_6626f7a4;
  pbVar3 = local_20[0];
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_6622975a:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_6622975f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_6622975a;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_6622975f:
  if (iVar4 == 0) {
    if (*(int *)((int)this + 0x15c) == 0) {
      FUN_66217fa0(this_00,&local_8,&uStack_c);
      *(uint *)((int)this + 0x15c) = local_8 >> 3;
    }
    if (*(int *)((int)this + 0x164) != *(int *)(param_1 + 6)) {
      *(undefined4 *)((int)this + 0x160) = 0;
      *(undefined4 *)((int)this + 0x164) = *(undefined4 *)(param_1 + 6);
    }
    local_10 = *(undefined4 *)((int)this + 0x15c);
    *(int *)((int)this + 0x160) = *(int *)((int)this + 0x160) + param_2;
    uStack_c = 0;
    iVar4 = ftol();
    *param_3 = *param_3 + iVar4;
    *(undefined1 *)(param_1 + 0xc) = 3;
  }
  else {
    pcVar5 = s_video_x_pn_multirate_realvideo_6626f864;
    pbVar3 = local_20[0];
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_66229825:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_6622982a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_66229825;
      pbVar3 = pbVar3 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_6622982a:
    if (iVar4 == 0) {
      if ((*(short *)(param_1 + 10) == 0) && (*(int *)((int)this + 0x154) != *(int *)(param_1 + 6)))
      {
        *(undefined1 *)(param_1 + 0xc) = 3;
      }
      else if ((*(short *)((int)this + 0x152) == 0) &&
              (*(int *)((int)this + 0x154) != *(int *)(param_1 + 6))) {
        *(undefined1 *)(param_1 + 0xc) = 3;
      }
      else if (*(int *)((int)this + 0x154) == *(int *)(param_1 + 6)) {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xc) = 2;
      }
      *(short *)((int)this + 0x152) = *(short *)(param_1 + 10);
      *(undefined4 *)((int)this + 0x154) = *(undefined4 *)(param_1 + 6);
    }
    else {
      pcVar5 = s_application_x_pn_multirate_reale_6626f83c;
      pbVar3 = local_20[0];
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_662298be:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_662298c3;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_662298be;
        pbVar3 = pbVar3 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_662298c3:
      if (iVar4 != 0) {
        pcVar5 = s_application_x_pn_multirate_image_6626f818;
        do {
          bVar1 = *local_20[0];
          bVar6 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_662298f6:
            iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_662298fb;
          }
          if (bVar1 == 0) break;
          bVar1 = local_20[0][1];
          bVar6 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_662298f6;
          local_20[0] = local_20[0] + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_662298fb:
        if (iVar4 != 0) goto LAB_66229906;
      }
      *(undefined1 *)(param_1 + 0xc) = 3;
    }
  }
LAB_66229906:
  FUN_66250210((int *)local_20);
  return 0;
}


