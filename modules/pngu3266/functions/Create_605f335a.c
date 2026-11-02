/* Module: pngu3266.dll
   Function: Create
   Address: 605f335a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNControl::Create(unsigned long,char const *,class CPNWindow
   *,long,long,long,long,unsigned long,unsigned long,char const *,unsigned long) */

int __thiscall
CPNControl::Create(CPNControl *this,ulong param_1,char *param_2,CPNWindow *param_3,long param_4,
                  long param_5,long param_6,long param_7,ulong param_8,ulong param_9,char *param_10,
                  ulong param_11)

{
  int iVar1;
  
                    /* 0x335a  898  ?Create@CPNControl@@IAEHKPBDPAVCPNWindow@@JJJJKK0K@Z */
  *(ulong *)(this + 0xb8) = param_11;
  iVar1 = CPNWindow::Create((CPNWindow *)this,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,param_9,param_10);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0xbc) = 1;
  }
  (**(code **)(*(int *)this + 0x128))(param_1);
  return iVar1;
}


