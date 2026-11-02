/* Module: vegas30.exe
   Function: FUN_004e7350
   Address: 004e7350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004e7350(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
  *param_2 = *(undefined4 *)(param_1 + 0x74);
  if (((*(int *)(param_1 + 0x74) == 0) && (*(int *)(param_1 + 0x48) == 0)) &&
     (*(int *)(param_1 + 0x60) == 0)) {
    *param_3 = *(undefined4 *)(param_1 + 0x70);
    *param_4 = *(undefined4 *)(param_1 + 0x6c);
    *param_5 = *(undefined4 *)(param_1 + 0x78);
    *param_6 = *(undefined4 *)(param_1 + 0x78);
    *param_7 = *(undefined4 *)(param_1 + 0x7c);
    *param_8 = *(undefined4 *)(param_1 + 0x80);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
    return 0;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x70);
  *param_4 = *(undefined4 *)(param_1 + 0x6c);
  *param_5 = *(undefined4 *)(param_1 + 0x48);
  *param_6 = *(undefined4 *)(param_1 + 0x4c);
  *param_7 = *(undefined4 *)(param_1 + 0x50);
  *param_8 = *(undefined4 *)(param_1 + 0x80);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
  return 1;
}


