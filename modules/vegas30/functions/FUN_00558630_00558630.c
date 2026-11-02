/* Module: vegas30.exe
   Function: FUN_00558630
   Address: 00558630
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00558630(undefined4 *param_1,int param_2)

{
  HWND pHVar1;
  float10 fVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_34 [52];
  
  fVar2 = (float10)_CIpow();
  *(double *)(param_1 + 0x4e) = (double)fVar2;
  uVar3 = ftol();
  *(undefined8 *)(param_1 + 0x52) = uVar3;
  if (param_2 != 0) {
    auStack_34[0] = 0;
    _SfNanoTimeToTextEx_20(auStack_34,&DAT_0064b110,param_1[0x52],(int)((ulonglong)uVar3 >> 0x20),2)
    ;
    puVar4 = auStack_34;
    pHVar1 = GetDlgItem((HWND)*param_1,0xe78);
    SfSetWindowText(pHVar1,puVar4);
  }
  return;
}


