/* Module: pngu3266.dll
   Function: AddString
   Address: 60603e5f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNCheckedListbox::AddString(char const *) */

ulong __thiscall CPNCheckedListbox::AddString(CPNCheckedListbox *this,char *param_1)

{
  char *_Dest;
  ulong uVar1;
  
                    /* 0x13e5f  775  ?AddString@CPNCheckedListbox@@UAEKPBD@Z */
  _Dest = operator_new(0x45);
  strncpy(_Dest,param_1,0x40);
  _Dest[0x41] = '\0';
  _Dest[0x42] = '\0';
  _Dest[0x43] = '\0';
  _Dest[0x44] = '\0';
  FUN_6061a230(*(void **)(this + 0xc0),_Dest);
  uVar1 = CPNListBox::AddString((CPNListBox *)this,param_1);
  return uVar1;
}


