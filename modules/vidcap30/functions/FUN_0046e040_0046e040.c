/* Module: vidcap30.exe
   Function: FUN_0046e040
   Address: 0046e040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0046e040(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 0x18) = param_6;
  *(undefined4 *)(param_1 + 0x1c) = param_7;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return 0;
}


