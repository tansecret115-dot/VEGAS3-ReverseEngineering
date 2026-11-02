/* Module: vegas30k.dll
   Function: SfPQList_GetNumTracks
   Address: 010165d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned int __stdcall SfPQList_GetNumTracks(struct tSFLIST *) */

uint SfPQList_GetNumTracks(tSFLIST *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* 0x165d0  481  ?SfPQList_GetNumTracks@@YGIPAUtSFLIST@@@Z */
  if (param_1 == (tSFLIST *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)param_1;
  }
  uVar1 = 0;
  if (iVar3 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 8);
    do {
      if (*(int *)*puVar2 == 3) {
        uVar1 = uVar1 + 1;
      }
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}


