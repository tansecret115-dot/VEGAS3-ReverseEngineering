/* Module: vegas30k.dll
   Function: _SfZip_ExtractAll@8
   Address: 0101a530
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfZip_ExtractAll_8(undefined4 param_1,LPCSTR param_2)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPCVOID local_110;
  undefined4 local_10c;
  int local_108;
  uchar local_104 [259];
  undefined1 local_1;
  
                    /* 0x1a530  1318  _SfZip_ExtractAll@8 */
  local_10c = 0;
  iVar1 = _SfZipEnum_Create_8(param_1,&local_10c);
  if (-1 < iVar1) {
    local_110 = (LPCVOID)0x0;
    iVar1 = 0;
    do {
      local_108 = _SfZipEnum_Next_8(local_10c,&local_110);
      if (-1 < local_108) {
        lstrcpynA((LPSTR)local_104,param_2,0x104);
        local_1 = 0;
        _SfAddSlashToPathName_8(local_104,0x104);
        _mbscat(local_104,*(uchar **)((int)local_110 + 0x24));
        iVar1 = _SfZipEnum_Extract_20(param_1,local_110,local_104,0,0);
      }
      if (local_110 != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle(local_110);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(local_110);
        GlobalFree(pvVar2);
        local_110 = (LPCVOID)0x0;
      }
    } while ((-1 < local_108) && (-1 < iVar1));
    _SfZipEnum_Destroy_4(local_10c);
  }
  return iVar1;
}


