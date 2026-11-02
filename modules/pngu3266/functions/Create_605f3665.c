/* Module: pngu3266.dll
   Function: Create
   Address: 605f3665
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNButton::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,unsigned long,char const *) */

int __thiscall
CPNButton::Create(CPNButton *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
                 long param_5,long param_6,ulong param_7,ulong param_8,char *param_9)

{
  int iVar1;
  
                    /* 0x3665  894  ?Create@CPNButton@@UAEHKPAVCPNWindow@@JJJJKKPBD@Z */
  iVar1 = CPNControl::Create((CPNControl *)this,param_1,s_BUTTON_60649180,param_2,param_3,param_4,
                             param_5,param_6,param_7,0,param_9,0);
  SendMessageA(*(HWND *)(this + 0xc),0x30,DAT_6064a03c,0);
  return iVar1;
}


