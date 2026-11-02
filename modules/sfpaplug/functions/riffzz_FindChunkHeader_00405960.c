/* Module: sfpaplug.dll
   Function: riffzz_FindChunkHeader
   Address: 00405960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall riffzz_FindChunkHeader(void *,unsigned long,unsigned long *,unsigned long *) */

long riffzz_FindChunkHeader(void *param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = param_4;
                    /* 0x5960  2  ?riffzz_FindChunkHeader@@YGJPAXKPAK1@Z */
  uVar1 = param_2;
  if (param_4 == (ulong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *param_4;
  }
  while( true ) {
    if ((puVar2 != (ulong *)0x0) && (uVar4 < 8)) {
      *puVar2 = uVar4;
      return -0x7ffb1ff6;
    }
    uVar3 = FUN_004252b0(param_1,&param_2,&param_4);
    if (uVar3 != 0) {
      return uVar3;
    }
    if (param_2 == uVar1) break;
    param_4 = (ulong *)riffzz_SkipChunk(param_1,(ulong)param_4);
    uVar4 = (uVar4 - 8) - (int)param_4;
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = (ulong)param_4;
  }
  if (puVar2 != (ulong *)0x0) {
    *puVar2 = uVar4 - 8;
  }
  return 0;
}


