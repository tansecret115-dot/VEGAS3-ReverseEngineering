/* Module: vegas30k.dll
   Function: _FXPackage_GetDefaultSavePath@8
   Address: 010296a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _FXPackage_GetDefaultSavePath_8(LPSTR param_1,uint param_2)

{
  LSTATUS LVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  CHAR *pCVar6;
  undefined4 *puVar7;
  HKEY local_80c;
  DWORD local_808 [2];
  CHAR local_800 [41];
  undefined4 local_7d7;
  BYTE local_400 [1024];
  
                    /* 0x296a0  639  _FXPackage_GetDefaultSavePath@8 */
  uVar4 = 1;
  if (param_1 == (LPSTR)0x0) {
    return 0x80004003;
  }
  pcVar5 = "Software\\DirectShow\\Presets\\FX Packages\\";
  pCVar6 = local_800;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar6 = pCVar6 + 4;
  }
  *pCVar6 = *pcVar5;
  local_80c = (HKEY)0x0;
  puVar7 = &local_7d7;
  for (iVar3 = 0xf5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  *(undefined1 *)((int)puVar7 + 2) = 0;
  LVar1 = RegCreateKeyA((HKEY)&DAT_80000001,local_800,&local_80c);
  if (LVar1 != 0) {
    return 1;
  }
  local_808[1] = 0x400;
  LVar1 = RegQueryValueExA(local_80c,"DefLocation",(LPDWORD)0x0,local_808,local_400,local_808 + 1);
  if ((LVar1 == 0) && (local_808[0] == 2)) {
    DVar2 = ExpandEnvironmentStringsA((LPCSTR)local_400,param_1,param_2);
    if ((DVar2 == 0) || (param_2 < DVar2)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  RegCloseKey(local_80c);
  return uVar4;
}


