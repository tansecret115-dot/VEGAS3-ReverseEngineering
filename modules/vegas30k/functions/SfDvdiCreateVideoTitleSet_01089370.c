/* Module: vegas30k.dll
   Function: SfDvdiCreateVideoTitleSet
   Address: 01089370
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDvdiCreateVideoTitleSet(void *,struct tagSFVTS_INFO * *) */

long SfDvdiCreateVideoTitleSet(void *param_1,tagSFVTS_INFO **param_2)

{
  tagSFVTS_INFO tVar1;
  tagDIR_ENTRY *ptVar3;
  long lVar4;
  HGLOBAL hMem;
  tagSFVTS_INFO *ptVar5;
  int iVar6;
  tagDIR_ENTRY **unaff_ESI;
  tagSFVTS_INFO *ptVar7;
  int local_110;
  tagSFVTS_INFO local_10c;
  undefined3 uStack_10b;
  tagDIR_ENTRY *local_108;
  char local_104 [260];
  char cVar2;
  
                    /* 0x89370  366  ?SfDvdiCreateVideoTitleSet@@YGJPAXPAPAUtagSFVTS_INFO@@@Z */
  *param_2 = (tagSFVTS_INFO *)0x0;
  if (param_1 == (void *)0x0) {
    return -0x7ff8ffa9;
  }
  ptVar3 = DtGetLocalDirEntry((tagDIR_ENTRY *)**(undefined4 **)((int)param_1 + 0x50),"VIDEO_TS");
  cVar2 = '\0';
  if (*(undefined4 **)((int)param_1 + 0x48) != (undefined4 *)0x0) {
    cVar2 = (char)**(undefined4 **)((int)param_1 + 0x48);
  }
  tVar1 = (tagSFVTS_INFO)(cVar2 + '\x01');
  _local_10c = CONCAT31(uStack_10b,tVar1);
  local_108 = ptVar3;
  SfPrintF(local_104,"VTS_%02u_0.IFO",tVar1);
  lVar4 = DtAllocateDirectoryEntry
                    (*(tagDIR_TREE **)((int)param_1 + 0x50),ptVar3,local_104,local_104,(char *)0x0,0
                     ,0,1,(int)&local_110,unaff_ESI);
  if (-1 < lVar4) {
    hMem = GlobalAlloc(0x42,0x120);
    ptVar5 = GlobalLock(hMem);
    if (ptVar5 == (tagSFVTS_INFO *)0x0) {
      lVar4 = -0x7ff8fff2;
    }
    else {
      *(undefined4 *)(*(int *)(local_110 + 0x34c) + 0x14c) = 5;
      *(tagSFVTS_INFO **)(*(int *)(local_110 + 0x34c) + 0x150) = ptVar5;
      ptVar7 = ptVar5;
      for (iVar6 = 0x48; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)ptVar7 = 0;
        ptVar7 = ptVar7 + 4;
      }
      *ptVar5 = tVar1;
      ptVar5[1] = (tagSFVTS_INFO)0x10;
      ptVar5[2] = (tagSFVTS_INFO)0x0;
      *(void **)(ptVar5 + 4) = param_1;
      lVar4 = _SfList_CreateExZ_32(ptVar5 + 0x14,4,0xffffffff,0xffffffff,0x40000004,0,0,0);
      if (-1 < lVar4) {
        lVar4 = _SfList_CreateExZ_32(ptVar5 + 0x18,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
        if (-1 < lVar4) {
          lVar4 = _SfList_CreateExZ_32(ptVar5 + 0x20,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
          if (-1 < lVar4) {
            lVar4 = _SfList_CreateExZ_32(ptVar5 + 0x28,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
            if (-1 < lVar4) {
              lVar4 = _SfList_CreateExZ_32(ptVar5 + 0x2c,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
              if (-1 < lVar4) {
                lVar4 = _SfList_CreateExZ_32(ptVar5 + 0x30,4,0xffffffff,0xffffffff,0x40000002,0,0,0)
                ;
                if (-1 < lVar4) {
                  lVar4 = _SfList_CreateExZ_32
                                    (ptVar5 + 0x34,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
                  if (-1 < lVar4) {
                    lVar4 = _SfList_CreateExZ_32
                                      (ptVar5 + 0x38,4,0xffffffff,0xffffffff,0x40000004,0,0,0);
                    if (-1 < lVar4) {
                      lVar4 = _SfList_CreateExZ_32
                                        (ptVar5 + 0x48,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
                      if (-1 < lVar4) {
                        lVar4 = _SfList_CreateExZ_32
                                          (ptVar5 + 0x4c,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
                        if (-1 < lVar4) {
                          lVar4 = _SfList_CreateExZ_32
                                            (ptVar5 + 0x50,4,0xffffffff,0xffffffff,0x40000002,0,0,0)
                          ;
                          if (-1 < lVar4) {
                            lVar4 = _SfList_CreateExZ_32
                                              (ptVar5 + 0x44,4,0xffffffff,0xffffffff,0x40000002,0,0,
                                               0);
                            if (-1 < lVar4) {
                              lVar4 = _SfList_CreateExZ_32
                                                (ptVar5 + 0x58,4,0xffffffff,0xffffffff,0x40000002,0,
                                                 0,0);
                              if (-1 < lVar4) {
                                lVar4 = _SfList_CreateExZ_32
                                                  (ptVar5 + 0x5c,4,0xffffffff,0xffffffff,0x40000002,
                                                   0,0,0);
                                if (-1 < lVar4) {
                                  lVar4 = DtAllocateDirectoryEntry
                                                    (*(tagDIR_TREE **)((int)param_1 + 0x50),
                                                     local_108,"VTS_01_0.BUP","VTS_01_0.BUP",
                                                     (char *)0x0,0,0,1,(int)&local_110,unaff_ESI);
                                  if (-1 < lVar4) {
                                    *(undefined4 *)(*(int *)(local_110 + 0x34c) + 0x14c) = 7;
                                    *(undefined4 *)(*(int *)(local_110 + 0x34c) + 0x150) = 0;
                                    lVar4 = FUN_010874a0(param_1,ptVar5);
                                    if (-1 < lVar4) {
                                      *param_2 = ptVar5;
                                      return lVar4;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return lVar4;
}


