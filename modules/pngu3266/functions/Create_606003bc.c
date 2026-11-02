/* Module: pngu3266.dll
   Function: Create
   Address: 606003bc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNListBox::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long) */

int __thiscall
CPNListBox::Create(CPNListBox *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
                  long param_5,long param_6,ulong param_7)

{
  uint uVar1;
  int iVar2;
  
                    /* 0x103bc  907  ?Create@CPNListBox@@UAEHKPAVCPNWindow@@JJJJK@Z */
  uVar1 = 1;
  if ((param_7 & 0x1000000) != 0) {
    uVar1 = 3;
  }
  if ((param_7 & 0x2000000) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_7 & 0x4000000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  if ((param_7 & 0x8000000) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  this[0x15] = (CPNListBox)((byte)this[0x15] | 2);
  iVar2 = CPNControl::Create((CPNControl *)this,param_1,s_LISTBOX_606491d4,param_2,param_3,param_4,
                             param_5,param_6,param_7,uVar1 | 0x200000,(char *)0x0,0);
  CPNRouter::AddObserver((CPNRouter *)this,(CPNRouter *)this,1,0);
  return iVar2;
}


