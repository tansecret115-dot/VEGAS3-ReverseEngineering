/* Module: sfcdi.dll
   Function: FUN_5bf0c090
   Address: 5bf0c090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0c090(uchar *param_1)

{
  int iVar1;
  uchar *puVar2;
  uchar local_28 [40];
  
  iVar1 = _ismbcspace((int)(char)*param_1);
  puVar2 = param_1;
  while (iVar1 != 0) {
    puVar2 = (uchar *)CharNextA((LPCSTR)puVar2);
    iVar1 = _ismbcspace((int)(char)*puVar2);
  }
  _mbscpy(local_28,puVar2);
  iVar1 = lstrlenA((LPCSTR)local_28);
  if (iVar1 != 0) {
    iVar1 = lstrlenA((LPCSTR)local_28);
    puVar2 = local_28 + iVar1;
    if (puVar2 != local_28) {
      do {
        puVar2 = (uchar *)CharPrevA((LPCSTR)local_28,(LPCSTR)puVar2);
        iVar1 = _ismbcspace((int)(char)*puVar2);
        if (iVar1 == 0) {
          puVar2 = (uchar *)CharNextA((LPCSTR)puVar2);
          break;
        }
      } while (puVar2 != local_28);
    }
    *puVar2 = '\0';
    _mbscpy(param_1,local_28);
    lstrlenA((LPCSTR)local_28);
  }
  return;
}


