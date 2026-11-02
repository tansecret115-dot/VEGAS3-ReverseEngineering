/* Module: mp3plug.dll
   Function: FUN_5f68b460
   Address: 5f68b460
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f68b460(int *param_1,wchar_t *param_2,int param_3)

{
  SIZE_T dwBytes;
  size_t sVar1;
  HGLOBAL pvVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*param_2 != L'\0') {
    iVar4 = 0;
    if (0 < *param_1) {
      piVar3 = (int *)param_1[2];
      do {
        if ((*piVar3 != 0) && (param_3 == *(int *)(*piVar3 + 4))) {
          FUN_5f6b5480(param_1,iVar4,1,0);
          break;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < *param_1);
    }
    sVar1 = wcslen(param_2);
    dwBytes = sVar1 + 0xd + sVar1 + 1;
    pvVar2 = GlobalAlloc(0x42,dwBytes);
    piVar3 = GlobalLock(pvVar2);
    if (piVar3 == (int *)0x0) {
      return -0x7ff8fff2;
    }
    piVar3[1] = param_3;
    *piVar3 = 0xc;
    piVar3[2] = (sVar1 + 1) * 2;
    wcscpy((wchar_t *)(piVar3 + 3),param_2);
    iVar4 = FUN_5f6b6490(param_1,piVar3,dwBytes,-1,(int *)0x0);
    pvVar2 = GlobalHandle(piVar3);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(piVar3);
    GlobalFree(pvVar2);
  }
  return iVar4;
}


