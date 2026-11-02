/* Module: vegas30.exe
   Function: FUN_00535250
   Address: 00535250
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00535250(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = FUN_004e6c90(0xbd0);
  if (iVar2 == 0) {
    FUN_00532510(param_2);
    return -0x7ff8fff2;
  }
  FUN_005351d0(param_1,param_2);
  *(undefined1 **)(iVar2 + 0x20) = &LAB_00534360;
  *(undefined4 *)(iVar2 + 0x2c) = 0xc3;
  *(code **)(iVar2 + 0x28) = FUN_00534270;
  if (param_2[0x24a] == 0) {
    *(uint *)(iVar2 + 0x24) = ~-(uint)((DAT_0064761c & 0x10) != 0) & 0x5342c0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x24) = param_2[0x24a];
  }
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x32;
  *(undefined4 *)(iVar2 + 0x18) = 7;
  _mbscpy((uchar *)(iVar2 + 0x30),(uchar *)(param_2 + 3));
  puVar1 = (undefined4 *)(iVar2 + 0x298);
  *(undefined4 *)(iVar2 + 0x290) = param_1;
  *(undefined4 *)(iVar2 + 0xbc8) = 0;
  puVar4 = param_2;
  puVar5 = puVar1;
  for (iVar3 = 0x24c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (iVar3 = 0x24c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_2 = 0;
    param_2 = param_2 + 1;
  }
  iVar3 = FUN_00534f70(param_1,puVar1);
  if (iVar3 < 0) {
    FUN_00532510(puVar1);
    return iVar3;
  }
  FUN_005ec620();
  FUN_005b83b0(param_1,1);
  FUN_005ed570();
  FUN_005b84d0(param_1,1);
  FUN_004055e0();
  InterlockedIncrement(&DAT_0065e144);
  iVar2 = FUN_004e7190(iVar2);
  if (iVar2 < 0) {
    FUN_00532510(puVar1);
    FUN_004055f0();
    InterlockedDecrement(&DAT_0065e144);
  }
  return iVar2;
}


