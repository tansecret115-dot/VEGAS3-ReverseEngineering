/* Module: pngu3266.dll
   Function: DoModal
   Address: 605ff781
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNPropertySheet::DoModal(class CPNWindow *,char const
   *,unsigned long) */

ulong __thiscall
CPNPropertySheet::DoModal(CPNPropertySheet *this,CPNWindow *param_1,char *param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  CPNWindow *pCVar4;
  CPNWindow *pCVar5;
  ulong uVar6;
  CPNWindow *this_00;
  _union_1957 _Var7;
  DWORD local_30 [2];
  HWND__ *local_28;
  char *local_1c;
  _union_1957 local_18;
  _union_1955 local_14;
  _union_1956 local_10;
  PFNPROPSHEETCALLBACK local_c;
  _union_1957 local_8;
  
                    /* 0xf781  968  ?DoModal@CPNPropertySheet@@UAEKPAVCPNWindow@@PBDK@Z */
  this_00 = param_1;
  XPNDialog::PreDomodal((XPNDialog *)this,param_1);
  *(undefined4 *)(this + 0x118) = 0;
  if ((*(int *)(this + 0xc4) == 0) ||
     (iVar2 = CPNDialog::AddSingleInstanceDialog((CPNDialog *)this), iVar2 != 0)) {
    memset(local_30,0,0x28);
    _Var7 = (_union_1957)((_union_1957 *)(this + 0xd4))->hbmWatermark;
    local_8 = _Var7;
    if (*(void **)(this + 0x110) != (void *)0x0) {
      operator_delete(*(void **)(this + 0x110));
    }
    pvVar3 = operator_new((int)_Var7.hbmWatermark << 2);
    *(void **)(this + 0x110) = pvVar3;
    if (pvVar3 != (void *)0x0) {
      param_1 = (CPNWindow *)0x0;
      if (0 < (int)_Var7.hbmWatermark) {
        do {
          piVar1 = *(int **)(*(int *)(this + 0xd0) + (int)param_1 * 4);
          (**(code **)(*piVar1 + 0x178))(*(undefined4 *)(this + 0x104));
          pCVar4 = param_1 + 1;
          *(int *)(*(int *)(this + 0x110) + (int)param_1 * 4) = piVar1[0x3b];
          piVar1[0x39] = (int)this;
          _Var7 = local_8;
          param_1 = pCVar4;
        } while ((int)pCVar4 < (int)local_8.hbmWatermark);
      }
      *(CPNWindow **)(this + 0x48) = this_00;
      if (this_00 != (CPNWindow *)0x0) {
        pCVar4 = (CPNWindow *)(**(code **)(*(int *)this_00 + 0x10c))();
        while (pCVar5 = pCVar4, pCVar5 != (CPNWindow *)0x0) {
          pCVar4 = (CPNWindow *)(**(code **)(*(int *)pCVar5 + 0x10c))();
          this_00 = pCVar5;
        }
        (**(code **)(*(int *)this_00 + 0x110))(this);
      }
      local_30[0] = 0x28;
      local_30[1] = 0x180;
      if (this_00 == (CPNWindow *)0x0) {
        local_28 = (HWND__ *)0x0;
      }
      else {
        local_28 = CPNWindow::GetHWND(this_00);
      }
      local_1c = param_2;
      local_14.nStartPage = param_3;
      local_10 = *(_union_1956 *)(this + 0x110);
      local_c = (PFNPROPSHEETCALLBACK)&LAB_605ffdd8;
      zm_pCurrPropSheet = this;
      *(undefined4 *)(this + 200) = 1;
      local_18 = _Var7;
      uVar6 = PropertySheetA((LPCPROPSHEETHEADERA)local_30);
      *(undefined4 *)(this + 200) = 0;
      if (this_00 != (CPNWindow *)0x0) {
        (**(code **)(*(int *)this_00 + 0x110))(0);
      }
      operator_delete(*(void **)(this + 0x110));
      *(undefined4 *)(this + 0x110) = 0;
      if (*(int *)(this + 0xc4) != 0) {
        CPNDialog::RemoveSingleInstanceDialog((CPNDialog *)this);
      }
      XPNDialog::PostDomodal((XPNDialog *)this,this_00);
      return uVar6;
    }
  }
  XPNDialog::PostDomodal((XPNDialog *)this,param_1);
  return 0;
}


