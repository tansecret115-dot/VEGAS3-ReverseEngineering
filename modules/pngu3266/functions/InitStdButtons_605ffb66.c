/* Module: pngu3266.dll
   Function: InitStdButtons
   Address: 605ffb66
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall CPNPropertySheet::InitStdButtons(void) */

void __thiscall CPNPropertySheet::InitStdButtons(CPNPropertySheet *this)

{
  HWND pHVar1;
  HWND__ *pHVar2;
  CPNButton *pCVar3;
  undefined4 uVar4;
  CPNFont *pCVar5;
  int iVar6;
  CHAR local_74 [64];
  HWND local_34 [9];
  HWND local_10;
  HWND local_c;
  HWND local_8;
  
                    /* 0xfb66  1464  ?InitStdButtons@CPNPropertySheet@@IAEXXZ */
  iVar6 = 1;
  pHVar2 = CPNWindow::GetHWND((CPNWindow *)this);
  local_8 = GetDlgItem(pHVar2,iVar6);
  iVar6 = 9;
  pHVar2 = CPNWindow::GetHWND((CPNWindow *)this);
  local_10 = GetDlgItem(pHVar2,iVar6);
  iVar6 = 2;
  pHVar2 = CPNWindow::GetHWND((CPNWindow *)this);
  local_c = GetDlgItem(pHVar2,iVar6);
  if (((byte)this[0x104] & 8) != 0) {
    if (*(int *)(this + 0xfc) == 0) {
      pCVar3 = operator_new(0xfb);
      if (pCVar3 == (CPNButton *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = CPNButton::CPNButton(pCVar3);
      }
      *(undefined4 *)(this + 0xfc) = uVar4;
    }
    memset(local_34,0,0x24);
    local_34[0] = local_10;
    (**(code **)(**(int **)(this + 0xfc) + 0xcc))(local_34);
  }
  if (((byte)this[0x104] & 4) == 0) {
    if (*(int *)(this + 0xf4) == 0) {
      pCVar3 = operator_new(0xfb);
      if (pCVar3 == (CPNButton *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = CPNButton::CPNButton(pCVar3);
      }
      *(undefined4 *)(this + 0xf4) = uVar4;
    }
    if (*(int *)(this + 0xf0) == 0) {
      pCVar3 = operator_new(0xfb);
      if (pCVar3 == (CPNButton *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = CPNButton::CPNButton(pCVar3);
      }
      *(undefined4 *)(this + 0xf0) = uVar4;
    }
    memset(local_34,0,0x24);
    local_34[0] = local_8;
    (**(code **)(**(int **)(this + 0xf0) + 0xcc))(local_34);
    memset(local_34,0,0x24);
    local_34[0] = local_c;
  }
  else {
    if (*(int *)(this + 0xf4) == 0) {
      pCVar3 = operator_new(0xfb);
      if (pCVar3 == (CPNButton *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = CPNButton::CPNButton(pCVar3);
      }
      *(undefined4 *)(this + 0xf4) = uVar4;
    }
    FUN_6061db60(0x3e9000a,local_74,0x40);
    if (local_8 != (HWND)0x0) {
      ShowWindow(local_8,0);
    }
    pHVar1 = local_c;
    if (local_c != (HWND)0x0) {
      SetWindowTextA(local_c,local_74);
    }
    memset(local_34,0,0x24);
    local_34[0] = pHVar1;
  }
  (**(code **)(**(int **)(this + 0xf4) + 0xcc))(local_34);
  if (*(CPNRouter **)(this + 0xf4) != (CPNRouter *)0x0) {
    CPNRouter::AddObserver(*(CPNRouter **)(this + 0xf4),(CPNRouter *)this,0x80000000,1);
    uVar4 = 0;
    local_10 = (HWND)**(undefined4 **)(this + 0xf4);
    pCVar5 = CPNDrawHelper::GetControlsFont();
    (*(code *)local_10[0xb].unused)(pCVar5,uVar4);
  }
  if (*(CPNRouter **)(this + 0xf0) != (CPNRouter *)0x0) {
    CPNRouter::AddObserver(*(CPNRouter **)(this + 0xf0),(CPNRouter *)this,0x80000000,1);
    uVar4 = 0;
    local_10 = (HWND)**(undefined4 **)(this + 0xf0);
    pCVar5 = CPNDrawHelper::GetControlsFont();
    (*(code *)local_10[0xb].unused)(pCVar5,uVar4);
  }
  if (*(CPNRouter **)(this + 0xfc) != (CPNRouter *)0x0) {
    CPNRouter::AddObserver(*(CPNRouter **)(this + 0xfc),(CPNRouter *)this,0x80000000,1);
    uVar4 = 0;
    iVar6 = **(int **)(this + 0xfc);
    pCVar5 = CPNDrawHelper::GetControlsFont();
    (**(code **)(iVar6 + 0x2c))(pCVar5,uVar4);
  }
  return;
}


