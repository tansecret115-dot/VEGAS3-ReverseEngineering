/* Module: rmto3260.dll
   Function: FUN_662cede0
   Address: 662cede0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662cede0(void *this,byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined2 extraout_var;
  byte local_1c;
  undefined3 uStack_1b;
  undefined1 uStack_18;
  byte local_17;
  undefined3 uStack_16;
  undefined1 uStack_13;
  
  if (((param_1 != (byte *)0x0) && (param_2 != 0)) && (CONCAT11(param_1[8],param_1[9]) == 0)) {
    bVar1 = param_1[0x28];
    _local_1c = CONCAT31(uStack_1b,bVar1);
    pbVar2 = param_1 + 0x29;
    pbVar4 = pbVar2 + bVar1;
    if ((int)pbVar4 - (int)param_1 <= (int)param_2) {
      uStack_1b = SUB43(pbVar2,0);
      _local_1c = CONCAT31(uStack_1b,bVar1);
      uStack_18 = (undefined1)((uint)pbVar2 >> 0x18);
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      _local_17 = CONCAT31(uStack_16,bVar1);
      if ((int)(pbVar4 + ((uint)bVar1 - (int)param_1)) <= (int)param_2) {
        uStack_16 = SUB43(pbVar4,0);
        _local_17 = CONCAT31(uStack_16,bVar1);
        uStack_13 = (undefined1)((uint)pbVar4 >> 0x18);
      }
    }
  }
  FUN_662f0810(*(int **)((int)this + 0x28),s____________________________6630a3a0);
  FUN_662f0810(*(int **)((int)this + 0x28),s_RM_MEDIA_PROPERTIES_OBJECT_6630a650);
  FUN_662cfec0((int)this);
  FUN_662f0810(*(int **)((int)this + 0x28),s_size___lu_bytes_6630a598);
  FUN_662f0810(*(int **)((int)this + 0x28),s_object_version___hu_6630a3e4);
  FUN_662f0810(*(int **)((int)this + 0x28),s_stream_number___hu_6630a63c);
  FUN_662f0810(*(int **)((int)this + 0x28),s_max_bit_rate___lu_bps_6630a580);
  FUN_662f0810(*(int **)((int)this + 0x28),s_avg_bit_rate___lu_bps_6630a568);
  FUN_662f0810(*(int **)((int)this + 0x28),s_max_packet_size___lu_bytes_6630a54c);
  FUN_662f0810(*(int **)((int)this + 0x28),s_avg_packet_size___lu_bytes_6630a530);
  FUN_662f0810(*(int **)((int)this + 0x28),s_start_time___lu_milliseconds_6630a61c);
  FUN_662f0810(*(int **)((int)this + 0x28),s_preroll___lu_milliseconds_6630a4d8);
  iVar3 = FUN_662f0810(*(int **)((int)this + 0x28),s_duration___lu_milliseconds_6630a4f4);
  FUN_662cfe30(this,(undefined4 *)CONCAT13(uStack_18,uStack_1b),
               CONCAT22((short)((uint)iVar3 >> 0x10),(ushort)local_1c),s_stream_name___s_6630a608);
  FUN_662cfe30(this,(undefined4 *)CONCAT13(uStack_13,uStack_16),
               CONCAT22(extraout_var,(ushort)local_17),s_mime_type___s_6630a5f8);
  FUN_662f0810(*(int **)((int)this + 0x28),s_type_specific_length___lu_6630a5dc);
  FUN_662cf140(param_1,param_2);
  return 0;
}


