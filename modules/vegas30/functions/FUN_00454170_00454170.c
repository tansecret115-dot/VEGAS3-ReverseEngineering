/* Module: vegas30.exe
   Function: FUN_00454170
   Address: 00454170
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004541b5) */
/* WARNING: Removing unreachable block (ram,0x004541f0) */

int FUN_00454170(int param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  __allmul(*(int *)(param_1 + 0xb98),*(int *)(param_1 + 0xb98) >> 0x1f,0xb,0);
  lVar2 = ftol();
  if (lVar2 < 2) {
    return 0;
  }
  iVar1 = 0;
  if (-1 < lVar2) {
    if (0xffffffff < lVar2) goto LAB_004541d1;
    do {
      if ((uint)lVar2 < 4) break;
LAB_004541d1:
      do {
        lVar2 = __alldiv(lVar2,2,0);
        iVar1 = iVar1 + 2;
      } while (0xffffffff < lVar2);
    } while (-1 < lVar2);
    if (2 < lVar2) {
      iVar1 = iVar1 + 1;
    }
  }
  if ((param_2 == *(int *)(param_1 + 0x600)) && (param_3 == *(int *)(param_1 + 0x604))) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


