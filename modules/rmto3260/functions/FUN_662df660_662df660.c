/* Module: rmto3260.dll
   Function: FUN_662df660
   Address: 662df660
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_662df660(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  int local_28 [3];
  int local_1c [3];
  int local_10 [3];
  
  FUN_662eefd0(local_1c);
  FUN_662eefd0(local_10);
  piVar2 = FUN_662de880(this,local_28);
  FUN_662ef280(local_1c,piVar2);
  FUN_662ef0f0(local_28);
  iVar1 = *(int *)((int)this + 0x42);
  if (iVar1 != 0) {
    FUN_662ef2f0(local_10,s_Logical_Stream_Data_6630b3a4);
    FUN_662ef560(local_1c,local_10);
    FUN_662ef890(local_1c);
    FUN_662ef850(local_10,s_Object_size___lu_6630b2e8);
    FUN_662ef560(local_1c,local_10);
    FUN_662ef890(local_1c);
    FUN_662ef850(local_10,s_Object_version___u_6630b2fc);
    FUN_662ef560(local_1c,local_10);
    FUN_662ef890(local_1c);
    FUN_662ef850(local_10,s_Physical_stream_count___u_6630b388);
    FUN_662ef560(local_1c,local_10);
    FUN_662ef890(local_1c);
    FUN_662ef2f0(local_10,s_Physical_stream_numbers_and_offs_6630b360);
    FUN_662ef890(local_10);
    FUN_662ef560(local_1c,local_10);
    FUN_662ef890(local_1c);
    uVar3 = 0;
    if (*(short *)(iVar1 + 6) != 0) {
      do {
        FUN_662ef2f0(local_10,s_Stream_number_6630b350);
        FUN_662ef8a0(local_10,*(undefined4 *)(iVar1 + 8));
        FUN_662ef520(local_10,s_starting_at_6630b340);
        FUN_662ef8a0(local_10,*(undefined4 *)(*(int *)(iVar1 + 0xc) + (uint)uVar3 * 4));
        FUN_662ef560(local_1c,local_10);
        FUN_662ef890(local_1c);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(iVar1 + 6));
    }
  }
  FUN_662eeff0(param_1,local_1c);
  FUN_662ef0f0(local_10);
  FUN_662ef0f0(local_1c);
  return param_1;
}


