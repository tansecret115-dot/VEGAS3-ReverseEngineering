/* Module: vegas30.exe
   Function: FUN_0047f380
   Address: 0047f380
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0047f380(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x69c);
  if (*(int *)(iVar1 + 0x38) == 0) {
    pvVar2 = calloc(1,0x58);
    *(void **)(iVar1 + 0x38) = pvVar2;
  }
  else {
    FUN_0047c430(*(int *)(iVar1 + 0x38));
  }
  if (*(int *)(iVar1 + 0x38) == 0) {
    return -0x7ff8fff2;
  }
  iVar3 = FUN_0047de20(*(int *)(iVar1 + 0x38),param_1 + 0x638,param_1,0,0,0xffffffff);
  if (-1 < iVar3) {
    iVar3 = FUN_0047ee30((undefined4 *)(iVar1 + 0x3c),param_1,DAT_00647790,0);
    if (-1 < iVar3) {
      *(undefined4 *)(iVar1 + 0x40) = 0;
      *(undefined4 *)(iVar1 + 0x44) = 0;
      FUN_0047ec00(*(undefined4 *)(iVar1 + 0x38),0xffffffff);
      FUN_005bfa70(*(undefined4 *)(iVar1 + 0x3c));
      return iVar3;
    }
  }
  if (*(int *)(iVar1 + 0x38) == 0) {
    return iVar3;
  }
  FUN_0047c430(*(int *)(iVar1 + 0x38));
  free(*(void **)(iVar1 + 0x38));
  *(undefined4 *)(iVar1 + 0x38) = 0;
  return iVar3;
}


