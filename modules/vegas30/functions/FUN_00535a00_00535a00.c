/* Module: vegas30.exe
   Function: FUN_00535a00
   Address: 00535a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00535a00(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5)

{
  undefined4 uVar1;
  HANDLE hFindFile;
  int iVar2;
  undefined1 local_348 [260];
  uchar local_244 [260];
  _WIN32_FIND_DATAA local_140;
  
  if (param_5 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_5;
  }
  uVar1 = _SfGetString_8(DAT_00647204,param_3);
  SfPrintF(local_348,uVar1);
  while( true ) {
    if (9999 < iVar2) {
      *param_1 = 0;
      return 0x8004e002;
    }
    SfPrintF(local_244,"%s%s%.04u",param_2,local_348,iVar2);
    _mbscat(local_244,"*.*");
    hFindFile = FindFirstFileA((LPCSTR)local_244,&local_140);
    if (hFindFile == (HANDLE)0xffffffff) break;
    FindClose(hFindFile);
    iVar2 = iVar2 + 1;
  }
  SfPrintF(param_1,"%s%s%.04u.%s",param_2,local_348,iVar2,param_4);
  if (param_5 != (int *)0x0) {
    *param_5 = iVar2 + 1;
  }
  return 0;
}


