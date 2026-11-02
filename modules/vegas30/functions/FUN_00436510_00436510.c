/* Module: vegas30.exe
   Function: FUN_00436510
   Address: 00436510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00436510(uchar *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (uchar *)0x0) {
    return 0x80070057;
  }
  iVar1 = FUN_004e6c90(0x13c);
  if (iVar1 == 0) {
    return 0x8007000e;
  }
  if (param_3 == 10) {
    *(code **)(iVar1 + 0x20) = FUN_004363f0;
  }
  else if ((10 < param_3) && (param_3 < 0xf)) {
    *(code **)(iVar1 + 0x20) = FUN_00436480;
  }
  *(int *)(iVar1 + 0x138) = param_3;
  *(undefined4 *)(iVar1 + 0x2c) = 0x54;
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x32;
  *(undefined4 *)(iVar1 + 0x18) = 9;
  _mbscpy((uchar *)(iVar1 + 0x30),param_1);
  *(undefined4 *)(iVar1 + 0x134) = param_2;
  uVar2 = FUN_004e7190(iVar1);
  return uVar2;
}


