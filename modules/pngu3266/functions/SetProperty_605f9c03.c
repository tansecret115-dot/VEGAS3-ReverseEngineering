/* Module: pngu3266.dll
   Function: SetProperty
   Address: 605f9c03
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNWindow::SetProperty(char const *,void *) */

int __thiscall CPNWindow::SetProperty(CPNWindow *this,char *param_1,void *param_2)

{
  BOOL BVar1;
  
                    /* 0x9c03  1969  ?SetProperty@CPNWindow@@QAEHPBDPAX@Z */
  BVar1 = SetPropA(*(HWND *)(this + 0xc),param_1,param_2);
  return BVar1;
}


