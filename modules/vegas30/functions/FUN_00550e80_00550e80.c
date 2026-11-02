/* Module: vegas30.exe
   Function: FUN_00550e80
   Address: 00550e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00550e80(LPVOID param_1)

{
  HWND pHVar1;
  LONG LVar2;
  LRESULT LVar3;
  WPARAM WVar4;
  uint uVar5;
  HWND pHVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  LPARAM LVar10;
  
  pHVar6 = *(HWND *)((int)param_1 + 0x8c);
  *(undefined4 *)((int)param_1 + 0xc4) = 0;
  *(undefined4 *)((int)param_1 + 200) = 0;
  *(undefined4 *)((int)param_1 + 0xcc) = 0;
  puVar9 = (undefined4 *)((int)param_1 + 0x2d4);
  for (iVar8 = 0x80; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar9 = (undefined4 *)((int)param_1 + 0xd4);
  for (iVar8 = 0x80; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)((int)param_1 + 0xd0) = 0;
  FUN_0057b290();
  *(undefined4 *)((int)param_1 + 0x4d8) = 0;
  *(undefined4 *)((int)param_1 + 0x4dc) = 0;
  FUN_00551230(param_1,pHVar6);
  pHVar1 = CreateWindowExA(0x20010,"SysListView32","",0x4001014b,0,0,0,0,pHVar6,(HMENU)&DAT_0000fdea
                           ,DAT_006471fc,(LPVOID)0x0);
  *(HWND *)((int)param_1 + 0x9c) = pHVar1;
  if (pHVar1 != (HWND)0x0) {
    SetWindowLongA(pHVar1,-0x15,(LONG)param_1);
    LVar2 = SetWindowLongA(*(HWND *)((int)param_1 + 0x9c),-4,0x5511d0);
    *(LONG *)((int)param_1 + 0x584) = LVar2;
    LVar3 = SendMessageA(*(HWND *)((int)param_1 + 0x9c),0x101d,0,0);
    LVar10 = 0;
    *(LRESULT *)((int)param_1 + 0x588) = LVar3;
    WVar4 = _SfGetUIFont_4(100);
    SendMessageA(*(HWND *)((int)param_1 + 0x9c),0x30,WVar4,LVar10);
  }
  uVar5 = 0;
  if (*(int *)((int)param_1 + 0x580) != 0) {
    uVar5 = 0x7000;
  }
  pHVar1 = CreateWindowExA(0x20014,"SfKrn_Spread_Class","",uVar5 | 0x40018dbc,0,0,0,0,pHVar6,
                           (HMENU)&DAT_0000fde9,DAT_006471fc,(LPVOID)0x0);
  *(HWND *)((int)param_1 + 0x98) = pHVar1;
  if (pHVar1 != (HWND)0x0) {
    LVar10 = 0;
    WVar4 = _SfGetUIFont_4(100);
    SendMessageA(*(HWND *)((int)param_1 + 0x98),0x30,WVar4,LVar10);
    SendMessageA(*(HWND *)((int)param_1 + 0x98),0x43c,0x1f,0);
    FUN_00551070(*(undefined4 *)((int)param_1 + 0x98),param_1);
  }
  pHVar6 = CreateWindowExA(4,"Vegas.MediaPoolStatus","",0x50000000,0,0,0,0,pHVar6,
                           (HMENU)&DAT_0000fdeb,DAT_006471fc,param_1);
  *(HWND *)((int)param_1 + 0xa0) = pHVar6;
  iVar8 = FUN_005498f0(param_1);
  if (-1 < iVar8) {
    FUN_0054a350(param_1);
    InvalidateRect(*(HWND *)((int)param_1 + 0xa0),(RECT *)0x0,1);
  }
  iVar8 = *(int *)((int)param_1 + 0x84);
  *(uint *)((int)param_1 + 0x84) = -(uint)(iVar8 != 2) & 2;
  FUN_0054f510(param_1,0,iVar8);
  uVar7 = DrawDibOpen();
  *(undefined4 *)((int)param_1 + 0x4d4) = uVar7;
  return 0;
}


