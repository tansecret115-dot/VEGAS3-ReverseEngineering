/* Module: sfmarket2.dll
   Function: FUN_00405f30
   Address: 00405f30
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_00405f30(LPCWSTR param_1,IID *param_2,LPVOID *param_3,undefined1 *param_4)

{
  WCHAR WVar1;
  uint uVar2;
  int iVar3;
  HRESULT HVar4;
  CLSID local_10;
  
  *param_4 = 0;
  *param_3 = (LPVOID)0x0;
  HVar4 = -0x7fffbffb;
  if ((param_1 == (LPCWSTR)0x0) || (WVar1 = *param_1, WVar1 == L'\0')) {
    return 0;
  }
  if ((((WVar1 == L'M') || (WVar1 == L'm')) && ((param_1[1] == L'S' || (param_1[1] == L's')))) &&
     ((((param_1[2] == L'H' || (param_1[2] == L'h')) &&
       ((param_1[3] == L'T' || (param_1[3] == L't')))) &&
      ((((param_1[4] == L'M' || (param_1[4] == L'm')) &&
        ((param_1[5] == L'L' || (param_1[5] == L'l')))) && (param_1[6] == L':')))))) {
    HVar4 = CoCreateInstance((IID *)&DAT_004a41b0,(LPUNKNOWN)0x0,0x15,param_2,param_3);
    *param_4 = 1;
    if (-1 < HVar4) {
      return HVar4;
    }
  }
  uVar2 = lstrlenW(param_1);
  if (uVar2 < 0xff) {
    if (*param_1 == L'{') {
      iVar3 = CLSIDFromString(param_1,&local_10);
    }
    else {
      iVar3 = CLSIDFromProgID(param_1,&local_10);
    }
    if (iVar3 < 0) goto LAB_00406035;
    HVar4 = CoCreateInstance(&local_10,(LPUNKNOWN)0x0,0x15,param_2,param_3);
  }
  if (-1 < HVar4) {
    return HVar4;
  }
LAB_00406035:
  HVar4 = CoCreateInstance((IID *)&DAT_004a41a0,(LPUNKNOWN)0x0,0x15,param_2,param_3);
  *param_4 = 1;
  return HVar4;
}


