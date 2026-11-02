/* Module: vegas30k.dll
   Function: riff_FindListChunk
   Address: 010ff320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_FindListChunk,16 */

int riff_FindListChunk(undefined1 *param_1,int param_2,undefined4 *param_3,int *param_4)

{
  undefined1 *hFile;
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  int local_4;
  
  piVar1 = param_4;
                    /* 0xff320  1417  _riff_FindListChunk@16 */
  hFile = param_1;
  while( true ) {
    iVar2 = riff_FindChunkHeader(hFile,0x5453494c,&param_4,piVar1);
    if (iVar2 < 0) {
      return iVar2;
    }
    if ((piVar1 != (int *)0x0) && (*piVar1 < 4)) {
      return -0x7ffb1ff6;
    }
    BVar3 = ReadFile(hFile,&local_4,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    if ((BVar3 == 0) || (param_1 != &DAT_00000004)) {
      return -0x7ffb1ff8;
    }
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + -4;
    }
    if (local_4 == param_2) break;
    if (((uint)param_4 & 1) != 0) {
      param_4 = (int *)((int)param_4 + 1);
    }
    SetFilePointer(hFile,(LONG)(param_4 + -1),(PLONG)0x0,1);
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 - (int)param_4;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_4 + -1;
  }
  return 0;
}


