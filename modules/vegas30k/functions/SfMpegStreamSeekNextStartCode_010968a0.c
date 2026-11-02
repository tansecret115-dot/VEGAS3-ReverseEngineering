/* Module: vegas30k.dll
   Function: SfMpegStreamSeekNextStartCode
   Address: 010968a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfMpegStreamSeekNextStartCode(struct tagMPEG_BIT_STREAM *) */

long SfMpegStreamSeekNextStartCode(tagMPEG_BIT_STREAM *param_1)

{
  byte bVar1;
  tagMPEG_BIT_STREAM *ptVar2;
  int iVar3;
  ulong local_4;
  
                    /* 0x968a0  438  ?SfMpegStreamSeekNextStartCode@@YGJPAUtagMPEG_BIT_STREAM@@@Z */
  ptVar2 = param_1;
  iVar3 = 0;
  bVar1 = 0;
  do {
    SfMpegStreamReadCached(ptVar2,(uchar *)&param_1,1,&local_4);
    if (local_4 == 0) goto LAB_0109691e;
    switch(iVar3) {
    case 0:
      if ((char)param_1 == '\0') {
        iVar3 = 1;
      }
      break;
    case 1:
      iVar3 = (-(uint)((char)param_1 != '\0') & 0xfffffffe) + 2;
      break;
    case 2:
      if ((char)param_1 == '\x01') {
        iVar3 = 3;
      }
      else if ((char)param_1 != '\0') {
        iVar3 = 0;
      }
      break;
    case 3:
      bVar1 = 1;
      *(uint *)(ptVar2 + 4) = (uint)CONCAT11(1,(char)param_1);
LAB_0109691e:
      return (-(uint)bVar1 & 0x7fffbffb) + 0x80004005;
    }
  } while( true );
}


