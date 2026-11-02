/* Module: sftrkfx1.dll
   Function: FUN_5cbaac60
   Address: 5cbaac60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbaac60(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  HWND pHVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar3 = (int)(short)param_4;
  iVar1 = (int)(short)((uint)param_4 >> 0x10);
  if (param_2 < 0x203) {
    if (param_2 == 0x202) {
      FUN_5cbaa5f0(param_1);
      return 0;
    }
    if (param_2 == 0x1f) {
      pHVar2 = GetCapture();
      if (pHVar2 == (HWND)*param_1) {
        ReleaseCapture();
      }
      if ((((param_1[0x15] & 0xeU) != 0) && ((uint)param_1[0x16] < (uint)param_1[0x20])) &&
         (param_1[param_1[0x16] + 0x21] != 0)) {
        FUN_5cbaa0d0(param_1[param_1[0x16] + 0x21]);
      }
      if (-1 < param_1[0x1b]) {
        param_1[0x1b] = -1;
      }
      param_1[0x15] = param_1[0x15] & 0xffffffb1;
      param_1[0x1d] = -1;
      FUN_5cbaa380(param_1);
      FUN_5cba93c0(param_1);
      return 0;
    }
    if (param_2 == 0x200) {
      FUN_5cbaa9d0(param_1,param_3,iVar3,iVar1);
      return 0;
    }
    if (param_2 == 0x201) {
      FUN_5cbaa160(param_1,param_3,iVar3,iVar1);
      return 0;
    }
  }
  else if (param_2 == 0x203) {
    FUN_5cbaa250(param_1,param_3,iVar3,iVar1);
  }
  else if ((param_2 == 0x204) || (param_2 == 0x206)) {
    FUN_5cbaa7e0(param_1,param_3,iVar3,iVar1);
    return 0;
  }
  return 0;
}


