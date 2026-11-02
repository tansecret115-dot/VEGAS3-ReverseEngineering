/* Module: vegas30k.dll
   Function: SfCDProject_FreeProject
   Address: 01015000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDProject_FreeProject(struct tagSFCDPRJ_PROJECT *) */

long SfCDProject_FreeProject(tagSFCDPRJ_PROJECT *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x15000  282  ?SfCDProject_FreeProject@@YGJPAUtagSFCDPRJ_PROJECT@@@Z */
  FUN_01014fe0(*(undefined4 *)(param_1 + 0x224));
  if (*(int *)(param_1 + 0x228) != 0) {
    iVar3 = 0;
    while( true ) {
      piVar1 = *(int **)(param_1 + 0x228);
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
      if (iVar2 <= iVar3) break;
      SfCDProject_FreeTrack(*(tagSFCDPRJ_TRACK_PROJECT **)(piVar1[2] + iVar3 * 4));
      iVar3 = iVar3 + 1;
    }
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x228));
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  _SfSummary_Free_4(param_1 + 0x22c);
  return 0;
}


