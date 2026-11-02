/* Module: vegas30.exe
   Function: FUN_00506410
   Address: 00506410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00506410(HWND param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  HWND pHVar2;
  HWND pHVar3;
  HWND hWnd;
  WPARAM WVar4;
  LPCSTR lpClassName;
  HDC hdc;
  LPARAM lParam;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  LPCSTR lpWindowName;
  HMENU hMenu;
  HINSTANCE hInstance;
  LPVOID lpParam;
  tagRECT *psizl;
  uint local_43c;
  WPARAM local_438;
  tagRECT local_428;
  tagRECT local_418;
  tagRECT local_408;
  tagRECT local_3f8;
  uchar auStack_3e8 [1000];
  
  SetWindowLongA(param_1,-0x15,(LONG)param_3);
  *param_3 = param_1;
  pHVar2 = GetDlgItem(param_1,0x435);
  pHVar3 = GetDlgItem(param_1,1);
  hWnd = GetDlgItem(param_1,2);
  GetWindowRect(pHVar2,&local_428);
  GetWindowRect(pHVar3,&local_3f8);
  GetWindowRect(hWnd,&local_408);
  param_3[6] = local_408.top - local_428.bottom;
  param_3[8] = local_408.left - local_3f8.right;
  MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_428,2);
  param_3[7] = local_428.left;
  param_3[9] = local_428.top;
  pHVar2 = GetDlgItem(param_1,0x476);
  if ((LPCSTR)param_3[4] != (LPCSTR)0x0) {
    SetWindowTextA(pHVar2,(LPCSTR)param_3[4]);
  }
  pHVar2 = GetDlgItem(param_1,0x435);
  WVar4 = SendMessageA(pHVar2,0x31,0,0);
  GetWindowRect(pHVar2,&local_428);
  MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_428,2);
  DestroyWindow(pHVar2);
  uVar6 = ((byte)~(byte)param_3[1] & 1) << 0xb | 0x50b30141;
  if ((param_3[1] & 4) != 0) {
    pHVar2 = GetDlgItem(param_1,1);
    pHVar3 = GetDlgItem(param_1,2);
    GetWindowRect(pHVar2,&local_418);
    MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_418,2);
    local_428.bottom = local_418.bottom;
    DestroyWindow(pHVar2);
    DestroyWindow(pHVar3);
  }
  if ((*(byte *)(param_3 + 1) & 0x20) != 0) {
    FUN_005063e0(param_3,param_1);
  }
  lpParam = (LPVOID)0x0;
  hMenu = (HMENU)&DAT_00000435;
  iVar5 = local_428.bottom - local_428.top;
  iVar7 = local_428.right - local_428.left;
  lpWindowName = "";
  hInstance = DAT_006471fc;
  lpClassName = (LPCSTR)_SfGetString_8(DAT_00647204,0x503b);
  pHVar2 = CreateWindowExA(0x200,lpClassName,lpWindowName,uVar6,local_428.left,local_428.top,iVar7,
                           iVar5,param_1,hMenu,hInstance,lpParam);
  SendMessageA(pHVar2,0x30,WVar4,1);
  if ((code *)param_3[5] != (code *)0x0) {
    uVar6 = (*(code *)param_3[5])(param_3[3],1,0xffff,0,0);
    local_438 = 0;
    _mbscpy(auStack_3e8,"");
    hdc = GetDC(pHVar2);
    local_43c = 0;
    if (uVar6 != 0) {
      do {
        iVar5 = (*(code *)param_3[5])(param_3[3],0,local_43c,auStack_3e8,1000);
        WVar4 = SendMessageA(pHVar2,0x180,0,(LPARAM)auStack_3e8);
        if (-1 < (int)WVar4) {
          psizl = &local_418;
          iVar7 = lstrlenA((LPCSTR)auStack_3e8);
          GetTextExtentPoint32A(hdc,(LPCSTR)auStack_3e8,iVar7,(LPSIZE)psizl);
          if ((int)local_438 < local_418.left) {
            local_438 = local_418.left;
          }
          if (iVar5 == 1) {
            lParam = 0;
          }
          else {
            lParam = (*(code *)param_3[5])(param_3[3],3,local_43c,0,0);
          }
          SendMessageA(pHVar2,0x19a,WVar4,lParam);
        }
        local_43c = local_43c + 1;
      } while (local_43c < uVar6);
    }
    SendMessageA(pHVar2,0x194,local_438,0);
    ReleaseDC(pHVar2,hdc);
  }
  puVar1 = (uint *)param_3[2];
  if (puVar1 != (uint *)0x0) {
    if ((*(byte *)(param_3 + 1) & 1) == 0) {
      uVar6 = *puVar1;
      uVar8 = 0;
      if (uVar6 != 0) {
        do {
          SendMessageA(pHVar2,0x185,1,
                       *(LPARAM *)(*(int *)(param_3[2] + 4) * uVar8 + *(int *)(param_3[2] + 8)));
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar6);
      }
    }
    else if (0 < (int)*puVar1) {
      SendMessageA(pHVar2,0x186,*(WPARAM *)puVar1[2],0);
    }
  }
  SetFocus(pHVar2);
  return 0;
}


