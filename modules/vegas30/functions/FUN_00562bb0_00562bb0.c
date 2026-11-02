/* Module: vegas30.exe
   Function: FUN_00562bb0
   Address: 00562bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00562bb0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int *local_4;
  
  local_4 = (int *)0x0;
  iVar1 = FUN_00562af0(param_1,&DAT_0061b2a8,&local_4);
  if (-1 < iVar1) {
    if ((*param_1 & 0x100) == 0) {
      iVar1 = 1;
    }
    else {
      uVar2 = (**(code **)(*local_4 + 0x10))(local_4,6);
      if (((uVar2 & 2) != 0) && ((uVar2 & 4) != 0)) {
        iVar1 = 0;
      }
    }
  }
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
  }
  return iVar1;
}


