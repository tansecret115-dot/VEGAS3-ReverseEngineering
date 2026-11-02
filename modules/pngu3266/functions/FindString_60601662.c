/* Module: pngu3266.dll
   Function: FindString
   Address: 60601662
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall CPNPopupList::FindString(char const *,unsigned long,int,int) */

long __thiscall
CPNPopupList::FindString(CPNPopupList *this,char *param_1,ulong param_2,int param_3,int param_4)

{
  long lVar1;
  
                    /* 0x11662  1052  ?FindString@CPNPopupList@@UAEJPBDKHH@Z */
  if ((param_3 == 0) && (param_4 == 0)) {
    lVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x158,param_2 - 1,(long)param_1);
  }
  else {
    lVar1 = XPNPopupList::FindString((XPNPopupList *)this,param_1,param_2,param_3,param_4);
  }
  return lVar1;
}


