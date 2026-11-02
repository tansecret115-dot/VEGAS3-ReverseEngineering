/* Module: pngu3266.dll
   Function: Attach
   Address: 605fa32c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNMenu::Attach(struct HMENU__ *,struct HWND__ *) */

int __thiscall CPNMenu::Attach(CPNMenu *this,HMENU__ *param_1,HWND__ *param_2)

{
  int iVar1;
  
                    /* 0xa32c  811  ?Attach@CPNMenu@@QAEHPAUHMENU__@@PAUHWND__@@@Z */
  *(HWND__ **)(this + 0x18) = param_2;
  iVar1 = (**(code **)(*(int *)this + 0x94))(param_1);
  return iVar1;
}


