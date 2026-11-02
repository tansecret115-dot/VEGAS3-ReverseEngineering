/* Module: qt4plug.dll
   Function: FUN_5f522ff0
   Address: 5f522ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f522ff0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  HWND pHVar3;
  uint uVar4;
  UINT uValue;
  undefined4 uVar5;
  UINT UVar6;
  WPARAM WVar7;
  LPARAM LVar8;
  
  LVar8 = 0;
  WVar7 = 0;
  UVar6 = 0x147;
  pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e1);
  WVar7 = SendMessageA(pHVar3,UVar6,WVar7,LVar8);
  if (WVar7 != 0xffffffff) {
    LVar8 = 0;
    UVar6 = 0x150;
    pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e1);
    uVar4 = SendMessageA(pHVar3,UVar6,WVar7,LVar8);
    uValue = uVar4 & 0xffff;
    UVar6 = uVar4 >> 0x10;
    if ((param_1 == 0) || (uVar4 != 0xffffffff)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined4 *)((int)this + 0x78) = uVar5;
    if (uVar4 == 0) {
      if ((*(int *)((int)this + 0x34) != 0) &&
         (piVar1 = *(int **)(*(int *)((int)this + 0x34) + 0x428), piVar1 != (int *)0x0)) {
        iVar2 = piVar1[0x12];
        if (iVar2 == 0) {
          iVar2 = *piVar1;
          if (iVar2 != 0) {
            UVar6 = *(UINT *)(iVar2 + 8);
            uValue = *(UINT *)(iVar2 + 4);
          }
        }
        else {
          UVar6 = *(UINT *)(iVar2 + 8);
          uValue = *(UINT *)(iVar2 + 4);
        }
      }
    }
    else if (uVar4 == 0xffffffff) {
      return;
    }
    SetDlgItemInt(*(HWND *)((int)this + 0x10),0x7e2,uValue,0);
    SetDlgItemInt(*(HWND *)((int)this + 0x10),0x7e3,UVar6,0);
  }
  return;
}


