/* Module: pngu3266.dll
   Function: LoadIconA
   Address: 605f3e92
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNIcon::LoadIconA(unsigned long) */

int __thiscall CPNIcon::LoadIconA(CPNIcon *this,ulong param_1)

{
  int iVar1;
  
                    /* 0x3e92  1541  ?LoadIconA@CPNIcon@@UAEHK@Z */
  iVar1 = FUN_6061da10(param_1);
  *(int *)(this + 0x2a) = iVar1;
  return (uint)(iVar1 != 0);
}


