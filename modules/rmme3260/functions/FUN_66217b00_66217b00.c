/* Module: rmme3260.dll
   Function: FUN_66217b00
   Address: 66217b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_66217b00(void *this,void *param_1)

{
  int *piVar1;
  int local_40 [3];
  int local_34 [3];
  int local_28 [3];
  int local_1c [3];
  int local_10 [3];
  
  FUN_662500f0(local_10);
  FUN_662500f0(local_1c);
  FUN_66250640(local_10,s_Object_ID__RM_MEDIA_PROPERTIES_O_6626f6f0);
  FUN_66250980(local_10);
  FUN_662508c0(local_1c,s_Object_version___u_6626f6dc);
  FUN_66250680(local_10,local_1c);
  FUN_66250980(local_10);
  FUN_662508c0(local_1c,s_Object_size___lu_6626f6c8);
  FUN_66250680(local_10,local_1c);
  FUN_66250980(local_10);
  FUN_662508c0(local_1c,s_Stream_number___u_6626f6b4);
  FUN_66250680(local_10,local_1c);
  FUN_66250980(local_10);
  FUN_662508c0(local_1c,s_Maximum_bit_rate___lu_6626f69c);
  FUN_66250680(local_10,local_1c);
  FUN_66250980(local_10);
  FUN_662508c0(local_1c,s_Average_bit_rate___lu_6626f684);
  FUN_66250680(local_10,local_1c);
  FUN_66250980(local_10);
  FUN_662508c0(local_1c,s_Maximum_packet_size___lu_6626f668);
  FUN_66250680(local_10,local_1c);
  FUN_66250980(local_10);
  FUN_662508c0(local_1c,s_Average_packet_size___lu_6626f64c);
  FUN_66250680(local_10,local_1c);
  FUN_66250980(local_10);
  FUN_662508c0(local_1c,s_Start_time___lu_6626f63c);
  FUN_66250680(local_10,local_1c);
  FUN_66250980(local_10);
  FUN_662508c0(local_1c,s_Preroll___lu_6626f62c);
  FUN_66250680(local_10,local_1c);
  FUN_66250980(local_10);
  FUN_662508c0(local_1c,s_Duration___lu_6626f61c);
  FUN_66250680(local_10,local_1c);
  FUN_66250980(local_10);
  FUN_66250790(local_34,*(undefined4 **)((int)this + 0x35),(uint)*(byte *)((int)this + 0x34));
  piVar1 = FUN_66250550(local_40,s_Stream_name__6626f60c,local_34);
  FUN_662503a0(local_1c,piVar1);
  FUN_66250210(local_40);
  FUN_66250680(local_10,local_1c);
  FUN_66250980(local_10);
  FUN_66250790(local_28,*(undefined4 **)((int)this + 0x3a),(uint)*(byte *)((int)this + 0x39));
  piVar1 = FUN_66250550(local_40,s_MIME_type__6626f600,local_28);
  FUN_662503a0(local_1c,piVar1);
  FUN_66250210(local_40);
  FUN_66250680(local_10,local_1c);
  FUN_66250980(local_10);
  FUN_662508c0(local_1c,s_Type_specific_data_size___lu_6626f5e0);
  FUN_66250680(local_10,local_1c);
  FUN_66250980(local_10);
  FUN_66250110(param_1,local_10);
  FUN_66250210(local_28);
  FUN_66250210(local_34);
  FUN_66250210(local_1c);
  FUN_66250210(local_10);
  return param_1;
}


