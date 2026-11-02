/* Module: vfplugs.dll
   Function: FUN_00405b00
   Address: 00405b00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00405b00(int param_1)

{
  LPWSTR lpWideCharStr;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int cchWideChar;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x4c);
  for (iVar3 = 0xae; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  FUN_0040be00((undefined4 *)(param_1 + 0x4c));
  iVar3 = lstrlenA("Text");
  cchWideChar = iVar3 + 1;
  if (*(LPCVOID *)(param_1 + 0x308) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x308));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x308));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
  }
  if (0 < cchWideChar) {
    pvVar1 = GlobalAlloc(2,cchWideChar * 2);
    pvVar2 = GlobalLock(pvVar1);
    *(LPVOID *)(param_1 + 0x308) = pvVar2;
  }
  *(int *)(param_1 + 0x304) = cchWideChar;
  lpWideCharStr = *(LPWSTR *)(param_1 + 0x308);
  MultiByteToWideChar(0,1,"Text",-1,lpWideCharStr,cchWideChar);
  lpWideCharStr[iVar3] = L'\0';
  *(undefined4 *)(param_1 + 0x10) = 300;
  *(undefined4 *)(param_1 + 0x14) = 300;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x29;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return param_1;
}


