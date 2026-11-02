/* Module: vegas30.exe
   Function: FUN_0046dbf0
   Address: 0046dbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0046dbf0(IStream *param_1)

{
  UINT uFormat;
  IStream *pIVar1;
  BOOL BVar2;
  HANDLE hGlobal;
  HRESULT HVar3;
  
  pIVar1 = param_1;
  uFormat = DAT_0064b4ac;
  FUN_004693b0(param_1[0x335].lpVtbl);
  BVar2 = OpenClipboard((HWND)pIVar1[1].lpVtbl);
  if (BVar2 != 0) {
    hGlobal = GetClipboardData(uFormat);
    if (hGlobal != (HANDLE)0x0) {
      HVar3 = CreateStreamOnHGlobal(hGlobal,0,&param_1);
      if (-1 < HVar3) {
        FUN_00469bc0(pIVar1[0x2f2].lpVtbl,pIVar1[0x335].lpVtbl,param_1);
        (*param_1->lpVtbl->Release)(param_1);
      }
    }
    CloseClipboard();
  }
  return 1;
}


