/* Module: vegas30k.dll
   Function: FUN_01193fc0
   Address: 01193fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01193fc0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0x8000ffff;
  if ((*(uint *)(param_1 + 0x20) & 0x100) != 0) {
    if (-1 < param_3) {
      uVar1 = ftol();
      *(undefined4 *)(param_1 + 0x700) = uVar1;
      *(undefined4 *)(param_1 + 0x704) = 0;
      *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_1 + 0x700);
      *(undefined4 *)(param_1 + 0x6f4) = 0;
      *(undefined4 *)(param_1 + 0x710) = 0;
      *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(param_1 + 0x6f0);
      *(undefined4 *)(param_1 + 0x714) = 0;
      *(undefined4 *)(param_1 + 0x760) = 0;
      *(undefined4 *)(param_1 + 0x80c) = 0;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x674));
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffff3fff | 0x200;
    uVar2 = FUN_011aaf10(param_1);
    FUN_011aaee0(param_1,uVar2 | 0x200);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x674));
    if (*(int *)(param_1 + 0x6a4) != 0) {
      FUN_01194d50(1);
    }
    if (*(int *)(param_1 + 0x618) == 0) {
      *(undefined4 *)(param_1 + 0x824) = 0;
      ResetEvent(*(HANDLE *)(param_1 + 0x820));
      FUN_0119ad40(*(undefined4 *)(param_1 + 0x820));
      *(undefined4 *)(param_1 + 0x8b0) = 0;
      FUN_011af200();
    }
    uVar1 = 0;
  }
  return uVar1;
}


