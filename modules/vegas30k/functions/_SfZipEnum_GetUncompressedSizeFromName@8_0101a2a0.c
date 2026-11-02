/* Module: vegas30k.dll
   Function: _SfZipEnum_GetUncompressedSizeFromName@8
   Address: 0101a2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfZipEnum_GetUncompressedSizeFromName_8(LPCVOID param_1,LPCSTR param_2)

{
  int iVar1;
  HGLOBAL pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x1a2a0  1314  _SfZipEnum_GetUncompressedSizeFromName@8 */
  local_4 = 0;
  if ((param_1 != (LPCVOID)0x0) && (param_2 != (LPCSTR)0x0)) {
    local_8 = 0;
    iVar1 = _SfZipEnum_Create_8(param_1,&local_8);
    if (-1 < iVar1) {
      param_1 = (LPCVOID)0x0;
      do {
        if (param_1 != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle(param_1);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(param_1);
          GlobalFree(pvVar2);
          param_1 = (LPCVOID)0x0;
        }
        iVar1 = _SfZipEnum_Next_8(local_8,&param_1);
        uVar4 = local_4;
        if (iVar1 < 0) goto LAB_0101a379;
        iVar3 = lstrcmpiA(param_2,*(LPCSTR *)((int)param_1 + 0x24));
      } while (iVar3 != 0);
      uVar4 = local_4;
      if ((-1 < iVar1) && (uVar4 = *(undefined4 *)((int)param_1 + 0x14), param_1 != (LPCVOID)0x0)) {
        pvVar2 = GlobalHandle(param_1);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(param_1);
        GlobalFree(pvVar2);
        _SfZipEnum_Destroy_4(local_8);
        return uVar4;
      }
LAB_0101a379:
      _SfZipEnum_Destroy_4(local_8);
      return uVar4;
    }
  }
  return 0;
}


