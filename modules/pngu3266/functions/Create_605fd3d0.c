/* Module: pngu3266.dll
   Function: Create
   Address: 605fd3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNImageButton::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,unsigned long,unsigned long) */

int __thiscall
CPNImageButton::Create
          (CPNImageButton *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
          long param_5,long param_6,ulong param_7,ulong param_8,ulong param_9)

{
  int iVar1;
  
                    /* 0xd3d0  904  ?Create@CPNImageButton@@UAEHKPAVCPNWindow@@JJJJKKK@Z */
  iVar1 = CPNControl::Create((CPNControl *)this,param_1,s_BUTTON_60649180,param_2,param_3,param_4,
                             param_5,param_6,param_7 | 0x4000,0xb,(char *)0x0,param_8);
  *(ulong *)(this + 0x10b) = param_8 & 4;
  if ((iVar1 != 0) && (param_9 != 0)) {
    iVar1 = (**(code **)(*(int *)this + 0x150))(param_9);
  }
  return iVar1;
}


