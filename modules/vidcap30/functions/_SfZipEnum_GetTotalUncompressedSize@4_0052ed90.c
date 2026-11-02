/* Module: vidcap30.exe
   Function: _SfZipEnum_GetTotalUncompressedSize@4
   Address: 0052ed90
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfZipEnum_GetTotalUncompressedSize_4(LPCVOID param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int iVar4;
  undefined4 local_8;
  int local_4;
  
                    /* 0x12ed90  694  _SfZipEnum_GetTotalUncompressedSize@4 */
  iVar2 = (int)param_1;
  iVar4 = 0;
  if (param_1 != (LPCVOID)0x0) {
    local_8 = 0;
    iVar1 = _SfZipEnum_Create_8(param_1,&local_8);
    if (-1 < iVar1) {
      iVar2 = _SfZipEnum_GetFileCount_4(iVar2);
      param_1 = (LPCVOID)0x0;
      if (0 < iVar2) {
        do {
          local_4 = iVar2;
          iVar2 = _SfZipEnum_Next_8(local_8,&param_1);
          if ((-1 < iVar2) && (param_1 != (LPCVOID)0x0)) {
            iVar4 = iVar4 + *(int *)((int)param_1 + 0x14);
            pvVar3 = GlobalHandle(param_1);
            GlobalUnlock(pvVar3);
            pvVar3 = GlobalHandle(param_1);
            GlobalFree(pvVar3);
            param_1 = (LPCVOID)0x0;
          }
          iVar2 = local_4 + -1;
        } while (local_4 + -1 != 0);
        local_4 = 0;
      }
      _SfZipEnum_Destroy_4(local_8);
    }
  }
  return iVar4;
}


