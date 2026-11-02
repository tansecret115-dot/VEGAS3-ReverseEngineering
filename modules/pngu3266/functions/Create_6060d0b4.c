/* Module: pngu3266.dll
   Function: Create
   Address: 6060d0b4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNFrame::Create(class CPNWindow *,class CPNMenu
   *,long,long,long,long,unsigned long,char const *) */

int __thiscall
XPNFrame::Create(XPNFrame *this,CPNWindow *param_1,CPNMenu *param_2,long param_3,long param_4,
                long param_5,long param_6,ulong param_7,char *param_8)

{
  int iVar1;
  
                    /* 0x1d0b4  923  ?Create@XPNFrame@@UAEHPAVCPNWindow@@PAVCPNMenu@@JJJJKPBD@Z */
  iVar1 = CPNWindow::Create((CPNWindow *)this,param_1,param_3,param_4,param_5,param_6,param_7,
                            param_8);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x120))(param_2);
  }
  return (uint)(iVar1 != 0);
}


