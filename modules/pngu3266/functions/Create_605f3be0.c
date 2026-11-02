/* Module: pngu3266.dll
   Function: Create
   Address: 605f3be0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNFrame::Create(class CPNWindow *,class CPNMenu
   *,long,long,long,long,unsigned long,char const *) */

int __thiscall
CPNFrame::Create(CPNFrame *this,CPNWindow *param_1,CPNMenu *param_2,long param_3,long param_4,
                long param_5,long param_6,ulong param_7,char *param_8)

{
  int iVar1;
  
                    /* 0x3be0  902  ?Create@CPNFrame@@UAEHPAVCPNWindow@@PAVCPNMenu@@JJJJKPBD@Z */
  iVar1 = XPNFrame::Create((XPNFrame *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8);
  return iVar1;
}


