/* Module: vegas30.exe
   Function: FUN_00553180
   Address: 00553180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00553180(HWND param_1,int *param_2)

{
  HWND pHVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  fVar3 = (float10)*(float *)(*param_2 + 0xac);
  if ((float10)_DAT_006106d0 == fVar3) {
    uVar2 = 0;
  }
  else if ((float10)_DAT_00610fd8 == fVar3) {
    uVar2 = 0xfffffd30;
  }
  else {
    log2(fVar3);
    uVar2 = ftol();
  }
  pHVar1 = GetDlgItem(param_1,0x485);
  if (pHVar1 != (HWND)0x0) {
    uVar2 = _SfGetLabeledStringFixed_16(uVar2,1,0xfffffd30,0);
    SfSetWindowText(pHVar1,&DAT_0060fa70,uVar2);
  }
  return;
}


