/* Module: vegas30.exe
   Function: FUN_005e4920
   Address: 005e4920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e4920(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  LPCWSTR lpString;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  uVar1 = _SfGetString_8(DAT_00647204,*(undefined4 *)(param_1 + 0x1c));
  lpString = (LPCWSTR)_SfGetWideFromPrintString_8(DAT_00647204,uVar1);
  iVar2 = lstrlenW(lpString);
  uVar5 = iVar2 * 2 + 2;
  puVar3 = CoTaskMemAlloc(uVar5);
  if (puVar3 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  puVar6 = puVar3;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *(undefined4 *)lpString;
    lpString = lpString + 2;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)puVar6 = (char)*lpString;
    lpString = (LPCWSTR)((int)lpString + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  param_2[1] = puVar3;
  *param_2 = 0x1c;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[2] = 300;
  param_2[3] = 0x96;
  _SfGetDialogSize_20(DAT_00647204,*(undefined4 *)(param_1 + 0x18),FUN_005e4dc0,0,param_2 + 2);
  return 0;
}


