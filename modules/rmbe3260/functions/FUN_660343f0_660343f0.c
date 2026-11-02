/* Module: rmbe3260.dll
   Function: FUN_660343f0
   Address: 660343f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_660343f0(void *this,void *param_1)

{
  int *piVar1;
  int local_40 [3];
  int local_34 [3];
  int local_28 [3];
  int local_1c [3];
  int local_10 [3];
  
  FUN_6605b650(local_10);
  FUN_6605b650(local_1c);
  FUN_6605bba0(local_10,s_Object_ID__RM_MEDIA_PROPERTIES_O_6606e0b8);
  FUN_6605c010(local_10);
  FUN_6605bfd0(local_1c,s_Object_version___u_6606e0a4);
  FUN_6605bbe0(local_10,local_1c);
  FUN_6605c010(local_10);
  FUN_6605bfd0(local_1c,s_Object_size___lu_6606e090);
  FUN_6605bbe0(local_10,local_1c);
  FUN_6605c010(local_10);
  FUN_6605bfd0(local_1c,s_Stream_number___u_6606e07c);
  FUN_6605bbe0(local_10,local_1c);
  FUN_6605c010(local_10);
  FUN_6605bfd0(local_1c,s_Maximum_bit_rate___lu_6606e064);
  FUN_6605bbe0(local_10,local_1c);
  FUN_6605c010(local_10);
  FUN_6605bfd0(local_1c,s_Average_bit_rate___lu_6606e04c);
  FUN_6605bbe0(local_10,local_1c);
  FUN_6605c010(local_10);
  FUN_6605bfd0(local_1c,s_Maximum_packet_size___lu_6606e030);
  FUN_6605bbe0(local_10,local_1c);
  FUN_6605c010(local_10);
  FUN_6605bfd0(local_1c,s_Average_packet_size___lu_6606e014);
  FUN_6605bbe0(local_10,local_1c);
  FUN_6605c010(local_10);
  FUN_6605bfd0(local_1c,s_Start_time___lu_6606e004);
  FUN_6605bbe0(local_10,local_1c);
  FUN_6605c010(local_10);
  FUN_6605bfd0(local_1c,s_Preroll___lu_6606dff4);
  FUN_6605bbe0(local_10,local_1c);
  FUN_6605c010(local_10);
  FUN_6605bfd0(local_1c,s_Duration___lu_6606dfe4);
  FUN_6605bbe0(local_10,local_1c);
  FUN_6605c010(local_10);
  FUN_6605bdf0(local_34,*(undefined4 **)((int)this + 0x35),(uint)*(byte *)((int)this + 0x34));
  piVar1 = FUN_6605bab0(local_40,s_Stream_name__6606dfd4,local_34);
  FUN_6605b900(local_1c,piVar1);
  FUN_6605b770(local_40);
  FUN_6605bbe0(local_10,local_1c);
  FUN_6605c010(local_10);
  FUN_6605bdf0(local_28,*(undefined4 **)((int)this + 0x3a),(uint)*(byte *)((int)this + 0x39));
  piVar1 = FUN_6605bab0(local_40,s_MIME_type__6606dfc8,local_28);
  FUN_6605b900(local_1c,piVar1);
  FUN_6605b770(local_40);
  FUN_6605bbe0(local_10,local_1c);
  FUN_6605c010(local_10);
  FUN_6605bfd0(local_1c,s_Type_specific_data_size___lu_6606dfa8);
  FUN_6605bbe0(local_10,local_1c);
  FUN_6605c010(local_10);
  FUN_6605b670(param_1,local_10);
  FUN_6605b770(local_28);
  FUN_6605b770(local_34);
  FUN_6605b770(local_1c);
  FUN_6605b770(local_10);
  return param_1;
}


