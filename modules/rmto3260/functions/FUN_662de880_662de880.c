/* Module: rmto3260.dll
   Function: FUN_662de880
   Address: 662de880
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_662de880(void *this,void *param_1)

{
  int *piVar1;
  int local_40 [3];
  int local_34 [3];
  int local_28 [3];
  int local_1c [3];
  int local_10 [3];
  
  FUN_662eefd0(local_10);
  FUN_662eefd0(local_1c);
  FUN_662ef520(local_10,s_Object_ID__RM_MEDIA_PROPERTIES_O_6630b310);
  FUN_662ef890(local_10);
  FUN_662ef850(local_1c,s_Object_version___u_6630b2fc);
  FUN_662ef560(local_10,local_1c);
  FUN_662ef890(local_10);
  FUN_662ef850(local_1c,s_Object_size___lu_6630b2e8);
  FUN_662ef560(local_10,local_1c);
  FUN_662ef890(local_10);
  FUN_662ef850(local_1c,s_Stream_number___u_6630b2d4);
  FUN_662ef560(local_10,local_1c);
  FUN_662ef890(local_10);
  FUN_662ef850(local_1c,s_Maximum_bit_rate___lu_6630b2bc);
  FUN_662ef560(local_10,local_1c);
  FUN_662ef890(local_10);
  FUN_662ef850(local_1c,s_Average_bit_rate___lu_6630b2a4);
  FUN_662ef560(local_10,local_1c);
  FUN_662ef890(local_10);
  FUN_662ef850(local_1c,s_Maximum_packet_size___lu_6630b288);
  FUN_662ef560(local_10,local_1c);
  FUN_662ef890(local_10);
  FUN_662ef850(local_1c,s_Average_packet_size___lu_6630b26c);
  FUN_662ef560(local_10,local_1c);
  FUN_662ef890(local_10);
  FUN_662ef850(local_1c,s_Start_time___lu_6630b25c);
  FUN_662ef560(local_10,local_1c);
  FUN_662ef890(local_10);
  FUN_662ef850(local_1c,s_Preroll___lu_6630b24c);
  FUN_662ef560(local_10,local_1c);
  FUN_662ef890(local_10);
  FUN_662ef850(local_1c,s_Duration___lu_6630b23c);
  FUN_662ef560(local_10,local_1c);
  FUN_662ef890(local_10);
  FUN_662ef670(local_34,*(undefined4 **)((int)this + 0x35),(uint)*(byte *)((int)this + 0x34));
  piVar1 = FUN_662ef430(local_40,s_Stream_name__6630b22c,local_34);
  FUN_662ef280(local_1c,piVar1);
  FUN_662ef0f0(local_40);
  FUN_662ef560(local_10,local_1c);
  FUN_662ef890(local_10);
  FUN_662ef670(local_28,*(undefined4 **)((int)this + 0x3a),(uint)*(byte *)((int)this + 0x39));
  piVar1 = FUN_662ef430(local_40,s_MIME_type__6630b220,local_28);
  FUN_662ef280(local_1c,piVar1);
  FUN_662ef0f0(local_40);
  FUN_662ef560(local_10,local_1c);
  FUN_662ef890(local_10);
  FUN_662ef850(local_1c,s_Type_specific_data_size___lu_6630b200);
  FUN_662ef560(local_10,local_1c);
  FUN_662ef890(local_10);
  FUN_662eeff0(param_1,local_10);
  FUN_662ef0f0(local_28);
  FUN_662ef0f0(local_34);
  FUN_662ef0f0(local_1c);
  FUN_662ef0f0(local_10);
  return param_1;
}


