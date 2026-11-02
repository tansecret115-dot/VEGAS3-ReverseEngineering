/* Module: vidcap30.exe
   Function: riff_GetNumListEntries
   Address: 004b5f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_GetNumListEntries,12 */

int riff_GetNumListEntries(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_4 [4];
  
  piVar2 = param_2;
                    /* 0xb5f80  781  _riff_GetNumListEntries@12 */
  uVar1 = param_1;
  *param_2 = 0;
  riff_SaveLocation(param_1,&param_1);
  piVar3 = param_3;
  while( true ) {
    if ((piVar3 != (int *)0x0) && (*piVar3 < 8)) {
      riff_RestoreLocation(uVar1,param_1);
      return 0;
    }
    iVar4 = riff_ReadChunkHeader(uVar1,local_4,&param_2);
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 + -8;
    }
    if (iVar4 != 0) break;
    param_2 = (int *)riff_SkipChunk(uVar1,param_2);
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 - (int)param_2;
    }
    *piVar2 = *piVar2 + 1;
  }
  riff_RestoreLocation(uVar1,param_1);
  return iVar4;
}


