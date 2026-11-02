/* Module: vegas30.exe
   Function: FUN_005754e0
   Address: 005754e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_005754e0(void)

{
  undefined1 *puVar1;
  UINT uMode;
  LPCSTR lpMultiByteStr;
  int iVar2;
  CHAR local_500 [260];
  WCHAR local_3fc [259];
  undefined2 local_1f6;
  WCHAR local_1f4 [99];
  undefined2 local_12e;
  UINT local_12c;
  uchar local_128 [260];
  int *local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0061b990;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffae4;
  iVar2 = 0;
  local_24 = (int *)0x0;
  ExceptionList = &local_14;
  puVar1 = &stack0xfffffae4;
  if (DAT_00659e40 == (HMODULE)0x0) {
    ExceptionList = &local_14;
    _SfGetModulePath_12(0,local_128,0x104);
    _mbscat(local_128,(uchar *)"sfpublish.dll");
    local_8 = 0;
    uMode = SetErrorMode(0x8000);
    local_12c = uMode;
    DAT_00659e40 = LoadLibraryA((LPCSTR)local_128);
    SetErrorMode(uMode);
    puVar1 = local_1c;
    if (DAT_00659e40 == (HMODULE)0x0) {
      iVar2 = -0x7ffb1ff9;
      local_20 = 0x8004e007;
    }
  }
  local_1c = puVar1;
  local_8 = 0xffffffff;
  if ((iVar2 < 0) ||
     (iVar2 = _SfDllCreateInstance_20(DAT_00659e40,&DAT_0061b920,0,&DAT_0061b8f0,&local_24),
     iVar2 < 0)) goto LAB_00575697;
  lpMultiByteStr = (LPCSTR)FUN_0043cf70(2);
  MultiByteToWideChar(0,1,lpMultiByteStr,-1,local_1f4,100);
  local_12e = 0;
  iVar2 = _SfMetric_OpenSubKey_12(&DAT_00659e44,DAT_00647200,"SfPublish");
  if (-1 < iVar2) {
    wsprintfA(local_500,"%s\\%s\\%d.%d","Software\\Sonic Foundry","Vegas",3,0);
    MultiByteToWideChar(0,1,local_500,-1,local_3fc,0x104);
    local_1f6 = 0;
    iVar2 = (**(code **)(*local_24 + 0xc))
                      (local_24,local_3fc,DAT_00659e44,local_1f4,
                       *(undefined4 *)(DAT_0064b4f8 + 0x30));
    if (-1 < iVar2) goto LAB_00575697;
    _SfMetric_Close_4(DAT_00659e44);
    DAT_00659e44 = 0;
    if (-1 < iVar2) goto LAB_00575697;
  }
  (**(code **)(*local_24 + 8))(local_24);
  local_24 = (int *)0x0;
LAB_00575697:
  DAT_00659d30 = 0;
  if ((local_24 == (int *)0x0) && (DAT_00659e40 != (HMODULE)0x0)) {
    FreeLibrary(DAT_00659e40);
    DAT_00659e40 = (HMODULE)0x0;
  }
  ExceptionList = local_14;
  return local_24;
}


