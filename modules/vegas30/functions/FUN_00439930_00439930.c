/* Module: vegas30.exe
   Function: FUN_00439930
   Address: 00439930
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00439930(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UINT flags;
  uchar local_40 [64];
  
  iVar1 = *(int *)(DAT_0064762c + 0xac);
  FUN_004e8800();
  if (iVar1 != 0) {
    FUN_00438c40(local_40);
    iVar2 = FUN_00438b70(iVar1);
    iVar3 = lstrcmpA((LPCSTR)local_40,(LPCSTR)(iVar1 + 0xb4));
    if ((iVar3 != 0) || (iVar2 == 0)) {
      flags = 1;
      if (DAT_006487c0 == 0) {
        *(undefined4 *)(iVar1 + 0xb0) = 1;
        _mbscpy((uchar *)(iVar1 + 0xb4),local_40);
        iVar2 = lstrlenA((LPCSTR)local_40);
        *(int *)(iVar1 + 0x134) = iVar2;
        flags = 0x101;
      }
      if (*(HWND *)(iVar1 + 8) != (HWND)0x0) {
        RedrawWindow(*(HWND *)(iVar1 + 8),(RECT *)0x0,(HRGN)0x0,flags);
        return;
      }
      FUN_004c56d0(DAT_00647630,0);
    }
  }
  return;
}


