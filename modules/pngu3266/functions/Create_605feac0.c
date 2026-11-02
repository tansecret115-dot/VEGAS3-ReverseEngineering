/* Module: pngu3266.dll
   Function: Create
   Address: 605feac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNPropertyPage::Create(unsigned long) */

int __thiscall CPNPropertyPage::Create(CPNPropertyPage *this,ulong param_1)

{
  HPROPSHEETPAGE p_Var1;
  DWORD local_2c [2];
  HINSTANCE local_24;
  _union_1933 local_20;
  LPCSTR local_18;
  code *local_14;
  CPNPropertyPage *local_10;
  
                    /* 0xeac0  909  ?Create@CPNPropertyPage@@UAEHK@Z */
  memset(local_2c,0,0x28);
  local_2c[0] = 0x28;
  local_2c[1] = 8;
  if ((param_1 & 8) != 0) {
    local_2c[1] = 0x28;
  }
  local_24 = (HINSTANCE)FUN_6061dc60(*(undefined4 *)(this + 0xb8),2);
  local_20._2_2_ = 0;
  local_20._0_2_ = *(ushort *)(this + 0xb8);
  local_18 = *(LPCSTR *)(this + 0xf0);
  local_14 = FUN_605feb9f;
  local_10 = this;
  p_Var1 = CreatePropertySheetPageA((LPCPROPSHEETPAGEA)local_2c);
  *(HPROPSHEETPAGE *)(this + 0xec) = p_Var1;
  return (uint)(p_Var1 != (HPROPSHEETPAGE)0x0);
}


