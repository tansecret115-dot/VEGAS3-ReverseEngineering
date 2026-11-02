/* Module: g2plug.dll
   Function: DoEncodeWizard
   Address: 5f80dcc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall CG2EncodeWizard::DoEncodeWizard(struct SFG2_PARAMS *,struct
   SFG2TEMPLATE_DESCRIPTION *) */

long __thiscall
CG2EncodeWizard::DoEncodeWizard
          (CG2EncodeWizard *this,SFG2_PARAMS *param_1,SFG2TEMPLATE_DESCRIPTION *param_2)

{
  HWND pHVar1;
  long lVar2;
  HGLOBAL pvVar3;
  INT_PTR IVar4;
  int iVar5;
  SFG2_PARAMS *pSVar6;
  ulong *puVar7;
  CG2EncodeWizard *pCVar8;
  CG2EncodeWizard *pCVar9;
  _GUID *p_Var10;
  PROPSHEETHEADERA_V2 *pPVar11;
  bool bVar12;
  uchar *local_25c;
  ulong local_258;
  PROPSHEETHEADERA_V2 PStack_254;
  CHAR local_220 [64];
  undefined1 auStack_1e0 [96];
  undefined1 auStack_180 [96];
  undefined1 auStack_120 [96];
  undefined1 auStack_c0 [96];
  _PROPSHEETPAGEA _Stack_60;
  
                    /* 0xdcc0  6
                       ?DoEncodeWizard@CG2EncodeWizard@@QAEJPAUSFG2_PARAMS@@PAUSFG2TEMPLATE_DESCRIPTION@@@Z
                        */
  if (param_1 == (SFG2_PARAMS *)0x0) {
    (**(code **)(*(int *)this + 8))();
  }
  else {
    pSVar6 = param_1;
    pCVar8 = this;
    for (iVar5 = 0x19c; pCVar9 = pCVar8 + 4, iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pCVar9 = *(undefined4 *)pSVar6;
      pSVar6 = pSVar6 + 4;
      pCVar8 = pCVar9;
    }
    *(undefined2 *)pCVar9 = *(undefined2 *)pSVar6;
    pCVar8[6] = *(CG2EncodeWizard *)(pSVar6 + 2);
    iVar5 = 4;
    bVar12 = true;
    puVar7 = &DAT_5f872fe8;
    p_Var10 = (_GUID *)(param_1 + 4);
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar12 = *puVar7 == p_Var10->Data1;
      puVar7 = puVar7 + 1;
      p_Var10 = (_GUID *)&p_Var10->Data2;
    } while (bVar12);
    if (!bVar12) {
      lVar2 = SfG2GetCodecInfo(*(_GUID *)(param_1 + 4),&local_25c,&local_258);
      if (-1 < lVar2) {
        SfRealG2_RestoreTargetData(local_25c,local_258);
        pvVar3 = GlobalHandle(local_25c);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(local_25c);
        GlobalFree(pvVar3);
      }
    }
  }
  *(SFG2TEMPLATE_DESCRIPTION **)(this + 0x678) = param_2;
  FUN_5f8172d0(DAT_5f87746c,0x120,local_220,0x40);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)auStack_1e0,0x1ad,local_220,FUN_5f80bf90);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)(auStack_1e0 + 0x30),0x1c3,local_220,FUN_5f80c180);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)auStack_180,0x1b6,local_220,FUN_5f80c230);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)(auStack_180 + 0x30),0x1ba,local_220,FUN_5f80c5b0);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)auStack_120,0x1b8,local_220,
                     (_func_int_HWND___ptr_uint_uint_long *)&LAB_5f80ca60);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)(auStack_120 + 0x30),0x1c4,local_220,FUN_5f80cdd0);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)auStack_c0,0x1b7,local_220,
                     (_func_int_HWND___ptr_uint_uint_long *)&LAB_5f80d050);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)(auStack_c0 + 0x30),0x1c6,local_220,
                     (_func_int_HWND___ptr_uint_uint_long *)&LAB_5f80d720);
  FillInPropertyPage(this,&_Stack_60,0x1c5,local_220,
                     (_func_int_HWND___ptr_uint_uint_long *)&LAB_5f80d400);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)&_Stack_60.hActCtx,0x1bb,local_220,
                     (_func_int_HWND___ptr_uint_uint_long *)&LAB_5f80d870);
  pHVar1 = *(HWND *)(this + 0x67c);
  pPVar11 = &PStack_254;
  for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
    pPVar11->dwSize = 0;
    pPVar11 = (PROPSHEETHEADERA_V2 *)&pPVar11->dwFlags;
  }
  PStack_254.hInstance = DAT_5f877460;
  PStack_254.u3.ppsp = (LPCPROPSHEETPAGEA)auStack_1e0;
  PStack_254.u2.nStartPage._1_3_ = 0;
  PStack_254.u2.nStartPage._0_1_ = *(int *)(this + 0x678) == 0;
  PStack_254.dwSize = 0x34;
  PStack_254.dwFlags = 0x28;
  PStack_254.nPages = 10;
  PStack_254.hwndParent = pHVar1;
  IVar4 = PropertySheetA(&PStack_254);
  if (IVar4 == 0) {
    return -0x7fffbffb;
  }
  if (param_1 != (SFG2_PARAMS *)0x0) {
    for (iVar5 = 0x19c; pCVar8 = this + 4, iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)param_1 = *(undefined4 *)pCVar8;
      param_1 = param_1 + 4;
      this = pCVar8;
    }
    *(undefined2 *)param_1 = *(undefined2 *)pCVar8;
    *(CG2EncodeWizard *)(param_1 + 2) = this[6];
  }
  return 0;
}


