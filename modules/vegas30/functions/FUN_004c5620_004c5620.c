/* Module: vegas30.exe
   Function: FUN_004c5620
   Address: 004c5620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004c5620(int param_1,undefined4 param_2,int *param_3)

{
  double dVar1;
  double dVar2;
  tagRECT local_10;
  
  if (param_1 == 0) {
    return 0;
  }
  GetClientRect(*(HWND *)(param_1 + 4),&local_10);
  MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,(LPPOINT)&local_10,2);
  dVar2 = (double)(*param_3 - local_10.left);
  dVar1 = (double)(param_3[1] - local_10.top);
  if (dVar2 * dVar2 + dVar1 * dVar1 < _DAT_00613978) {
    param_3[2] = *(int *)(param_1 + 0xac0) + -4 + *param_3;
    param_3[3] = *(int *)(param_1 + 0xac4) + -2 + param_3[1];
    return 1;
  }
  return 0;
}


