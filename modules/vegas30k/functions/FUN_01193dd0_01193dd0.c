/* Module: vegas30k.dll
   Function: FUN_01193dd0
   Address: 01193dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_01193dd0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x6a4) = 0;
    *(undefined4 *)(param_1 + 0x6e0) = 0;
    *(undefined4 *)(param_1 + 0x6e4) = 0;
    *(undefined4 *)(param_1 + 0x6e8) = 0;
    FUN_011948e0();
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7c8));
  }
  else {
    *(undefined4 *)(param_1 + 0x6d0) = 0;
    *(undefined4 *)(param_1 + 0x6d8) = 0;
    *(undefined4 *)(param_1 + 0x6d4) = 0x3ff00000;
    *(undefined4 *)(param_1 + 0x6dc) = 0x3ff00000;
    *(undefined4 *)(param_1 + 0x700) = 0;
    *(undefined4 *)(param_1 + 0x6c8) = 0;
    *(int *)(param_1 + 0x6a4) = param_2;
    *(undefined4 *)(param_1 + 0x6e0) = 0;
    *(undefined4 *)(param_1 + 0x6e4) = 0;
    *(undefined4 *)(param_1 + 0x6e8) = 0;
    *(undefined4 *)(param_1 + 0x704) = 0;
    *(undefined4 *)(param_1 + 0x7a8) = 0;
    *(undefined4 *)(param_1 + 0x7ac) = 0;
    *(undefined4 *)(param_1 + 0x7b0) = 0;
    *(undefined4 *)(param_1 + 0x7b4) = 0;
    *(undefined4 *)(param_1 + 0x7b8) = 0x400;
    *(undefined4 *)(param_1 + 0x7bc) = 0x200;
    *(undefined4 *)(param_1 + 0x7c0) = 0;
    *(undefined4 *)(param_1 + 0x7c4) = 0;
    *(undefined4 *)(param_1 + 0x7e0) = 0;
    iVar1 = FUN_01194810();
    if (-1 < iVar1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7c8));
      return iVar1;
    }
  }
  return iVar1;
}


