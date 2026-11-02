/* Module: sfcdi.dll
   Function: FUN_5bf19bf0
   Address: 5bf19bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5bf19bf0(void *this,LPWSTR param_1)

{
  int iVar1;
  LPWSTR pWVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x98) != 0) {
    iVar3 = 0x1a;
    pWVar2 = param_1;
    iVar1 = lstrlenA((LPCSTR)((int)this + 0x9c));
    MultiByteToWideChar(0,0,(LPCSTR)((int)this + 0x9c),iVar1 + 1,pWVar2,iVar3);
  }
  if (*(int *)((int)this + 0x70) != 0) {
    pWVar2 = param_1 + 0xd;
    iVar3 = 0x1c;
    iVar1 = lstrlenA((LPCSTR)((int)this + 0x74));
    MultiByteToWideChar(0,0,(LPCSTR)((int)this + 0x74),iVar1 + 1,pWVar2,iVar3);
  }
  if (*(int *)((int)this + 0x84) != 0) {
    pWVar2 = param_1 + 0x1b;
    iVar3 = 0x1a;
    iVar1 = lstrlenA((LPCSTR)((int)this + 0x88));
    MultiByteToWideChar(0,0,(LPCSTR)((int)this + 0x88),iVar1 + 1,pWVar2,iVar3);
  }
  return 0;
}


