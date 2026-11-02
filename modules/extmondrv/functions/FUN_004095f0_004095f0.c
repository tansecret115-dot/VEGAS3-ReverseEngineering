/* Module: extmondrv.dll
   Function: FUN_004095f0
   Address: 004095f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004095f0(int param_1,undefined4 *param_2)

{
  LPSTR pCVar1;
  LPWSTR pWVar2;
  int iVar3;
  undefined4 *pv;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  pCVar1 = FUN_00412050(DAT_0045b190,*(uint *)(param_1 + 0x1c));
  pWVar2 = FUN_00411f30((int)DAT_0045b190,pCVar1);
  iVar3 = lstrlenW(pWVar2);
  uVar5 = iVar3 * 2 + 2;
  pv = CoTaskMemAlloc(uVar5);
  if (pv == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  puVar6 = pv;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *(undefined4 *)pWVar2;
    pWVar2 = pWVar2 + 2;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)puVar6 = (char)*pWVar2;
    pWVar2 = (LPWSTR)((int)pWVar2 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  pWVar2 = CoTaskMemAlloc(0x410);
  if (pWVar2 == (LPWSTR)0x0) {
    CoTaskMemFree(pv);
    return 0x8007000e;
  }
  FUN_004096e0(pWVar2,0x104);
  *param_2 = 0x1c;
  param_2[1] = pv;
  param_2[2] = 300;
  param_2[4] = 0;
  param_2[5] = pWVar2;
  param_2[6] = 0;
  param_2[3] = 0x96;
  FUN_00411110(DAT_0045b190,*(uint *)(param_1 + 0x18),FUN_00409af0,0,param_2 + 2);
  return 0;
}


