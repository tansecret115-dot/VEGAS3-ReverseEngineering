/* Module: vfplugs.dll
   Function: FUN_00409ac0
   Address: 00409ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00409ac0(void *this,undefined4 param_1)

{
  LPWSTR lpWideCharStr;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int cchWideChar;
  
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  puVar4 = (undefined4 *)((int)this + 0x4c);
  for (iVar3 = 0xae; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  FUN_0040be00((undefined4 *)((int)this + 0x4c));
  iVar3 = lstrlenA("Text");
  cchWideChar = iVar3 + 1;
  if (*(LPCVOID *)((int)this + 0x308) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 0x308));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 0x308));
    GlobalFree(pvVar1);
    *(undefined4 *)((int)this + 0x304) = 0;
    *(undefined4 *)((int)this + 0x308) = 0;
  }
  if (0 < cchWideChar) {
    pvVar1 = GlobalAlloc(2,cchWideChar * 2);
    pvVar2 = GlobalLock(pvVar1);
    *(LPVOID *)((int)this + 0x308) = pvVar2;
  }
  *(int *)((int)this + 0x304) = cchWideChar;
  lpWideCharStr = *(LPWSTR *)((int)this + 0x308);
  MultiByteToWideChar(0,1,"Text",-1,lpWideCharStr,cchWideChar);
  lpWideCharStr[iVar3] = L'\0';
  *(undefined4 *)((int)this + 0x10) = 300;
  *(undefined4 *)((int)this + 0x14) = 300;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x29;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined ***)this = &PTR_FUN_00487514;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_00487508;
  *(undefined4 *)((int)this + 0x48) = param_1;
  return this;
}


