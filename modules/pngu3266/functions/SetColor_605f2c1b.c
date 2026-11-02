/* Module: pngu3266.dll
   Function: SetColor
   Address: 605f2c1b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNBrush::SetColor(char,char,char) */

void __thiscall CPNBrush::SetColor(CPNBrush *this,char param_1,char param_2,char param_3)

{
  int iVar1;
  
                    /* 0x2c1b  1861  ?SetColor@CPNBrush@@UAEXDDD@Z */
  CPNColor::Set((CPNColor *)(this + 0x10),param_1,param_2,param_3);
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 8))();
  }
  return;
}


