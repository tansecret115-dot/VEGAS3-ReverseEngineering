/* Module: pngu3266.dll
   Function: Create
   Address: 6060d056
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall XPNControl::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,char const *,unsigned long) */

int __thiscall
XPNControl::Create(XPNControl *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
                  long param_5,long param_6,ulong param_7,char *param_8,ulong param_9)

{
  int iVar1;
  
                    /* 0x1d056  919  ?Create@XPNControl@@IAEHKPAVCPNWindow@@JJJJKPBDK@Z */
  *(ulong *)(this + 0xb8) = param_9;
  iVar1 = CPNWindow::Create((CPNWindow *)this,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8);
  (**(code **)(*(int *)this + 0x128))(param_1);
  return iVar1;
}


