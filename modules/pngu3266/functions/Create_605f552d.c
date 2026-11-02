/* Module: pngu3266.dll
   Function: Create
   Address: 605f552d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNText::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,char const *,unsigned long) */

int __thiscall
CPNText::Create(CPNText *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
               long param_5,long param_6,ulong param_7,char *param_8,ulong param_9)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
                    /* 0x552d  913  ?Create@CPNText@@UAEHKPAVCPNWindow@@JJJJKPBDK@Z */
  uVar3 = 0;
  uVar1 = TranslateStyles(this,param_9);
  iVar2 = CPNControl::Create((CPNControl *)this,param_1,s_STATIC_60649190,param_2,param_3,param_4,
                             param_5,param_6,param_7,uVar1,param_8,uVar3);
  SendMessageA(*(HWND *)(this + 0xc),0x30,DAT_6064a03c,0);
  return iVar2;
}


