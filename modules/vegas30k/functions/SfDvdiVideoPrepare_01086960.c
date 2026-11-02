/* Module: vegas30k.dll
   Function: SfDvdiVideoPrepare
   Address: 01086960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDvdiVideoPrepare(void *,void *) */

long SfDvdiVideoPrepare(void *param_1,void *param_2)

{
  int *piVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x86960  378  ?SfDvdiVideoPrepare@@YGJPAX0@Z */
  if (param_1 == (void *)0x0) {
    return -0x7ff8ffa9;
  }
  lVar2 = FUN_010866f0(param_1,param_2);
  if ((-1 < lVar2) && ((*(uint *)((int)param_2 + 8) & 0x10) != 0)) {
    iVar5 = 0;
    while( true ) {
      piVar1 = *(int **)((int)param_2 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (iVar4 <= iVar5) break;
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = *(void **)(piVar1[2] + iVar5 * 4);
      }
      lVar2 = SfDvdiVideoPrepare(param_1,pvVar3);
      if (lVar2 < 0) {
        return lVar2;
      }
      iVar5 = iVar5 + 1;
    }
  }
  return lVar2;
}


