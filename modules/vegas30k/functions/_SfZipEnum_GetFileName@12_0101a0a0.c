/* Module: vegas30k.dll
   Function: _SfZipEnum_GetFileName@12
   Address: 0101a0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * _SfZipEnum_GetFileName_12(LPCVOID param_1,int param_2,uchar *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  HGLOBAL pvVar4;
  int iVar5;
  
  iVar5 = param_2;
                    /* 0x1a0a0  1311  _SfZipEnum_GetFileName@12 */
  iVar1 = (int)param_1;
  if ((param_1 != (LPCVOID)0x0) && (-1 < param_2)) {
    iVar2 = _SfZipEnum_GetFileCount_4(param_1);
    if (iVar5 < iVar2) {
      param_2 = 0;
      puVar3 = (undefined1 *)_SfZipEnum_Create_8(iVar1,&param_2);
      if (-1 < (int)puVar3) {
        param_1 = (LPCVOID)0x0;
        if (-1 < iVar5) {
          iVar5 = iVar5 + 1;
          do {
            if (param_1 != (LPCVOID)0x0) {
              pvVar4 = GlobalHandle(param_1);
              GlobalUnlock(pvVar4);
              pvVar4 = GlobalHandle(param_1);
              GlobalFree(pvVar4);
              param_1 = (LPCVOID)0x0;
            }
            puVar3 = (undefined1 *)_SfZipEnum_Next_8(param_2,&param_1);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (-1 < (int)puVar3) {
          if (*(ushort *)((int)param_1 + 0x18) < 4) {
            _mbscpy(param_3,*(uchar **)((int)param_1 + 0x24));
          }
          else {
            puVar3 = (undefined1 *)0x8004e03c;
            *param_3 = '\0';
          }
          if (param_1 != (LPCVOID)0x0) {
            pvVar4 = GlobalHandle(param_1);
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(param_1);
            GlobalFree(pvVar4);
          }
        }
        _SfZipEnum_Destroy_4(param_2);
        return puVar3;
      }
      return puVar3;
    }
  }
  return &DAT_80070057;
}


