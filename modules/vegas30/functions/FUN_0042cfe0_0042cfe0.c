/* Module: vegas30.exe
   Function: FUN_0042cfe0
   Address: 0042cfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042cfe0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 uVar5;
  
  puVar3 = param_1;
  for (iVar2 = 0x32a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x31e] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x84] = 0;
  param_1[0x318] = 1;
  bVar4 = DAT_0064a7bc != 0;
  param_1[800] = 1;
  param_1[799] = bVar4 + 1;
  param_1[0x321] = 0;
  param_1[0x322] = 0;
  param_1[0x317] = 2;
  uVar1 = DAT_0064b138;
  uVar5 = 1;
  param_1[0x312] = DAT_0064b138;
  uVar1 = FUN_005ba4b0(uVar1,0);
  uVar1 = FUN_005ba5c0(param_1[0x312],uVar1,uVar5);
  param_1[0x316] = uVar1;
  param_1[0x328] = DAT_0064a7b8;
  FUN_0052dfc0(param_1[0x312],param_1 + 0x86,0);
  return;
}


