/* Module: vegas30.exe
   Function: FUN_0056e4c0
   Address: 0056e4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0056e4c0(int param_1,HDC param_2,int param_3,int param_4)

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
  int iVar6;
  INT *pIVar7;
  double local_20;
  double dStack_18;
  int aiStack_10 [2];
  int iStack_8;
  
  if (((DAT_006487f8 == 0) || (*(int *)(param_3 + 8) != 4)) && (*(int *)(param_3 + 8) != 1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  *(uint *)(param_3 + 0xc) = iVar1 << 3 | *(uint *)(param_3 + 0xc) & 0xfffffff7;
  mode = SetBkMode(param_2,1);
  lprect = (RECT *)(param_3 + 0x6a8);
  pvVar2 = (HGDIOBJ)_SfGetUIFont_4(0x6e);
  SelectObject(param_2,pvVar2);
  if ((*(byte *)(param_3 + 0xc) & 4) == 0) {
    (**(code **)(**(int **)(param_3 + 4) + 0x78))(*(int **)(param_3 + 4),&local_20);
    if (_DAT_006106d0 == local_20) {
      uVar5 = 0;
    }
    else if (_DAT_00610fd8 == local_20) {
      uVar5 = 0xfffffd30;
    }
    else {
      log2((float10)local_20);
      uVar5 = ftol();
    }
    pCVar4 = (LPCSTR)_SfGetLabeledStringFixed_16(uVar5,1,0xfffffd30,0);
    if (param_4 != 0) {
      FUN_0044e9f0(param_2,lprect,param_1 + 0x2e4,*(undefined4 *)(param_1 + 0x6c0));
    }
    SetTextAlign(param_2,6);
    _MeterInst_Message_16(*(undefined4 *)(param_3 + 0x818),0x61c,2,aiStack_10);
    pIVar7 = (INT *)0x0;
    iVar6 = (iStack_8 - aiStack_10[0] >> 1) + aiStack_10[0];
    UVar3 = lstrlenA(pCVar4);
    ExtTextOutA(param_2,lprect->left + iVar6,*(int *)(param_3 + 0x6ac),4,lprect,pCVar4,UVar3,pIVar7)
    ;
    if (iVar1 == 0) {
      SetTextAlign(param_2,6);
      if (_DAT_006106d0 == dStack_18) {
        uVar5 = 0;
      }
      else if (_DAT_00610fd8 == dStack_18) {
        uVar5 = 0xfffffd30;
      }
      else {
        log2((float10)dStack_18);
        uVar5 = ftol();
      }
      pCVar4 = (LPCSTR)_SfGetLabeledStringFixed_16(uVar5,1,0xfffffd30,0);
      _MeterInst_Message_16(*(undefined4 *)(param_3 + 0x818),0x61c,0x10002,aiStack_10);
      pIVar7 = (INT *)0x0;
      UVar3 = lstrlenA(pCVar4);
      ExtTextOutA(param_2,lprect->left + (iStack_8 - aiStack_10[0] >> 1) + aiStack_10[0],
                  *(int *)(param_3 + 0x6ac),4,lprect,pCVar4,UVar3,pIVar7);
    }
  }
  else {
    pvVar2 = (HGDIOBJ)_SfGetUIFont_4(100);
    SelectObject(param_2,pvVar2);
    color = SetTextColor(param_2,0xff);
    UVar3 = SetTextAlign(param_2,6);
    pCVar4 = (LPCSTR)_SfGetString_8(DAT_00647204,0x4f66);
    pIVar7 = (INT *)0x0;
    c = lstrlenA(pCVar4);
    ExtTextOutA(param_2,(*(int *)(param_3 + 0x6b0) + lprect->left) / 2,*(int *)(param_3 + 0x6ac),4,
                lprect,pCVar4,c,pIVar7);
    SetTextColor(param_2,color);
    SetTextAlign(param_2,UVar3);
  }
  SetBkMode(param_2,mode);
  return;
}


