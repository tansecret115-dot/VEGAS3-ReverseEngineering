/* Module: pngu3266.dll
   Function: Create
   Address: 606011fd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNCheckButton::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,char const *) */

int __thiscall
CPNCheckButton::Create
          (CPNCheckButton *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
          long param_5,long param_6,ulong param_7,char *param_8)

{
  int iVar1;
  
                    /* 0x111fd  895  ?Create@CPNCheckButton@@UAEHKPAVCPNWindow@@JJJJKPBD@Z */
  iVar1 = CPNControl::Create((CPNControl *)this,param_1,s_BUTTON_60649180,param_2,param_3,param_4,
                             param_5,param_6,param_7,3,param_8,0);
  return iVar1;
}


