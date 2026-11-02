/* Module: vidcap30.exe
   Function: riff64_ReadDataAlloc
   Address: 004b73d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_ReadDataAlloc,8 */

int riff64_ReadDataAlloc(undefined4 param_1,SIZE_T *param_2)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int iVar3;
  
                    /* 0xb73d0  756  _riff64_ReadDataAlloc@8 */
  param_2[1] = 0;
  if (*param_2 != 0) {
    pvVar1 = GlobalAlloc(0x42,*param_2);
    pvVar2 = GlobalLock(pvVar1);
    param_2[1] = (SIZE_T)pvVar2;
    if (pvVar2 == (LPVOID)0x0) {
      return -0x7ff8fff2;
    }
    iVar3 = riff64_ReadData(param_1,pvVar2,*param_2,0);
    if (iVar3 != 0) {
      pvVar1 = GlobalHandle((LPCVOID)param_2[1]);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)param_2[1]);
      GlobalFree(pvVar1);
      param_2[1] = 0;
      return iVar3;
    }
  }
  return 0;
}


