/* Module: pngu3266.dll
   Function: Create
   Address: 6060f609
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall XPNAnimateCtl::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long) */

int __thiscall
XPNAnimateCtl::Create
          (XPNAnimateCtl *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
          long param_5,long param_6,ulong param_7)

{
  int iVar1;
  
                    /* 0x1f609  918  ?Create@XPNAnimateCtl@@QAEHKPAVCPNWindow@@JJJJK@Z */
  iVar1 = XPNControl::Create((XPNControl *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                             param_7,(char *)0x0,0);
  return iVar1;
}


