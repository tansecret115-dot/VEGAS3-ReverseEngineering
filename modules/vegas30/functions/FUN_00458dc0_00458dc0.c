/* Module: vegas30.exe
   Function: FUN_00458dc0
   Address: 00458dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00458dc0(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  uint local_10;
  int local_c;
  int local_8;
  int iStack_4;
  
  FUN_004582a0(param_1,&local_10,&local_8);
  uVar1 = 0;
  if (local_8 != 0 || iStack_4 != 0) {
    uVar3 = ftol();
    bVar2 = local_10 < (uint)uVar3;
    local_10 = local_10 - (uint)uVar3;
    local_c = (local_c - (int)((ulonglong)uVar3 >> 0x20)) - (uint)bVar2;
    if ((local_c < 1) && (local_c < 0)) {
      local_c = 0;
      local_10 = 0;
    }
    if ((((*(uint *)(param_1 + 0xb88) != local_10) || (*(int *)(param_1 + 0xb8c) != local_c)) ||
        (*(int *)(param_1 + 0xb90) != local_8)) || (*(int *)(param_1 + 0xb94) != iStack_4)) {
      uVar1 = 1;
      FUN_004543c0(param_1,local_10,local_c,local_8,iStack_4,1);
    }
  }
  return uVar1;
}


