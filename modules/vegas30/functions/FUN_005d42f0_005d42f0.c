/* Module: vegas30.exe
   Function: FUN_005d42f0
   Address: 005d42f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d42f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x230);
  puVar3[0x204] = 1;
  _SfSummary_Copy_8(param_1 + 0x234,puVar3 + 0x159);
  puVar2 = puVar3;
  puVar4 = (undefined4 *)(param_1 + 0x23c);
  for (iVar1 = 0x159; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = puVar3;
  puVar4 = (undefined4 *)(param_1 + 0x7a0);
  for (iVar1 = 0x159; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0xd04) = puVar3[0x15b];
  puVar2 = puVar3 + 0x15c;
  puVar4 = (undefined4 *)(param_1 + 0xd08);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  _mbscpy((uchar *)(param_1 + 0x24),(uchar *)(puVar3 + 0x166));
  *(undefined4 *)(param_1 + 0xd6c) = puVar3[0x1a7];
  _mbscpy((uchar *)(param_1 + 0x128),(uchar *)(puVar3 + 0x1a8));
  _SfLoadString_16(DAT_00647204,0x4c,param_1 + 4,0x20);
  *(undefined4 *)(param_1 + 0xd60) = puVar3[0x1ea];
  *(undefined4 *)(param_1 + 0xd64) = puVar3[0x1eb];
  *(undefined4 *)(param_1 + 0xd68) = puVar3[0x1e9];
  puVar3 = puVar3 + 0x1ec;
  puVar2 = (undefined4 *)(param_1 + 0xd70);
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xd30) = 1;
  return;
}


