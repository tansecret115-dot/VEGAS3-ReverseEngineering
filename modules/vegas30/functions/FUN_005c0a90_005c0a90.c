/* Module: vegas30.exe
   Function: FUN_005c0a90
   Address: 005c0a90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c0a90(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  tSFLIST **pptVar1;
  _GUID *p_Var2;
  tSFOVERLAY *ptVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  undefined4 *puVar7;
  int **ppiVar8;
  int *piStack_cc;
  undefined4 *puStack_c8;
  int iStack_c4;
  undefined4 **ppuStack_c0;
  int *piStack_b8;
  undefined4 *puStack_b4;
  undefined4 uStack_b0;
  undefined4 *puStack_ac;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_40;
  IStream *pIStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  ulong uStack_30;
  IStream *pIStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_18;
  
  puVar7 = local_80;
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puStack_ac = &local_9c;
  puStack_b4 = &local_94;
  *param_3 = 0x22;
  uStack_b0 = 4;
  piStack_b8 = param_1;
  local_98 = 0;
  iVar5 = (**(code **)(*param_1 + 0xc))();
  if ((-1 < iVar5) && (puStack_ac == (undefined4 *)0x4)) {
    if ((((unaff_ESI != 0x80) && (unaff_ESI != 0x70)) && (unaff_ESI != 100)) &&
       ((unaff_ESI != 0x68 && (unaff_ESI != 0x6c)))) {
      return -0x7ffb1ff8;
    }
    ppuStack_c0 = &puStack_ac;
    iStack_c4 = unaff_ESI + -4;
    puStack_c8 = &uStack_8c;
    piStack_cc = param_1;
    iVar5 = (**(code **)(*param_1 + 0xc))();
    p_Var2 = (_GUID *)(param_3 + 0x43);
    param_3[1] = local_9c;
    param_3[2] = local_98;
    param_3[3] = local_94;
    param_3[4] = uStack_90;
    param_3[5] = uStack_8c;
    param_3[6] = uStack_88;
    param_3[7] = uStack_84;
    param_3[8] = uStack_70;
    param_3[9] = uStack_6c;
    param_3[10] = uStack_68;
    param_3[0xb] = uStack_64;
    param_3[0xc] = uStack_60;
    param_3[0xd] = uStack_5c;
    param_3[0xe] = uStack_58;
    param_3[0xf] = uStack_54;
    param_3[0x40] = uStack_40;
    p_Var2->Data1 = uStack_30;
    param_3[0x44] = pIStack_2c;
    param_3[0x41] = pIStack_3c;
    param_3[0x45] = iStack_28;
    param_3[0x46] = uStack_24;
    if (pIStack_3c == (IStream *)0xffffffff) {
      ptVar3 = SfOverlay_GetCompositor(p_Var2);
      if (ptVar3 == (tSFOVERLAY *)0x0) {
        param_3[0x41] = 4;
        p_Var2->Data1 = 0;
        param_3[0x44] = 0;
        param_3[0x45] = 0;
        param_3[0x46] = 0;
      }
    }
    if (puStack_b4 == (undefined4 *)&DAT_00000064) {
      param_3[0x41] = 4;
      param_3[0x42] = 0x3f800000;
      param_3[0x49] = 0;
    }
    else if (puStack_b4 == (undefined4 *)0x68) {
      param_3[0x42] = 0x3f800000;
      param_3[0x49] = 0;
    }
    else if (puStack_b4 == (undefined4 *)0x6c) {
      param_3[0x49] = 0;
      param_3[0x42] = iStack_38;
    }
    else {
      param_3[0x42] = iStack_38;
      param_3[0x49] = uStack_34;
    }
    if (iStack_18 != 0) {
      pptVar1 = (tSFLIST **)(param_3 + 0x10);
      if (param_3[0x10] != 0) {
        _SfVideoPlugin_DestroyCacheList_4();
        *pptVar1 = (tSFLIST *)0x0;
      }
      ppiVar8 = &piStack_b8;
      iVar5 = (**(code **)(*param_1 + 0xc))(param_1,ppiVar8,4);
      if (-1 < iVar5) {
        if (piStack_cc != (int *)0x4) {
          return -0x7ffb1ff8;
        }
        iVar5 = 0;
        iVar6 = 0;
        if (0 < (int)puStack_c8) {
          do {
            lVar4 = tSFVIDEOFILTERCACHE::Create
                              (pIStack_2c,iStack_28,pptVar1,(tSFGUIDTRANSLATIONTABLE *)&DAT_00646c70
                               ,DAT_00646c90,(_GUID *)&ppuStack_c0);
            if (lVar4 < 0) {
              iVar5 = iVar5 + 1;
              FUN_005bb170(&ppuStack_c0,"Track Filter");
            }
            else {
              FUN_005a5060(*(undefined4 *)(*(int *)(*pptVar1 + 8) + (iVar6 - iVar5) * 4),uStack_20,2
                           ,0xffffffff,0x7fffffff);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)puStack_c8);
        }
        pptVar1 = (tSFLIST **)(param_3 + 0x11);
        if (param_3[0x11] != 0) {
          _SfVideoPlugin_DestroyCacheList_4(param_3[0x11]);
          *pptVar1 = (tSFLIST *)0x0;
        }
        iVar5 = (*pIStack_2c->lpVtbl->Read)(pIStack_2c,&puStack_c8,4,(ULONG *)&piStack_cc);
        if (-1 < iVar5) {
          if (param_1 != (int *)0x4) {
            return -0x7ffb1ff8;
          }
          iVar5 = 0;
          iVar6 = 0;
          if (0 < (int)ppiVar8) {
            do {
              lVar4 = tSFVIDEOFILTERCACHE::Create
                                (pIStack_3c,iStack_38,pptVar1,
                                 (tSFGUIDTRANSLATIONTABLE *)&DAT_00646c70,DAT_00646c90,
                                 (_GUID *)&stack0xffffff30);
              if (lVar4 < 0) {
                iVar5 = iVar5 + 1;
                FUN_005bb170(&stack0xffffff30,"Track Mask Filter");
              }
              else {
                FUN_005a5060(*(undefined4 *)(*(int *)(*pptVar1 + 8) + (iVar6 - iVar5) * 4),uStack_30
                             ,3,0xffffffff,0x7fffffff);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)ppiVar8);
          }
          iVar5 = FUN_00522d40(pIStack_3c,iStack_38,param_3 + 0x12,uStack_30);
        }
      }
    }
    return iVar5;
  }
  return -0x7ffb1ff8;
}


