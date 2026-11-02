/* Module: vidcap30.exe
   Function: FUN_00451570
   Address: 00451570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00451570(undefined4 param_1,uchar *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004165b0(0x140);
  if (iVar1 == 0) {
    return 0x8007000e;
  }
  *(undefined1 **)(iVar1 + 0x1c) = &LAB_004515f0;
  *(undefined4 *)(iVar1 + 0x20) = 0xa1;
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x32;
  *(undefined4 *)(iVar1 + 0x28) = 6;
  _mbscpy((uchar *)(iVar1 + 0x2c),param_2);
  *(undefined4 *)(iVar1 + 0x130) = param_1;
  *(undefined4 *)(iVar1 + 0x134) = 0;
  *(undefined4 *)(iVar1 + 0x13c) = param_4;
  *(undefined4 *)(iVar1 + 0x138) = param_3;
  uVar2 = FUN_004169a0(iVar1);
  return uVar2;
}


