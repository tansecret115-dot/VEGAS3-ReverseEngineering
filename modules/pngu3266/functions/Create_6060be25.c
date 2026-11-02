/* Module: pngu3266.dll
   Function: Create
   Address: 6060be25
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall XPNCustomText::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,char const *,unsigned long) */

int __thiscall
XPNCustomText::Create
          (XPNCustomText *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
          long param_5,long param_6,ulong param_7,char *param_8,ulong param_9)

{
  int iVar1;
  
                    /* 0x1be25  921  ?Create@XPNCustomText@@QAEHKPAVCPNWindow@@JJJJKPBDK@Z */
  TranslateStyles(this,param_9);
  FUN_60618ed0(this + 0xc4,param_8);
  iVar1 = XPNControl::Create((XPNControl *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                             param_7,param_8,param_9);
  return iVar1;
}


