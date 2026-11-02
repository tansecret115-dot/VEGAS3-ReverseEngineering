/* Module: vegas30.exe
   Function: FUN_00478b90
   Address: 00478b90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00478b90(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  HDC hdc;
  int iVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte local_50;
  undefined1 local_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  double local_48;
  int local_38;
  int local_34;
  RECT local_30;
  undefined1 local_20 [8];
  double local_18;
  double local_10;
  
  iVar5 = param_1[5];
  hdc = (HDC)*param_1;
  iVar6 = param_1[3];
  iVar4 = param_1[4] + param_2 * 8;
  local_38 = param_1[4] + 8 + param_2 * 8;
  uStack_4e = (undefined1)param_3;
  local_4f = (undefined1)((uint)param_3 >> 8);
  local_50 = (byte)((uint)param_3 >> 0x10);
  uStack_4d = 0xff;
  local_34 = iVar6 + iVar5;
  _SFRGBA_To_SFHSL_8(local_20,&local_50);
  dVar7 = _DAT_006129c0;
  if ((_DAT_006129c0 <= local_18) && (dVar7 = local_18, _DAT_00612ae8 < local_18)) {
    dVar7 = _DAT_00612ae8;
  }
  local_48 = _DAT_00612ae0;
  if ((_DAT_00612ae0 <= local_10) && (local_48 = local_10, _DAT_00612ad8 < local_10)) {
    local_48 = _DAT_00612ad8;
  }
  local_18 = dVar7;
  local_10 = local_48;
  _SFHSL_To_SFRGBA_8(&local_50,local_20);
  SetBkColor(hdc,((uint)local_50 << 8 | CONCAT12(uStack_4d,CONCAT11(uStack_4e,local_4f)) & 0xff) <<
                 8 | CONCAT11(uStack_4d,uStack_4e) & 0xff);
  iVar9 = local_38 - iVar4;
  iVar10 = iVar9 + iVar4;
  local_30.left = iVar4;
  local_30.top = iVar5;
  local_30.right = iVar10;
  local_30.bottom = iVar6 + iVar5;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  local_10 = _DAT_00612ad0;
  if (_DAT_00612ae8 <= dVar7) {
    local_18 = dVar7 - _DAT_006129c0;
    local_10 = _DAT_006129c0;
  }
  local_10 = local_48 + local_10;
  _SFHSL_To_SFRGBA_8(&local_50,local_20);
  SetBkColor(hdc,((uint)local_50 << 8 | CONCAT12(uStack_4d,CONCAT11(uStack_4e,local_4f)) & 0xff) <<
                 8 | CONCAT11(uStack_4d,uStack_4e) & 0xff);
  local_30.right = iVar4 + 1;
  local_30.bottom = local_34;
  local_30.left = iVar4;
  local_30.top = iVar5;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  iVar6 = iVar4 + 2;
  local_30.bottom = iVar5 + 8;
  local_30.left = iVar4;
  local_30.top = iVar5;
  local_30.right = iVar6;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  iVar1 = iVar5 + 0x10;
  local_30.bottom = iVar5 + 0x18;
  local_30.left = iVar4;
  local_30.top = iVar1;
  local_30.right = iVar6;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  local_30.bottom = iVar5 + 2;
  local_30.left = iVar4;
  local_30.top = iVar5;
  local_30.right = iVar10;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  local_30.top = iVar5 + 8;
  local_30.bottom = iVar5 + 9;
  local_30.left = iVar4;
  local_30.right = iVar10;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  local_30.bottom = iVar5 + 0x12;
  local_30.left = iVar4;
  local_30.top = iVar1;
  local_30.right = iVar10;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  iVar2 = iVar5 + 0x18;
  local_30.bottom = iVar5 + 0x19;
  local_30.left = iVar4;
  local_30.top = iVar2;
  local_30.right = iVar10;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  local_10 = _DAT_00610800;
  if (_DAT_00612ae8 <= dVar7) {
    local_18 = dVar7;
    local_10 = _DAT_006129c0;
  }
  local_10 = local_48 - local_10;
  _SFHSL_To_SFRGBA_8(&local_50,local_20);
  SetBkColor(hdc,((uint)local_50 << 8 | CONCAT12(uStack_4d,CONCAT11(uStack_4e,local_4f)) & 0xff) <<
                 8 | CONCAT11(uStack_4d,uStack_4e) & 0xff);
  local_30.left = local_38 + -1;
  local_30.bottom = local_34;
  local_30.right = local_38;
  local_30.top = iVar5;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  iVar8 = local_38;
  local_30.top = iVar5 + 1;
  iVar3 = local_38 + -2;
  local_30.right = local_38 + -1;
  local_30.bottom = iVar5 + 8;
  local_30.left = iVar3;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  local_30.top = iVar5 + 0x11;
  local_30.right = iVar8 + -1;
  local_30.bottom = iVar5 + 0x18;
  local_30.left = iVar3;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  local_30.left = iVar4 + 1;
  local_30.top = iVar5 + 6;
  local_30.right = iVar4 + iVar9;
  local_30.bottom = iVar5 + 8;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  local_30.left = iVar4 + 1;
  local_30.top = iVar5 + 0x16;
  local_30.right = iVar4 + iVar9;
  local_30.bottom = iVar2;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  local_30.top = iVar5 + 7;
  local_30.bottom = iVar5 + 8;
  local_30.left = iVar4;
  local_30.right = iVar10;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  local_30.top = iVar5 + 0xf;
  local_30.left = iVar4;
  local_30.right = iVar10;
  local_30.bottom = iVar1;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  local_30.top = iVar5 + 0x17;
  local_30.left = iVar4;
  local_30.right = iVar10;
  local_30.bottom = iVar2;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  local_30.top = iVar5 + 0x1f;
  local_30.bottom = iVar5 + 0x20;
  local_30.left = iVar4;
  local_30.right = iVar10;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(hdc,0);
  SetBkColor(hdc,0xffff);
  local_30.top = iVar5 + 0x12;
  local_30.right = iVar4 + 6;
  local_30.bottom = iVar5 + 0x16;
  local_30.left = iVar6;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(hdc,0xffffff);
  local_30.top = iVar5 + 0x1a;
  local_30.right = iVar4 + 6;
  local_30.bottom = iVar5 + 0x1e;
  local_30.left = iVar6;
  ExtTextOutA(hdc,0,0,2,&local_30,(LPCSTR)0x0,0,(INT *)0x0);
  return;
}


