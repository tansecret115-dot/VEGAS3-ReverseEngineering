/* Module: vegas30.exe
   Function: FUN_005d30f0
   Address: 005d30f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d30f0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = DAT_00648684;
  param_1[1] = DAT_0064a58c;
  _mbscpy((uchar *)(param_1 + 2),&DAT_0064a590);
  param_1[0x43] = DAT_0064a69c;
  param_1[0x44] = 0;
  uVar1 = DAT_00648688;
  param_1[0x46] = 0;
  param_1[0x45] = uVar1;
  param_1[0x47] = 1;
  param_1[0x48] = DAT_00648508;
  param_1[0x49] = DAT_00648504;
  param_1[0x4a] = DAT_0064a924;
  puVar3 = param_1 + 0x4b;
  for (iVar2 = 0x7f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0x80000000;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0xcb;
  for (iVar2 = 0x7f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x14a] = DAT_0064a924;
  param_1[0x14b] = 0;
  param_1[0x150] = FUN_005895a0;
  param_1[0x151] = &DAT_0064b15c;
  param_1[0x152] = &LAB_00589c20;
  param_1[0x153] = &DAT_0064b15c;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  return 0;
}


