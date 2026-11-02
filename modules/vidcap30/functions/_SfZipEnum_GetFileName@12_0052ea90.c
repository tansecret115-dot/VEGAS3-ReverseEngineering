/* Module: vidcap30.exe
   Function: _SfZipEnum_GetFileName@12
   Address: 0052ea90
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfZipEnum_GetFileName_12(LPCVOID param_1,int param_2,uchar *param_3)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int iVar4;
  
  iVar4 = param_2;
                    /* 0x12ea90  693  _SfZipEnum_GetFileName@12 */
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
        if (-1 < iVar2) {
          if (*(ushort *)((int)param_1 + 0x18) < 4) {
            _mbscpy(param_3,*(uchar **)((int)param_1 + 0x24));
          }
          else {
            iVar2 = -0x7ffb1fc4;
            *param_3 = '\0';
          }
          if (param_1 != (LPCVOID)0x0) {
            pvVar3 = GlobalHandle(param_1);
            GlobalUnlock(pvVar3);
            pvVar3 = GlobalHandle(param_1);
            GlobalFree(pvVar3);
          }
        }
        _SfZipEnum_Destroy_4(param_2);
        return iVar2;
      }
      return iVar2;
    }
  }
  return -0x7ff8ffa9;
}


