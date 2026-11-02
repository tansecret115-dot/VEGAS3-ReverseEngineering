/* Module: pngu3266.dll
   Function: Create
   Address: 605fdff5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNEdit::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,unsigned long,char const *) */

int __thiscall
CPNEdit::Create(CPNEdit *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
               long param_5,long param_6,ulong param_7,ulong param_8,char *param_9)

{
  ulong uVar1;
  int iVar2;
  
                    /* 0xdff5  900  ?Create@CPNEdit@@QAEHKPAVCPNWindow@@JJJJKKPBD@Z */
  uVar1 = TranslateStyles(this,param_8);
  *(undefined4 *)(this + 0x106) = 0;
  *(undefined4 *)(this + 0x102) = 0xffffffff;
  this[0x112] = (CPNEdit)0x0;
  this[0x15] = (CPNEdit)((byte)this[0x15] | 2);
  *(ulong *)(this + 0x10e) = param_8 & 1;
  iVar2 = CPNControl::Create((CPNControl *)this,param_1,&DAT_606491dc,param_2,param_3,param_4,
                             param_5,param_6,param_7 | 0x10000000,uVar1,param_9,0);
  SendMessageA(*(HWND *)(this + 0xc),0x30,DAT_6064a03c,0);
  return iVar2;
}


