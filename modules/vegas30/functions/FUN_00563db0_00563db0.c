/* Module: vegas30.exe
   Function: FUN_00563db0
   Address: 00563db0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00563db0(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  HWND pHVar3;
  LPARAM lParam;
  int iVar4;
  LPARAM unaff_EBX;
  uint uVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  longlong lVar7;
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
  undefined1 local_148 [16];
  undefined4 auStack_138 [10];
  CHAR aCStack_110 [12];
  undefined1 local_104 [252];
  HWND pHStack_8;
  
  if ((*(byte *)(param_3 + 0x1c) & 1) == 0) {
    local_15c = GetTickCount();
    if ((local_15c < DAT_00659590) ||
       (lVar7 = CONCAT44(_DAT_0065959c,_DAT_00659598), DAT_00659590 + 0x3b6 <= local_15c)) {
      FUN_004e7350(param_2,&local_158,&local_17c,&local_164,&local_154,&local_178,&local_160,
                   local_148);
      uVar5 = 0;
      local_158 = 0;
      local_16c = (double)(local_17c + local_178 * 100) / (double)(local_154 * 100);
      local_150 = __allmul(local_160,0,10000,0);
      local_174._0_4_ = 0;
      local_174._4_4_ = 0;
      lVar7 = 0;
      if (local_178 < local_154) {
        lVar7 = __allmul(local_15c - local_164,-(uint)(local_15c < local_164),10000,0);
      }
      if (local_178 != 0) {
        lVar7 = lVar7 + local_150;
      }
      local_174._4_4_ = (int)((ulonglong)lVar7 >> 0x20);
      iVar2 = local_174._4_4_;
      local_174._0_4_ = (uint)lVar7;
      uVar1 = (uint)local_174;
      _DAT_00659598 = CONCAT44(_DAT_0065959c,_DAT_00659598);
      if (DAT_00659594 != local_17c) {
        DAT_00659594 = local_17c;
        _DAT_00659598 = lVar7;
      }
      local_174 = lVar7;
      if ((local_16c < _DAT_00612940) || (local_16c < _DAT_006106d0)) {
        uVar5 = ftol();
      }
      (**(code **)(param_3 + 0x28))(param_3,local_104,0x104);
      puVar6 = auStack_138;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      auStack_138[0] = 1;
      _SfNanoTimeToText_20(&local_150,auStack_138,lVar7,1);
      SfSetDlgItemText(pHStack_8,0x4dd,&local_150);
      iVar4 = uVar5 - uVar1;
      iVar2 = (unaff_EBP - iVar2) - (uint)(uVar5 < uVar1);
      if ((iVar2 < 1) && (iVar2 < 0)) {
        iVar4 = 0;
        iVar2 = 0;
      }
      _SfNanoTimeToText_20(&local_150,auStack_138,iVar4,iVar2,1);
      SfSetDlgItemText(pHStack_8,0x4d6,&local_150);
      pHVar3 = GetDlgItem(pHStack_8,0x4d9);
      if (pHVar3 != (HWND)0x0) {
        SendMessageA(pHVar3,0x60c,1,unaff_EBX);
      }
      pHVar3 = GetDlgItem(pHStack_8,0x4d8);
      if (pHVar3 != (HWND)0x0) {
        lParam = ftol();
        SendMessageA(pHVar3,0x60c,1,lParam);
      }
      SetDlgItemTextA(pHStack_8,0x4dc,aCStack_110);
      lVar7 = _DAT_00659598;
    }
    _DAT_0065959c = (undefined4)((ulonglong)lVar7 >> 0x20);
    _DAT_00659598 = (undefined4)lVar7;
    return;
  }
  SfSetDlgItemText(param_1,0x4dc,"Render cancelled by user");
  return;
}


