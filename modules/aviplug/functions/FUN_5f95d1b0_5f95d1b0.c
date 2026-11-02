/* Module: aviplug.dll
   Function: FUN_5f95d1b0
   Address: 5f95d1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f95d1b0(HWND param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  uint lParam;
  int iVar1;
  WPARAM wParam;
  uint *puVar2;
  WPARAM local_128;
  uint local_124;
  int local_120;
  uint local_11c;
  undefined4 local_118;
  uint local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  uchar local_104 [260];
  
  SendMessageA(param_1,0x14b,0,0);
  if (param_2 == 0) {
    local_110 = 0x10;
    local_124 = 0x10;
    local_118 = 0x10;
    local_114 = 8;
    local_10c = 0x18;
    local_108 = 0x20;
    local_11c = 0xc;
    iVar1 = 4;
    puVar2 = &local_114;
    if (param_4 != 0) {
      if (param_5 == 32000) {
        iVar1 = 2;
        puVar2 = &local_11c;
      }
      else {
        iVar1 = 1;
        puVar2 = &local_124;
      }
    }
    local_128 = 0;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      if ((param_3 == 0) || (0x1f < *puVar2)) {
        lParam = *puVar2;
        if ((lParam <= *(uint *)(local_120 + 0x48)) ||
           ((param_3 != 0 && (0x17 < *(uint *)(local_120 + 0x48))))) {
          FUN_5f988570(local_104,"%d");
          wParam = SendMessageA(param_1,0x143,0,(LPARAM)local_104);
          SendMessageA(param_1,0x151,wParam,lParam);
          if (param_6 == lParam) {
            local_128 = wParam;
          }
        }
      }
      puVar2 = puVar2 + 1;
    }
    SendMessageA(param_1,0x14e,local_128,0);
  }
  return;
}


