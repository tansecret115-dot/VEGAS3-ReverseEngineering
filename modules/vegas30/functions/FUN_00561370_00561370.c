/* Module: vegas30.exe
   Function: FUN_00561370
   Address: 00561370
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00561370(HWND param_1,undefined4 param_2,int param_3)

{
  HWND pHVar1;
  LPARAM lParam;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int local_17c;
  undefined8 local_178;
  undefined8 local_170;
  double local_168;
  uint local_160;
  uint local_15c;
  DWORD local_158;
  undefined4 local_154;
  uint local_150 [2];
  undefined1 local_148 [4];
  undefined1 local_144 [24];
  undefined4 local_12c [10];
  CHAR local_104 [260];
  
  if ((*(byte *)(param_3 + 0x1c) & 1) == 0) {
    FUN_00560a00(param_3,local_104,0x104);
    SetDlgItemTextA(param_1,0x4dc,local_104);
    local_158 = GetTickCount();
    if ((local_158 < DAT_00659530) ||
       (lVar5 = CONCAT44(_DAT_0065953c,_DAT_00659538), DAT_00659530 + 0x3b6 <= local_158)) {
      FUN_004e7350(param_2,local_150 + 1,&local_17c,&local_160,&local_15c,local_150,&local_154,
                   local_148);
      local_150[1] = 0;
      local_168 = (double)(local_17c + local_150[0] * 100) / (double)(local_15c * 100);
      lVar4 = __allmul(local_154,0,10000,0);
      local_178._0_4_ = 0;
      local_178._4_4_ = 0;
      local_170._0_4_ = 0;
      local_170._4_4_ = 0;
      lVar5 = 0;
      if (local_150[0] < local_15c) {
        lVar5 = __allmul(local_158 - local_160,-(uint)(local_158 < local_160),10000,0);
      }
      if (local_150[0] != 0) {
        lVar5 = lVar4 + lVar5;
      }
      _DAT_00659538 = CONCAT44(_DAT_0065953c,_DAT_00659538);
      if (DAT_00659534 != local_17c) {
        DAT_00659534 = local_17c;
        _DAT_00659538 = lVar5;
      }
      local_170 = lVar5;
      if ((local_168 < _DAT_00612940) || (local_168 < _DAT_006106d0)) {
        local_178 = ftol();
      }
      puVar3 = local_12c;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_12c[0] = 1;
      _SfNanoTimeToText_20(local_144,local_12c,lVar5,1);
      SfSetDlgItemText(param_1,0x4dd,local_144);
      lVar5 = local_178 - lVar5;
      if (((int)((ulonglong)lVar5 >> 0x20) < 1) && (lVar5 < 0)) {
        lVar5 = 0;
      }
      _SfNanoTimeToText_20(local_144,local_12c,lVar5,1);
      SfSetDlgItemText(param_1,0x4d6,local_144);
      pHVar1 = GetDlgItem(param_1,0x4d9);
      if (pHVar1 != (HWND)0x0) {
        SendMessageA(pHVar1,0x60c,1,local_17c);
      }
      pHVar1 = GetDlgItem(param_1,0x4d8);
      lVar5 = _DAT_00659538;
      if (pHVar1 != (HWND)0x0) {
        lParam = ftol();
        SendMessageA(pHVar1,0x60c,1,lParam);
        lVar5 = _DAT_00659538;
      }
    }
    _DAT_0065953c = (undefined4)((ulonglong)lVar5 >> 0x20);
    _DAT_00659538 = (undefined4)lVar5;
    return;
  }
  SfSetDlgItemText(param_1,0x4dc,"Render cancelled by user");
  return;
}


