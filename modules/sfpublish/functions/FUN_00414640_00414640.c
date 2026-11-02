/* Module: sfpublish.dll
   Function: FUN_00414640
   Address: 00414640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00414640(int param_1)

{
  SHORT SVar1;
  HWND pHVar2;
  LRESULT LVar3;
  HGLOBAL hMem;
  undefined4 *puVar4;
  int iVar5;
  uchar *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  FUN_00424f50(*(HWND *)(param_1 + 4),(HWND)0x0,(int *)0x0,0x8001);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x206);
  ShowWindow(pHVar2,0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x209);
  ShowWindow(pHVar2,0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x204);
  LVar3 = SendMessageA(pHVar2,0x464,0,0xbf);
  if (LVar3 == 0) {
    return 0;
  }
  LVar3 = SendMessageA(pHVar2,0x465,0xffffffff,-0x10000);
  if (LVar3 != 0) {
    uVar7 = 0;
    SVar1 = GetKeyState(0x11);
    if ((-1 < SVar1) || (SVar1 = GetKeyState(0x10), -1 < SVar1)) {
      uVar9 = 0;
      uVar8 = 0x3f8;
      uVar7 = FUN_00401310();
      uVar7 = FUN_0041f500(uVar7,uVar8,uVar9);
    }
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x209);
    SendMessageA(pHVar2,0xf1,uVar7,0);
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x203);
    SendMessageA(pHVar2,0x406,0,100);
    hMem = GlobalAlloc(0x40,0x98);
    puVar4 = GlobalLock(hMem);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_004218b0(puVar4);
    }
    *(undefined4 **)(param_1 + 0x28) = puVar4;
    if ((puVar4 != (undefined4 *)0x0) &&
       (iVar5 = FUN_00421930(puVar4,(uchar *)"sfpublish"), -1 < iVar5)) {
      FUN_004205f0(*(void **)(param_1 + 0x28),*(undefined4 *)(param_1 + 4));
      pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x205);
      puVar6 = (uchar *)FUN_0041b9f0(DAT_0044164c,0x7a);
      FUN_0041a720(pHVar2,puVar6);
      iVar5 = FUN_00421ff0(*(void **)(param_1 + 0x28),*(uchar **)(param_1 + 0x1c),(uchar *)"text/*",
                           (uchar *)0x0,(uchar *)0x0);
      if (iVar5 == 0x4e011) {
        *(undefined4 *)(param_1 + 0x2c) = 1;
      }
    }
    return 0;
  }
  return 0;
}


