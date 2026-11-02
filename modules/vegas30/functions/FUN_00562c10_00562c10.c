/* Module: vegas30.exe
   Function: FUN_00562c10
   Address: 00562c10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00562c10(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *local_4;
  
  local_4 = (int *)0x0;
  iVar1 = FUN_00562af0(param_1,&DAT_0061b2a8,&local_4);
  if (-1 < iVar1) {
    if ((*param_1 & 0x100) == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = (**(code **)(*local_4 + 0x34))(local_4,param_2,param_3);
    }
  }
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
  }
  return iVar1;
}


