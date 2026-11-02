/* Module: vegas30k.dll
   Function: SfCdiAllocateProgramChainInfo
   Address: 010857a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiAllocateProgramChainInfo(struct tagSFIFO_PGCI * *) */

long SfCdiAllocateProgramChainInfo(tagSFIFO_PGCI **param_1)

{
  tagSFIFO_PGCI *ptVar1;
  long lVar2;
  
                    /* 0x857a0  292  ?SfCdiAllocateProgramChainInfo@@YGJPAPAUtagSFIFO_PGCI@@@Z */
  ptVar1 = calloc(1,0x11c);
  if (ptVar1 == (tagSFIFO_PGCI *)0x0) {
    lVar2 = -0x7ff8fff2;
  }
  else {
    lVar2 = _SfList_CreateExZ_32(ptVar1 + 0xf0,8,0xffffffff,0xffffffff,0x40000004,0,0,0);
    if (-1 < lVar2) {
      lVar2 = _SfList_CreateExZ_32(ptVar1 + 0xf4,8,0xffffffff,0xffffffff,0x40000004,0,0,0);
      if (-1 < lVar2) {
        lVar2 = _SfList_CreateExZ_32(ptVar1 + 0xf8,8,0xffffffff,0xffffffff,0x40000004,0,0,0);
        if (-1 < lVar2) {
          lVar2 = _SfList_CreateExZ_32(ptVar1 + 0x110,4,0xffffffff,0xffffffff,0x40000004,0,0,0);
          if (-1 < lVar2) {
            lVar2 = _SfList_CreateExZ_32(ptVar1 + 0x114,0x18,0xffffffff,0xffffffff,0x40000004,0,0,0)
            ;
            if (-1 < lVar2) {
              lVar2 = _SfList_CreateExZ_32(ptVar1 + 0x118,4,0xffffffff,0xffffffff,0x40000004,0,0,0);
              if (-1 < lVar2) {
                *param_1 = ptVar1;
                return lVar2;
              }
            }
          }
        }
      }
    }
  }
  return lVar2;
}


