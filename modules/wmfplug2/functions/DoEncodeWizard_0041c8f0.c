/* Module: wmfplug2.dll
   Function: DoEncodeWizard
   Address: 0041c8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall CEncodeWizard::DoEncodeWizard(struct SFASF3_PARAMS *,struct
   SFASF3_TEMPLATE_INFO *) */

long __thiscall
CEncodeWizard::DoEncodeWizard
          (CEncodeWizard *this,SFASF3_PARAMS *param_1,SFASF3_TEMPLATE_INFO *param_2)

{
  INT_PTR IVar1;
  int iVar2;
  SFASF3_PARAMS *pSVar3;
  CEncodeWizard *pCVar4;
  PROPSHEETHEADERA_V2 *pPVar5;
  PROPSHEETHEADERA_V2 PStack_1f4;
  CHAR local_1c0 [64];
  undefined1 auStack_180 [96];
  undefined1 auStack_120 [96];
  undefined1 auStack_c0 [96];
  _PROPSHEETPAGEA _Stack_60;
  
                    /* 0x1c8f0  6
                       ?DoEncodeWizard@CEncodeWizard@@QAEJPAUSFASF3_PARAMS@@PAUSFASF3_TEMPLATE_INFO@@@Z
                        */
  if (param_1 == (SFASF3_PARAMS *)0x0) {
    (**(code **)(*(int *)this + 8))();
  }
  else {
    pSVar3 = param_1;
    pCVar4 = this + 8;
    for (iVar2 = 0x23e; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar4 = *(undefined4 *)pSVar3;
      pSVar3 = pSVar3 + 4;
      pCVar4 = pCVar4 + 4;
    }
  }
  *(SFASF3_TEMPLATE_INFO **)(this + 0x900) = param_2;
  FUN_0041fa90(DAT_00489d58,0x120,local_1c0,0x40);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)auStack_180,0x1ad,local_1c0,
                     (_func_int_HWND___ptr_uint_uint_long *)&LAB_0041c0e0);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)(auStack_180 + 0x30),0xf8,local_1c0,FUN_0041c2c0);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)auStack_120,0xf7,local_1c0,FUN_0041c3a0);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)(auStack_120 + 0x30),0xf9,local_1c0,FUN_0041c420);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)auStack_c0,0x6a,local_1c0,FUN_0041c4a0);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)(auStack_c0 + 0x30),0x1c4,local_1c0,FUN_0041c520);
  FillInPropertyPage(this,&_Stack_60,0x31c,local_1c0,FUN_0041c7b0);
  FillInPropertyPage(this,(_PROPSHEETPAGEA *)&_Stack_60.hActCtx,0x31b,local_1c0,FUN_0041c870);
  pPVar5 = &PStack_1f4;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    pPVar5->dwSize = 0;
    pPVar5 = (PROPSHEETHEADERA_V2 *)&pPVar5->dwFlags;
  }
  PStack_1f4.dwSize = 0x34;
  PStack_1f4.dwFlags = 0x28;
  PStack_1f4.hInstance = DAT_00489d50;
  PStack_1f4.hwndParent = *(HWND *)(this + 0x904);
  PStack_1f4.u3.ppsp = (LPCPROPSHEETPAGEA)auStack_180;
  PStack_1f4.nPages = 8;
  PStack_1f4.u2.nStartPage = 0;
  IVar1 = PropertySheetA(&PStack_1f4);
  if (IVar1 == 0) {
    return -0x7fffbffb;
  }
  if (param_1 != (SFASF3_PARAMS *)0x0) {
    pCVar4 = this + 8;
    for (iVar2 = 0x23e; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)param_1 = *(undefined4 *)pCVar4;
      pCVar4 = pCVar4 + 4;
      param_1 = param_1 + 4;
    }
  }
  return 0;
}


