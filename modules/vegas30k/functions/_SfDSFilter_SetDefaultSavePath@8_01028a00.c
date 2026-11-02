/* Module: vegas30k.dll
   Function: _SfDSFilter_SetDefaultSavePath@8
   Address: 01028a00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfDSFilter_SetDefaultSavePath_8(BYTE *param_1,int param_2)

{
  LSTATUS LVar1;
  int iVar2;
  char *lpString2;
  HKEY local_404;
  CHAR local_400 [1023];
  undefined1 local_1;
  
                    /* 0x28a00  808  _SfDSFilter_SetDefaultSavePath@8 */
  if (param_1 == (BYTE *)0x0) {
    return 0x80004003;
  }
  if (param_2 == 0) {
    if (&stack0x00000000 == (undefined1 *)0x400) goto LAB_01028a6e;
    lpString2 = "Software\\DirectShow\\Presets\\";
  }
  else {
    if (&stack0x00000000 == (undefined1 *)0x400) goto LAB_01028a6e;
    lpString2 = "Software\\DXTransform\\Presets\\";
  }
  lstrcpynA(local_400,lpString2,0x400);
  local_1 = 0;
LAB_01028a6e:
  local_404 = (HKEY)0x0;
  LVar1 = RegCreateKeyA((HKEY)&DAT_80000001,local_400,&local_404);
  if (LVar1 != 0) {
    return 1;
  }
  iVar2 = lstrlenA((LPCSTR)param_1);
  LVar1 = RegSetValueExA(local_404,"DefLocation",0,2,param_1,iVar2 + 1);
  RegCloseKey(local_404);
  return (uint)(LVar1 != 0);
}


