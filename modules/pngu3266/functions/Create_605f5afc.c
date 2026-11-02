/* Module: pngu3266.dll
   Function: Create
   Address: 605f5afc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNGroupBox::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,char const *) */

int __thiscall
CPNGroupBox::Create(CPNGroupBox *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
                   long param_5,long param_6,ulong param_7,char *param_8)

{
  int iVar1;
  
                    /* 0x5afc  903  ?Create@CPNGroupBox@@UAEHKPAVCPNWindow@@JJJJKPBD@Z */
  iVar1 = CPNControl::Create((CPNControl *)this,param_1,s_BUTTON_60649180,param_2,param_3,param_4,
                             param_5,param_6,param_7,7,param_8,7);
  SendMessageA(*(HWND *)(this + 0xc),0x30,DAT_6064a03c,0);
  return iVar1;
}


