/* Module: vegas30.exe
   Function: FUN_00558f30
   Address: 00558f30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00558f30(undefined4 *param_1)

{
  HWND hDlg;
  undefined4 uVar1;
  LPCSTR lpString;
  float10 fVar2;
  
  hDlg = (HWND)*param_1;
  _SfDlgEnableControls_16(hDlg,&DAT_00645404,3,(uint)param_1[0x49] >> 3 & 1);
  fVar2 = (float10)(float)param_1[0x4a];
  if ((float10)_DAT_006106d0 == fVar2) {
    uVar1 = 0;
  }
  else if ((float10)_DAT_00610fd8 == fVar2) {
    uVar1 = 0xfffffd30;
  }
  else {
    log2(fVar2);
    uVar1 = ftol();
  }
  lpString = (LPCSTR)_SfGetLabeledStringFixed_16(uVar1,1,0xfffffd30,&DAT_00612b14);
  SetDlgItemTextA(hDlg,0x48e,lpString);
  return;
}


