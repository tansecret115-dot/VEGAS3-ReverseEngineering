/* Module: vegas30k.dll
   Function: _SfZipEnum_GetUncompressedSizeFromIndex@8
   Address: 0101a1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfZipEnum_GetUncompressedSizeFromIndex_8(LPCVOID param_1,int param_2)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = param_2;
                    /* 0x1a1b0  1313  _SfZipEnum_GetUncompressedSizeFromIndex@8 */
  iVar2 = (int)param_1;
  if ((param_1 != (LPCVOID)0x0) && (-1 < param_2)) {
    iVar1 = _SfZipEnum_GetFileCount_4(param_1);
    if (iVar4 < iVar1) {
      param_2 = 0;
      iVar2 = _SfZipEnum_Create_8(iVar2,&param_2);
      if (-1 < iVar2) {
        param_1 = (LPCVOID)0x0;
        if (-1 < iVar4) {
          iVar4 = iVar4 + 1;
          do {
            if (param_1 != (LPCVOID)0x0) {
              pvVar3 = GlobalHandle(param_1);
              GlobalUnlock(pvVar3);
              pvVar3 = GlobalHandle(param_1);
              GlobalFree(pvVar3);
              param_1 = (LPCVOID)0x0;
            }
            iVar2 = _SfZipEnum_Next_8(param_2,&param_1);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        if (iVar2 < 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)((int)param_1 + 0x14);
          if (param_1 != (LPCVOID)0x0) {
            pvVar3 = GlobalHandle(param_1);
            GlobalUnlock(pvVar3);
            pvVar3 = GlobalHandle(param_1);
            GlobalFree(pvVar3);
            _SfZipEnum_Destroy_4(param_2);
            return uVar5;
          }
        }
        _SfZipEnum_Destroy_4(param_2);
        return uVar5;
      }
    }
  }
  return 0;
}


