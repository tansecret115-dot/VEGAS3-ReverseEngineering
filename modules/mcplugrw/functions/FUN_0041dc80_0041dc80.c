/* Module: mcplugrw.dll
   Function: FUN_0041dc80
   Address: 0041dc80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041dc80(uchar *param_1)

{
  DWORD DVar1;
  int iVar2;
  uchar local_208 [260];
  uchar local_104 [260];
  
  DVar1 = GetFileAttributesA((LPCSTR)param_1);
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) != 0)) {
    _mbscpy(local_208,param_1);
    FUN_0041c940(local_208,0x104);
    iVar2 = FUN_0041d900(local_208,"",local_104,0x104);
    if (iVar2 == 0) {
      DeleteFileA((LPCSTR)local_104);
      return 1;
    }
  }
  return 0;
}


