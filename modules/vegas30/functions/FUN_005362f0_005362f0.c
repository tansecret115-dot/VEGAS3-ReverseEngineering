/* Module: vegas30.exe
   Function: FUN_005362f0
   Address: 005362f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005362f0(uchar *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004e6c90(0xbd0);
  if (iVar1 == 0) {
    return 0x8007000e;
  }
  *(undefined1 **)(iVar1 + 0x20) = &LAB_00534360;
  *(undefined4 *)(iVar1 + 0x2c) = 0x49;
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x32;
  *(undefined4 *)(iVar1 + 0x18) = 7;
  _mbscpy((uchar *)(iVar1 + 0x30),param_1);
  _mbscpy((uchar *)(iVar1 + 0x134),"veg");
  uVar2 = FUN_004e7190(iVar1);
  return uVar2;
}


