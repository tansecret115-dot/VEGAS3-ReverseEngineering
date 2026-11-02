/* Module: pngu3266.dll
   Function: GetItemString
   Address: 605fa58b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall CPNMenu::GetItemString(unsigned long,char *,long,int) */

long __thiscall
CPNMenu::GetItemString(CPNMenu *this,ulong param_1,char *param_2,long param_3,int param_4)

{
  int iVar1;
  
                    /* 0xa58b  1236  ?GetItemString@CPNMenu@@UAEJKPADJH@Z */
  iVar1 = GetMenuStringA(*(HMENU *)(this + 0x14),param_1,param_2,param_3,
                         -(uint)(param_4 != 0) & 0x400);
  return iVar1;
}


