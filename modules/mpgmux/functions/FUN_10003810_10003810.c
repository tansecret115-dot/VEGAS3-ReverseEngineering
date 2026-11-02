/* Module: mpgmux.dll
   Function: FUN_10003810
   Address: 10003810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10003810(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x10) != 0x914) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_pack_size___d__for_V_100169e4);
      return 0x400;
    }
    if (*(int *)(param_1 + 0x14) != 1) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_packets_per_pack_set_100169a4);
      return 0x401;
    }
    if (*(int *)(param_1 + 0x18) != 4) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_audio1_buffer_size___10016968);
      return 0x402;
    }
    if (*(int *)(param_1 + 0x20) != 0x2e) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_video_buffer_size____1001692c);
      return 0x403;
    }
    if (*(int *)(param_1 + 0x3c) != 0xdc8) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_rate___d__for_VCD__s_10016900);
      return 0x404;
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_frame_timestamps___d_100168c8);
      return 0x405;
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_VBR_multiplex___d__f_1001688c);
      return 0x406;
    }
  }
  else if (iVar1 == 3) {
    if (*(int *)(param_1 + 0x10) != 0x914) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_pack_size___d__for_S_10016b80);
      return 0x2000;
    }
    if (*(int *)(param_1 + 0x14) != 1) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_packets_per_pack_set_10016b40);
      return 0x2001;
    }
    if (*(int *)(param_1 + 0x18) != 4) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_audio1_buffer_size___10016b04);
      return 0x2002;
    }
    if (*(int *)(param_1 + 0x1c) != 4) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_audio2_buffer_size___10016ac8);
      return 0x2003;
    }
    if (*(int *)(param_1 + 0x20) != 0xe6) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_video_buffer_size____10016a8c);
      return 0x2004;
    }
    if (0x1b3c < *(int *)(param_1 + 0x3c)) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_rate___d__for_SVCD__s_10016a5c)
      ;
      return 0x2005;
    }
    if (*(int *)(param_1 + 0x50) != 1) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_SVCD_scan_offsets_se_10016a18);
      return 0x2006;
    }
  }
  else if (iVar1 == 4) {
    if (*(int *)(param_1 + 0x10) != 0x800) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_pack_size___d__for_D_10016d94);
      return 0x10000;
    }
    if (*(int *)(param_1 + 0x14) != 1) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_packets_per_pack_set_10016d54);
      return 0x10001;
    }
    if ((*(int *)(param_1 + 0x18) != 4) && (*(int *)(param_1 + 0x18) != 0x3a)) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_audio1_buffer_size___10016cf8);
      return 0x10002;
    }
    if ((*(int *)(param_1 + 0x1c) != 4) && (*(int *)(param_1 + 0x1c) != 0x3a)) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_audio2_buffer_size___10016c9c);
      return 0x10003;
    }
    if (*(int *)(param_1 + 0x20) != 0xe8) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_video_buffer_size____10016c60);
      return 0x10004;
    }
    if (*(int *)(param_1 + 0x3c) != 0x6270) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_rate___d__for_DVD__s_10016c34);
      return 0x10005;
    }
    if (*(int *)(param_1 + 0x38) != 1) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_align_sequence_heade_10016bec);
      return 0x10006;
    }
    if (*(int *)(param_1 + 0x40) != 1) {
      FUN_1000c6d4((undefined1 *)&DAT_1001ab78,(byte *)s_Invalid_mux_private_2_setting____10016bb4);
      return 0x10007;
    }
  }
  return 0;
}


