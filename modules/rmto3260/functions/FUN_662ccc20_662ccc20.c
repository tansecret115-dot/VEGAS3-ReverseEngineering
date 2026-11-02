/* Module: rmto3260.dll
   Function: FUN_662ccc20
   Address: 662ccc20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662ccc20(void *this,int *param_1,uint param_2)

{
  int iVar1;
  undefined4 local_20;
  uint local_1c;
  undefined1 local_14 [4];
  int local_10;
  void *local_c;
  undefined1 local_8 [4];
  
  local_c = this;
  FUN_662e2a70(&local_20);
  FUN_662f0810(*(int **)((int)this + 0x28),s__________________6630a360);
  FUN_662f0810(*(int **)((int)this + 0x28),s_Media_Stream__lu_6630a34c);
  local_10 = (**(code **)(*param_1 + 0x18))(0,local_14);
  if (local_10 == 0) {
    do {
      iVar1 = (**(code **)(*param_1 + 0x10))(&local_20,local_8);
      if (iVar1 == 0) {
        return local_10;
      }
      if ((local_1c & 0xffff) == param_2) {
        FUN_662f0810(*(int **)((int)local_c + 0x28),s_packet__7lu__stream__1hu_timesta_6630a2f4);
      }
      (**(code **)(*param_1 + 0x14))(iVar1);
    } while (iVar1 != 0);
  }
  return local_10;
}


