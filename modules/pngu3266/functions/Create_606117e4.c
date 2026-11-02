/* Module: pngu3266.dll
   Function: Create
   Address: 606117e4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNScrollingText::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,unsigned long) */

int __thiscall
XPNScrollingText::Create
          (XPNScrollingText *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
          long param_5,long param_6,ulong param_7,ulong param_8)

{
  int iVar1;
  
                    /* 0x217e4  927  ?Create@XPNScrollingText@@UAEHKPAVCPNWindow@@JJJJKK@Z */
  iVar1 = CPNControl::Create((CPNControl *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                             param_7,(char *)0x0,param_8);
  return iVar1;
}


