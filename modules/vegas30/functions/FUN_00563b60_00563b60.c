/* Module: vegas30.exe
   Function: FUN_00563b60
   Address: 00563b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00563b60(uchar *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_004e6c90(0xa80);
  if (iVar1 == 0) {
    return 0x8007000e;
  }
  *(undefined1 **)(iVar1 + 0x20) = &LAB_00563a90;
  *(undefined4 *)(iVar1 + 0x2c) = 0x6e31;
  *(undefined1 **)(iVar1 + 0x28) = &LAB_00563c20;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xffffffdf | 0x12;
  *(undefined4 *)(iVar1 + 0x18) = 7;
  _mbscpy((uchar *)(iVar1 + 0x34),param_1);
  puVar4 = (undefined4 *)(iVar1 + 0x148);
  for (iVar3 = 0x24c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_7;
    param_7 = param_7 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(iVar1 + 0x30) = param_6;
  *(undefined4 *)(iVar1 + 0x138) = param_2;
  *(undefined4 *)(iVar1 + 0x13c) = param_3;
  *(undefined4 *)(iVar1 + 0x140) = param_4;
  *(undefined4 *)(iVar1 + 0x144) = param_5;
  *(undefined4 *)(iVar1 + 0xa78) = param_8;
  uVar2 = FUN_004e7190(iVar1);
  return uVar2;
}


