/* Module: vegas30.exe
   Function: FUN_005f9530
   Address: 005f9530
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005f9530(uchar *param_1,uchar *param_2,uchar *param_3,LPCSTR param_4)

{
  uchar *_Source;
  uchar *puVar1;
  int iVar2;
  
  puVar1 = (uchar *)_SfGetFileNameExtensionPtrA_4(param_4);
  _mbscpy(param_3,puVar1);
  lstrcpynA((LPSTR)param_1,param_4,((int)puVar1 - (int)param_4) + 1);
  param_1[(int)puVar1 - (int)param_4] = '\0';
  iVar2 = lstrlenA((LPCSTR)param_1);
  *param_2 = '\0';
  puVar1 = param_1 + iVar2;
  do {
    _Source = puVar1;
    if (_Source <= param_1) break;
    puVar1 = (uchar *)CharPrevA((LPCSTR)param_1,(LPCSTR)_Source);
    iVar2 = _ismbcdigit((int)(char)*puVar1);
  } while (iVar2 != 0);
  _mbscpy(param_2,_Source);
  *_Source = '\0';
  return *param_2 != '\0';
}


