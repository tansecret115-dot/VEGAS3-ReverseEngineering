/* Module: pngu3266.dll
   Function: Create
   Address: 605f6aca
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNWindow::Create(class CPNWindow *,long,long,long,long,unsigned
   long,char const *) */

int __thiscall
CPNWindow::Create(CPNWindow *this,CPNWindow *param_1,long param_2,long param_3,long param_4,
                 long param_5,ulong param_6,char *param_7)

{
  int iVar1;
  
                    /* 0x6aca  917  ?Create@CPNWindow@@UAEHPAV1@JJJJKPBD@Z */
  iVar1 = Create(this,DAT_60649a78,param_1,param_2,param_3,param_4,param_5,param_6,0,param_7);
  return iVar1;
}


