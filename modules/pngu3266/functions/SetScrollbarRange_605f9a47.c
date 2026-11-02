/* Module: pngu3266.dll
   Function: SetScrollbarRange
   Address: 605f9a47
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNWindow::SetScrollbarRange(long,long,long) */

int __thiscall CPNWindow::SetScrollbarRange(CPNWindow *this,long param_1,long param_2,long param_3)

{
  BOOL BVar1;
  
                    /* 0x9a47  1996  ?SetScrollbarRange@CPNWindow@@QAEHJJJ@Z */
  BVar1 = SetScrollRange(*(HWND *)(this + 0xc),(uint)(param_3 == 1),param_1,param_2,1);
  return BVar1;
}


