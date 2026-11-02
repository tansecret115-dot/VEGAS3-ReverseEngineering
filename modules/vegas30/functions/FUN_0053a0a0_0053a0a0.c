/* Module: vegas30.exe
   Function: FUN_0053a0a0
   Address: 0053a0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0053a0a0(int param_1,UINT param_2)

{
  int iVar1;
  LPCSTR lpszFormat;
  HGLOBAL hGlobal;
  BOOL BVar2;
  SIZE_T dwBytes;
  int iVar3;
  HANDLE hMem;
  void *pv;
  ULONG *pv_00;
  HRESULT HVar4;
  ULONG local_14;
  IStream *local_10;
  HGLOBAL local_c;
  int local_8;
  UINT local_4;
  
  HVar4 = 0;
  local_8 = 0;
  if ((*(int **)(param_1 + 0xcd4) == (int *)0x0) ||
     (iVar1 = **(int **)(param_1 + 0xcd4), iVar1 == 0)) {
    return 1;
  }
  lpszFormat = (LPCSTR)FUN_00538450(param_1);
  local_4 = RegisterClipboardFormatA(lpszFormat);
  if (local_4 != param_2) {
    if (param_2 != 0) {
      return 1;
    }
    local_8 = 1;
    param_2 = local_4;
  }
  if (*(int *)(param_1 + 0xe8c) == 400) {
    hGlobal = GlobalAlloc(0x2002,(*(int *)(*(int *)(*(int *)(param_1 + 0xcd4) + 8) + 0x10) + 0x28) *
                                 iVar1);
    if (hGlobal == (HGLOBAL)0x0) {
      return -0x7ff8fff2;
    }
    local_c = hGlobal;
    HVar4 = CreateStreamOnHGlobal(hGlobal,0,&local_10);
    if (HVar4 < 0) goto LAB_0053a302;
    iVar3 = 0;
    if (iVar1 < 1) {
LAB_0053a1d8:
      (*local_10->lpVtbl->Release)(local_10);
    }
    else {
      do {
        pv = (void *)(*(int *)(*(int *)(param_1 + 0xcd4) + 4) * iVar3 +
                     *(int *)(*(int *)(param_1 + 0xcd4) + 8));
        if (pv != (void *)0x0) {
          HVar4 = (*local_10->lpVtbl->Write)(local_10,pv,0x28,&local_14);
          if (HVar4 < 0) goto LAB_0053a1d8;
          if ((local_14 != 0x28) ||
             ((0 < (int)*(ULONG *)((int)pv + 0x10) &&
              (HVar4 = (*local_10->lpVtbl->Write)
                                 (local_10,*(void **)((int)pv + 0x14),*(ULONG *)((int)pv + 0x10),
                                  &local_14), local_14 != *(ULONG *)((int)pv + 0x10))))) {
            HVar4 = -0x7ffb1ff7;
            goto LAB_0053a1d8;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
      (*local_10->lpVtbl->Release)(local_10);
    }
  }
  else {
    hMem = (HANDLE)0x0;
    if (*(int *)(param_1 + 0xe8c) != 0x191) goto LAB_0053a2b2;
    dwBytes = 0;
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        dwBytes = dwBytes + *(int *)(*(int *)(*(int *)(param_1 + 0xcd4) + 4) * iVar3 +
                                    *(int *)(*(int *)(param_1 + 0xcd4) + 8));
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    local_c = GlobalAlloc(0x2002,dwBytes);
    if (local_c == (HGLOBAL)0x0) {
      return -0x7ff8fff2;
    }
    HVar4 = CreateStreamOnHGlobal(local_c,0,&local_10);
    hGlobal = local_c;
    if (HVar4 < 0) goto LAB_0053a302;
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        pv_00 = (ULONG *)(*(int *)(*(int *)(param_1 + 0xcd4) + 4) * iVar3 +
                         *(int *)(*(int *)(param_1 + 0xcd4) + 8));
        if (pv_00 != (ULONG *)0x0) {
          HVar4 = (*local_10->lpVtbl->Write)(local_10,pv_00,*pv_00,&local_14);
          if (HVar4 < 0) break;
          if (local_14 != *pv_00) {
            HVar4 = -0x7ffb1ff7;
            break;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    (*local_10->lpVtbl->Release)(local_10);
  }
  hMem = local_c;
  hGlobal = local_c;
  if (-1 < HVar4) {
LAB_0053a2b2:
    if (local_8 == 0) {
      SetClipboardData(param_2,hMem);
      return HVar4;
    }
    BVar2 = OpenClipboard(*(HWND *)(param_1 + 4));
    if (BVar2 == 0) {
      return HVar4;
    }
    SetClipboardData(local_4,hMem);
    CloseClipboard();
    return HVar4;
  }
LAB_0053a302:
  GlobalFree(hGlobal);
  return HVar4;
}


