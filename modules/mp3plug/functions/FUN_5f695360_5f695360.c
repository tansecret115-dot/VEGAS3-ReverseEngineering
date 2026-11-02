/* Module: mp3plug.dll
   Function: FUN_5f695360
   Address: 5f695360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f695360(int param_1,undefined4 *param_2)

{
  int *piVar1;
  LPSTR pCVar2;
  LPWSTR pWVar3;
  int iVar4;
  undefined4 *pv;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  pCVar2 = FUN_5f69e250(DAT_5f74d488,*(uint *)(param_1 + 0x1c));
  pWVar3 = FUN_5f69e130((int)DAT_5f74d488,pCVar2);
  iVar4 = lstrlenW(pWVar3);
  uVar6 = iVar4 * 2 + 2;
  pv = CoTaskMemAlloc(uVar6);
  if (pv == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  puVar7 = pv;
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = *(undefined4 *)pWVar3;
    pWVar3 = pWVar3 + 2;
    puVar7 = puVar7 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)puVar7 = (char)*pWVar3;
    pWVar3 = (LPWSTR)((int)pWVar3 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  pWVar3 = CoTaskMemAlloc(0x410);
  if (pWVar3 == (LPWSTR)0x0) {
    CoTaskMemFree(pv);
    return 0x8007000e;
  }
  FUN_5f687ed0((BYTE *)(pWVar3 + 0x104),0x104);
  MultiByteToWideChar(0,1,(LPCSTR)(pWVar3 + 0x104),-1,pWVar3,0x104);
  piVar1 = param_2 + 2;
  pWVar3[0x103] = L'\0';
  *param_2 = 0x1c;
  param_2[1] = pv;
  param_2[4] = 0;
  param_2[5] = pWVar3;
  param_2[6] = 0;
  *piVar1 = 300;
  param_2[3] = 0x96;
  if (*(uint *)(param_1 + 0x18) != 0x3f5) {
    FUN_5f69d310(DAT_5f74d488,*(uint *)(param_1 + 0x18),FUN_5f6959a0,0,piVar1);
    return 0;
  }
  FUN_5f69d310(DAT_5f74d488,0x3f5,FUN_5f695a00,0,piVar1);
  return 0;
}


