/* Module: vegas30k.dll
   Function: SfDvdiGetVtsInfo
   Address: 0108b960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDvdiGetVtsInfo(void *,unsigned long,struct tagSFVTS_INFO * *) */

long SfDvdiGetVtsInfo(void *param_1,ulong param_2,tagSFVTS_INFO **param_3)

{
  int *piVar1;
  int iVar2;
  tagSFVTS_INFO *ptVar3;
  int iVar4;
  
                    /* 0x8b960  371  ?SfDvdiGetVtsInfo@@YGJPAXKPAPAUtagSFVTS_INFO@@@Z */
  *param_3 = (tagSFVTS_INFO *)0x0;
  if (param_1 == (void *)0x0) {
    return -0x7ff8ffa9;
  }
  piVar1 = *(int **)((int)param_1 + 0x48);
  iVar4 = 0;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if (iVar2 <= iVar4) {
      return 0;
    }
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if ((iVar4 < 0) || (iVar2 + -1 < iVar4)) {
      ptVar3 = (tagSFVTS_INFO *)0x0;
    }
    else {
      ptVar3 = *(tagSFVTS_INFO **)(piVar1[2] + iVar4 * 4);
    }
    if ((byte)*ptVar3 == param_2) break;
    iVar4 = iVar4 + 1;
  }
  *param_3 = ptVar3;
  return 0;
}


