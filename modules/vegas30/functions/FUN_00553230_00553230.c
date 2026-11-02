/* Module: vegas30.exe
   Function: FUN_00553230
   Address: 00553230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00553230(HWND param_1,int *param_2,int param_3)

{
  int iVar1;
  HWND hWnd;
  int iVar2;
  HWND hWnd_00;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  UINT Msg;
  LPARAM lParam;
  CHAR local_100 [256];
  
  uVar4 = 0;
  iVar1 = *param_2;
  fVar6 = (float10)*(float *)(iVar1 + 0xac);
  if ((float10)_DAT_006106d0 == fVar6) {
    uVar5 = 0;
  }
  else if ((float10)_DAT_00610fd8 == fVar6) {
    uVar5 = 0xfffffd30;
  }
  else {
    log2(fVar6);
    uVar5 = ftol();
  }
  hWnd = GetDlgItem(param_1,0x485);
  iVar2 = GetWindowTextA(hWnd,local_100,0x100);
  if (iVar2 != 0) {
    _SfTextToDoubleToken_8(local_100,0);
    uVar4 = ftol();
  }
  if (uVar4 == uVar5) goto LAB_00553346;
  if ((int)uVar4 < -0x78) {
    uVar4 = 0xffffff88;
LAB_00553306:
    fVar6 = (float10)_CIpow();
  }
  else {
    uVar4 = (0 < (int)uVar4) - 1 & uVar4;
    if (uVar4 == 0) {
      fVar6 = (float10)_DAT_006106d0;
    }
    else {
      if (-0x2d0 < (int)uVar4) goto LAB_00553306;
      fVar6 = (float10)_DAT_00610fd8;
    }
  }
  lParam = 0;
  Msg = 0x468;
  *(float *)(iVar1 + 0xac) = (float)fVar6;
  hWnd_00 = GetParent(param_1);
  SendMessageA(hWnd_00,Msg,(WPARAM)param_1,lParam);
  param_2[2] = 1;
  param_2[0x19] = 1;
LAB_00553346:
  if (param_3 == 0x200) {
    uVar3 = _SfGetLabeledStringFixed_16(uVar4,1,0xfffffd30,0);
    SfSetWindowText(hWnd,&DAT_0060fa70,uVar3);
  }
  return 1;
}


