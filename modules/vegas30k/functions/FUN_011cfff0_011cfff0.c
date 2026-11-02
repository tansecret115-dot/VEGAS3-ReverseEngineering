/* Module: vegas30k.dll
   Function: FUN_011cfff0
   Address: 011cfff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011cfff0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    return 0x8004e001;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  EnterCriticalSection(lpCriticalSection);
  if (((*(byte *)(param_1 + 0x24) & 4) != 0) && (*(int *)(param_1 + 0x334) == 3)) {
    *(undefined4 *)(param_1 + 0x334) = 0x3bd;
    SetEvent(*(HANDLE *)(param_1 + 0x330));
  }
  LeaveCriticalSection(lpCriticalSection);
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xffffff79;
  *(undefined4 *)(param_1 + 0x334) = 0x3bd;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0xffffffff;
  LeaveCriticalSection(lpCriticalSection);
  (**(code **)(param_1 + 0x2c))(param_1,5,*(undefined4 *)(param_1 + 0x30),0,0,0,0);
  FUN_011cf340(4,0,0);
  return 0;
}


