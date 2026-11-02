/* Module: pngu3266.dll
   Function: FindPrefixSubstring
   Address: 606015d4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNPopupList::FindPrefixSubstring(char const *,unsigned
   long) */

ulong __thiscall CPNPopupList::FindPrefixSubstring(CPNPopupList *this,char *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  
                    /* 0x115d4  1048  ?FindPrefixSubstring@CPNPopupList@@UAEKPBDK@Z */
  if (param_2 == 0xffffffff) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = param_2 - 1;
  }
  uVar2 = CPNWindow::SendMessageA((CPNWindow *)this,0x14c,uVar1,(long)param_1);
  return uVar2;
}


