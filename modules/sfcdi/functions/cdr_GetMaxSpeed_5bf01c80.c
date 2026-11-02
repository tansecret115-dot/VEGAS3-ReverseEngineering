/* Module: sfcdi.dll
   Function: cdr_GetMaxSpeed
   Address: 5bf01c80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdr_GetMaxSpeed(unsigned long) */

int cdr_GetMaxSpeed(ulong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x1c80  180  ?cdr_GetMaxSpeed@@YGHK@Z */
  iVar2 = 1;
  if (DAT_5bf62010 != 0) {
    iVar3 = 0;
    do {
      if ((*(uint *)((int)&DAT_5bf62030 + iVar3) & param_1) != 0) {
        iVar2 = *(int *)((int)&DAT_5bf62010 + iVar3);
      }
      piVar1 = (int *)((int)&DAT_5bf62014 + iVar3);
      iVar3 = iVar3 + 4;
    } while (*piVar1 != 0);
  }
  return iVar2;
}


