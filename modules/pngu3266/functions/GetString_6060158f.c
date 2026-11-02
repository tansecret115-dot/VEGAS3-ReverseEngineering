/* Module: pngu3266.dll
   Function: GetString
   Address: 6060158f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNPopupList::GetString(char *,unsigned long,unsigned
   long)const  */

ulong __thiscall
CPNPopupList::GetString(CPNPopupList *this,char *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
                    /* 0x1158f  1366  ?GetString@CPNPopupList@@UBEKPADKK@Z */
  lVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x149,param_3,0);
  uVar2 = lVar1 + 1;
  if (uVar2 <= param_2) {
    uVar2 = CPNWindow::SendMessageA((CPNWindow *)this,0x148,param_3,(long)param_1);
  }
  return uVar2;
}


