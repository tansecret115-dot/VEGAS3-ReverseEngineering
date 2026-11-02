/* Module: vidcap30.exe
   Function: _SfSummary_Load@12
   Address: 004b6730
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfSummary_Load_12(uchar *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  uchar *_Source;
  undefined4 *puVar5;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0xb6730  632  _SfSummary_Load@12 */
  puVar5 = param_3;
  param_2[1] = 0;
  local_c = *param_3;
  riff_SaveLocation(param_1,&local_8);
  iVar1 = riff_GetNumListEntries(param_1,&local_10,&local_c);
  *param_2 = local_10;
  if (iVar1 == 0) {
    if (local_10 != 0) {
      param_3 = (undefined4 *)(local_10 * 8);
      pvVar2 = GlobalAlloc(0x42,(SIZE_T)param_3);
      pvVar3 = GlobalLock(pvVar2);
      if (pvVar3 == (LPVOID)0x0) {
        return -0x7ff8fff2;
      }
      param_2[1] = (int)pvVar3;
      riff_RestoreLocation(param_1,local_8);
      local_c = *puVar5;
      iVar1 = 0;
      if (0 < local_10) {
        puVar5 = (undefined4 *)((int)pvVar3 + 4);
        _Source = param_1;
        do {
          iVar4 = riff_ReadChunkHeader(param_1,&local_4,&param_3);
          if (iVar4 != 0) {
LAB_004b688b:
            if (_Source != (uchar *)0x0) {
              free(_Source);
            }
LAB_004b6899:
            _SfSummary_Free_4(param_2);
            *param_2 = 0;
            param_2[1] = 0;
            return iVar4;
          }
          puVar5[-1] = local_4;
          pvVar2 = GlobalAlloc(0x42,(int)param_3 + 1);
          pvVar3 = GlobalLock(pvVar2);
          *puVar5 = pvVar3;
          if (pvVar3 == (LPVOID)0x0) {
            iVar4 = -0x7ff8fff2;
            goto LAB_004b688b;
          }
          _Source = calloc(1,(int)param_3 + 1);
          if (_Source == (uchar *)0x0) {
            iVar4 = -0x7ff8fff2;
            goto LAB_004b6899;
          }
          iVar4 = riff_ReadData(param_1,_Source,param_3);
          if (iVar4 != 0) goto LAB_004b688b;
          _Source[(int)param_3] = '\0';
          _mbscpy((uchar *)*puVar5,_Source);
          free(_Source);
          _Source = (uchar *)0x0;
          iVar1 = iVar1 + 1;
          puVar5 = puVar5 + 2;
        } while (iVar1 < local_10);
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


