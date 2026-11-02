/* Module: vegas30.exe
   Function: FUN_005bd5b0
   Address: 005bd5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005bd5b0(uint *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  *param_1 = *param_1 | 0x100;
  if (param_2 == 3) {
    if ((DAT_0064ab90 == 2) || (DAT_0064ab90 == 0xfffffffe)) {
      iVar1 = -1;
    }
    else {
      iVar1 = 1;
    }
    param_1[4] = DAT_0064ab90;
    param_1[5] = DAT_0064ab90 * iVar1;
    param_1[6] = DAT_0064ab90 * iVar1;
    param_1[7] = DAT_0064ab90;
    return;
  }
  if ((DAT_0064ab9c == 2) || (DAT_0064ab9c == 0xfffffffe)) {
    iVar1 = -1;
  }
  else {
    iVar1 = 1;
  }
  param_1[4] = DAT_0064ab9c;
  param_1[5] = DAT_0064ab9c * iVar1;
  param_1[6] = DAT_0064ab9c * iVar1;
  param_1[7] = DAT_0064ab9c;
  return;
}


