/* Module: sfppack1.dll
   Function: FUN_5cdb33f0
   Address: 5cdb33f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdb33f0(int param_1,uint param_2)

{
  if (50000 < param_2) {
    param_2 = 50000;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(uint *)(param_1 + 0x2c) != param_2) {
    *(uint *)(param_1 + 0x2c) = param_2;
    *(undefined4 *)(param_1 + 0x40) = 1;
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


