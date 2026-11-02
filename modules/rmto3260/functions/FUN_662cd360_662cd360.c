/* Module: rmto3260.dll
   Function: FUN_662cd360
   Address: 662cd360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662cd360(void *this,byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  undefined2 extraout_var;
  uint local_40;
  uint local_3c;
  short local_38;
  undefined2 uStack_36;
  byte local_34;
  byte bStack_33;
  ushort uStack_32;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  byte local_18;
  undefined3 uStack_17;
  undefined1 uStack_14;
  byte local_13;
  undefined3 uStack_12;
  undefined1 uStack_f;
  uint local_e;
  byte *local_a;
  
  pbVar3 = param_2;
  pbVar2 = param_1;
  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    local_40 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
               (uint)param_1[3];
    local_3c = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[6] << 8 |
               (uint)param_1[7];
    local_38 = CONCAT11(param_1[8],param_1[9]);
    if (local_38 == 0) {
      uStack_36 = CONCAT11(param_1[10],param_1[0xb]);
      uStack_32 = (ushort)(((uint)param_1[0xc] << 0x18) >> 0x10) | (ushort)param_1[0xd];
      _local_34 = CONCAT11(param_1[0xe],param_1[0xf]);
      local_30 = (uint)param_1[0x10] << 0x18 | (uint)param_1[0x11] << 0x10 |
                 (uint)param_1[0x12] << 8 | (uint)param_1[0x13];
      local_2c = (uint)param_1[0x14] << 0x18 | (uint)param_1[0x15] << 0x10 |
                 (uint)param_1[0x16] << 8 | (uint)param_1[0x17];
      local_28 = (uint)param_1[0x18] << 0x18 | (uint)param_1[0x19] << 0x10 |
                 (uint)param_1[0x1a] << 8 | (uint)param_1[0x1b];
      local_24 = (uint)param_1[0x1c] << 0x18 | (uint)param_1[0x1d] << 0x10 |
                 (uint)param_1[0x1e] << 8 | (uint)param_1[0x1f];
      local_20 = (uint)param_1[0x20] << 0x18 | (uint)param_1[0x21] << 0x10 |
                 (uint)param_1[0x22] << 8 | (uint)param_1[0x23];
      local_1c = (uint)param_1[0x24] << 0x18 | (uint)param_1[0x25] << 0x10 |
                 (uint)param_1[0x26] << 8 | (uint)param_1[0x27];
      bVar1 = param_1[0x28];
      pbVar4 = param_1 + 0x29;
      _local_18 = CONCAT31(uStack_17,bVar1);
      pbVar7 = pbVar4 + bVar1;
      if ((int)pbVar7 - (int)param_1 <= (int)param_2) {
        uStack_17 = SUB43(pbVar4,0);
        _local_18 = CONCAT31(uStack_17,bVar1);
        uStack_14 = (undefined1)((uint)pbVar4 >> 0x18);
        bVar1 = *pbVar7;
        _local_13 = CONCAT31(uStack_12,bVar1);
        pbVar7 = pbVar7 + 1;
        pbVar4 = pbVar7 + bVar1;
        if ((int)pbVar4 - (int)param_1 <= (int)param_2) {
          uStack_12 = SUB43(pbVar7,0);
          _local_13 = CONCAT31(uStack_12,bVar1);
          uStack_f = (undefined1)((uint)pbVar7 >> 0x18);
          local_e = (uint)*pbVar4 << 0x18 | (uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8 |
                    (uint)pbVar4[3];
          if (pbVar4 + 4 + (local_e - (int)param_1) <= param_2) {
            local_a = pbVar4 + 4;
          }
        }
      }
    }
  }
  FUN_662f0810(*(int **)((int)this + 0x28),s____________________________6630a3a0);
  FUN_662f0810(*(int **)((int)this + 0x28),s_RM_MEDIA_PROPERTIES_OBJECT_6630a650);
  FUN_662cde30((int)this);
  FUN_662f0810(*(int **)((int)this + 0x28),s_size___lu_bytes_6630a598);
  FUN_662f0810(*(int **)((int)this + 0x28),s_object_version___hu_6630a3e4);
  FUN_662f0810(*(int **)((int)this + 0x28),s_stream_number___hu_6630a63c);
  FUN_662f0810(*(int **)((int)this + 0x28),s_max_bit_rate___lu_bps_6630a580);
  FUN_662f0810(*(int **)((int)this + 0x28),s_avg_bit_rate___lu_bps_6630a568);
  FUN_662f0810(*(int **)((int)this + 0x28),s_max_packet_size___lu_bytes_6630a54c);
  FUN_662f0810(*(int **)((int)this + 0x28),s_avg_packet_size___lu_bytes_6630a530);
  FUN_662f0810(*(int **)((int)this + 0x28),s_start_time___lu_milliseconds_6630a61c);
  FUN_662f0810(*(int **)((int)this + 0x28),s_preroll___lu_milliseconds_6630a4d8);
  FUN_662f0810(*(int **)((int)this + 0x28),s_duration___lu_milliseconds_6630a4f4);
  uVar5 = FUN_662cfe30(this,(undefined4 *)CONCAT13(uStack_14,uStack_17),
                       CONCAT22(extraout_var,(ushort)local_18),s_stream_name___s_6630a608);
  FUN_662cfe30(this,(undefined4 *)CONCAT13(uStack_f,uStack_12),
               CONCAT22((short)((uint)uVar5 >> 0x10),(ushort)local_13),s_mime_type___s_6630a5f8);
  FUN_662f0810(*(int **)((int)this + 0x28),s_type_specific_length___lu_6630a5dc);
  param_1 = (byte *)0x0;
  iVar6 = FUN_662d0dc0(&param_1,(int)&local_40,(char *)&param_1,s_logical_fileinfo_6630a118);
  if ((-1 < iVar6) && (param_1 != (byte *)0x0)) {
    FUN_662cd6f0(this,pbVar2,(uint)pbVar3);
  }
  return;
}


