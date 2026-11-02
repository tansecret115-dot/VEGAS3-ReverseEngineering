/* Module: pngu3266.dll
   Function: Create
   Address: 60613695
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNCustomButton::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,unsigned long,char const *) */

int __thiscall
XPNCustomButton::Create
          (XPNCustomButton *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
          long param_5,long param_6,ulong param_7,ulong param_8,char *param_9)

{
  int iVar1;
  
                    /* 0x23695  920  ?Create@XPNCustomButton@@UAEHKPAVCPNWindow@@JJJJKKPBD@Z */
  TranslateStyles(this,param_8);
  FUN_60618ed0(this + 0xfb,param_9);
  iVar1 = XPNControl::Create((XPNControl *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                             param_7 | 0x4000,param_9,param_8);
  return iVar1;
}


