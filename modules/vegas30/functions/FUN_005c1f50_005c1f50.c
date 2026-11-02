/* Module: vegas30.exe
   Function: FUN_005c1f50
   Address: 005c1f50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c1f50(int *param_1)

{
  tSFLIST **pptVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_EBP;
  int iVar5;
  IStream *This;
  undefined4 *puVar6;
  int iVar7;
  int *piStack_bc;
  undefined4 *puStack_b8;
  int iStack_b4;
  undefined1 *puStack_b0;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 auStack_8c [3];
  undefined4 local_80 [18];
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  IStream *pIStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 local_8;
  undefined4 local_4;
  
  puStack_b8 = &local_94;
  puVar6 = local_80;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puStack_b0 = local_a0;
  local_8 = 0;
  iStack_b4 = 4;
  iVar5 = 0;
  piStack_bc = param_1;
  local_9c = 0;
  local_80[0] = 0x80;
  local_4 = 0x3ff00000;
  iVar4 = (**(code **)(*param_1 + 0xc))();
  if ((-1 < iVar4) && (puStack_b0 == (undefined1 *)0x4)) {
    if ((unaff_EBP != 0x70) && ((unaff_EBP != 0x78 && (unaff_EBP != 0x80)))) {
      return -0x7ffb1ff8;
    }
    puVar6 = auStack_8c;
    iVar4 = (**(code **)(*param_1 + 0xc))(param_1,puVar6,unaff_EBP + -4,&puStack_b0);
    iVar7 = iStack_14;
    if (iStack_b4 + -4 != unaff_EBX) {
      return -0x7ffb1ff8;
    }
    *(undefined4 *)(iStack_14 + 8) = local_9c;
    *(undefined4 *)(iStack_14 + 0x10) = uStack_98;
    *(undefined4 *)(iStack_14 + 0x18) = uStack_90;
    *(undefined4 *)(iStack_14 + 0x14) = local_94;
    pptVar1 = (tSFLIST **)(iStack_14 + 0x110);
    *(undefined4 *)(iStack_14 + 0x1c) = auStack_8c[0];
    *(undefined4 *)(iStack_14 + 0x118) = uStack_34;
    *(undefined4 *)(iStack_14 + 0x10c) = uStack_38;
    *(int *)(iStack_14 + 0x120) = iStack_28;
    *(int *)(iStack_14 + 0x124) = iStack_24;
    if (*pptVar1 != (tSFLIST *)0x0) {
      _SfVideoPlugin_DestroyCacheList_4(*pptVar1);
      *pptVar1 = (tSFLIST *)0x0;
    }
    iVar2 = *(int *)(iVar7 + 0x114);
    if (iVar2 != 0) {
      _SfVideoPlugin_DestroyCacheList_4(iVar2);
      *(undefined4 *)(iVar7 + 0x114) = 0;
    }
    iVar7 = 0;
    if (0 < iStack_30) {
      do {
        iVar4 = tSFVIDEOFILTERCACHE::Create
                          (pIStack_1c,iStack_18,pptVar1,(tSFGUIDTRANSLATIONTABLE *)&DAT_00646c70,
                           DAT_00646c90,(_GUID *)&puStack_b0);
        if (iVar4 < 0) {
          iVar7 = iVar7 + 1;
          FUN_005bb170(&puStack_b0,"Transition");
          iVar4 = 0;
        }
        else {
          FUN_005a5060(*(undefined4 *)(*(int *)(*pptVar1 + 8) + (iVar5 - iVar7) * 4),uStack_10,7,
                       0xffffffff,0x7fffffff);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iStack_30);
    }
    iVar5 = 0;
    puStack_b8 = (undefined4 *)0x0;
    This = pIStack_1c;
    if (0 < iStack_2c) {
      do {
        This = pIStack_1c;
        pptVar1 = (tSFLIST **)(iStack_14 + 0x114);
        iVar4 = tSFVIDEOFILTERCACHE::Create
                          (pIStack_1c,iStack_18,pptVar1,(tSFGUIDTRANSLATIONTABLE *)&DAT_00646c70,
                           DAT_00646c90,(_GUID *)&puStack_b0);
        if (iVar4 < 0) {
          iVar5 = iVar5 + 1;
          FUN_005bb170(&puStack_b0,"Transition");
          iVar4 = 0;
        }
        else {
          FUN_005a5060(*(undefined4 *)(*(int *)(*pptVar1 + 8) + ((int)puStack_b8 - iVar5) * 4),
                       uStack_10,8,0xffffffff,0x7fffffff);
        }
        puStack_b8 = (undefined4 *)((int)puStack_b8 + 1);
      } while ((int)puStack_b8 < iStack_2c);
    }
    if (iStack_18 != 0) {
      pptVar1 = (tSFLIST **)(iStack_14 + 0x50);
      if (*(int *)(iStack_14 + 0x50) != 0) {
        _SfVideoPlugin_DestroyCacheList_4(*(int *)(iStack_14 + 0x50));
        *pptVar1 = (tSFLIST *)0x0;
      }
      iVar4 = (*This->lpVtbl->Read)(This,&piStack_bc,4,(ULONG *)&stack0xffffff40);
      if (-1 < iVar4) {
        if (param_1 != (int *)0x4) {
          return -0x7ffb1ff8;
        }
        iVar5 = 0;
        iVar4 = 0;
        if (0 < (int)puVar6) {
          do {
            lVar3 = tSFVIDEOFILTERCACHE::Create
                              (This,iStack_28,pptVar1,(tSFGUIDTRANSLATIONTABLE *)&DAT_00646c70,
                               DAT_00646c90,(_GUID *)&stack0xffffff40);
            if (lVar3 < 0) {
              iVar5 = iVar5 + 1;
              FUN_005bb170(&stack0xffffff40,"Event Filter");
            }
            else {
              FUN_005a5060(*(undefined4 *)(*(int *)(*pptVar1 + 8) + (iVar4 - iVar5) * 4),uStack_20,1
                           ,0xffffffff,0x7fffffff);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)puVar6);
        }
        iVar4 = FUN_00522d40(This,iStack_28,iStack_24 + 0x54,uStack_20);
      }
    }
  }
  return iVar4;
}


