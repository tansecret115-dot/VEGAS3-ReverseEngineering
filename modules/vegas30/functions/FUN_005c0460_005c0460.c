/* Module: vegas30.exe
   Function: FUN_005c0460
   Address: 005c0460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int FUN_005c0460(int *****param_1,undefined4 param_2,undefined4 *param_3)

{
  int ****ppppiVar1;
  undefined1 ****ppppuVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int *piVar5;
  undefined4 *puVar6;
  int unaff_EDI;
  int ******ppppppiVar7;
  undefined1 *****pppppuVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined1 *****pppppuStack_27c;
  int *****pppppiStack_278;
  int *****pppppiStack_274;
  int ******ppppppiStack_270;
  undefined1 ****ppppuStack_26c;
  int ******ppppppiStack_268;
  int *****pppppiStack_264;
  int *****pppppiStack_260;
  int *****pppppiStack_25c;
  undefined1 *puStack_258;
  undefined1 ******ppppppuStack_254;
  undefined1 ******ppppppuStack_250;
  int *****pppppiStack_24c;
  undefined1 ****ppppuStack_248;
  int iStack_244;
  undefined1 ***pppuStack_240;
  int *****pppppiStack_23c;
  int ****ppppiStack_238;
  undefined1 *****pppppuStack_234;
  undefined1 ****ppppuStack_230;
  undefined1 ***pppuStack_22c;
  int local_218 [5];
  undefined4 local_204 [64];
  undefined4 auStack_104 [52];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_1c;
  int iStack_18;
  
  pppuStack_22c = (undefined1 ***)(local_218 + 3);
  *param_3 = 0x21;
  ppppuStack_230 = (undefined1 ****)0x1;
  pppppuStack_234 = (undefined1 *****)0x0;
  ppppiStack_238 = (int ****)0x0;
  pppppiStack_23c = param_1;
  local_204[0] = 0;
  local_218[0] = 0;
  pppuStack_240 = (undefined1 ***)0x5c049b;
  iVar3 = (*(code *)(*param_1)[5])();
  if (iVar3 < 0) {
LAB_005c04e4:
    if (pppuStack_22c != (undefined1 ***)0x1f8) goto LAB_005c05a5;
    piVar5 = local_218;
    ppppuStack_248 = (undefined1 ****)(local_218 + 1);
    for (iVar3 = 0x7e; piVar5 = piVar5 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = 0;
    }
    pppuStack_240 = (undefined1 ***)&stack0xfffffddc;
    iStack_244 = 0x1f8;
    pppppiStack_24c = param_1;
    ppppppuStack_250 = (undefined1 ******)0x5c0514;
    iVar3 = (*(code *)(*param_1)[3])();
    if (iVar3 < 0) {
      return iVar3;
    }
    if (pppppuStack_234 != (undefined1 *****)0x1f8) {
      return -0x7ffb1ff8;
    }
    *(undefined4 *)(iStack_18 + 4) = unaff_EBP;
    *(undefined4 *)(iStack_18 + 500) = uStack_34;
    *(undefined4 *)(iStack_18 + 0xc) = unaff_EBX;
    piVar5 = local_218;
    piVar9 = (int *)(iStack_18 + 0x10);
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar9 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar9 = piVar9 + 1;
    }
    puVar6 = local_204;
    puVar10 = (undefined4 *)(iStack_18 + 0x24);
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined4 *)(iStack_18 + 8) = uStack_30;
    puVar6 = auStack_104;
    puVar10 = (undefined4 *)(iStack_18 + 0x124);
    for (iVar4 = 0x34; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined4 *)(iStack_18 + 0x1f8) = 0;
LAB_005c0882:
    if (iStack_1c != 0) {
      ppppppuStack_250 = &pppppuStack_234;
      puStack_258 = &stack0xfffffdd8;
      ppppppuStack_254 = (undefined1 ******)0x4;
      pppppiStack_25c = param_1;
      pppppiStack_260 = (int *****)0x5c08a1;
      iVar3 = (*(code *)(*param_1)[3])();
      if (-1 < iVar3) {
        if (iStack_244 != 4) {
          return -0x7ffb1ff8;
        }
        pppppiStack_260 = (int *****)iStack_28;
        *(undefined4 *)(iStack_28 + 0x20c) = 0;
        *(undefined4 *)(iStack_28 + 0x208) = 0;
        pppppiStack_264 = (int *****)0x5c08df;
        FUN_005d13b0();
        pppppiStack_260 = (int *****)iStack_28;
        pppppiStack_264 = (int *****)0x5c08e5;
        FUN_005d1520();
        pppppiStack_24c = (int *****)0x0;
        if (0 < (int)ppppiStack_238) {
          while( true ) {
            ppppppiStack_268 = *(int *******)(iStack_28 + 0x1fc);
            pppppiStack_260 = (int *****)&ppppuStack_248;
            pppppiStack_264 = (int *****)0x20;
            ppppuStack_26c = (undefined1 ****)0x5c0908;
            iVar3 = _SfList_AllocItem_12();
            ppppuVar2 = ppppuStack_248;
            if (ppppuStack_248 == (undefined1 ****)0x0) break;
            pppppiStack_260 = (int *****)0x0;
            pppppiStack_264 = (int *****)0x0;
            ppppppiStack_268 = (int ******)0x0;
            ppppuStack_26c = ppppuStack_248;
            ppppppiStack_270 = (int ******)uStack_2c;
            pppppiStack_274 = param_1;
            pppppiStack_278 = (int *****)0x5c0929;
            iVar3 = FUN_005c09b0();
            if (iVar3 < 0) {
              ppppuStack_26c = *(undefined1 *****)(iStack_28 + 0x1fc);
              pppppiStack_260 = (int *****)0x0;
              pppppiStack_264 = (int *****)0xffffffff;
              ppppppiStack_268 = (int ******)0xffffffff;
              ppppppiStack_270 = (int ******)0x5c0986;
              _SfList_DeleteList_16();
              return iVar3;
            }
            ppppuStack_26c = *(undefined1 *****)(iStack_28 + 0x1fc);
            pppppiStack_260 = (int *****)0xffffffff;
            pppppiStack_264 = (int *****)0x0;
            ppppppiStack_268 = (int ******)0xffffffff;
            ppppppiStack_270 = (int ******)0x5c0941;
            iVar3 = _SfList_InsertList_16();
            if (iVar3 < 0) {
              return iVar3;
            }
            if (ppppuVar2[1] == (undefined1 ***)0x0) {
              *(int *)(iStack_28 + 0x208) = *(int *)(iStack_28 + 0x208) + 1;
            }
            pppppiStack_24c = (int *****)((int)pppppiStack_24c + 1);
            if ((int)ppppiStack_238 <= (int)pppppiStack_24c) {
              return iVar3;
            }
          }
        }
      }
    }
  }
  else {
    pppuStack_240 = (undefined1 ***)&stack0xfffffdd8;
    ppppuStack_248 = &pppuStack_22c;
    iStack_244 = 4;
    pppppiStack_24c = param_1;
    ppppppuStack_250 = (undefined1 ******)0x5c04b5;
    iVar3 = (*(code *)(*param_1)[3])();
    if (iVar3 < 0) goto LAB_005c04e4;
    if (unaff_EDI != 4) {
      pppuStack_22c = (undefined1 ***)0x0;
    }
    pppuStack_240 = (undefined1 ***)0x0;
    iStack_244 = 0;
    ppppppuStack_250 = (undefined1 ******)param_1;
    ppppppuStack_254 = (undefined1 ******)0x5c04d5;
    iVar3 = (*(code *)(*param_1)[5])();
    if (-1 < iVar3) goto LAB_005c04e4;
LAB_005c05a5:
    pppuStack_240 = (undefined1 ***)&stack0xfffffde0;
    iStack_244 = 1;
    ppppuStack_248 = (undefined1 ****)0x0;
    pppppiStack_24c = (int *****)0x0;
    ppppppuStack_250 = (undefined1 ******)param_1;
    pppuStack_22c = (undefined1 ***)0x0;
    ppppppuStack_254 = (undefined1 ******)0x5c05bc;
    iVar3 = (*(code *)(*param_1)[5])();
    if (iVar3 < 0) {
LAB_005c05f9:
      if (pppuStack_240 == (undefined1 ***)0x1f4) {
        pppppiStack_25c = (int *****)&stack0xfffffdd8;
        puVar6 = (undefined4 *)&stack0xfffffdd8;
        for (iVar3 = 0x7d; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        ppppppuStack_254 = (undefined1 ******)&ppppiStack_238;
        puStack_258 = (undefined1 *)0x1f4;
        pppppiStack_260 = param_1;
        pppppiStack_264 = (int *****)0x5c0629;
        iVar3 = (*(code *)(*param_1)[3])();
        if (iVar3 < 0) {
          return iVar3;
        }
        if (pppppuStack_234 != (undefined1 *****)0x1f4) {
          return -0x7ffb1ff8;
        }
        *(undefined4 *)(iStack_18 + 4) = unaff_EBP;
        *(undefined4 *)(iStack_18 + 500) = uStack_34;
        *(undefined4 *)(iStack_18 + 0xc) = unaff_EBX;
        piVar5 = local_218;
        piVar9 = (int *)(iStack_18 + 0x10);
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar9 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar9 = piVar9 + 1;
        }
        *(undefined4 *)(iStack_18 + 0x1f8) = 0;
        puVar6 = local_204;
        puVar10 = (undefined4 *)(iStack_18 + 0x24);
        for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar6 = auStack_104;
        puVar10 = (undefined4 *)(iStack_18 + 0x124);
        for (iVar4 = 0x34; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        }
        goto LAB_005c0882;
      }
    }
    else {
      ppppppuStack_254 = (undefined1 ******)&pppppiStack_23c;
      pppppiStack_25c = (int *****)&pppuStack_240;
      puStack_258 = (undefined1 *)0x4;
      pppppiStack_260 = param_1;
      pppppiStack_264 = (int *****)0x5c05d1;
      iVar3 = (*(code *)(*param_1)[3])();
      if (iVar3 < 0) goto LAB_005c05f9;
      if (pppppiStack_23c != (int *****)0x4) {
        pppuStack_240 = (undefined1 ***)0x0;
      }
      ppppppuStack_254 = (undefined1 ******)0x0;
      puStack_258 = (undefined1 *)0x0;
      pppppiStack_25c = (int *****)ppppuStack_230;
      pppppiStack_260 = (int *****)pppppuStack_234;
      pppppiStack_264 = param_1;
      ppppppiStack_268 = (int ******)0x5c05f1;
      iVar3 = (*(code *)(*param_1)[5])();
      if (-1 < iVar3) goto LAB_005c05f9;
    }
    ppppppuStack_254 = &pppppuStack_234;
    puStack_258 = (undefined1 *)0x1;
    pppppiStack_25c = (int *****)0x0;
    pppppiStack_260 = (int *****)0x0;
    pppppiStack_264 = param_1;
    pppuStack_240 = (undefined1 ***)0x0;
    ppppppiStack_268 = (int ******)0x5c06c9;
    iVar3 = (*(code *)(*param_1)[5])();
    if (iVar3 < 0) {
LAB_005c0706:
      if ((undefined1 ******)0x1fb < ppppppuStack_254) {
        ppppppiStack_268 = (int ******)&ppppuStack_248;
        ppppuStack_26c = (undefined1 ****)0x1;
        ppppppiStack_270 = (int ******)0x0;
        pppppiStack_274 = (int *****)0x0;
        pppppiStack_278 = param_1;
        ppppppuStack_254 = (undefined1 ******)0x0;
        pppppuStack_27c = (undefined1 *****)0x5c072b;
        iVar3 = (*(code *)(*param_1)[5])();
        if (iVar3 < 0) {
LAB_005c0764:
          if ((undefined1 *****)0x200 < ppppppiStack_268) goto LAB_005c0995;
        }
        else {
          pppppuStack_27c = (undefined1 *****)&pppppiStack_264;
          iVar3 = (*(code *)(*param_1)[3])(param_1,&ppppppiStack_268,4);
          if (iVar3 < 0) goto LAB_005c0764;
          if (pppppiStack_264 != (int *****)0x4) {
            ppppppiStack_268 = (int ******)0x0;
          }
          pppppuStack_27c = (undefined1 *****)0x0;
          iVar3 = (*(code *)(*param_1)[5])(param_1,pppppiStack_25c,puStack_258,0);
          if (-1 < iVar3) goto LAB_005c0764;
        }
        ppppiVar1 = *param_1;
        ppppppiVar7 = (int ******)&ppppppuStack_250;
        for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppppppiVar7 = (int *****)0x0;
          ppppppiVar7 = ppppppiVar7 + 1;
        }
        pppppuStack_27c = (undefined1 *****)&pppppiStack_25c;
        ppppppiStack_268 = (int ******)0x0;
        iVar3 = (*(code *)ppppiVar1[5])(param_1,0,0,1);
        pppppuVar8 = pppppuStack_27c;
        if ((-1 < iVar3) &&
           (iVar3 = (*(code *)(*param_1)[3])(param_1,&pppppuStack_27c,4,&pppppiStack_278),
           pppppuVar8 = pppppuStack_27c, -1 < iVar3)) {
          if (pppppiStack_278 != (int *****)0x4) {
            pppppuStack_27c = (undefined1 *****)0x0;
          }
          iVar3 = (*(code *)(*param_1)[5])(param_1,ppppppiStack_270,ppppuStack_26c,0,0);
          pppppuVar8 = pppppuStack_27c;
          if (iVar3 < 0) {
            pppppuVar8 = (undefined1 *****)0x0;
          }
        }
        iVar3 = (*(code *)(*param_1)[3])(param_1,&pppppiStack_264,pppppuVar8,&pppppiStack_274);
        if (iVar3 < 0) {
          return iVar3;
        }
        if (pppppuVar8 != pppppuStack_234) {
          return -0x7ffb1ff8;
        }
        *(undefined4 *)(iStack_18 + 4) = unaff_EBP;
        *(undefined4 *)(iStack_18 + 500) = uStack_34;
        *(undefined4 *)(iStack_18 + 0xc) = unaff_EBX;
        piVar5 = local_218;
        piVar9 = (int *)(iStack_18 + 0x10);
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar9 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar9 = piVar9 + 1;
        }
        *(undefined4 *)(iStack_18 + 8) = uStack_30;
        puVar6 = local_204;
        puVar10 = (undefined4 *)(iStack_18 + 0x24);
        for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        }
        *(int *)(iStack_18 + 0x5fc) = iStack_28;
        puVar6 = auStack_104;
        puVar10 = (undefined4 *)(iStack_18 + 0x124);
        for (iVar4 = 0x34; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        }
        *(undefined4 *)(iStack_18 + 0x1f8) = uStack_2c;
        goto LAB_005c0882;
      }
    }
    else {
      ppppppiStack_268 = (int ******)&ppppppuStack_250;
      ppppppiStack_270 = (int ******)&ppppppuStack_254;
      ppppuStack_26c = (undefined1 ****)0x4;
      pppppiStack_274 = param_1;
      pppppiStack_278 = (int *****)0x5c06de;
      iVar3 = (*(code *)(*param_1)[3])();
      if (iVar3 < 0) goto LAB_005c0706;
      if (ppppppuStack_250 != (undefined1 ******)0x4) {
        ppppppuStack_254 = (undefined1 ******)0x0;
      }
      ppppppiStack_268 = (int ******)0x0;
      ppppuStack_26c = (undefined1 ****)0x0;
      ppppppiStack_270 = (int ******)iStack_244;
      pppppiStack_274 = (int *****)ppppuStack_248;
      pppppiStack_278 = param_1;
      pppppuStack_27c = (undefined1 *****)0x5c06fe;
      iVar3 = (*(code *)(*param_1)[5])();
      if (-1 < iVar3) goto LAB_005c0706;
    }
LAB_005c0995:
    iVar3 = -0x7ffb1f7d;
  }
  return iVar3;
}


