/* Module: vegas30.exe
   Function: FUN_0052e080
   Address: 0052e080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052e080(HWND param_1,int param_2)

{
  float10 fVar1;
  undefined8 uVar2;
  undefined8 local_118;
  CHAR local_10c [264];
  
  GetDlgItemTextA(param_1,0x63c,local_10c,0x104);
  fVar1 = (float10)_SfTextToDoubleToken_8(local_10c,0);
  local_118 = (double)fVar1;
  if ((float10)_DAT_00610fd8 <= fVar1) {
    if (_DAT_0061a6e8 < local_118) {
      local_118 = 30.0;
    }
  }
  else {
    local_118 = 0.0;
  }
  uVar2 = ftol();
  *(undefined8 *)(param_2 + 8) = uVar2;
  _SfDoubleToText_20(local_10c,(undefined4)local_118,local_118._4_4_,1,1);
  SetDlgItemTextA(param_1,0x63c,local_10c);
  return;
}


