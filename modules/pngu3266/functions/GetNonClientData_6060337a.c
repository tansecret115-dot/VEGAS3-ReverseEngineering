/* Module: pngu3266.dll
   Function: GetNonClientData
   Address: 6060337a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNCustomFrame::GetNonClientData(void) */

void __thiscall CPNCustomFrame::GetNonClientData(CPNCustomFrame *this)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  HMENU hMenu;
  LPSTR lpString;
  CPNFont *pCVar6;
  CPNxSize *pCVar7;
  int iVar8;
  UINT flags;
  CPNWindowDC local_21c [484];
  tagRECT local_38;
  CPNxSize local_28 [4];
  int local_24;
  int local_20;
  char *local_1c [2];
  int local_14;
  CPNxSize local_10 [4];
  CPNFont *local_c;
  int local_8;
  
                    /* 0x1337a  1278  ?GetNonClientData@CPNCustomFrame@@UAEXXZ */
  if (*(int *)(this + 0x18) == 0) {
    pvVar2 = operator_new(0x8c);
    *(void **)(this + 0x18) = pvVar2;
  }
  XPNWindow::GetWindowRect(*(XPNWindow **)(this + 8),(CPNxRect *)(*(int *)(this + 0x18) + 0x54));
  piVar1 = (int *)(*(int *)(this + 0x18) + 0x5c);
  *piVar1 = *piVar1 - *(int *)(*(int *)(this + 0x18) + 0x54);
  piVar1 = (int *)(*(int *)(this + 0x18) + 0x60);
  *piVar1 = *piVar1 - *(int *)(*(int *)(this + 0x18) + 0x58);
  *(undefined4 *)(*(int *)(this + 0x18) + 0x58) = 0;
  *(undefined4 *)(*(int *)(this + 0x18) + 0x54) = 0;
  local_24 = GetSystemMetrics(4);
  uVar3 = GetWindowLongA(*(HWND *)(this + 0x14),-0x10);
  if ((uVar3 & 0x40000) == 0) {
    local_8 = GetSystemMetrics(7);
    iVar8 = 8;
  }
  else {
    local_8 = GetSystemMetrics(0x20);
    iVar8 = 0x21;
  }
  local_20 = GetSystemMetrics(iVar8);
  iVar4 = GetSystemMetrics(0x1e);
  local_14 = iVar4;
  local_c = (CPNFont *)GetSystemMetrics(0x1f);
  iVar5 = GetSystemMetrics(0xf);
  *(int *)(*(int *)(this + 0x18) + 0x34) = *(int *)(*(int *)(this + 0x18) + 0x54) + local_8;
  *(int *)(*(int *)(this + 0x18) + 0x38) = *(int *)(*(int *)(this + 0x18) + 0x58) + local_20;
  *(int *)(*(int *)(this + 0x18) + 0x3c) = *(int *)(*(int *)(this + 0x18) + 0x5c) - local_8;
  *(int *)(*(int *)(this + 0x18) + 0x40) = *(int *)(*(int *)(this + 0x18) + 0x38) + -1 + local_24;
  iVar8 = *(int *)(this + 0x18);
  *(undefined4 *)(iVar8 + 4) = 0;
  *(undefined4 *)(iVar8 + 8) = 0;
  *(int *)(iVar8 + 0xc) = iVar4;
  *(CPNFont **)(iVar8 + 0x10) = local_c;
  iVar8 = *(int *)(this + 0x18);
  piVar1 = (int *)(iVar8 + 8);
  *piVar1 = *piVar1 + 2;
  piVar1 = (int *)(iVar8 + 0x10);
  *piVar1 = *piVar1 + -2;
  *(int *)(*(int *)(this + 0x18) + 0xc) = *(int *)(*(int *)(this + 0x18) + 0xc) + -2;
  iVar8 = *(int *)(this + 0x18);
  *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + *(int *)(iVar8 + 0x38);
  *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + *(int *)(iVar8 + 0x38);
  iVar4 = *(int *)(iVar8 + 0x3c) - iVar4;
  *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + iVar4;
  *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + iVar4;
  iVar8 = *(int *)(this + 0x18);
  *(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)(iVar8 + 4);
  *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar8 + 8);
  *(undefined4 *)(iVar8 + 0x2c) = *(undefined4 *)(iVar8 + 0xc);
  *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar8 + 0x10);
  iVar8 = *(int *)(this + 0x18);
  piVar1 = (int *)(iVar8 + 0x24);
  *piVar1 = *piVar1 + -local_14;
  piVar1 = (int *)(iVar8 + 0x2c);
  *piVar1 = *piVar1 + -local_14;
  iVar8 = *(int *)(this + 0x18);
  *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(iVar8 + 0x24);
  *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar8 + 0x28);
  *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(iVar8 + 0x2c);
  *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar8 + 0x30);
  iVar8 = *(int *)(this + 0x18);
  piVar1 = (int *)(iVar8 + 0x14);
  *piVar1 = *piVar1 + (2 - local_14);
  piVar1 = (int *)(iVar8 + 0x1c);
  *piVar1 = *piVar1 + (2 - local_14);
  *(undefined4 *)(*(int *)(this + 0x18) + 0x44) = *(undefined4 *)(*(int *)(this + 0x18) + 0x34);
  *(undefined4 *)(*(int *)(this + 0x18) + 0x4c) = *(undefined4 *)(*(int *)(this + 0x18) + 0x3c);
  *(undefined4 *)(*(int *)(this + 0x18) + 0x48) = *(undefined4 *)(*(int *)(this + 0x18) + 0x40);
  *(int *)(*(int *)(this + 0x18) + 0x50) = *(int *)(*(int *)(this + 0x18) + 0x48) + iVar5;
  *(undefined4 *)(*(int *)(this + 0x18) + 0x6c) = *(undefined4 *)(*(int *)(this + 0x18) + 0x34);
  *(undefined4 *)(*(int *)(this + 0x18) + 0x70) = *(undefined4 *)(*(int *)(this + 0x18) + 0x38);
  *(int *)(*(int *)(this + 0x18) + 0x74) = *(int *)(*(int *)(this + 0x18) + 0x34) + 8;
  *(int *)(*(int *)(this + 0x18) + 0x78) = *(int *)(*(int *)(this + 0x18) + 0x38) + 6;
  hMenu = GetMenu(*(HWND *)(this + 0x14));
  if (hMenu == (HMENU)0x0) {
    **(undefined4 **)(this + 0x18) = 3;
  }
  else {
    FUN_60618bb0(local_1c);
    GetMenuItemRect(*(HWND *)(this + 0x14),hMenu,1,&local_38);
    CPNWindowDC::CPNWindowDC(local_21c,*(CPNWindow **)(this + 8));
    iVar8 = GetMenuStringA(hMenu,1,(LPSTR)0x0,0,0x400);
    iVar8 = iVar8 * 2 + 1;
    flags = 0x400;
    lpString = (LPSTR)FUN_60619190(local_1c,iVar8);
    GetMenuStringA(hMenu,1,lpString,iVar8,flags);
    FUN_60619210(local_1c,-1);
    pCVar6 = CPNDrawHelper::GetMenuFont();
    if (&stack0x00000000 != (undefined1 *)0x21c) {
      local_c = XPNDC::SetFont((XPNDC *)local_21c,pCVar6);
    }
    CPNDC::GetTextExtent((CPNDC *)local_21c,local_1c[0],local_28);
    **(undefined4 **)(this + 0x18) = 5;
    if (&stack0x00000000 != (undefined1 *)0x21c) {
      XPNDC::SetFont((XPNDC *)local_21c,local_c);
    }
    CPNWindowDC::~CPNWindowDC(local_21c);
    FUN_60618cd0((int *)local_1c);
  }
  if ((*(int **)(this + 0x1c) != (int *)0x0) && (*(int *)(this + 0x20) != 0)) {
    (**(code **)(**(int **)(this + 0x1c) + 0x40))(local_28);
    (**(code **)(**(int **)(this + 0x20) + 0x40))(local_10);
    iVar8 = *(int *)(this + 0x18);
    pCVar7 = local_28;
    *(uint *)(iVar8 + 100) =
         (uint)(((*(int *)(iVar8 + 0x40) - *(int *)(iVar8 + 0x48)) - *(int *)(iVar8 + 0x38)) +
                *(int *)(iVar8 + 0x50) <= (int)local_c);
    iVar8 = *(int *)(this + 0x18);
    if (*(int *)(iVar8 + 100) == 0) {
      pCVar7 = local_10;
    }
    iVar4 = *(int *)pCVar7;
    iVar5 = *(int *)(pCVar7 + 4);
    *(int *)(iVar8 + 0x7c) = *(int *)(iVar8 + 0x74) + 3;
    *(undefined4 *)(*(int *)(this + 0x18) + 0x84) = *(undefined4 *)(*(int *)(this + 0x18) + 0x7c);
    iVar8 = *(int *)(this + 0x18);
    *(int *)(iVar8 + 0x80) =
         ((*(int *)(iVar8 + 0x50) - *(int *)(iVar8 + 0x38)) / 2 - iVar5 / 2) +
         *(int *)(iVar8 + 0x38);
    *(undefined4 *)(*(int *)(this + 0x18) + 0x88) = *(undefined4 *)(*(int *)(this + 0x18) + 0x80);
    *(int *)(*(int *)(this + 0x18) + 0x84) = *(int *)(*(int *)(this + 0x18) + 0x84) + iVar4;
    *(int *)(*(int *)(this + 0x18) + 0x88) = *(int *)(*(int *)(this + 0x18) + 0x88) + iVar5;
  }
  return;
}


