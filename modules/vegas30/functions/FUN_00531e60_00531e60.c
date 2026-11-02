/* Module: vegas30.exe
   Function: FUN_00531e60
   Address: 00531e60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00531e60(undefined4 param_1,uchar *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004e6c90(0x144);
  if (iVar1 == 0) {
    iVar2 = -0x7ff8fff2;
  }
  else {
    *(code **)(iVar1 + 0x20) = FUN_00531590;
    *(undefined4 *)(iVar1 + 0x2c) = 0x49;
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x32;
    *(undefined4 *)(iVar1 + 0x18) = 6;
    *(undefined1 **)(iVar1 + 0x28) = &LAB_00531ef0;
    *(undefined4 *)(iVar1 + 0x30) = param_1;
    _mbscpy((uchar *)(iVar1 + 0x34),param_2);
    iVar2 = FUN_004e9f70(param_1,0x242,0);
    if (-1 < iVar2) {
      iVar2 = FUN_004eb0f0(param_1,0x26,0);
      if (-1 < iVar2) {
        iVar1 = FUN_004e7190(iVar1);
        return iVar1;
      }
    }
  }
  return iVar2;
}


