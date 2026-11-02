/* Module: sfcdi.dll
   Function: SfTAO_BurnTrack
   Address: 5bf180d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfTAO_BurnTrack(void *,unsigned int) */

long SfTAO_BurnTrack(void *param_1,uint param_2)

{
  HSFBURN__ **ppHVar1;
  long lVar2;
  LPSTR pCVar3;
  BYTE *pBVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 *puStack_11c;
  void *pvStack_118;
  undefined4 uStack_114;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  
                    /* 0x180d0  130  ?SfTAO_BurnTrack@@YGJPAXI@Z */
  if (param_1 != (void *)0x0) {
    ppHVar1 = (HSFBURN__ **)((int)param_1 + 0x94);
    if (*(int *)((int)param_1 + 0x94) != 0) {
      (**(code **)(**(int **)((int)param_1 + 0x18) + 0x10))();
      SfCDBurn_Destroy(*ppHVar1);
      *ppHVar1 = (HSFBURN__ *)0x0;
    }
    (**(code **)(**(int **)((int)param_1 + 0x18) + 0x24))(param_2);
    FUN_5bf18030((int)param_1);
    puVar6 = (undefined4 *)&stack0xfffffed0;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    if ((*(uint *)((int)param_1 + 4) & 0x80) == 0) {
      puStack_11c = &LAB_5bf17a20;
    }
    else {
      puStack_11c = &LAB_5bf179c0;
    }
    uStack_114 = *(undefined4 *)((int)param_1 + 0x10);
    uStack_10c = *(undefined4 *)((int)param_1 + 0x14);
    pvStack_118 = param_1;
    uStack_108 = *(undefined4 *)((int)param_1 + 0x1c);
    lVar2 = SfCDBurn_Create(ppHVar1,(burncreatetag *)&stack0xfffffed0);
    if (-1 < lVar2) {
      iVar5 = **(int **)((int)param_1 + 0x1c);
      if ((*(uint *)((int)param_1 + 4) & 0x80) == 0) {
        uVar7 = 0x91d;
      }
      else {
        uVar7 = 0x91c;
      }
      pCVar3 = FUN_5bf283e0(DAT_5bf65fc4,uVar7);
      (**(code **)(iVar5 + 0x10))(*(undefined4 *)((int)param_1 + 0x1c),pCVar3);
      lVar2 = (**(code **)(**(int **)((int)param_1 + 0x18) + 4))
                        (*(undefined4 *)((int)param_1 + 0x1c));
      if (((-1 < lVar2) &&
          (lVar2 = (**(code **)(**(int **)((int)param_1 + 0x18) + 8))(0,0), -1 < lVar2)) &&
         (lVar2 = SfCDBurn_WriteDisc(*ppHVar1), lVar2 == 0)) {
        if (*(uint *)((int)param_1 + 0x24) < 2) {
          if ((*(uint *)((int)param_1 + 4) & 0x80) == 0) {
            pBVar4 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0xf9);
          }
          else {
            pBVar4 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x91e);
          }
          FUN_5bf25750((uchar *)&pvStack_118,pBVar4);
        }
        else {
          pBVar4 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x153);
          FUN_5bf25750((uchar *)&pvStack_118,pBVar4);
        }
        (**(code **)(**(int **)((int)param_1 + 0x1c) + 0xc))(*(int **)((int)param_1 + 0x1c));
        (**(code **)(**(int **)((int)param_1 + 0x1c) + 0x10))
                  (*(int **)((int)param_1 + 0x1c),&puStack_11c);
        (**(code **)(**(int **)((int)param_1 + 0x1c) + 0x14))
                  (*(int **)((int)param_1 + 0x1c),*(undefined4 *)((int)param_1 + 0x20),0);
      }
    }
    return lVar2;
  }
  return -0x7ff8ffa9;
}


