/* Module: vegas30k.dll
   Function: _FXPackage_BuildPath@24
   Address: 01029350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _FXPackage_BuildPath_24(void)

{
  uchar *_Dest;
  int iVar1;
  DWORD DVar2;
  uchar *in_stack_00000014;
  uchar local_c14 [255];
  undefined1 local_b15;
  uchar local_b14 [260];
  CHAR local_a10 [260];
  uchar local_90c [260];
  uchar local_808 [1024];
  OLECHAR local_408 [256];
  char local_208 [260];
  char local_104 [260];
  
                    /* 0x29350  636  _FXPackage_BuildPath@24 */
  StringFromGUID2((GUID *)&stack0x00000004,local_408,0x200);
  if ((&stack0x00000000 == (undefined1 *)0x408) || (local_408[0] != L'\0')) {
    WideCharToMultiByte(0,0,local_408,-1,(LPSTR)local_c14,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0xc14) {
    local_c14[0] = '\0';
  }
  local_b15 = 0;
  iVar1 = _FXPackage_GetDefaultSavePath_8();
  if (iVar1 != 0) {
    DVar2 = GetModuleFileNameA((HMODULE)0x0,local_a10,0x104);
    if (DVar2 == 0) {
      _mbscpy(local_808,(uchar *)"C:\\Program Files\\DirectShow Presets\\FX Packages\\");
    }
    else {
      _splitpath(local_a10,(char *)local_90c,(char *)local_b14,local_104,local_208);
      _mbscpy(local_808,local_90c);
      _mbscat(local_808,local_b14);
      _mbscat(local_808,(uchar *)"Presets\\FX Packages\\");
      _SfCreateDirectory_8();
    }
    _FXPackage_SetDefaultSavePath_4();
  }
  _Dest = in_stack_00000014;
  _mbscpy(in_stack_00000014,local_808);
  _mbscat(_Dest,local_c14);
  return 0;
}


