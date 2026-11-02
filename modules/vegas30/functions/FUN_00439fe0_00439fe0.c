/* Module: vegas30.exe
   Function: FUN_00439fe0
   Address: 00439fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00439fe0(undefined4 param_1,int param_2,int param_3)

{
  HWND hWnd;
  int iVar1;
  HGLOBAL pvVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (DAT_0064762c == 0) {
    return 0;
  }
  if ((param_3 == 0) || (param_2 == 0)) {
    if (*(int *)(DAT_0064762c + 0xac) == 0) {
      uVar3 = FUN_00411060(0x301,0,&PTR_LAB_0063dc70,&DAT_0063dc90,0x5f,0xbc,0);
      *(undefined4 *)(DAT_0064762c + 0xac) = uVar3;
    }
    iVar1 = *(int *)(DAT_0064762c + 0xac);
    if (iVar1 == 0) {
      return 0;
    }
    if (param_3 == 0) {
      if (*(HWND *)(iVar1 + 8) != (HWND)0x0) {
        if (param_2 != 0) {
          DestroyWindow(*(HWND *)(iVar1 + 8));
          return 1;
        }
        FUN_0040d4a0(iVar1);
        return 1;
      }
      puVar4 = &DAT_0063dc90;
      uVar3 = _SfGetString_8(DAT_00647204,0x4fa9);
      FUN_00411250(*(undefined4 *)(DAT_0064762c + 0xac),uVar3,puVar4);
      FUN_00453250(DAT_00647630,0);
    }
  }
  else if (*(int *)(DAT_0064762c + 0xac) != 0) {
    hWnd = *(HWND *)(*(int *)(DAT_0064762c + 0xac) + 8);
    if (hWnd != (HWND)0x0) {
      DestroyWindow(hWnd);
    }
    pvVar2 = GlobalHandle(*(LPCVOID *)(DAT_0064762c + 0xac));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(DAT_0064762c + 0xac));
    GlobalFree(pvVar2);
    *(undefined4 *)(DAT_0064762c + 0xac) = 0;
    return 1;
  }
  return 1;
}


