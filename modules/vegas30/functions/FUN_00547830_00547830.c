/* Module: vegas30.exe
   Function: FUN_00547830
   Address: 00547830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_00547830(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            int param_6)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
  if (-1 < param_4) {
    *(undefined4 *)(param_1 + 0x270) = param_3;
    *(int *)(param_1 + 0x274) = param_4;
  }
  if (-1 < param_6) {
    *(undefined4 *)(param_1 + 0x278) = param_5;
    *(int *)(param_1 + 0x27c) = param_6;
  }
  *(undefined4 *)(param_1 + 0x280) = param_2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
  return 0;
}


