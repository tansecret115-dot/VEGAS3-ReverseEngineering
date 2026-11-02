/* Module: vfplugs.dll
   Function: FUN_00403550
   Address: 00403550
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00403550(int param_1)

{
  LPWSTR pWVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  int cchWideChar;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  FUN_004014d0(param_1 + 4);
  *(undefined ***)(param_1 + 0x100) = &PTR_LAB_0048701c;
  *(undefined ***)(param_1 + 0x108) = &PTR_LAB_00486e08;
  puVar5 = (undefined4 *)(param_1 + 0x110);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0x3ff00000;
  *(undefined ***)(param_1 + 0x140) = &PTR_LAB_00487004;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1fc));
  puVar5 = (undefined4 *)(param_1 + 0x214);
  for (iVar4 = 0xae; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  FUN_0040be00((undefined4 *)(param_1 + 0x214));
  iVar4 = lstrlenA("Text");
  cchWideChar = iVar4 + 1;
  if (*(LPCVOID *)(param_1 + 0x4d0) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4d0));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4d0));
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x4cc) = 0;
    *(undefined4 *)(param_1 + 0x4d0) = 0;
  }
  if (0 < cchWideChar) {
    pvVar2 = GlobalAlloc(2,cchWideChar * 2);
    pvVar3 = GlobalLock(pvVar2);
    *(LPVOID *)(param_1 + 0x4d0) = pvVar3;
  }
  *(int *)(param_1 + 0x4cc) = cchWideChar;
  pWVar1 = *(LPWSTR *)(param_1 + 0x4d0);
  MultiByteToWideChar(0,1,"Text",-1,pWVar1,cchWideChar);
  pWVar1[iVar4] = L'\0';
  puVar5 = (undefined4 *)(param_1 + 0x4d4);
  for (iVar4 = 0xae; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x78c) = 0;
  *(undefined4 *)(param_1 + 0x790) = 0;
  FUN_0040be00((undefined4 *)(param_1 + 0x4d4));
  iVar4 = lstrlenA("Text");
  iVar4 = iVar4 + 1;
  if (*(LPCVOID *)(param_1 + 0x790) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x790));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x790));
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x78c) = 0;
    *(undefined4 *)(param_1 + 0x790) = 0;
  }
  if (0 < iVar4) {
    pvVar2 = GlobalAlloc(2,iVar4 * 2);
    pvVar3 = GlobalLock(pvVar2);
    *(LPVOID *)(param_1 + 0x790) = pvVar3;
  }
  *(int *)(param_1 + 0x78c) = iVar4;
  FUN_0040a5e0(*(LPWSTR *)(param_1 + 0x790),"Text",iVar4);
  puVar5 = (undefined4 *)(param_1 + 0x798);
  puVar6 = puVar5;
  for (iVar4 = 0xae; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(int *)(param_1 + 0xa50) = 0;
  *(undefined4 *)(param_1 + 0xa54) = 0;
  FUN_0040be00(puVar5);
  iVar4 = lstrlenA("Text");
  FUN_00403890(puVar5,iVar4 + 1);
  iVar4 = *(int *)(param_1 + 0xa50);
  pWVar1 = *(LPWSTR *)(param_1 + 0xa54);
  MultiByteToWideChar(0,1,"Text",-1,pWVar1,iVar4);
  pWVar1[iVar4 + -1] = L'\0';
  puVar6 = (undefined4 *)(param_1 + 0xa58);
  for (iVar4 = 0xae; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(int *)(param_1 + 0xd10) = 0;
  *(undefined4 *)(param_1 + 0xd14) = 0;
  FUN_0040be00((undefined4 *)(param_1 + 0xa58));
  iVar4 = lstrlenA("Text");
  FUN_00403890((void *)(param_1 + 0xa58),iVar4 + 1);
  iVar4 = *(int *)(param_1 + 0xd10);
  pWVar1 = *(LPWSTR *)(param_1 + 0xd14);
  MultiByteToWideChar(0,1,"Text",-1,pWVar1,iVar4);
  pWVar1[iVar4 + -1] = L'\0';
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  puVar6 = (undefined4 *)(param_1 + 0x148);
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x184);
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x1c0);
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  FUN_004111a0((void *)(param_1 + 4),0x140,0xf0);
  FUN_0040be00((undefined4 *)(param_1 + 0x214));
  FUN_0040be00(puVar5);
  FUN_0040be00((undefined4 *)(param_1 + 0xa58));
  *(undefined4 *)(param_1 + 0xd20) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0xd18) = 0;
  *(undefined4 *)(param_1 + 0xd24) = 0;
  *(undefined4 *)(param_1 + 0xd28) = 0;
  *(undefined4 *)(param_1 + 0x794) = 1;
  *(undefined4 *)(param_1 + 0xd2c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0xb;
  *(undefined4 *)(param_1 + 0x11c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0x80;
  return param_1;
}


