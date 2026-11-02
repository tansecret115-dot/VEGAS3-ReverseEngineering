/* Module: vidcap30.exe
   Function: _SfZip_ExtractFile@20
   Address: 0052e0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfZip_ExtractFile_20
              (int param_1,LPCSTR param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  HGLOBAL pvVar2;
  int iVar3;
  LPCVOID local_8;
  undefined4 local_4;
  
                    /* 0x12e0e0  701  _SfZip_ExtractFile@20 */
  if (((param_1 == 0) || (param_2 == (LPCSTR)0x0)) || (param_3 == 0)) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    local_4 = 0;
    iVar1 = _SfZipEnum_Create_8(param_1,&local_4);
    if (-1 < iVar1) {
      local_8 = (LPCVOID)0x0;
      do {
        if (local_8 != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle(local_8);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(local_8);
          GlobalFree(pvVar2);
          local_8 = (LPCVOID)0x0;
        }
        iVar1 = _SfZipEnum_Next_8(local_4,&local_8);
        if (iVar1 < 0) goto LAB_0052e1c8;
        iVar3 = lstrcmpiA(param_2,*(LPCSTR *)((int)local_8 + 0x24));
      } while (iVar3 != 0);
      if ((-1 < iVar1) &&
         (iVar1 = _SfZipEnum_Extract_20(param_1,local_8,param_3,param_4,param_5),
         local_8 != (LPCVOID)0x0)) {
        pvVar2 = GlobalHandle(local_8);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(local_8);
        GlobalFree(pvVar2);
      }
LAB_0052e1c8:
      _SfZipEnum_Destroy_4(local_4);
      return iVar1;
    }
  }
  return iVar1;
}


