/* Module: wmfplug2.dll
   Function: FUN_00411ed0
   Address: 00411ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00411ed0(HWND param_1,int *param_2)

{
  LRESULT LVar1;
  uint uVar2;
  uint uVar3;
  WPARAM wParam;
  
  SendMessageA(param_1,0x14e,0,0);
  wParam = 0;
  LVar1 = SendMessageA(param_1,0x146,0,0);
  if (0 < LVar1) {
    while ((((LVar1 = SendMessageA(param_1,0x150,wParam,0), LVar1 == 0 ||
             (*(int *)(LVar1 + 4) != param_2[2])) ||
            (uVar2 = *(int *)(LVar1 + 8) * 8 - *param_2, uVar3 = (int)uVar2 >> 0x1f,
            0xf9 < (int)((uVar2 ^ uVar3) - uVar3))) ||
           (((uint)*(ushort *)(LVar1 + 2) != param_2[3] ||
            ((param_2[4] != 0 && ((uint)*(ushort *)(LVar1 + 0xc) != param_2[4]))))))) {
      wParam = wParam + 1;
      LVar1 = SendMessageA(param_1,0x146,0,0);
      if (LVar1 <= (int)wParam) {
        return;
      }
    }
    SendMessageA(param_1,0x14e,wParam,0);
  }
  return;
}


