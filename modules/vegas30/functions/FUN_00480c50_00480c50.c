/* Module: vegas30.exe
   Function: FUN_00480c50
   Address: 00480c50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480c50(HWND param_1,undefined4 param_2,int param_3)

{
  HWND pHVar1;
  LPARAM lParam;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int local_17c;
  uint local_178;
  undefined8 local_174;
  double local_16c;
  uint local_164;
  undefined4 local_160;
  DWORD local_15c;
  undefined4 local_158;
  uint local_154;
  longlong local_150;
  undefined1 local_148 [4];
  undefined1 local_144 [24];
  undefined4 local_12c [10];
  CHAR local_104 [260];
  
  if ((*(byte *)(param_3 + 0x1c) & 1) == 0) {
    local_15c = GetTickCount();
    if ((local_15c < DAT_0064bff0) ||
       (lVar4 = CONCAT44(_DAT_0064bffc,_DAT_0064bff8), DAT_0064bff0 + 0x3b6 <= local_15c)) {
      FUN_004e7350(param_2,&local_158,&local_17c,&local_164,&local_154,&local_178,&local_160,
                   local_148);
      local_158 = 0;
      local_16c = (double)(local_17c + local_178 * 100) / (double)(local_154 * 100);
      local_150 = __allmul(local_160,0,10000,0);
      lVar5 = 0;
      local_174._0_4_ = 0;
      local_174._4_4_ = 0;
      lVar4 = 0;
      if (local_178 < local_154) {
        lVar4 = __allmul(local_15c - local_164,-(uint)(local_15c < local_164),10000,0);
      }
      if (local_178 != 0) {
        lVar4 = lVar4 + local_150;
      }
      _DAT_0064bff8 = CONCAT44(_DAT_0064bffc,_DAT_0064bff8);
      if (DAT_0064bff4 != local_17c) {
        DAT_0064bff4 = local_17c;
        _DAT_0064bff8 = lVar4;
      }
      local_174 = lVar4;
      if ((local_16c < _DAT_00612940) || (local_16c < _DAT_006106d0)) {
        lVar5 = ftol();
      }
      FUN_00480f10(param_3,local_104,0x104);
      puVar3 = local_12c;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_12c[0] = 1;
      _SfNanoTimeToText_20(local_144,local_12c,lVar4,1);
      SfSetDlgItemText(param_1,0x4dd,local_144);
      lVar5 = lVar5 - lVar4;
      if ((lVar5 < 0x100000000) && (lVar5 < 0)) {
        lVar5 = 0;
      }
      _SfNanoTimeToText_20(local_144,local_12c,lVar5,1);
      SfSetDlgItemText(param_1,0x4d6,local_144);
      pHVar1 = GetDlgItem(param_1,0x4d9);
      if (pHVar1 != (HWND)0x0) {
        SendMessageA(pHVar1,0x60c,1,local_17c);
      }
      pHVar1 = GetDlgItem(param_1,0x4d8);
      if (pHVar1 != (HWND)0x0) {
        lParam = ftol();
        SendMessageA(pHVar1,0x60c,1,lParam);
      }
      SetDlgItemTextA(param_1,0x4dc,local_104);
      lVar4 = _DAT_0064bff8;
    }
    _DAT_0064bffc = (undefined4)((ulonglong)lVar4 >> 0x20);
    _DAT_0064bff8 = (undefined4)lVar4;
    return;
  }
  SfSetDlgItemText(param_1,0x4dc,"Render cancelled by user");
  return;
}


