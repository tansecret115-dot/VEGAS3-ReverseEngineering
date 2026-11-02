/* Module: vidcap30.exe
   Function: FUN_004460e0
   Address: 004460e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004460e0(int param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  HWND hWnd;
  int iVar3;
  CHAR *pCVar4;
  RECT *lpRect;
  BOOL bErase;
  LPARAM local_348;
  char local_344 [260];
  CHAR local_240 [519];
  undefined1 local_39;
  
  local_348 = DAT_005bb838;
  bVar1 = false;
  bVar2 = false;
  if (((param_3 == 0xffffffff) || ((param_3 & 0xc200) != 0)) || ((param_3 & 0x84) != 0)) {
    bVar1 = true;
  }
  if (((param_3 & 0x10c00) != 0) || ((param_3 & 0x79) != 0)) {
    bVar2 = true;
  }
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x2f8) = 1;
    FUN_0044c780(param_1 + 0x80);
  }
  else if (!bVar2) goto LAB_0044618b;
  *(undefined4 *)(param_1 + 0x2f8) = 1;
  SendMessageA(*(HWND *)(param_1 + 0x88),0x60c,0,0x586c70);
  bErase = 0;
  lpRect = (RECT *)0x0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x88),4);
  InvalidateRect(hWnd,lpRect,bErase);
LAB_0044618b:
  if (param_3 == 0xffffffff) {
    FUN_0042f1f0(local_348,local_344,0x104);
    if (local_344[0] != '\0') {
      iVar3 = _SfList_CreateExZ_32(&local_348,4,0x40,0x10,0x40000002,0,0,0);
      if (-1 < iVar3) {
        pCVar4 = local_240;
        for (iVar3 = 0x90; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar4[0] = '\0';
          pCVar4[1] = '\0';
          pCVar4[2] = '\0';
          pCVar4[3] = '\0';
          pCVar4 = pCVar4 + 4;
        }
        lstrcpynA(local_240,local_344,0x208);
        local_39 = 0;
        _SfList_AllocAndInsertItem_20(local_348,local_240,0x240,0xffffffff,0);
        SendMessageA(*(HWND *)(param_1 + 0x88),0x613,0,local_348);
        FUN_00417990(local_348);
      }
    }
  }
  return;
}


