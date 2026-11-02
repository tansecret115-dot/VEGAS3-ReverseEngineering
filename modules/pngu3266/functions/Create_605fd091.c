/* Module: pngu3266.dll
   Function: Create
   Address: 605fd091
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNRadioBtn::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,char const *) */

int __thiscall
CPNRadioBtn::Create(CPNRadioBtn *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
                   long param_5,long param_6,ulong param_7,char *param_8)

{
  int iVar1;
  
                    /* 0xd091  911  ?Create@CPNRadioBtn@@UAEHKPAVCPNWindow@@JJJJKPBD@Z */
  iVar1 = CPNControl::Create((CPNControl *)this,param_1,s_BUTTON_60649180,param_2,param_3,param_4,
                             param_5,param_6,param_7,0x109,param_8,0);
  return iVar1;
}


