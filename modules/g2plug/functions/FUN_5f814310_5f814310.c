/* Module: g2plug.dll
   Function: FUN_5f814310
   Address: 5f814310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f814310(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  HWND pHVar1;
  uint nIDButton;
  UINT UVar2;
  code *pcVar3;
  CHAR *pCVar4;
  BOOL BVar5;
  SIZE_T SVar6;
  CHAR local_400 [1024];
  
  if (*(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e) == 0) {
    return 0x80070057;
  }
  if (param_2 < 0x54) {
    if (param_2 == 0x53) {
      FUN_5f8112a0(param_1,param_4,(int *)&DAT_5f86b5c8);
      return 1;
    }
    if (param_2 == 2) {
      FUN_5f814610();
      pHVar1 = GetDlgItem(param_1,0x3ed);
      FUN_5f80b140(pHVar1);
      *(undefined4 *)((int)this + 0x10) = 0;
      return 1;
    }
    if (param_2 != 0x18) {
      return 0;
    }
    if (param_3 == 0) {
      return 0;
    }
    FUN_5f8140d0(this,param_1);
    return 0;
  }
  if (param_2 == 0x110) {
    return 1;
  }
  if (param_2 != 0x111) {
    return 0;
  }
  nIDButton = param_3 & 0xffff;
  if (nIDButton < 0x3f5) {
    if (0x3f2 < nIDButton) {
      if (param_3 >> 0x10 != 0x300) {
        return 0;
      }
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    if (nIDButton < 0x3ee) {
      if (nIDButton == 0x3ed) {
        if (param_3 >> 0x10 != 1) {
          return 0;
        }
        pCVar4 = local_400;
        SVar6 = 0x400;
        pHVar1 = GetDlgItem(param_1,0x3ed);
        FUN_5f80b050(pHVar1,pCVar4,SVar6);
        SetDlgItemTextA(param_1,0x3ef,local_400);
        *(undefined4 *)((int)this + 0x24) = 1;
        return 0;
      }
      if (nIDButton != 9) {
        return 0;
      }
      return 1;
    }
    if (nIDButton < 0x3f0) {
      return 0;
    }
    if (0x3f2 < nIDButton) {
      return 0;
    }
  }
  else {
    switch(nIDButton) {
    case 0x3f5:
      SetDlgItemInt(param_1,0x3f3,0xf,0);
      SetDlgItemInt(param_1,0x3f4,10000,0);
      break;
    case 0x3f6:
      UVar2 = IsDlgButtonChecked(param_1,nIDButton);
      if (UVar2 == 0) {
        BVar5 = 0;
        pHVar1 = GetDlgItem(param_1,0x3f7);
        pcVar3 = EnableWindow_exref;
        EnableWindow(pHVar1,BVar5);
      }
      else {
        BVar5 = 1;
        pHVar1 = GetDlgItem(param_1,0x3f7);
        pcVar3 = EnableWindow_exref;
        EnableWindow(pHVar1,BVar5);
      }
      pHVar1 = GetDlgItem(param_1,0x3f8);
      (*pcVar3)(pHVar1);
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    case 0x3f7:
    case 0x3f8:
      break;
    default:
      goto switchD_5f8144e9_default;
    }
  }
  *(undefined4 *)((int)this + 0x24) = 1;
switchD_5f8144e9_default:
  return 0;
}


