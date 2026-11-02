/* Module: vegas30.exe
   Function: FUN_0056e180
   Address: 0056e180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0056e180(int param_1,HDC param_2,int param_3,int param_4)

{
  RECT *lprect;
  int iVar1;
  int mode;
  HGDIOBJ pvVar2;
  COLORREF color;
  UINT UVar3;
  LPCSTR pCVar4;
  UINT c;
  undefined4 uVar5;
  int x;
  INT *pIVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int aiStack_18 [2];
  int iStack_10;
  
  if (((DAT_006487f8 == 0) || (*(int *)(param_3 + 8) != 4)) && (*(int *)(param_3 + 8) != 1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  *(uint *)(param_3 + 0xc) = iVar1 << 3 | *(uint *)(param_3 + 0xc) & 0xfffffff7;
  if (param_4 != 0) {
    FUN_0044e9f0(param_2,param_3 + 0x298,param_1 + 0x2e4,*(undefined4 *)(param_1 + 0x6c0));
  }
  mode = SetBkMode(param_2,1);
  pvVar2 = (HGDIOBJ)_SfGetUIFont_4(0x6e);
  SelectObject(param_2,pvVar2);
  lprect = (RECT *)(param_3 + 0x298);
  if ((*(byte *)(param_3 + 0xc) & 4) == 0) {
    pvVar2 = (HGDIOBJ)_SfGetUIFont_4(0x6e);
    SelectObject(param_2,pvVar2);
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    (**(code **)(**(int **)(param_3 + 4) + 0x5c))(*(int **)(param_3 + 4),&local_28);
    if (_DAT_006106d0 == (double)CONCAT44(local_24,local_28)) {
      uVar5 = 0;
    }
    else if (_DAT_00610fd8 == (double)CONCAT44(local_24,local_28)) {
      uVar5 = 0xfffffd30;
    }
    else {
      log2((float10)(double)CONCAT44(local_24,local_28));
      uVar5 = ftol();
    }
    pCVar4 = (LPCSTR)_SfGetLabeledStringFixed_16(uVar5,1,0xfffffd30,0);
    if (iVar1 == 0) {
      if (*(int *)(param_3 + 8) == 3) goto LAB_0056e4a8;
      SetTextAlign(param_2,6);
      _MeterInst_Message_16(*(undefined4 *)(param_3 + 0x470),0x61c,2,aiStack_18);
      pIVar6 = (INT *)0x0;
      iVar1 = (iStack_10 - aiStack_18[0] >> 1) + aiStack_18[0];
      UVar3 = lstrlenA(pCVar4);
      ExtTextOutA(param_2,lprect->left + iVar1,*(int *)(param_3 + 0x29c),4,lprect,pCVar4,UVar3,
                  pIVar6);
      SetTextAlign(param_2,6);
      _MeterInst_Message_16(*(undefined4 *)(param_3 + 0x470),0x61c,0x10002,aiStack_18);
      if (_DAT_006106d0 == (double)CONCAT44(local_1c,local_20)) {
        uVar5 = 0;
      }
      else if (_DAT_00610fd8 == (double)CONCAT44(local_1c,local_20)) {
        uVar5 = 0xfffffd30;
      }
      else {
        log2((float10)(double)CONCAT44(local_1c,local_20));
        uVar5 = ftol();
      }
      pCVar4 = (LPCSTR)_SfGetLabeledStringFixed_16(uVar5,1,0xfffffd30,0);
      pIVar6 = (INT *)0x0;
      UVar3 = lstrlenA(pCVar4);
      iVar1 = *(int *)(param_3 + 0x29c);
      x = lprect->left + (iStack_10 - aiStack_18[0] >> 1) + aiStack_18[0];
    }
    else {
      SetTextAlign(param_2,6);
      pIVar6 = (INT *)0x0;
      UVar3 = lstrlenA(pCVar4);
      iVar1 = *(int *)(param_3 + 0x29c);
      x = *(int *)(param_3 + 0x2a0) + lprect->left >> 1;
    }
    ExtTextOutA(param_2,x,iVar1,4,lprect,pCVar4,UVar3,pIVar6);
  }
  else {
    pvVar2 = (HGDIOBJ)_SfGetUIFont_4(100);
    SelectObject(param_2,pvVar2);
    color = SetTextColor(param_2,0xff);
    UVar3 = SetTextAlign(param_2,6);
    pCVar4 = (LPCSTR)_SfGetString_8(DAT_00647204,0x4f66);
    pIVar6 = (INT *)0x0;
    c = lstrlenA(pCVar4);
    ExtTextOutA(param_2,(*(int *)(param_3 + 0x2a0) + lprect->left) / 2,*(int *)(param_3 + 0x29c),4,
                lprect,pCVar4,c,pIVar6);
    SetTextColor(param_2,color);
    SetTextAlign(param_2,UVar3);
  }
LAB_0056e4a8:
  SetBkMode(param_2,mode);
  return;
}


