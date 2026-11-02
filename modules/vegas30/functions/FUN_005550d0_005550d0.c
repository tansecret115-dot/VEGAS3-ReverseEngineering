/* Module: vegas30.exe
   Function: FUN_005550d0
   Address: 005550d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005550d0(HWND param_1,uint param_2,HWND param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
  UINT Msg;
  LPARAM lParam;
  CHAR local_40 [64];
  
  uVar5 = param_2;
  iVar1 = *param_4;
  uVar7 = param_2 & 0xffff;
  iVar2 = GetDlgCtrlID(param_3);
  pHVar3 = (HWND)SendMessageA(param_3,0x623,0,0);
  fVar8 = (float10)*(float *)(iVar1 + 0xac);
  if ((float10)_DAT_006106d0 == fVar8) {
    param_2 = 0;
  }
  else if ((float10)_DAT_00610fd8 == fVar8) {
    param_2 = 0xfffffd30;
  }
  else {
    log2(fVar8);
    param_2 = ftol();
  }
  if (iVar2 == 0x486) {
    if ((uVar7 == 9) || (uVar4 = param_2, uVar7 == 8)) {
      GetWindowTextA(pHVar3,local_40,0x40);
      _SfTextToDoubleToken_8(local_40,0);
      uVar4 = ftol();
    }
    uVar5 = _Spinner_DefScrollProc_24(0x115,uVar5,param_3,1,2,uVar4);
    if ((int)uVar5 < -0x78) {
      uVar5 = 0xffffff88;
    }
    else {
      uVar5 = (0 < (int)uVar5) - 1 & uVar5;
    }
    if (uVar5 != param_2) {
      if (uVar5 == 0) {
        fVar8 = (float10)_DAT_006106d0;
      }
      else if ((int)uVar5 < -0x2cf) {
        fVar8 = (float10)_DAT_00610fd8;
      }
      else {
        fVar8 = (float10)_CIpow();
      }
      *(float *)(iVar1 + 0xac) = (float)fVar8;
      uVar6 = _SfGetLabeledStringFixed_16(uVar5,1,0xfffffd30,0);
      SfSetWindowText(pHVar3,&DAT_0060fa70,uVar6);
      lParam = 0;
      Msg = 0x468;
      pHVar3 = GetParent(param_1);
      SendMessageA(pHVar3,Msg,(WPARAM)param_1,lParam);
      param_4[0x19] = 1;
    }
  }
  return 1;
}


