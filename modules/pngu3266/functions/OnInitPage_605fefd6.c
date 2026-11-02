/* Module: pngu3266.dll
   Function: OnInitPage
   Address: 605fefd6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNPropertySheet::OnInitPage(void) */

void __thiscall CPNPropertySheet::OnInitPage(CPNPropertySheet *this)

{
  int iVar1;
  CPNButton *pCVar2;
  CPNClientDC local_348 [484];
  char local_164 [260];
  int local_60;
  int local_5c;
  int local_58 [5];
  int local_44;
  tagRECT local_40;
  tagRECT local_30;
  tagRECT local_20;
  int local_10;
  int local_c;
  HWND local_8;
  
                    /* 0xefd6  1638  ?OnInitPage@CPNPropertySheet@@QAEXXZ */
  if (*(int *)(this + 0x118) != 0) {
    return;
  }
  *(undefined4 *)(this + 0x118) = 1;
  iVar1 = (**(code **)(*(int *)this + 0x168))(&local_60);
  if (iVar1 != 0) {
    SetWindowPos(*(HWND *)(this + 0xc),(HWND)0x0,local_60,local_5c,0,0,0x15);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  (**(code **)(*(int *)this + 0x3c))(local_58);
  local_58[4] = local_58[0] + 0xc;
  if (*(int *)(this + 0xf8) == 0) {
    return;
  }
  TermStdButtons(this);
  CPNClientDC::CPNClientDC(local_348,*(CPNWindow **)(this + 0xf8));
  (**(code **)(**(int **)(this + 0xf8) + 0x24))(local_164,0x104);
  CPNDC::GetTextExtent((CPNDC *)local_348,local_164,(CPNxSize *)&local_10);
  local_10 = local_10 + 10;
  local_8 = GetDlgItem(*(HWND *)(this + 0xc),1);
  if (local_8 == (HWND)0x0) {
    local_c = 0x17;
    local_44 = local_58[3] + -0x1d;
  }
  else {
    GetWindowRect(local_8,&local_20);
    MapWindowPoints((HWND)0x0,*(HWND *)(this + 0xc),(LPPOINT)&local_20,2);
    local_c = local_20.bottom - local_20.top;
    local_44 = local_20.top;
  }
  (**(code **)(**(int **)(this + 0xf8) + 0x58))(local_58 + 4,&local_10);
  if (local_8 != (HWND)0x0) {
    if (*(int *)(this + 0xf0) == 0) {
      pCVar2 = operator_new(0xfb);
      if (pCVar2 == (CPNButton *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = CPNButton::CPNButton(pCVar2);
      }
      *(int *)(this + 0xf0) = iVar1;
      if (iVar1 == 0) goto LAB_605ff2cd;
    }
    GetWindowTextA(local_8,local_164,0x104);
    DestroyWindow(local_8);
    (**(code **)(**(int **)(this + 0xf0) + 300))
              (1,this,local_20.left,local_20.top,local_20.right - local_20.left,
               local_20.bottom - local_20.top,0x10000600,0,local_164);
  }
  local_8 = GetDlgItem(*(HWND *)(this + 0xc),2);
  if (local_8 != (HWND)0x0) {
    GetWindowRect(local_8,&local_40);
    MapWindowPoints((HWND)0x0,*(HWND *)(this + 0xc),(LPPOINT)&local_40,2);
    if (*(int *)(this + 0xf4) == 0) {
      pCVar2 = operator_new(0xfb);
      if (pCVar2 == (CPNButton *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = CPNButton::CPNButton(pCVar2);
      }
      *(int *)(this + 0xf4) = iVar1;
      if (iVar1 == 0) goto LAB_605ff2cd;
    }
    GetWindowTextA(local_8,local_164,0x104);
    DestroyWindow(local_8);
    (**(code **)(**(int **)(this + 0xf4) + 300))
              (2,this,local_40.left,local_40.top,local_40.right - local_40.left,
               local_40.bottom - local_40.top,0x10000600,0,local_164);
  }
  local_8 = GetDlgItem(*(HWND *)(this + 0xc),9);
  if (local_8 != (HWND)0x0) {
    GetWindowRect(local_8,&local_30);
    MapWindowPoints((HWND)0x0,*(HWND *)(this + 0xc),(LPPOINT)&local_30,2);
    pCVar2 = operator_new(0xfb);
    if (pCVar2 == (CPNButton *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = CPNButton::CPNButton(pCVar2);
    }
    *(int *)(this + 0xfc) = iVar1;
    if (iVar1 != 0) {
      GetWindowTextA(local_8,local_164,0x104);
      DestroyWindow(local_8);
      (**(code **)(**(int **)(this + 0xfc) + 300))
                (9,this,local_30.left,local_30.top,local_30.right - local_30.left,
                 local_30.bottom - local_30.top,0x10000600,0,local_164);
    }
  }
LAB_605ff2cd:
  CPNClientDC::~CPNClientDC(local_348);
  return;
}


