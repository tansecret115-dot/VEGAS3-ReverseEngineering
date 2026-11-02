/* Module: vegas30k.dll
   Function: DtGetLocalDirEntry
   Address: 01017f60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tagDIR_ENTRY * __stdcall DtGetLocalDirEntry(struct tagDIR_ENTRY *,char const *) */

tagDIR_ENTRY * DtGetLocalDirEntry(tagDIR_ENTRY *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  tagDIR_ENTRY *ptVar4;
  uint uVar5;
  
                    /* 0x17f60  52  ?DtGetLocalDirEntry@@YGPAUtagDIR_ENTRY@@PAU1@PBD@Z */
  if (*(uint **)(param_1 + 0x214) == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(uint **)(param_1 + 0x214);
  }
  uVar5 = 0;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int **)(param_1 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
      if (((int)uVar5 < 0) || (iVar2 + -1 < (int)uVar5)) {
        ptVar4 = (tagDIR_ENTRY *)0x0;
      }
      else {
        ptVar4 = *(tagDIR_ENTRY **)(piVar1[2] + uVar5 * 4);
      }
      if ((ptVar4 != (tagDIR_ENTRY *)0x0) &&
         (iVar2 = lstrcmpiA(param_2,(LPCSTR)(ptVar4 + 0x110)), iVar2 == 0)) {
        return ptVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return (tagDIR_ENTRY *)0x0;
}


