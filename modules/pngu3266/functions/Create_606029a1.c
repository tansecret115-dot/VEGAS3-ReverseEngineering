/* Module: pngu3266.dll
   Function: Create
   Address: 606029a1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNScrollBar::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,unsigned long) */

int __thiscall
CPNScrollBar::Create
          (CPNScrollBar *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
          long param_5,long param_6,ulong param_7,ulong param_8)

{
  int iVar1;
  
                    /* 0x129a1  912  ?Create@CPNScrollBar@@UAEHKPAVCPNWindow@@JJJJKK@Z */
  iVar1 = CPNControl::Create((CPNControl *)this,param_1,s_SCROLLBAR_60649248,param_2,param_3,param_4
                             ,param_5,param_6,param_7,(uint)((param_8 & 1) != 0),&DAT_60649ac0,0);
  return iVar1;
}


