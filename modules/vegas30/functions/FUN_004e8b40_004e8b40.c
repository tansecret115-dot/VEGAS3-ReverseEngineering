/* Module: vegas30.exe
   Function: FUN_004e8b40
   Address: 004e8b40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004e8b40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_004e6c90(0xd0);
  if (iVar1 == 0) {
    return -0x7ff8fff2;
  }
  *(undefined1 **)(iVar1 + 0x20) = &LAB_004e8c20;
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xffffffdf | 0x12;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined1 **)(iVar1 + 0x28) = &LAB_004e9080;
  *(undefined4 *)(iVar1 + 0x30) = param_1;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = param_2;
  *(undefined4 *)(iVar1 + 0x40) = param_3;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined1 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0xc4) = 0;
  puVar2 = (undefined4 *)FUN_005b87b0(param_1);
  *(undefined4 *)(iVar1 + 200) = *puVar2;
  uVar3 = FUN_004ca930(DAT_00647630);
  *(undefined4 *)(iVar1 + 0xcc) = uVar3;
  DAT_0064761c = DAT_0064761c | 0x200;
  InterlockedIncrement(&DAT_0065e144);
  FUN_00456560(DAT_00647630);
  iVar1 = FUN_004e7190(iVar1);
  if (iVar1 < 0) {
    FUN_004565a0(DAT_00647630);
    DAT_0064761c = DAT_0064761c & 0xfffffdff;
    InterlockedDecrement(&DAT_0065e144);
  }
  return iVar1;
}


