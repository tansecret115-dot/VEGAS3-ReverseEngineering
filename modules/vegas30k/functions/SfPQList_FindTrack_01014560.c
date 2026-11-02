/* Module: vegas30k.dll
   Function: SfPQList_FindTrack
   Address: 01014560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfPQList_FindTrack(struct tSFLIST *,int) */

int SfPQList_FindTrack(tSFLIST *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
                    /* 0x14560  477  ?SfPQList_FindTrack@@YGHPAUtSFLIST@@H@Z */
  if (param_1 == (tSFLIST *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)param_1;
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    piVar2 = *(int **)(param_1 + 8);
    do {
      if ((*(int *)*piVar2 == 3) && (param_2 == ((int *)*piVar2)[1])) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < uVar3);
  }
  return -1;
}


