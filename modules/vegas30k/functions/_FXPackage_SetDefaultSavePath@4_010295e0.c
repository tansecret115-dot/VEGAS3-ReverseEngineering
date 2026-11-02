/* Module: vegas30k.dll
   Function: _FXPackage_SetDefaultSavePath@4
   Address: 010295e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _FXPackage_SetDefaultSavePath_4(BYTE *param_1)

{
  LSTATUS LVar1;
  int iVar2;
  char *pcVar3;
  CHAR *pCVar4;
  undefined4 *puVar5;
  HKEY local_404;
  CHAR local_400 [41];
  undefined4 local_3d7;
  
                    /* 0x295e0  648  _FXPackage_SetDefaultSavePath@4 */
  if (param_1 == (BYTE *)0x0) {
    return 0x80004003;
  }
  pcVar3 = "Software\\DirectShow\\Presets\\FX Packages\\";
  pCVar4 = local_400;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pCVar4 = pCVar4 + 4;
  }
  *pCVar4 = *pcVar3;
  puVar5 = &local_3d7;
  for (iVar2 = 0xf5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  local_404 = (HKEY)0x0;
  LVar1 = RegCreateKeyA((HKEY)&DAT_80000001,local_400,&local_404);
  if (LVar1 != 0) {
    return 1;
  }
  iVar2 = lstrlenA((LPCSTR)param_1);
  LVar1 = RegSetValueExA(local_404,"DefLocation",0,2,param_1,iVar2 + 1);
  RegCloseKey(local_404);
  return (uint)(LVar1 != 0);
}


