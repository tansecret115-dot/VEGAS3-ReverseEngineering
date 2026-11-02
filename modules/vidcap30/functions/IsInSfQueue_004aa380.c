/* Module: vidcap30.exe
   Function: IsInSfQueue
   Address: 004aa380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall IsInSfQueue(struct tSFQHEAD *,struct tSFQELM *) */

int IsInSfQueue(tSFQHEAD *param_1,tSFQELM *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  tSFQHEAD *ptVar1;
  int iVar2;
  
                    /* 0xaa380  52  ?IsInSfQueue@@YGHPAUtSFQHEAD@@PAUtSFQELM@@@Z */
  iVar2 = 0;
  if ((*(int *)param_2 != 0) && (*(int *)(param_2 + 4) != 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
    EnterCriticalSection(lpCriticalSection);
    ptVar1 = *(tSFQHEAD **)param_1;
    if (ptVar1 != param_1) {
      while (ptVar1 != (tSFQHEAD *)param_2) {
        ptVar1 = *(tSFQHEAD **)ptVar1;
        if (ptVar1 == param_1) {
          LeaveCriticalSection(lpCriticalSection);
          return 0;
        }
      }
      iVar2 = 1;
    }
    LeaveCriticalSection(lpCriticalSection);
    return iVar2;
  }
  return 0;
}


