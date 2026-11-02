/* Module: mpgvout.002
   Function: mpegOutVideoDefaults
   Address: 10027b00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __cdecl mpegOutVideoDefaults(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  
                    /* 0x27b00  2  mpegOutVideoDefaults */
  bVar1 = true;
  memset(param_1,0,0x36d);
  *(undefined4 *)((int)param_1 + 0x365) = 0;
  *(undefined4 *)((int)param_1 + 0x335) = 0;
  *(undefined4 *)((int)param_1 + 0x339) = 0;
  *(undefined4 *)((int)param_1 + 0x369) = 0;
  *(undefined1 *)(param_1 + 0xcb) = 3;
  *(undefined4 *)((int)param_1 + 0x351) = 0;
  *(undefined4 *)((int)param_1 + 0x34d) = 1;
  *param_1 = param_2;
  param_1[6] = 0;
  param_1[0x83] = 0;
  param_1[0x87] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x89] = 0x19;
  param_1[0x8a] = 0x5a;
  param_1[3] = 0xf;
  param_1[4] = 3;
  param_1[0x18] = 1;
  param_1[0x68] = 1;
  param_1[0x19] = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[0x1a] = 4;
  param_1[0x1b] = 8;
  param_1[0x1d] = 1;
  param_1[0x65] = 5;
  param_1[0x6e] = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)((int)param_1 + 0x331) = 0;
  *(undefined4 *)((int)param_1 + 0x33d) = 0;
  *(undefined4 *)((int)param_1 + 0x341) = 0;
  *(undefined4 *)((int)param_1 + 0x359) = 0;
  *(undefined4 *)((int)param_1 + 0x35d) = 0;
  *(undefined4 *)((int)param_1 + 0x361) = 0;
  if (param_3 == 0) {
    param_1[0xd] = 4;
    param_1[99] = 4;
    param_1[100] = 4;
    param_1[0x62] = 2;
  }
  else {
    param_1[0xd] = 3;
    param_1[99] = 5;
    param_1[100] = 5;
    param_1[0x62] = 1;
  }
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(&UNK_100282d0 + (param_1[0xd] + -1) * 8);
  if (param_2 < 2) {
    param_1[0x6d] = 0;
    iVar7 = 2;
    param_1[0x1c] = 1;
    piVar6 = param_1 + 0x7b;
    param_1[0x7f] = 1;
    do {
      piVar6[-0xc] = 1;
      piVar6[-9] = 0;
      piVar6[-6] = 0;
      piVar6[-3] = 0;
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  else {
    param_1[0x6d] = 1;
    iVar7 = 2;
    param_1[0x1c] = 0;
    piVar6 = param_1 + 0x7b;
    param_1[0x7f] = 0;
    do {
      piVar6[-0xc] = 0;
      piVar6[-9] = 0;
      piVar6[-6] = 1;
      piVar6[-3] = 1;
      *piVar6 = 1;
      piVar6 = piVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  uVar5 = _DAT_10027ae0;
  uVar4 = _DAT_10027ad0;
  uVar3 = _DAT_10027ac0;
  uVar2 = _DAT_10027ab8;
  switch(param_2) {
  case 0:
    param_1[0x15] = 0x17;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    param_1[0x16] = 1;
    *(undefined8 *)(param_1 + 0x12) = uVar2;
    param_1[0x17] = 6;
    param_1[0x66] = 0x160;
    puVar9 = PTR_s_MPEG_1_NTSC_video_and_MPEG_audio_1003c86c;
    puVar8 = PTR_s_MPEG_1_PAL_video_and_MPEG_audio_1003c868;
    if (param_3 == 0) {
      param_1[0xc] = 0xc;
      param_1[0x67] = 0xf0;
    }
    else {
      param_1[0xc] = 8;
      param_1[0x67] = 0x120;
      puVar9 = puVar8;
    }
    break;
  case 1:
    param_1[2] = 1;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    param_1[0x15] = 0x14;
    uVar2 = _DAT_10027ac8;
    param_1[0x16] = 1;
    *(undefined8 *)(param_1 + 0x12) = uVar2;
    param_1[0x17] = 8;
    param_1[0x66] = 0x160;
    puVar9 = PTR_s_MPEG_1_VideoCD_NTSC_video_and_MP_1003c874;
    puVar8 = PTR_s_MPEG_1_VideoCD_PAL_video_and_MPE_1003c870;
    if (param_3 == 0) {
      param_1[0xc] = 0xc;
      *(undefined4 *)((int)param_1 + 0x365) = 0x160;
      *(undefined4 *)((int)param_1 + 0x369) = 0xf0;
      param_1[0x67] = 0xf0;
    }
    else {
      param_1[0xc] = 8;
      *(undefined4 *)((int)param_1 + 0x365) = 0x160;
      *(undefined4 *)((int)param_1 + 0x369) = 0x120;
      param_1[0x67] = 0x120;
      puVar9 = puVar8;
    }
    *(undefined1 *)(param_1 + 0xcb) = 3;
    *(undefined4 *)((int)param_1 + 0x351) = 5;
    *(undefined4 *)((int)param_1 + 0x34d) = 1;
    bVar1 = false;
    FUN_10027488(param_1,*(int *)((int)param_1 + 0x365) * 0x11 + 0x41f >> 9,
                 *(int *)((int)param_1 + 0x369) * 0x11 + 0x41f >> 9);
    break;
  case 2:
    param_1[0xc] = 2;
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    param_1[0x15] = 0x70;
    *(undefined8 *)(param_1 + 0x12) = uVar4;
    param_1[0x16] = 0;
    uVar2 = _DAT_10027ad8;
    param_1[0x17] = 10;
    *(undefined8 *)((int)param_1 + 0x335) = uVar2;
    param_1[0x66] = 0x2d0;
    if (param_3 == 0) goto LAB_10028124;
LAB_1002810a:
    puVar9 = PTR_s_MPEG_2_PAL_video_and_MPEG_audio_1003c878;
    param_1[3] = 0xc;
    param_1[0x67] = 0x240;
    break;
  case 3:
    param_1[0x68] = 0;
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    param_1[3] = 0xf;
    uVar2 = _DAT_10027ae8;
    param_1[0xc] = 2;
    *(undefined8 *)((int)param_1 + 0x335) = uVar2;
    param_1[0x15] = 0x70;
    uVar2 = _DAT_10027af0;
    param_1[0x16] = 0;
    *(undefined8 *)(param_1 + 0x12) = uVar2;
    param_1[0x17] = 0xc;
    *(undefined4 *)((int)param_1 + 0x331) = 1;
    param_1[0x66] = 0x2d0;
    puVar9 = PTR_s_MPEG_2_SuperVCD_NTSC_video_and_M_1003c884;
    puVar8 = PTR_s_MPEG_2_SuperVCD_PAL_video_and_MP_1003c880;
    if (param_3 == 0) {
      *(undefined4 *)((int)param_1 + 0x365) = 0x1e0;
      goto LAB_1002806f;
    }
    *(undefined4 *)((int)param_1 + 0x365) = 0x1e0;
LAB_1002803f:
    *(undefined4 *)((int)param_1 + 0x369) = 0x240;
    param_1[0x67] = 0x240;
    puVar9 = puVar8;
    goto LAB_10028083;
  case 4:
    param_1[0xc] = 2;
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    param_1[0x15] = 0x70;
    uVar2 = _DAT_10027ad8;
    param_1[0x16] = 0;
    *(undefined8 *)((int)param_1 + 0x335) = uVar2;
    param_1[0x17] = 10;
    uVar2 = _DAT_10027af8;
    param_1[0x66] = 0x2d0;
    *(undefined8 *)(param_1 + 0x12) = uVar2;
    puVar9 = PTR_s_MPEG_2_DVD_NTSC_video_and_MPEG_a_1003c88c;
    puVar8 = PTR_s_MPEG_2_DVD_PAL_video_and_MPEG_au_1003c888;
    if (param_3 != 0) {
      param_1[3] = 0xc;
      *(undefined4 *)((int)param_1 + 0x365) = 0x2d0;
      goto LAB_1002803f;
    }
    param_1[3] = 0xf;
    *(undefined4 *)((int)param_1 + 0x365) = 0x2d0;
LAB_1002806f:
    *(undefined4 *)((int)param_1 + 0x369) = 0x1e0;
    param_1[0x67] = 0x1e0;
LAB_10028083:
    *(undefined1 *)(param_1 + 0xcb) = 3;
    iVar7 = *(int *)((int)param_1 + 0x369) * 0x11 + 0x41f >> 9;
    *(undefined4 *)((int)param_1 + 0x351) = 5;
    *(undefined4 *)((int)param_1 + 0x34d) = 1;
    iVar10 = *(int *)((int)param_1 + 0x365) * 0x11 + 0x41f >> 9;
    goto LAB_10028146;
  default:
    param_1[0xc] = 2;
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    param_1[0x15] = 0x70;
    *(undefined8 *)(param_1 + 0x12) = uVar4;
    param_1[0x16] = 0;
    uVar2 = _DAT_10027ad8;
    param_1[0x17] = 10;
    *(undefined8 *)((int)param_1 + 0x335) = uVar2;
    param_1[0x66] = 0x2d0;
    if (param_3 != 0) goto LAB_1002810a;
LAB_10028124:
    puVar9 = PTR_s_MPEG_2_NTSC_video_and_MPEG_audio_1003c87c;
    param_1[3] = 0xf;
    param_1[0x67] = 0x1e0;
  }
  if (bVar1) {
    iVar7 = 7;
    iVar10 = 7;
LAB_10028146:
    FUN_10027488(param_1,iVar10,iVar7);
  }
  param_1[0x88] = (uint)(param_1[0x16] != 1);
  return puVar9;
}


