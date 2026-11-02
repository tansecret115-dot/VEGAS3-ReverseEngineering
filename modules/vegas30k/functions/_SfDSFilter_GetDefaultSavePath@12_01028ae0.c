/* Module: vegas30k.dll
   Function: _SfDSFilter_GetDefaultSavePath@12
   Address: 01028ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfDSFilter_GetDefaultSavePath_12(LPSTR param_1,uint param_2,int param_3)

{
  LSTATUS LVar1;
  DWORD DVar2;
  undefined4 uVar3;
  char *lpString2;
  HKEY local_80c;
  DWORD local_808 [2];
  CHAR local_800 [1023];
  undefined1 local_401;
  BYTE local_400 [1024];
  
                    /* 0x28ae0  803  _SfDSFilter_GetDefaultSavePath@12 */
  uVar3 = 1;
  if (param_1 == (LPSTR)0x0) {
    return 0x80004003;
  }
  if (param_3 == 0) {
    if (&stack0x00000000 == (undefined1 *)0x800) goto LAB_01028b51;
    lpString2 = "Software\\DirectShow\\Presets\\";
  }
  else {
    if (&stack0x00000000 == (undefined1 *)0x800) goto LAB_01028b51;
    lpString2 = "Software\\DXTransform\\Presets\\";
  }
  lstrcpynA(local_800,lpString2,0x400);
  local_401 = 0;
LAB_01028b51:
  local_80c = (HKEY)0x0;
  LVar1 = RegCreateKeyA((HKEY)&DAT_80000001,local_800,&local_80c);
  if (LVar1 != 0) {
    return 1;
  }
  local_808[1] = 0x400;
  LVar1 = RegQueryValueExA(local_80c,"DefLocation",(LPDWORD)0x0,local_808,local_400,local_808 + 1);
  if ((LVar1 == 0) && (local_808[0] == 2)) {
    DVar2 = ExpandEnvironmentStringsA((LPCSTR)local_400,param_1,param_2);
    if ((DVar2 == 0) || (param_2 < DVar2)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  RegCloseKey(local_80c);
  return uVar3;
}


