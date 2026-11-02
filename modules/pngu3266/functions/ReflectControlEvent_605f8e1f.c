/* Module: pngu3266.dll
   Function: ReflectControlEvent
   Address: 605f8e1f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: int __thiscall CPNWindow::ReflectControlEvent(class CPNEvent &) */

int __thiscall CPNWindow::ReflectControlEvent(CPNWindow *this,CPNEvent *param_1)

{
  uint uVar1;
  LRESULT LVar2;
  CPNWindow *pCVar3;
  int iVar4;
  HWND hWnd;
  
                    /* 0x8e1f  1742  ?ReflectControlEvent@CPNWindow@@AAEHAAVCPNEvent@@@Z */
  pCVar3 = (CPNWindow *)0x0;
  uVar1 = *(uint *)(param_1 + 0x24);
  iVar4 = 0;
  hWnd = (HWND)0x0;
  if (uVar1 < 0x3a) {
    if (uVar1 == 0x39) {
      if (**(int **)(param_1 + 0x20) != 1) {
        hWnd = (HWND)(*(int **)(param_1 + 0x20))[2];
      }
      goto LAB_605f8ead;
    }
    if (uVar1 == 0x2b) {
      if (**(int **)(param_1 + 0x20) != 1) {
        hWnd = (HWND)(*(int **)(param_1 + 0x20))[5];
      }
      goto LAB_605f8ead;
    }
    if (uVar1 == 0x2c) {
      if (**(int **)(param_1 + 0x20) != 1) {
        hWnd = GetDlgItem(*(HWND *)(this + 0xc),*(int *)(param_1 + 0x18));
      }
      goto LAB_605f8ead;
    }
    if (uVar1 == 0x2d) {
      if (**(int **)(param_1 + 0x20) != 1) {
        hWnd = (HWND)(*(int **)(param_1 + 0x20))[3];
      }
      goto LAB_605f8ead;
    }
    if ((uVar1 < 0x2e) || (0x2f < uVar1)) goto LAB_605f8ead;
  }
  else if ((uVar1 < 0x132) || ((0x135 < uVar1 && ((uVar1 < 0x137 || (0x138 < uVar1))))))
  goto LAB_605f8ead;
  hWnd = *(HWND *)(param_1 + 0x20);
LAB_605f8ead:
  if ((hWnd != (HWND)0x0) && (LVar2 = ::SendMessageA(hWnd,600,0,0), LVar2 != 0)) {
    pCVar3 = GetPNWindow(hWnd);
  }
  if (pCVar3 != (CPNWindow *)0x0) {
    *(CPNWindow **)(param_1 + 0x10) = pCVar3;
    iVar4 = (**(code **)(*(int *)pCVar3 + 0xdc))(param_1);
    (**(code **)(*(int *)pCVar3 + 4))(param_1);
  }
  return iVar4;
}


