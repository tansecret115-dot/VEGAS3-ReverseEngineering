/* Module: pngu3266.dll
   Function: CheckItem
   Address: 605fa372
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMenu::CheckItem(unsigned long,int) */

void __thiscall CPNMenu::CheckItem(CPNMenu *this,ulong param_1,int param_2)

{
  UINT UVar1;
  
                    /* 0xa372  843  ?CheckItem@CPNMenu@@UAEXKH@Z */
  (**(code **)(*(int *)this + 0x68))();
  UVar1 = GetMenuState(*(HMENU *)(this + 0x14),param_1,0);
  CheckMenuItem(*(HMENU *)(this + 0x14),param_1,
                (-(uint)(param_2 != 0) & 8 | UVar1) & (-(uint)(param_2 != 0) & 8) - 9);
  return;
}


