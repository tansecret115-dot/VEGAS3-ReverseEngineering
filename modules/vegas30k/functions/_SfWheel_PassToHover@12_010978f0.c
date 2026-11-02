/* Module: vegas30k.dll
   Function: _SfWheel_PassToHover@12
   Address: 010978f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfWheel_PassToHover_12(HWND param_1,uint param_2,LPARAM param_3)

{
  POINT Point;
  uint uVar1;
  LPARAM lParam;
  HWND pHVar2;
  DWORD DVar3;
  undefined4 local_4;
  
                    /* 0x978f0  1299  _SfWheel_PassToHover@12 */
  local_4 = 0;
  if (DAT_01206204 == 0) {
    return 0;
  }
  pHVar2 = GetCapture();
  uVar1 = param_2;
  if (pHVar2 != (HWND)0x0) {
    return 0;
  }
  if ((param_2 & 0x1000) != 0) {
    return 0;
  }
  pHVar2 = GetFocus();
  lParam = param_3;
  if (pHVar2 == param_1) {
    DAT_01206208 = DAT_01206208 + 1;
    if (DAT_01206208 < 1) {
      Point.y = (int)(short)((uint)param_3 >> 0x10);
      Point.x = (int)(short)param_3;
      pHVar2 = WindowFromPoint(Point);
      if ((pHVar2 != param_1) && (pHVar2 != (HWND)0x0)) {
        GetWindowThreadProcessId(pHVar2,&param_2);
        DVar3 = GetCurrentProcessId();
        if (param_2 == DVar3) {
          SendMessageA(pHVar2,0x20a,uVar1 | 0x1000,lParam);
          local_4 = 1;
        }
      }
      DAT_01206208 = DAT_01206208 + -1;
      return local_4;
    }
    DAT_01206208 = 0xffffffff;
    return 0;
  }
  return 0;
}


