/* Module: vegas30.exe
   Function: FUN_0054cdb0
   Address: 0054cdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


HANDLE FUN_0054cdb0(LPCSTR param_1,undefined4 param_2)

{
  DWORD DVar1;
  int iVar2;
  HANDLE pvVar3;
  uchar local_104 [260];
  
  DVar1 = GetTempPathA(0x104,(LPSTR)local_104);
  if (DVar1 == 0) {
    SfPrintF(local_104,"c:\\cmdline");
  }
  else {
    _SfAddSlashToPathName_8(local_104,0x104);
    _mbscat(local_104,(uchar *)"cmdline");
  }
  iVar2 = _SfCreateTempFileAndName_16(local_104,&DAT_0060f98c,param_1,param_2);
  if (-1 < iVar2) {
    pvVar3 = CreateFileA(param_1,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x102,(HANDLE)0x0);
    return pvVar3;
  }
  return (HANDLE)0xffffffff;
}


