/* Module: rmto3260.dll
   Function: FUN_662cc360
   Address: 662cc360
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662cc360(int param_1,undefined4 param_2)

{
  int iVar1;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = RMACreateRMFF2Reader(&local_c);
  if (-1 < iVar1) {
    iVar1 = (**(code **)*local_c)(local_c,&DAT_663069c8,&local_8);
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      local_c = (int *)0x0;
    }
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*local_8 + 0x10))(local_8,*(undefined4 *)(param_1 + 0x14));
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_8 + 0xc))(local_8,param_2);
      }
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar1;
}


