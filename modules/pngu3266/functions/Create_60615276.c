/* Module: pngu3266.dll
   Function: Create
   Address: 60615276
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNImageControl::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,unsigned long,class CPNImage *) */

int __thiscall
CPNImageControl::Create
          (CPNImageControl *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
          long param_5,long param_6,ulong param_7,ulong param_8,CPNImage *param_9)

{
  int iVar1;
  
                    /* 0x25276  905
                       ?Create@CPNImageControl@@QAEHKPAVCPNWindow@@JJJJKKPAVCPNImage@@@Z */
  *(CPNImage **)(this + 0xc0) = param_9;
  UpdateBackgroundColor(this);
  iVar1 = CPNControl::Create((CPNControl *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                             param_7,(char *)0x0,param_8);
  return iVar1;
}


