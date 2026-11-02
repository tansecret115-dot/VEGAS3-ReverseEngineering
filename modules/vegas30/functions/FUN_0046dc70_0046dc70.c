/* Module: vegas30.exe
   Function: FUN_0046dc70
   Address: 0046dc70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046dc70(int param_1,IStream *param_2)

{
  bool bVar1;
  HGLOBAL hGlobal;
  int iVar2;
  BOOL BVar3;
  UINT unaff_EBX;
  IStream *uFormat;
  int unaff_retaddr;
  
  bVar1 = false;
  if ((*(int **)(param_1 + 0xcd4) == (int *)0x0) ||
     (iVar2 = **(int **)(param_1 + 0xcd4), iVar2 == 0)) {
    return 1;
  }
  uFormat = param_2;
  if (DAT_0064b4ac != param_2) {
    if (param_2 != (IStream *)0x0) {
      return 1;
    }
    bVar1 = true;
    uFormat = DAT_0064b4ac;
  }
  hGlobal = GlobalAlloc(0x2002,iVar2 * 0x228);
  if (hGlobal != (HGLOBAL)0x0) {
    iVar2 = CreateStreamOnHGlobal(hGlobal,0,&param_2);
    if (-1 < iVar2) {
      iVar2 = FUN_00469cc0(*(undefined4 *)(param_1 + 0xcd4),param_2);
      (*param_2->lpVtbl->Release)(param_2);
      if (iVar2 < 0) {
        GlobalFree(hGlobal);
      }
      else {
        if (!bVar1) {
          SetClipboardData((UINT)uFormat,hGlobal);
          return iVar2;
        }
        BVar3 = OpenClipboard(*(HWND *)(unaff_retaddr + 4));
        if (BVar3 != 0) {
          EmptyClipboard();
          SetClipboardData(unaff_EBX,hGlobal);
          CloseClipboard();
          return iVar2;
        }
      }
    }
    return iVar2;
  }
  return -0x7ff8fff2;
}


