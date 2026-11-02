/* Module: pngu3266.dll
   Function: LoadMenuA
   Address: 605fa206
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMenu::LoadMenuA(unsigned long) */

int __thiscall CPNMenu::LoadMenuA(CPNMenu *this,ulong param_1)

{
  int iVar1;
  
                    /* 0xa206  1542  ?LoadMenuA@CPNMenu@@UAEHK@Z */
  iVar1 = FUN_6061daa0(param_1);
  *(int *)(this + 0x14) = iVar1;
  *(ulong *)(this + 8) = param_1;
  *(uint *)(this + 0xc) = (uint)(iVar1 != 0);
  return (uint)(iVar1 != 0);
}


