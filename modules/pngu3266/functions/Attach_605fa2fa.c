/* Module: pngu3266.dll
   Function: Attach
   Address: 605fa2fa
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMenu::Attach(struct HMENU__ *) */

int __thiscall CPNMenu::Attach(CPNMenu *this,HMENU__ *param_1)

{
                    /* 0xa2fa  812  ?Attach@CPNMenu@@UAEHPAUHMENU__@@@Z */
  if ((*(HMENU *)(this + 0x14) != (HMENU)0x0) && (*(int *)(this + 0x10) == 0)) {
    DestroyMenu(*(HMENU *)(this + 0x14));
  }
  *(HMENU__ **)(this + 0x14) = param_1;
  *(undefined4 *)(this + 0x10) = 1;
  return (uint)(param_1 != (HMENU__ *)0x0);
}


