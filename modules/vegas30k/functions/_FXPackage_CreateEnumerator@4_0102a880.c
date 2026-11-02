/* Module: vegas30k.dll
   Function: _FXPackage_CreateEnumerator@4
   Address: 0102a880
   Source: Ghidra pseudocode (Stage 10 batch) */


int _FXPackage_CreateEnumerator_4(undefined4 *param_1)

{
  LSTATUS LVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  HKEY local_404;
  CHAR local_400 [41];
  undefined4 local_3d7;
  
  *param_1 = 0;
  pcVar6 = "Software\\DirectShow\\Presets\\FX Packages\\";
  pCVar7 = local_400;
                    /* 0x2a880  637  _FXPackage_CreateEnumerator@4 */
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *pCVar7 = *pcVar6;
  local_404 = (HKEY)0x0;
  puVar4 = &local_3d7;
  for (iVar5 = 0xf5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000001,local_400,0,0x20019,&local_404);
  if (LVar1 != 0) {
    LVar1 = RegCreateKeyA((HKEY)&DAT_80000001,local_400,&local_404);
    if (LVar1 != 0) {
      return -0x7fffbffb;
    }
  }
  pvVar2 = GlobalAlloc(0x40,0x14);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 == (LPVOID)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_0102a980(local_404);
  }
  iVar5 = (**(code **)*puVar4)(puVar4,&DAT_011d9c50,param_1);
  if ((iVar5 < 0) && (puVar4 != (undefined4 *)0x0)) {
    FUN_0102a9a0();
    pvVar2 = GlobalHandle(puVar4);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(puVar4);
    GlobalFree(pvVar2);
  }
  return iVar5;
}


