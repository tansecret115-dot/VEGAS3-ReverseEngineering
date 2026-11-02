/* Module: vegas30.exe
   Function: FUN_004e7190
   Address: 004e7190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e7190(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((*(int *)(param_1 + 0x24) != 0) && ((*(uint *)(param_1 + 0x1c) & 0x10) == 0)) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x10;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
  if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
    *(int *)(DAT_0064b108 + 0x54) = *(int *)(DAT_0064b108 + 0x54) + 1;
  }
  iVar1 = DAT_0064b108;
  if ((*(byte *)(param_1 + 0x1c) & 2) != 0) {
    iVar2 = *(int *)(DAT_0064b108 + 0x58) + 1;
    *(int *)(DAT_0064b108 + 0x58) = iVar2;
    if (iVar2 == 1) {
      FUN_0040dde0(DAT_0064762c);
      if (*(code **)(param_1 + 0x24) != (code *)0x0) {
        (**(code **)(param_1 + 0x24))(iVar1,param_1,1);
      }
    }
  }
  if (((*(byte *)(param_1 + 0x1c) & 8) != 0) && (DAT_0064ce1c = DAT_0064ce1c + 1, DAT_0064cde8 != 0)
     ) {
    FUN_004e7020(0);
  }
  *(int *)(param_1 + 0x10) = DAT_0064ce1c;
  if ((DAT_0064cdfc != 0) && ((*(uint *)(DAT_0064cdfc + 0x1c) & 4) != 0)) {
    *(uint *)(DAT_0064cdfc + 0x1c) = *(uint *)(DAT_0064cdfc + 0x1c) | 1;
  }
  if (DAT_0064cde8 == 0) {
    DAT_0064cdd0 = DAT_0064cdd0 + 1;
    puVar3 = &DAT_0064cd88;
  }
  else {
    DAT_0064cdec = DAT_0064cdec + 1;
    puVar3 = &DAT_0064cdac;
  }
  _SfQueueInsert_8(puVar3,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
  if (DAT_0064ce18 == 0) {
    DAT_0064ce18 = SetTimer(DAT_00647624,1,0xfa,(TIMERPROC)0x0);
  }
  return 0;
}


