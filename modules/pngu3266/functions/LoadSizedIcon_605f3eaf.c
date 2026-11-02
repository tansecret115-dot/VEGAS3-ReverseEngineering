/* Module: pngu3266.dll
   Function: LoadSizedIcon
   Address: 605f3eaf
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNIcon::LoadSizedIcon(unsigned long,long,long) */

int __thiscall CPNIcon::LoadSizedIcon(CPNIcon *this,ulong param_1,long param_2,long param_3)

{
  int iVar1;
  
                    /* 0x3eaf  1545  ?LoadSizedIcon@CPNIcon@@UAEHKJJ@Z */
  *(long *)(this + 0xc) = param_2;
  *(long *)(this + 0x10) = param_3;
  iVar1 = FUN_6061da50(param_1,param_2,param_3);
  *(int *)(this + 0x2a) = iVar1;
  return (uint)(iVar1 != 0);
}


