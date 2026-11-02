/* Module: sfpublish.dll
   Function: FUN_00409490
   Address: 00409490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409490(int param_1,int *param_2)

{
  HANDLE h;
  HDC pHVar1;
  int iVar2;
  HWND pHVar3;
  int *piVar4;
  int iVar5;
  int local_64 [4];
  undefined2 local_54;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  ushort local_4e;
  CHAR local_48 [32];
  undefined4 local_28;
  undefined1 *local_24;
  int local_20;
  undefined4 local_1c;
  undefined2 local_18;
  ushort local_16;
  uint local_14;
  uint local_10;
  uint local_c;
  int *local_8;
  
  piVar4 = (int *)(param_1 + 0x7c);
  local_8 = piVar4;
  if (*piVar4 == 0) {
    h = GetStockObject(0x11);
    if (h == (HGDIOBJ)0x0) {
      h = GetStockObject(0xd);
    }
    GetObjectA(h,0x3c,local_64);
    local_28 = 0x20;
    if (&stack0x00000000 == (undefined1 *)0x48) {
      local_24 = (undefined1 *)0x0;
    }
    else {
      iVar5 = lstrlenA(local_48);
      FUN_004328f0();
      MultiByteToWideChar(0,0,local_48,-1,(LPWSTR)&stack0xffffff90,iVar5 + 1);
      local_24 = &stack0xffffff90;
    }
    local_16 = local_4e >> 8;
    local_18 = local_54;
    local_14 = CONCAT11(uStack_4f,uStack_50) & 0xff;
    local_10 = CONCAT21(local_4e,uStack_4f) & 0xff;
    local_c = local_4e & 0xff;
    iVar5 = local_64[0];
    if (local_64[0] < 0) {
      iVar5 = -local_64[0];
    }
    if (*(HWND *)(param_1 + -0x44) == (HWND)0x0) {
      pHVar3 = GetDesktopWindow();
      pHVar1 = GetDC(pHVar3);
      iVar2 = GetDeviceCaps(pHVar1,0x5a);
      pHVar3 = GetDesktopWindow();
      ReleaseDC(pHVar3,pHVar1);
    }
    else {
      pHVar1 = GetDC(*(HWND *)(param_1 + -0x44));
      iVar2 = GetDeviceCaps(pHVar1,0x5a);
      ReleaseDC(*(HWND *)(param_1 + -0x44),pHVar1);
      piVar4 = local_8;
    }
    local_1c = 0;
    local_20 = (iVar5 * 720000) / iVar2;
    Ordinal_420(&local_28,&DAT_0043cab0,piVar4);
  }
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  *param_2 = *piVar4;
  piVar4 = (int *)*piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  return 0;
}


