/* Module: pngu3266.dll
   Function: GetItemString
   Address: 606037d1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall CPNCustomMenu::GetItemString(unsigned long,char *,long,int) */

long __thiscall
CPNCustomMenu::GetItemString
          (CPNCustomMenu *this,ulong param_1,char *param_2,long param_3,int param_4)

{
  long lVar1;
  
                    /* 0x137d1  1235  ?GetItemString@CPNCustomMenu@@UAEJKPADJH@Z */
  if (param_4 != 0) {
    param_1 = param_1 + 1;
  }
  lVar1 = CPNMenu::GetItemString((CPNMenu *)this,param_1,param_2,param_3,param_4);
  return lVar1;
}


