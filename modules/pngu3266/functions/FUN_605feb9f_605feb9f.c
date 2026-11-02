/* Module: pngu3266.dll
   Function: FUN_605feb9f
   Address: 605feb9f
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_605feb9f(HWND param_1,ulong param_2,uint param_3,uint param_4)

{
  CPNWindow *pCVar1;
  uint dwNewLong;
  HWND__ *pHVar2;
  long lVar3;
  UINT Msg;
  int iVar4;
  WPARAM wParam;
  LPARAM lParam;
  
  lVar3 = 1;
  pCVar1 = (CPNWindow *)GetWindowLongA(param_1,8);
  if (param_2 == 2) {
    (**(code **)(*(int *)pCVar1 + 0x154))();
    (**(code **)(*(int *)pCVar1 + 200))();
    dwNewLong = 0;
    iVar4 = 8;
LAB_605fed2f:
    SetWindowLongA(param_1,iVar4,dwNewLong);
  }
  else {
    if (param_2 == 0x10) {
      lParam = 0;
      wParam = 0;
      Msg = 0x10;
      pHVar2 = CPNWindow::GetHWND(*(CPNWindow **)(pCVar1 + 0xe4));
      PostMessageA(pHVar2,Msg,wParam,lParam);
      return 1;
    }
    if (param_2 == 0x20) {
      if ((param_4 >> 0x10 == 0x201) || (param_4 >> 0x10 == 0x204)) {
        pHVar2 = CPNWindow::GetHWND(*(CPNWindow **)(pCVar1 + 0xe4));
        BringWindowToTop(pHVar2);
      }
      if (pCVar1 == (CPNWindow *)0x0) {
        return 1;
      }
      param_2 = 0x20;
    }
    else {
      if (param_2 == 0x4e) {
        iVar4 = *(int *)(param_4 + 8);
        if (iVar4 == -0xd1) {
          iVar4 = (**(code **)(*(int *)pCVar1 + 0x15c))();
LAB_605fecba:
          dwNewLong = (uint)(iVar4 == 0);
        }
        else {
          if (iVar4 == -0xcd) {
            iVar4 = (**(code **)(*(int *)pCVar1 + 0x164))();
            goto LAB_605fecba;
          }
          if (iVar4 == -0xca) {
            iVar4 = (**(code **)(*(int *)pCVar1 + 0x158))();
            dwNewLong = (-(uint)(iVar4 != 0) & 0xfffffffe) + 2;
          }
          else {
            if (iVar4 == -0xc9) {
              iVar4 = (**(code **)(*(int *)pCVar1 + 0x168))();
              goto LAB_605fecba;
            }
            if (iVar4 != -200) {
              return 1;
            }
            dwNewLong = (**(code **)(*(int *)pCVar1 + 0x16c))();
          }
        }
        iVar4 = 0;
        goto LAB_605fed2f;
      }
      if (param_2 == 0x53) {
        lVar3 = (**(code **)(*(int *)pCVar1 + 0x164))();
        return lVar3;
      }
      if (param_2 == 0x110) {
        pCVar1 = *(CPNWindow **)(param_4 + 0x1c);
        CPNWindow::Attach(pCVar1,param_1);
        SetWindowLongA(param_1,8,(LONG)pCVar1);
        CPNPropertySheet::OnInitPage(*(CPNPropertySheet **)(pCVar1 + 0xe4));
        (**(code **)(*(int *)pCVar1 + 0x150))();
        (**(code **)(*(int *)pCVar1 + 0x38))(pCVar1 + 0xfc);
        return 1;
      }
      if (pCVar1 == (CPNWindow *)0x0) {
        return 0;
      }
    }
    lVar3 = CPNWindow::WindowProc(pCVar1,param_2,param_3,param_4);
  }
  return lVar3;
}


