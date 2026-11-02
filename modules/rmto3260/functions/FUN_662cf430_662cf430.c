/* Module: rmto3260.dll
   Function: FUN_662cf430
   Address: 662cf430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_662cf430(void *this,int param_1,uint param_2)

{
  undefined1 local_5c [34];
  undefined4 local_3a;
  undefined4 local_36;
  undefined4 local_2a;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined1 local_8;
  
  FUN_662c7940(local_5c,(byte *)(param_1 + 0x10),param_2);
  FUN_662f0810(*(int **)((int)this + 0x28),s_Codec__6630aa68);
  local_c = local_2a;
  local_8 = 0;
  FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a680);
  FUN_662f0810(*(int **)((int)this + 0x28),s_interleaveCode__6630aabc);
  local_8 = 0;
  FUN_662f0810(*(int **)((int)this + 0x28),&DAT_6630a680);
  FUN_662f0810(*(int **)((int)this + 0x28),s_flavorIndex__hu_6630aaa8);
  uStack_10 = 0;
  local_14 = local_3a;
  FUN_662f0810(*(int **)((int)this + 0x28),s_sampleRate__lu_6630aa98);
  uStack_10 = 0;
  local_14 = local_36;
  FUN_662f0810(*(int **)((int)this + 0x28),s_ActualSampleRate__lu_6630aa80);
  FUN_662f0810(*(int **)((int)this + 0x28),s_sampleSize__hu_6630aa20);
  FUN_662f0810(*(int **)((int)this + 0x28),s_channels__hu_6630aa70);
  FUN_662f0810(*(int **)((int)this + 0x28),s_BytesPerMinute__u_6630a9f8);
  return 0;
}


