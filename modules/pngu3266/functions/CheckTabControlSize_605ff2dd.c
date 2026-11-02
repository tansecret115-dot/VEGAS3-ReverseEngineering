/* Module: pngu3266.dll
   Function: CheckTabControlSize
   Address: 605ff2dd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNPropertySheet::CheckTabControlSize(class CPNPropertyPage *) */

void __thiscall
CPNPropertySheet::CheckTabControlSize(CPNPropertySheet *this,CPNPropertyPage *param_1)

{
  HWND__ *pHVar1;
  HWND hWnd;
  HWND__ *hWnd_00;
  int iVar2;
  int iVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM lParam;
  tagRECT local_44;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0xf2dd  848
                       ?CheckTabControlSize@CPNPropertySheet@@QAEXPAVCPNPropertyPage@@@Z */
  if (*(int *)(this + 0x114) == 0) {
    *(undefined4 *)(this + 0x114) = 1;
    local_2c = 0;
    local_28 = 0;
    (**(code **)(*(int *)param_1 + 0x38))(&local_2c);
    local_24 = 0;
    local_20 = 0;
    (**(code **)(*(int *)param_1 + 0x50))(&local_24);
    lParam = 0;
    WVar5 = 0;
    UVar4 = 0x474;
    pHVar1 = CPNWindow::GetHWND((CPNWindow *)this);
    hWnd = (HWND)SendMessageA(pHVar1,UVar4,WVar5,lParam);
    if (hWnd != (HWND)0x0) {
      GetWindowRect(hWnd,&local_44);
      local_c = (local_44.left - local_44.right) + 8 + local_2c;
      local_8 = (local_20 - local_44.bottom) + 4 + local_28;
      if ((local_c != 0) || (local_8 != 0)) {
        local_14 = 0;
        local_10 = 0;
        (**(code **)(*(int *)this + 0x38))(&local_14);
        local_14 = local_14 + local_c;
        local_10 = local_10 + local_8;
        (**(code **)(*(int *)this + 0x34))(&local_14);
        SetWindowPos(hWnd,(HWND)0x0,0,0,(local_c - local_44.left) + local_44.right,
                     (local_8 - local_44.top) + local_44.bottom,6);
        pHVar1 = CPNWindow::GetHWND((CPNWindow *)param_1);
        WVar5 = 0;
        UVar4 = 0x465;
        hWnd_00 = CPNWindow::GetHWND((CPNWindow *)this);
        SendMessageA(hWnd_00,UVar4,WVar5,(LPARAM)pHVar1);
        local_34 = 0;
        local_30 = 0;
        (**(code **)(*(int *)param_1 + 0x50))(&local_34);
        if ((local_24 != local_34) || (local_20 != local_30)) {
          iVar2 = local_30 - local_20;
          local_10 = local_10 + iVar2;
          (**(code **)(*(int *)this + 0x34))(&local_14);
          local_8 = local_8 + iVar2;
          SetWindowPos(hWnd,(HWND)0x0,0,0,(local_c - local_44.left) + local_44.right,
                       (local_8 - local_44.top) + local_44.bottom,6);
        }
        iVar2 = local_8;
        if ((*(int **)(this + 0xf0) != (int *)0x0) &&
           (iVar3 = (**(code **)(**(int **)(this + 0xf0) + 0x10))(), iVar2 = local_8, iVar3 != 0)) {
          local_1c = 0;
          local_18 = 0;
          (**(code **)(**(int **)(this + 0xf0) + 0x50))(&local_1c);
          iVar2 = (**(code **)(**(int **)(this + 0xf0) + 0x14))();
          if (iVar2 == 0) {
            (**(code **)(*(int *)this + 0x68))(&local_1c);
          }
          iVar2 = local_8;
          local_1c = local_1c + local_c;
          local_18 = local_18 + local_8;
          (**(code **)(**(int **)(this + 0xf0) + 0x44))(&local_1c);
        }
        if ((*(int **)(this + 0xfc) != (int *)0x0) &&
           (iVar3 = (**(code **)(**(int **)(this + 0xfc) + 0x10))(), iVar3 != 0)) {
          local_1c = 0;
          local_18 = 0;
          (**(code **)(**(int **)(this + 0xfc) + 0x50))(&local_1c);
          iVar3 = (**(code **)(**(int **)(this + 0xfc) + 0x14))();
          if (iVar3 == 0) {
            (**(code **)(*(int *)this + 0x68))(&local_1c);
          }
          local_1c = local_1c + local_c;
          local_18 = local_18 + iVar2;
          (**(code **)(**(int **)(this + 0xfc) + 0x44))(&local_1c);
        }
        if ((*(int **)(this + 0xf4) != (int *)0x0) &&
           (iVar3 = (**(code **)(**(int **)(this + 0xf4) + 0x10))(), iVar3 != 0)) {
          local_1c = 0;
          local_18 = 0;
          (**(code **)(**(int **)(this + 0xf4) + 0x50))(&local_1c);
          iVar3 = (**(code **)(**(int **)(this + 0xf4) + 0x14))();
          if (iVar3 == 0) {
            (**(code **)(*(int *)this + 0x68))(&local_1c);
          }
          local_1c = local_1c + local_c;
          local_18 = local_18 + iVar2;
          (**(code **)(**(int **)(this + 0xf4) + 0x44))(&local_1c);
        }
        if ((*(int **)(this + 0xf8) != (int *)0x0) &&
           (iVar3 = (**(code **)(**(int **)(this + 0xf8) + 0x10))(), iVar3 != 0)) {
          local_1c = 0;
          local_18 = 0;
          (**(code **)(**(int **)(this + 0xf8) + 0x50))(&local_1c);
          iVar3 = (**(code **)(**(int **)(this + 0xf8) + 0x14))();
          if (iVar3 == 0) {
            (**(code **)(*(int *)this + 0x68))(&local_1c);
          }
          local_1c = local_1c + local_c;
          local_18 = local_18 + iVar2;
          (**(code **)(**(int **)(this + 0xf8) + 0x44))(&local_1c);
        }
      }
    }
  }
  return;
}


