/* Module: vegas30.exe
   Function: FUN_00436360
   Address: 00436360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00436360(undefined4 param_1,uchar *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == (uchar *)0x0) {
    return 0x80070057;
  }
  FUN_005fb200(1);
  iVar1 = FUN_004e6c90(0x13c);
  if (iVar1 == 0) {
    return 0x8007000e;
  }
  *(undefined1 **)(iVar1 + 0x20) = &LAB_004362d0;
  *(undefined4 *)(iVar1 + 0x2c) = 0x55;
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x32;
  *(undefined4 *)(iVar1 + 0x18) = 10;
  _mbscpy((uchar *)(iVar1 + 0x30),param_2);
  *(undefined4 *)(iVar1 + 0x134) = param_1;
  FUN_00456560(DAT_00647630);
  uVar2 = FUN_004e7190(iVar1);
  return uVar2;
}


