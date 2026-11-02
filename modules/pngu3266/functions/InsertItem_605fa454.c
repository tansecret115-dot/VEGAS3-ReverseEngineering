/* Module: pngu3266.dll
   Function: InsertItem
   Address: 605fa454
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNMenu::InsertItem(unsigned long,unsigned long,char
   const *,int) */

ulong __thiscall
CPNMenu::InsertItem(CPNMenu *this,ulong param_1,ulong param_2,char *param_3,int param_4)

{
  int iVar1;
  UINT uPosition;
  
                    /* 0xa454  1476  ?InsertItem@CPNMenu@@UAEKKKPBDH@Z */
  if (param_4 == 0) {
    param_2 = (**(code **)(*(int *)this + 0x44))(param_1,param_2,param_3);
  }
  else {
    (**(code **)(*(int *)this + 0x68))();
    iVar1 = (**(code **)(*(int *)this + 0x2c))(param_1);
    if (iVar1 == -1) {
      param_2 = 0;
    }
    else {
      if (iVar1 < param_4) {
        uPosition = 0;
      }
      else {
        uPosition = iVar1 - param_4;
      }
      InsertMenuA(*(HMENU *)(this + 0x14),uPosition,0x400,param_2,param_3);
    }
  }
  return param_2;
}


