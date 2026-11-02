/* Module: rmto3260.dll
   Function: FUN_662cea40
   Address: 662cea40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662cea40(void *this,int param_1,int param_2)

{
  uint local_26;
  uint local_12;
  uint local_e;
  byte bStack_8;
  
  if (((param_1 != 0) && (param_2 != 0)) &&
     (CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9)) == 0)) {
    local_26 = (uint)*(byte *)(param_1 + 0x12) << 0x18 | (uint)*(byte *)(param_1 + 0x13) << 0x10 |
               (uint)*(byte *)(param_1 + 0x14) << 8 | (uint)*(byte *)(param_1 + 0x15);
    local_12 = (uint)*(byte *)(param_1 + 0x26) << 0x18 | (uint)*(byte *)(param_1 + 0x27) << 0x10 |
               (uint)*(byte *)(param_1 + 0x28) << 8 | (uint)*(byte *)(param_1 + 0x29);
    local_e = (uint)*(byte *)(param_1 + 0x2a) << 0x18 | (uint)*(byte *)(param_1 + 0x2b) << 0x10 |
              (uint)*(byte *)(param_1 + 0x2c) << 8 | (uint)*(byte *)(param_1 + 0x2d);
    bStack_8 = *(byte *)(param_1 + 0x31);
  }
  FUN_662f0810(*(int **)((int)this + 0x28),s______________________6630a5c4);
  FUN_662f0810(*(int **)((int)this + 0x28),s_RM_PROPERTIES_OBJECT_6630a5ac);
  FUN_662cfec0((int)this);
  FUN_662f0810(*(int **)((int)this + 0x28),s_size___lu_bytes_6630a598);
  FUN_662f0810(*(int **)((int)this + 0x28),s_object_version___hu_6630a3e4);
  FUN_662f0810(*(int **)((int)this + 0x28),s_max_bit_rate___lu_bps_6630a580);
  FUN_662f0810(*(int **)((int)this + 0x28),s_avg_bit_rate___lu_bps_6630a568);
  FUN_662f0810(*(int **)((int)this + 0x28),s_max_packet_size___lu_bytes_6630a54c);
  FUN_662f0810(*(int **)((int)this + 0x28),s_avg_packet_size___lu_bytes_6630a530);
  FUN_662f0810(*(int **)((int)this + 0x28),s_num_interleave_packets___lu_6630a510);
  FUN_662f0810(*(int **)((int)this + 0x28),s_duration___lu_milliseconds_6630a4f4);
  FUN_662f0810(*(int **)((int)this + 0x28),s_preroll___lu_milliseconds_6630a4d8);
  FUN_662f0810(*(int **)((int)this + 0x28),s_index_offset___lu_bytes_6630a4bc);
  FUN_662f0810(*(int **)((int)this + 0x28),s_data_offset___lu_bytes_6630a4a4);
  FUN_662f0810(*(int **)((int)this + 0x28),s_num_streams___hu_6630a490);
  FUN_662f0810(*(int **)((int)this + 0x28),s_flags___hu_6630a484);
  if ((bStack_8 & 1) != 0) {
    FUN_662f0810(*(int **)((int)this + 0x28),s_Allow_Recording_is_enabled_6630a468);
  }
  if ((bStack_8 & 8) != 0) {
    FUN_662f0810(*(int **)((int)this + 0x28),s_Allow_Download_is_enabled_6630a44c);
  }
  if ((bStack_8 & 2) != 0) {
    FUN_662f0810(*(int **)((int)this + 0x28),s_Perfect_Play_is_enabled_6630a430);
  }
  *(uint *)((int)this + 0x30) = local_26;
  *(uint *)((int)this + 0x38) = local_e;
  *(uint *)((int)this + 0x3c) = local_12;
  return 0;
}


