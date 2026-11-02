/* Module: rmto3260.dll
   Function: FUN_662ce8d0
   Address: 662ce8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662ce8d0(void *this,int param_1,int param_2)

{
  short sVar1;
  uint local_a;
  
  if (((param_1 != 0) && (param_2 != 0)) &&
     ((sVar1 = CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9)), sVar1 == 0 ||
      (sVar1 == 1)))) {
    local_a = (uint)*(byte *)(param_1 + 0xe) << 0x18 | (uint)*(byte *)(param_1 + 0xf) << 0x10 |
              (uint)*(byte *)(param_1 + 0x10) << 8 | (uint)*(byte *)(param_1 + 0x11);
  }
  FUN_662f0810(*(int **)((int)this + 0x28),s__________________6630a41c);
  FUN_662f0810(*(int **)((int)this + 0x28),s_RM_HEADER_OBJECT_6630a408);
  FUN_662cfec0((int)this);
  FUN_662f0810(*(int **)((int)this + 0x28),s_size___lu_6630a3fc);
  FUN_662f0810(*(int **)((int)this + 0x28),s_object_version___hu_6630a3e4);
  FUN_662f0810(*(int **)((int)this + 0x28),s_file_version___lu_6630a3d0);
  FUN_662f0810(*(int **)((int)this + 0x28),s_num_headers___lu_6630a3bc);
  *(uint *)((int)this + 0x34) = local_a;
  return 0;
}


