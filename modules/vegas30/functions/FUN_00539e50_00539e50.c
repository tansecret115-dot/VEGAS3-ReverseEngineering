/* Module: vegas30.exe
   Function: FUN_00539e50
   Address: 00539e50
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_00539e50(int param_1)

{
  LPCSTR lpszFormat;
  UINT uFormat;
  BOOL BVar1;
  HANDLE hGlobal;
  HRESULT HVar2;
  HGLOBAL hMem;
  int iVar3;
  ULONG *_Memory;
  uint uVar4;
  size_t _Size;
  bool bVar5;
  ULONG local_34;
  ULONG local_30;
  IStream *local_2c;
  undefined1 local_28 [16];
  SIZE_T SStack_18;
  LPVOID pvStack_14;
  
  lpszFormat = (LPCSTR)FUN_00538450(param_1);
  uFormat = RegisterClipboardFormatA(lpszFormat);
  FUN_00538540(param_1);
  BVar1 = OpenClipboard(*(HWND *)(param_1 + 4));
  if (BVar1 != 0) {
    hGlobal = GetClipboardData(uFormat);
    if ((hGlobal != (HANDLE)0x0) && (HVar2 = CreateStreamOnHGlobal(hGlobal,0,&local_2c), -1 < HVar2)
       ) {
      if (*(int *)(param_1 + 0xe8c) == 400) {
        do {
          HVar2 = (*local_2c->lpVtbl->Read)(local_2c,local_28,0x28,&local_34);
          if (HVar2 < 0) break;
          bVar5 = local_34 == 0;
          if (!bVar5) {
            if ((0 < (int)SStack_18) && (local_34 == 0x28)) {
              hMem = GlobalAlloc(2,SStack_18);
              pvStack_14 = GlobalLock(hMem);
              if (pvStack_14 == (LPVOID)0x0) {
                return -0x7ff8fff2;
              }
              HVar2 = (*local_2c->lpVtbl->Read)(local_2c,pvStack_14,SStack_18,&local_34);
              if (HVar2 < 0) {
                return HVar2;
              }
              if (local_34 != SStack_18) {
                return HVar2;
              }
              _SfList_InsertList_16(*(undefined4 *)(param_1 + 0xcd4),0xffffffff,local_28,1);
            }
            bVar5 = local_34 == 0;
          }
        } while (!bVar5);
      }
      else if (*(int *)(param_1 + 0xe8c) == 0x191) {
        _Size = 0;
        iVar3 = 0;
        do {
          if (iVar3 == 0) {
            uVar4 = 0x7c;
          }
          else if ((iVar3 < 1) || (2 < iVar3)) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0x84;
          }
          if (_Size <= uVar4) {
            if (iVar3 == 0) {
              _Size = 0x7c;
            }
            else if ((iVar3 < 1) || (2 < iVar3)) {
              _Size = 0;
            }
            else {
              _Size = 0x84;
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 3);
        while (HVar2 = (*local_2c->lpVtbl->Read)(local_2c,&local_30,4,&local_34), -1 < HVar2) {
          if ((((local_34 != 0) && (0 < (int)local_30)) && (local_34 == 4)) &&
             (_Memory = calloc(1,_Size), _Memory != (ULONG *)0x0)) {
            *_Memory = local_30;
            local_30 = local_30 - 4;
            HVar2 = (*local_2c->lpVtbl->Read)(local_2c,_Memory + 1,local_30,&local_34);
            if ((-1 < HVar2) && (local_34 == local_30)) {
              _SfList_InsertList_16(*(undefined4 *)(param_1 + 0xcd4),0xffffffff,_Memory,1);
            }
            free(_Memory);
          }
          if ((HVar2 < 0) || (local_34 == 0)) break;
        }
      }
      (*local_2c->lpVtbl->Release)(local_2c);
      if (*(int **)(param_1 + 0xcd4) == (int *)0x0) {
        return 1;
      }
      if (**(int **)(param_1 + 0xcd4) == 0) {
        return 1;
      }
    }
    CloseClipboard();
  }
  return 1;
}


