/* Module: pngu3266.dll
   Function: DoModeless
   Address: 605ff91e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNPropertySheet::DoModeless(class CPNWindow *,char
   const *,unsigned long) */

ulong __thiscall
CPNPropertySheet::DoModeless(CPNPropertySheet *this,CPNWindow *param_1,char *param_2,ulong param_3)

{
  _union_1957 _Var1;
  UINT UVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  INT_PTR IVar6;
  DWORD local_30 [2];
  HWND__ *local_28;
  char *local_1c;
  UINT local_18;
  _union_1955 local_14;
  _union_1956 local_10;
  PFNPROPSHEETCALLBACK local_c;
  _union_1957 local_8;
  
                    /* 0xf91e  974  ?DoModeless@CPNPropertySheet@@UAEKPAVCPNWindow@@PBDK@Z */
  *(undefined4 *)(this + 0x118) = 0;
  if ((*(int *)(this + 0xc4) == 0) ||
     (iVar4 = CPNDialog::AddSingleInstanceDialog((CPNDialog *)this), iVar4 != 0)) {
    *(undefined4 *)(this + 200) = 0;
    memset(local_30,0,0x28);
    UVar2 = *(UINT *)(this + 0xd4);
    if (*(void **)(this + 0x110) != (void *)0x0) {
      operator_delete(*(void **)(this + 0x110));
    }
    pvVar5 = operator_new(UVar2 << 2);
    *(void **)(this + 0x110) = pvVar5;
    if (pvVar5 != (void *)0x0) {
      local_8.hbmWatermark = (HBITMAP)0x0;
      if (0 < (int)UVar2) {
        do {
          piVar3 = *(int **)(*(int *)(this + 0xd0) + (int)local_8.hbmWatermark * 4);
          (**(code **)(*piVar3 + 0x178))(*(undefined4 *)(this + 0x104));
          _Var1.hbmWatermark = (HBITMAP)((int)&(local_8.hbmWatermark)->unused + 1);
          *(int *)(*(int *)(this + 0x110) + (int)local_8.hbmWatermark * 4) = piVar3[0x3b];
          piVar3[0x39] = (int)this;
          local_8.hbmWatermark = _Var1.hbmWatermark;
        } while ((int)_Var1.hbmWatermark < (int)UVar2);
      }
      local_30[0] = 0x28;
      local_30[1] = 0x580;
      if (param_1 == (CPNWindow *)0x0) {
        local_28 = (HWND__ *)0x0;
      }
      else {
        local_28 = CPNWindow::GetHWND(param_1);
      }
      local_1c = param_2;
      local_14.nStartPage = param_3;
      local_10 = *(_union_1956 *)(this + 0x110);
      local_c = (PFNPROPSHEETCALLBACK)&LAB_605ffdd8;
      zm_pCurrPropSheet = this;
      local_18 = UVar2;
      IVar6 = PropertySheetA((LPCPROPSHEETHEADERA)local_30);
      *(INT_PTR *)(this + 0xc) = IVar6;
    }
  }
  return 0;
}


