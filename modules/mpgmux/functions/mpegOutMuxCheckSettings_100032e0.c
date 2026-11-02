/* Module: mpgmux.dll
   Function: mpegOutMuxCheckSettings
   Address: 100032e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl mpegOutMuxCheckSettings(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
                    /* 0x32e0  9  mpegOutMuxCheckSettings */
  if (param_1 != (int *)0x0) {
    DAT_1001ab78._0_1_ = 0;
    iVar3 = param_1[0xb];
    if (iVar3 == 6) {
      return 0;
    }
    if ((iVar3 < 0) || (4 < iVar3)) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_type_setting___d___r_1001614c);
      return 0x80000;
    }
    iVar2 = param_1[0xc];
    if ((iVar2 < 0) || (3 < iVar2)) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_pulldown_setting___d_10016180);
      return 0x80001;
    }
    if ((iVar3 < 2) && (0 < iVar2)) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_pulldown_setting___d_1001682c);
      return 0x80002;
    }
    if ((param_1[10] < 0) || (2 < param_1[10])) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_computed_bitrate_set_100161b8);
      return 0x80003;
    }
    iVar2 = param_1[0xd];
    if ((iVar2 < 0) || (1 < iVar2)) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_VCD_audio_pad_settin_100161f8);
      return 0x80004;
    }
    if ((iVar3 != 1) && (iVar2 != 0)) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_VCD_audio_pad_settin_100167ec);
      return 0x80005;
    }
    iVar2 = param_1[0xe];
    if ((iVar2 < 0) || (1 < iVar2)) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_align_sequence_heade_10016230);
      return 0x80006;
    }
    if (param_1[0xf] < 0) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_rate___d___should_be_100167c4);
      return 0x80007;
    }
    uVar5 = param_1[4];
    if (0x1000 < uVar5) {
      if (iVar3 < 2) {
        pcVar8 = s_Invalid_mux_sector_size___d__for_10016788;
      }
      else {
        pcVar8 = s_Invalid_mux_sector_size___d__for_1001674c;
      }
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)pcVar8);
      return 0x80008;
    }
    if (iVar3 < 2) {
      iVar3 = (int)(uVar5 - 0x21) / 0xff + 7;
    }
    else {
      iVar3 = (int)(uVar5 - 0x23) / 0xff + 9;
    }
    if (iVar3 < param_1[5]) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_packets_per_pack_set_10016710);
      return 0x80009;
    }
    uVar5 = *param_1 + 1000;
    if (((uVar5 < (uint)param_1[1]) && (uVar5 < (uint)param_1[2])) && (uVar5 < (uint)param_1[3])) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_audio_video_pack_del_1001668c);
      return 0x8000a;
    }
    if (0x40 < (uint)param_1[6]) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_audio1_buffer_size___10016654);
      return 0x8000b;
    }
    if (0x40 < (uint)param_1[7]) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_audio2_buffer_size___1001661c);
      return 0x8000c;
    }
    if (0x100 < (uint)param_1[8]) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_video_buffer_size____100165e4);
      return 0x8000d;
    }
    if ((param_1[0x12] != 0) && (param_1[0x12] != 1)) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_VBR_CBR_mux_type___d___s_100165b4);
      return 0x8000e;
    }
    if ((param_1[0x13] < 0) || (1 < param_1[0x13])) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_write_program_end_co_10016270);
      return 0x8000f;
    }
    iVar3 = param_1[0x14];
    if ((iVar3 < 0) || (1 < iVar3)) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_SVCD_scan_offsets_se_100162b4);
      return 0x80010;
    }
    if ((iVar3 != 0) && (iVar2 == 0)) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_SVCD_scan_offsets____10016510);
      return 0x80011;
    }
    iVar3 = param_1[0x10];
    if ((iVar3 < 0) || (1 < iVar3)) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_private_stream_2_set_100162f4);
      return 0x80012;
    }
    if ((param_1[0xb] != 4) && (iVar3 != 0)) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_private_stream_2___d_10016494);
      return 0x80013;
    }
    if ((param_1[0x11] < 0) || (2 < param_1[0x11])) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_frame_timestamp_sett_10016330);
      return 0x80014;
    }
    if (0x1000 < (uint)param_1[0x15]) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_maximum_file_size____1001645c);
      return 0x80015;
    }
    if ((uint)param_1[0x17] < (uint)param_1[0x16]) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_start_time___d__is_l_1001641c);
      return 0x80016;
    }
    if ((param_1[0x18] < 0) || (1 < param_1[0x18])) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_reset_clocks_setting_1001636c);
      return 0x80017;
    }
    if ((-1 < param_1[0x19]) && (param_1[0x19] < 2)) {
      if ((-1 < param_1[0x1a]) && (param_1[0x1a] < 2)) {
        uVar4 = FUN_10003810((int)param_1);
        return uVar4;
      }
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_set_broken_link_sett_100163e0);
      return 0x80019;
    }
    FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_write_end_codes_sett_100163a4);
    return 0x80018;
  }
  uVar5 = 0xffffffff;
  pcVar8 = s_Invalid_mpeg_m_settings_paramete_10016868;
  do {
    pcVar7 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar7 + -uVar5;
  pcVar7 = (char *)&DAT_1001ab78;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return 0x10;
}


