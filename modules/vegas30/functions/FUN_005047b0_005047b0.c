/* Module: vegas30.exe
   Function: FUN_005047b0
   Address: 005047b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005047b0(int param_1,int param_2,int param_3)

{
  HWND pHVar1;
  WPARAM wParam;
  BOOL bEnable;
  double local_18;
  double local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((param_2 == 0) || (param_2 != 0x3ea)) &&
     (pHVar1 = *(HWND *)(param_1 + 0x5c), pHVar1 != (HWND)0x0)) {
    local_8 = *(undefined4 *)(param_1 + 0xac);
    local_18 = (double)*(float *)(param_1 + 0x98);
    local_10 = (double)*(float *)(param_1 + 0x9c);
    local_4 = FUN_00504730(*(undefined4 *)(param_1 + 0xa8));
    SendMessageA(pHVar1,0x60b,0,(LPARAM)&local_18);
  }
  if (((param_2 == 0) || (param_2 != 1000)) && (*(HWND *)(param_1 + 0x60) != (HWND)0x0)) {
    if ((_DAT_00610f20 == *(float *)(param_3 + 8)) || ((*(byte *)(param_3 + 0x10) & 8) == 0)) {
      wParam = 0;
    }
    else {
      wParam = 1;
    }
    SendMessageA(*(HWND *)(param_1 + 0x60),0xf1,wParam,0);
  }
  if (((param_2 == 0) || (param_2 != 0x3e9)) &&
     (pHVar1 = *(HWND *)(param_1 + 100), pHVar1 != (HWND)0x0)) {
    if ((_DAT_00610f20 == *(float *)(param_3 + 8)) || ((*(byte *)(param_3 + 0x10) & 8) == 0)) {
      bEnable = 0;
    }
    else {
      bEnable = 1;
    }
    EnableWindow(pHVar1,bEnable);
    SendMessageA(pHVar1,0xf1,(uint)((*(uint *)(param_3 + 0x10) & 0xfffffff7) == 0),0);
  }
  return 1;
}


