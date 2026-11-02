/* Module: vegas30.exe
   Function: FUN_00564390
   Address: 00564390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00564390(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,uchar *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_004e6c90(0xb60);
  if (iVar1 == 0) {
    return 0x8007000e;
  }
  *(code **)(iVar1 + 0x20) = FUN_00564100;
  *(undefined4 *)(iVar1 + 0x2c) = 0x6e2f;
  *(undefined1 **)(iVar1 + 0x28) = &LAB_00563c20;
  *(undefined1 **)(iVar1 + 0x24) = &LAB_00564060;
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xffffffdf | 0x12;
  *(undefined4 *)(iVar1 + 0x18) = 7;
  uVar5 = ftol();
  *(undefined8 *)(iVar1 + 0x38) = uVar5;
  uVar5 = ftol();
  *(int *)(iVar1 + 0x40) = (int)uVar5;
  *(undefined4 *)(iVar1 + 0xb50) = param_5;
  *(int *)(iVar1 + 0x44) = (int)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)(iVar1 + 0xb58) = param_7;
  *(undefined4 *)(iVar1 + 0xb5c) = param_8;
  *(undefined4 *)(iVar1 + 0xb54) = param_6;
  puVar4 = (undefined4 *)(iVar1 + 0x48);
  for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)(iVar1 + 0x118);
  for (iVar3 = 0x24c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  _mbscpy((uchar *)(iVar1 + 0xa48),param_4);
  uVar2 = FUN_004e7190(iVar1);
  return uVar2;
}


