/* Module: rmme3260.dll
   Function: FUN_66218c20
   Address: 66218c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_66218c20(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  int local_28 [3];
  int local_1c [3];
  int local_10 [3];
  
  FUN_662500f0(local_1c);
  FUN_662500f0(local_10);
  piVar2 = FUN_66217b00(this,local_28);
  FUN_662503a0(local_1c,piVar2);
  FUN_66250210(local_28);
  iVar1 = *(int *)((int)this + 0x42);
  if (iVar1 != 0) {
    FUN_66250410(local_10,s_Logical_Stream_Data_6626f784);
    FUN_66250680(local_1c,local_10);
    FUN_66250980(local_1c);
    FUN_662508c0(local_10,s_Object_size___lu_6626f6c8);
    FUN_66250680(local_1c,local_10);
    FUN_66250980(local_1c);
    FUN_662508c0(local_10,s_Object_version___u_6626f6dc);
    FUN_66250680(local_1c,local_10);
    FUN_66250980(local_1c);
    FUN_662508c0(local_10,s_Physical_stream_count___u_6626f768);
    FUN_66250680(local_1c,local_10);
    FUN_66250980(local_1c);
    FUN_66250410(local_10,s_Physical_stream_numbers_and_offs_6626f740);
    FUN_66250980(local_10);
    FUN_66250680(local_1c,local_10);
    FUN_66250980(local_1c);
    uVar3 = 0;
    if (*(short *)(iVar1 + 6) != 0) {
      do {
        FUN_66250410(local_10,s_Stream_number_6626f730);
        FUN_66250990(local_10,*(undefined4 *)(iVar1 + 8));
        FUN_66250640(local_10,s_starting_at_6626f720);
        FUN_66250990(local_10,*(undefined4 *)(*(int *)(iVar1 + 0xc) + (uint)uVar3 * 4));
        FUN_66250680(local_1c,local_10);
        FUN_66250980(local_1c);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(iVar1 + 6));
    }
  }
  FUN_66250110(param_1,local_1c);
  FUN_66250210(local_10);
  FUN_66250210(local_1c);
  return param_1;
}


