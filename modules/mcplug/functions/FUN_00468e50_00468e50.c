/* Module: mcplug.dll
   Function: FUN_00468e50
   Address: 00468e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00468e50(void *this,uchar *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 == (uchar *)0x0) {
    return 0x80004005;
  }
  iVar1 = lstrlenA((LPCSTR)((int)this + 0x374));
  if (param_2 < iVar1 + 1U) {
    *param_1 = '\0';
    return 0x80004005;
  }
  _mbscpy(param_1,(uchar *)((int)this + 0x374));
  return 0;
}


