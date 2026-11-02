/* Module: vegas30k.dll
   Function: FUN_01012be0
   Address: 01012be0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_01012be0(int param_1,int param_2,void *param_3,uint *param_4)

{
  tagMPEG_BIT_STREAM *ptVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uchar *_Dst;
  size_t local_14;
  int local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  ptVar1 = (tagMPEG_BIT_STREAM *)(param_1 + 0x4c);
  local_4 = 0;
  local_10 = *(int *)(param_1 + 0x50);
  local_8 = 0;
  if (local_10 == 0x1ba) {
    cdr_ByteSwap32((uchar *)&local_10,1);
    memmove(param_3,&local_10,4);
    lVar3 = SfMpegStreamReadCached(ptVar1,(uchar *)((int)param_3 + 4),8,&local_14);
    if (-1 < lVar3) {
      _Dst = (uchar *)((int)param_3 + 4) + local_14;
      uVar7 = local_14 + 4;
      while( true ) {
        lVar3 = SfMpegStreamSeekNextStartCode(ptVar1);
        if (lVar3 < 0) break;
        local_10 = *(int *)(param_1 + 0x50);
        if (local_10 == 0x1b7) {
          memmove(_Dst,&local_10,4);
          cdr_ByteSwap32(_Dst,1);
          _Dst = _Dst + 4;
          uVar7 = uVar7 + 4;
          local_4 = 1;
        }
        else if (local_10 == 0x1b9) {
          memmove(_Dst,&local_10,4);
          cdr_ByteSwap32(_Dst,1);
          _Dst = _Dst + 4;
          uVar7 = uVar7 + 4;
          local_8 = 1;
        }
        else {
          if (local_10 == 0x1ba) goto LAB_01012d54;
          memmove(_Dst,&local_10,4);
          cdr_ByteSwap32(_Dst,1);
          _Dst = _Dst + 4;
          uVar7 = uVar7 + 4;
          lVar3 = SfMpegStreamReadCached(ptVar1,(uchar *)&local_c,2,&local_14);
          if (-1 < lVar3) {
            memmove(_Dst,&local_c,local_14);
            _Dst = _Dst + local_14;
            uVar7 = uVar7 + local_14;
            cdr_ByteSwap16((uchar *)&local_c,1);
            lVar3 = SfMpegStreamReadCached(ptVar1,_Dst,local_c & 0xffff,&local_14);
            if (-1 < lVar3) {
              _Dst = _Dst + local_14;
              uVar7 = uVar7 + local_14;
            }
          }
        }
      }
      lVar3 = 0;
LAB_01012d54:
      if (uVar7 < 0x914) {
        uVar6 = 0x914 - uVar7;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          _Dst[0] = '\0';
          _Dst[1] = '\0';
          _Dst[2] = '\0';
          _Dst[3] = '\0';
          _Dst = _Dst + 4;
        }
        uVar7 = 0x914;
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *_Dst = '\0';
          _Dst = _Dst + 1;
        }
      }
      if (param_2 != 0) {
        piVar2 = *(int **)(param_1 + 0x1c);
        iVar5 = *(int *)(param_1 + 0x20);
        if (piVar2 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar2;
        }
        if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
          iVar5 = 0;
        }
        else {
          iVar5 = piVar2[1] * iVar5 + piVar2[2];
        }
        lVar3 = FUN_01012950(param_1,iVar5,param_2,local_4,local_8);
      }
      *param_4 = uVar7;
      return lVar3;
    }
  }
  else {
    lVar3 = -0x7fffbffb;
  }
  return lVar3;
}


