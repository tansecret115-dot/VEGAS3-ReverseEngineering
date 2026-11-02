/* Module: vidcap30.exe
   Function: FUN_00457f70
   Address: 00457f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00457f70(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  _SfDlgShowControls_16(param_1,&DAT_005b6038,1,param_3);
  _SfDlgEnableControls_16(param_1,&DAT_005b6038,1,param_3);
  _SfDlgShowControls_16(param_1,&DAT_005b603c,0xb,param_3 == 0);
  _SfDlgEnableControls_16(param_1,&DAT_005b603c,0xb,param_3 == 0);
  if (param_3 == 0) {
    uVar1 = 0xc52e;
  }
  else {
    uVar1 = 0xc52f;
  }
  uVar1 = _SfGetString_8(DAT_005ba2a0,uVar1);
  SfSetDlgItemText(param_1,0x4e2,&DAT_00586b68,uVar1);
  DAT_005bb214 = param_3;
  return;
}


