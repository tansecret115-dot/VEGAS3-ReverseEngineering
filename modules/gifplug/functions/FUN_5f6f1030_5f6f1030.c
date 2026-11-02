/* Module: gifplug.dll
   Function: FUN_5f6f1030
   Address: 5f6f1030
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 FUN_5f6f1030(LPCSTR param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  LPCSTR lpsz;
  LPCSTR iMaxLength;
  double dVar3;
  undefined4 local_84;
  CHAR local_80 [64];
  CHAR local_40 [64];
  
  iVar2 = _ismbcspace((int)*param_1);
  while (iVar2 != 0) {
    param_1 = CharNextA(param_1);
    iVar2 = _ismbcspace((int)*param_1);
  }
  cVar1 = *param_1;
  lpsz = param_1;
  while ((cVar1 != '\0' && (iVar2 = _ismbcspace((int)*lpsz), iVar2 == 0))) {
    lpsz = CharNextA(lpsz);
    cVar1 = *lpsz;
  }
  iMaxLength = lpsz + (1 - (int)param_1);
  if ((LPCSTR)0x40 < iMaxLength) {
    iMaxLength = (LPCSTR)0x40;
  }
  lstrcpynA(local_80,param_1,(int)iMaxLength);
  local_80[(int)(iMaxLength + -1)] = '\0';
  FUN_5f6f08e0(local_80,local_40);
  dVar3 = strtod(local_40,(char **)&local_84);
  if (local_84 == local_40) {
    lpsz = param_1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = lpsz;
  }
  return (float10)dVar3;
}


