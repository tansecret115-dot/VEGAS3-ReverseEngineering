/* Module: rmto3260.dll
   Function: FUN_662ce800
   Address: 662ce800
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662ce800(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  short local_14 [8];
  
  iVar1 = FUN_662ce580((int)this);
  uVar2 = 0;
  if (*(int *)(param_1 + 10) != 0) {
    do {
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar1 = FUN_662d0720(this,local_14);
      if (-1 < iVar1) {
        FUN_662f0810(*(int **)((int)this + 0x28),s_Index__lu_6630a980);
        FUN_662f0810(*(int **)((int)this + 0x28),s_version____hu_6630a970);
        FUN_662f0810(*(int **)((int)this + 0x28),s_timestamp____lu_6630a95c);
        FUN_662f0810(*(int **)((int)this + 0x28),s_offset____lu_6630a94c);
        FUN_662f0810(*(int **)((int)this + 0x28),s_num_interleave_packets____lu_6630a92c);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 10));
  }
  return iVar1;
}


