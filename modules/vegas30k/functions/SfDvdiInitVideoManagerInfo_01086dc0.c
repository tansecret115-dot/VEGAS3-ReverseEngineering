/* Module: vegas30k.dll
   Function: SfDvdiInitVideoManagerInfo
   Address: 01086dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDvdiInitVideoManagerInfo(void *,struct tagSFVMG_INFO * *) */

long SfDvdiInitVideoManagerInfo(void *param_1,tagSFVMG_INFO **param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* 0x86dc0  372  ?SfDvdiInitVideoManagerInfo@@YGJPAXPAPAUtagSFVMG_INFO@@@Z */
  if (param_1 == (void *)0x0) {
    puVar1 = &DAT_80070057;
  }
  else {
    puVar3 = param_1;
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)((int)param_1 + 1) = 0;
    *(undefined2 *)((int)param_1 + 2) = 1;
    *(undefined2 *)((int)param_1 + 4) = 1;
    *(undefined1 *)((int)param_1 + 6) = 1;
    *(undefined1 *)param_1 = 0x10;
    SfCdiAllocateProgramChainInfo((tagSFIFO_PGCI **)((int)param_1 + 0x20));
    puVar1 = (undefined1 *)
             _SfList_CreateExZ_32((int)param_1 + 8,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
    if (-1 < (int)puVar1) {
      puVar1 = (undefined1 *)
               _SfList_CreateExZ_32((int)param_1 + 0x24,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
      if (-1 < (int)puVar1) {
        puVar1 = (undefined1 *)
                 _SfList_CreateExZ_32((int)param_1 + 0x28,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
        if (-1 < (int)puVar1) {
          puVar1 = (undefined1 *)
                   _SfList_CreateExZ_32
                             ((int)param_1 + 0x2c,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
          if (-1 < (int)puVar1) {
            puVar1 = (undefined1 *)
                     _SfList_CreateExZ_32
                               ((int)param_1 + 0x38,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
            if (-1 < (int)puVar1) {
              puVar1 = (undefined1 *)
                       _SfList_CreateExZ_32
                                 ((int)param_1 + 0x40,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
              if (-1 < (int)puVar1) {
                puVar1 = (undefined1 *)
                         _SfList_CreateExZ_32
                                   ((int)param_1 + 0x44,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
                if (-1 < (int)puVar1) {
                  *param_2 = param_1;
                  return (long)puVar1;
                }
              }
            }
          }
        }
      }
    }
  }
  return (long)puVar1;
}


