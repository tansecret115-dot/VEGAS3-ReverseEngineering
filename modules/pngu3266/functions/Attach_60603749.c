/* Module: pngu3266.dll
   Function: Attach
   Address: 60603749
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNCustomMenu::Attach(struct HMENU__ *) */

int __thiscall CPNCustomMenu::Attach(CPNCustomMenu *this,HMENU__ *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x13749  806  ?Attach@CPNCustomMenu@@UAEHPAUHMENU__@@@Z */
  iVar1 = CPNMenu::Attach((CPNMenu *)this,param_1);
  if (((iVar1 != 0) && (iVar2 = AddDummyMenuItem(this), iVar1 != 0)) && (iVar2 != 0)) {
    return 1;
  }
  return 0;
}


