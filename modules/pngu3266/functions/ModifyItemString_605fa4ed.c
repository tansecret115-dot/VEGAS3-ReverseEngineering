/* Module: pngu3266.dll
   Function: ModifyItemString
   Address: 605fa4ed
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMenu::ModifyItemString(unsigned long,char const *) */

void __thiscall CPNMenu::ModifyItemString(CPNMenu *this,ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  LPCSTR unaff_retaddr;
  
                    /* 0xa4ed  1569  ?ModifyItemString@CPNMenu@@UAEXKPBD@Z */
  (**(code **)(*(int *)this + 0x68))();
  iVar1 = (**(code **)(*(int *)this + 0x58))(param_1);
  iVar2 = (**(code **)(*(int *)this + 0x5c))(param_1);
  ModifyMenuA(*(HMENU *)(this + 0x14),param_1,-(uint)(iVar1 != 0) & 8 | (uint)(iVar2 == 0),param_1,
              unaff_retaddr);
  return;
}


