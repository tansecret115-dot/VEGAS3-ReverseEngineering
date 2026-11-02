/* Module: vegas30k.dll
   Function: FUN_01136100
   Address: 01136100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01136100(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x2c);
    EnterCriticalSection(lpCriticalSection);
    if (*(int *)(param_1 + 0x88) != 0) {
      LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    if (*(int *)(param_1 + 0x14) < 2) {
      *(undefined4 *)(param_1 + 0x14) = 2;
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        iVar1 = FUN_01135f80();
        if (iVar1 == 0) {
          return 1;
        }
        iVar2 = iVar2 + 2;
      } while (iVar2 < *(int *)(param_1 + 0x14));
    }
    *(int *)(param_1 + 0x14) = iVar2;
    LeaveCriticalSection(lpCriticalSection);
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  }
  return 0;
}


