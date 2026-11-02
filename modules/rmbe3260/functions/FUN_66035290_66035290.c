/* Module: rmbe3260.dll
   Function: FUN_66035290
   Address: 66035290
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_66035290(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  int local_28 [3];
  int local_1c [3];
  int local_10 [3];
  
  FUN_6605b650(local_1c);
  FUN_6605b650(local_10);
  piVar2 = FUN_660343f0(this,local_28);
  FUN_6605b900(local_1c,piVar2);
  FUN_6605b770(local_28);
  iVar1 = *(int *)((int)this + 0x42);
  if (iVar1 != 0) {
    FUN_6605b970(local_10,s_Logical_Stream_Data_6606e14c);
    FUN_6605bbe0(local_1c,local_10);
    FUN_6605c010(local_1c);
    FUN_6605bfd0(local_10,s_Object_size___lu_6606e090);
    FUN_6605bbe0(local_1c,local_10);
    FUN_6605c010(local_1c);
    FUN_6605bfd0(local_10,s_Object_version___u_6606e0a4);
    FUN_6605bbe0(local_1c,local_10);
    FUN_6605c010(local_1c);
    FUN_6605bfd0(local_10,s_Physical_stream_count___u_6606e130);
    FUN_6605bbe0(local_1c,local_10);
    FUN_6605c010(local_1c);
    FUN_6605b970(local_10,s_Physical_stream_numbers_and_offs_6606e108);
    FUN_6605c010(local_10);
    FUN_6605bbe0(local_1c,local_10);
    FUN_6605c010(local_1c);
    uVar3 = 0;
    if (*(short *)(iVar1 + 6) != 0) {
      do {
        FUN_6605b970(local_10,s_Stream_number_6606e0f8);
        FUN_6605c020(local_10,*(undefined4 *)(iVar1 + 8));
        FUN_6605bba0(local_10,s_starting_at_6606e0e8);
        FUN_6605c020(local_10,*(undefined4 *)(*(int *)(iVar1 + 0xc) + (uint)uVar3 * 4));
        FUN_6605bbe0(local_1c,local_10);
        FUN_6605c010(local_1c);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(iVar1 + 6));
    }
  }
  FUN_6605b670(param_1,local_1c);
  FUN_6605b770(local_10);
  FUN_6605b770(local_1c);
  return param_1;
}


