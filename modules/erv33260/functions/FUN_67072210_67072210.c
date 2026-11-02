/* Module: erv33260.dll
   Function: FUN_67072210
   Address: 67072210
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67072210(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = param_1[1];
  param_1[4] = param_1[2];
  uVar1 = *param_1;
  if (uVar1 < 0x18) {
    uVar2 = *(uint *)(&DAT_67093078 + uVar1 * 4) & 1;
  }
  else {
    uVar2 = 0;
  }
  param_1[7] = (uint)(uVar2 == 0);
  if (uVar1 < 0x18) {
    uVar2 = *(uint *)(&DAT_67093078 + uVar1 * 4) >> 1 & 1;
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    uVar2 = param_1[1];
    param_1[8] = uVar2;
    if (uVar1 == 10) {
      param_1[10] = uVar2 >> 2;
      param_1[9] = uVar2 >> 2;
      return;
    }
    param_1[10] = uVar2 >> 1;
    param_1[9] = uVar2 >> 1;
  }
  return;
}


