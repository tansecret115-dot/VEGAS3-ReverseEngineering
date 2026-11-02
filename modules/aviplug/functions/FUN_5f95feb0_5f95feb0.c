/* Module: aviplug.dll
   Function: FUN_5f95feb0
   Address: 5f95feb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f95feb0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  HWND pHVar3;
  uint uVar4;
  LRESULT LVar5;
  uint uVar6;
  UINT UVar7;
  WPARAM WVar8;
  LPARAM LVar9;
  uint uVar10;
  UINT local_8;
  UINT local_4;
  
  LVar9 = 0;
  WVar8 = 0;
  UVar7 = 0x147;
  pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e1);
  WVar8 = SendMessageA(pHVar3,UVar7,WVar8,LVar9);
  if (WVar8 != 0xffffffff) {
    LVar9 = 0;
    UVar7 = 0x150;
    pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e1);
    uVar4 = SendMessageA(pHVar3,UVar7,WVar8,LVar9);
    local_8 = uVar4 & 0xffff;
    local_4 = uVar4 >> 0x10;
    if ((param_1 == 0) || (uVar4 != 0xffffffff)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    LVar9 = 0;
    WVar8 = 0;
    UVar7 = 0xf0;
    pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d9);
    LVar5 = SendMessageA(pHVar3,UVar7,WVar8,LVar9);
    uVar6 = uVar6 & LVar5 == 1;
    uVar10 = uVar6;
    pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e2);
    EnableWindow(pHVar3,uVar10);
    uVar10 = uVar6;
    pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e3);
    EnableWindow(pHVar3,uVar10);
    uVar10 = uVar6;
    pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e4);
    EnableWindow(pHVar3,uVar10);
    pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e5);
    EnableWindow(pHVar3,uVar6);
    if (uVar4 == 0) {
      if ((*(int *)((int)this + 0x38) != 0) &&
         (piVar1 = *(int **)(*(int *)((int)this + 0x38) + 0x428), piVar1 != (int *)0x0)) {
        iVar2 = piVar1[0x12];
        if (iVar2 == 0) {
          iVar2 = *piVar1;
          if (iVar2 != 0) {
            local_4 = *(UINT *)(iVar2 + 8);
            local_8 = *(UINT *)(iVar2 + 4);
          }
        }
        else {
          local_4 = *(UINT *)(iVar2 + 8);
          local_8 = *(UINT *)(iVar2 + 4);
        }
      }
    }
    else if (uVar4 == 0xffffffff) {
      return;
    }
    SetDlgItemInt(*(HWND *)((int)this + 0x10),0x7e2,local_8,0);
    SetDlgItemInt(*(HWND *)((int)this + 0x10),0x7e3,local_4,0);
  }
  return;
}


