/* Module: vegas30k.dll
   Function: SfCDProject_FreeTrack
   Address: 01014f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDProject_FreeTrack(struct tagSFCDPRJ_TRACK_PROJECT *) */

long SfCDProject_FreeTrack(tagSFCDPRJ_TRACK_PROJECT *param_1)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x14f80  283  ?SfCDProject_FreeTrack@@YGJPAUtagSFCDPRJ_TRACK_PROJECT@@@Z */
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    if (0 < *piVar1) {
      do {
        FUN_01014f30(*(undefined4 *)(piVar1[2] + iVar2 * 4));
        piVar1 = *(int **)(param_1 + 0xc);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *piVar1);
    }
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 0;
}


