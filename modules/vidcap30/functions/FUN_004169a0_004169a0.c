/* Module: vidcap30.exe
   Function: FUN_004169a0
   Address: 004169a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004169a0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
  if ((*(byte *)(param_1 + 0x18) & 0x10) != 0) {
    *(int *)(DAT_005bb808 + 0x54) = *(int *)(DAT_005bb808 + 0x54) + 1;
  }
  if (((*(byte *)(param_1 + 0x18) & 2) != 0) &&
     (iVar1 = *(int *)(DAT_005bb808 + 0x58) + 1, *(int *)(DAT_005bb808 + 0x58) = iVar1, iVar1 == 1))
  {
    FUN_00406750(DAT_005ba4c0);
  }
  if (((*(byte *)(param_1 + 0x18) & 8) != 0) && (DAT_005bc290 = DAT_005bc290 + 1, DAT_005bc260 != 0)
     ) {
    FUN_00416880(0);
  }
  *(int *)(param_1 + 0x10) = DAT_005bc290;
  if ((DAT_005bc26c != 0) && ((*(uint *)(DAT_005bc26c + 0x18) & 4) != 0)) {
    *(uint *)(DAT_005bc26c + 0x18) = *(uint *)(DAT_005bc26c + 0x18) | 1;
  }
  if (DAT_005bc260 == 0) {
    DAT_005bc248 = DAT_005bc248 + 1;
    puVar2 = &DAT_005bc200;
  }
  else {
    DAT_005bc264 = DAT_005bc264 + 1;
    puVar2 = &DAT_005bc224;
  }
  _SfQueueInsert_8(puVar2,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
  if (DAT_005bc28c == 0) {
    DAT_005bc28c = SetTimer(DAT_005ba4bc,1,0xfa,(TIMERPROC)0x0);
  }
  return 0;
}


