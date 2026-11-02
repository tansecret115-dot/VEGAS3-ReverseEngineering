/* Module: qt4plug.dll
   Function: FUN_5f521710
   Address: 5f521710
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5f521710(void *this,int param_1)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  uchar *puVar5;
  HWND pHVar6;
  int iVar7;
  uint wParam;
  UINT UVar8;
  WPARAM wParam_00;
  LPARAM LVar9;
  undefined1 uStack_9;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  uint uStack_4;
  
  piVar3 = (int *)FUN_5f57aed0();
  iVar1 = param_1;
  iVar7 = *(int *)((int)this + 0x80);
  uStack_4 = uStack_4 & 0xffffff00;
  if ((param_1 == 0x53565131) || (param_1 == 0x53565133)) {
    iVar4 = FUN_5f5782f0();
    if ((iVar4 != 0) &&
       ((iVar4 = FUN_5f5782f0(), iVar4 != 0 && (sVar2 = FUN_5f578190(), sVar2 == 0)))) {
      FUN_5f5155f0(piVar3,iVar1,(undefined1 *)&uStack_4,&uStack_5,&uStack_6,&uStack_7,&uStack_8,
                   &uStack_9,(undefined1 *)&param_1,0);
      if ((char)param_1 != '\0') {
        FUN_5f521670((int)piVar3);
        puVar5 = (uchar *)FUN_5f527a90(DAT_5f5a4158,0x201);
        FUN_5f52cdd0(*(HWND *)((int)this + 0x10),0x30,puVar5);
      }
    }
    FUN_5f57b390();
  }
  *(uint *)((int)this + 0x80) = uStack_4 & 0xff;
  if ((uStack_4 & 0xff) != 0) {
    LVar9 = 0;
    wParam_00 = 1;
    UVar8 = 0xf1;
    pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f0);
    SendMessageA(pHVar6,UVar8,wParam_00,LVar9);
    SetDlgItemTextA(*(HWND *)((int)this + 0x10),0x3f1,"auto");
    return;
  }
  if (iVar7 != 0) {
    LVar9 = 0;
    wParam = (uint)(*(int *)((int)this + 0x6c) != 0);
    UVar8 = 0xf1;
    pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f0);
    SendMessageA(pHVar6,UVar8,wParam,LVar9);
    iVar7 = ftol();
    if (iVar7 < 0) {
      UVar8 = 0;
    }
    else {
      iVar7 = ftol();
      if (iVar7 < 0x8000) {
        UVar8 = ftol();
      }
      else {
        UVar8 = 0x7fff;
      }
    }
    SetDlgItemInt(*(HWND *)((int)this + 0x10),0x3f1,UVar8,0);
  }
  return;
}


