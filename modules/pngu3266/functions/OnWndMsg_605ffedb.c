/* Module: pngu3266.dll
   Function: OnWndMsg
   Address: 605ffedb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall CPNPropertySheet::OnWndMsg(unsigned long,unsigned int,long,long
   *) */

int __thiscall
CPNPropertySheet::OnWndMsg
          (CPNPropertySheet *this,ulong param_1,uint param_2,long param_3,long *param_4)

{
  HWND pHVar1;
  int iVar2;
  
                    /* 0xfedb  1710  ?OnWndMsg@CPNPropertySheet@@MAEHKIJPAJ@Z */
  if (param_1 == 0x111) {
    if ((param_3 != 0) && (pHVar1 = GetParent((HWND)param_3), pHVar1 != *(HWND *)(this + 0xc))) {
      return 0;
    }
    param_1 = 0x111;
  }
  iVar2 = CPNWindow::OnWndMsg((CPNWindow *)this,param_1,param_2,param_3,param_4);
  return iVar2;
}


