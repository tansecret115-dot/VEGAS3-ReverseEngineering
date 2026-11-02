/* Module: vegas30k.dll
   Function: SfPQList_GetLeadOut
   Address: 010145a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned long __stdcall SfPQList_GetLeadOut(struct tSFLIST *) */

ulong SfPQList_GetLeadOut(tSFLIST *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
                    /* 0x145a0  480  ?SfPQList_GetLeadOut@@YGKPAUtSFLIST@@@Z */
  if (param_1 == (tSFLIST *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)param_1;
  }
  uVar3 = iVar2 - 1;
  if (-1 < (int)uVar3) {
    piVar4 = (int *)(*(int *)(param_1 + 8) + uVar3 * 4);
    do {
      piVar1 = (int *)*piVar4;
      if (*piVar1 == 3) {
        return piVar1[3] + piVar1[2];
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + -1;
    } while (uVar3 < 0x80000000);
  }
  return 0;
}


