/* Module: pngu3266.dll
   Function: Create
   Address: 605f33af
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNControl::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,char const *,unsigned long) */

int __thiscall
CPNControl::Create(CPNControl *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
                  long param_5,long param_6,ulong param_7,char *param_8,ulong param_9)

{
  int iVar1;
  
                    /* 0x33af  897  ?Create@CPNControl@@IAEHKPAVCPNWindow@@JJJJKPBDK@Z */
  iVar1 = XPNControl::Create((XPNControl *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                             param_7,param_8,param_9);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0xbc) = 0;
  }
  return iVar1;
}


