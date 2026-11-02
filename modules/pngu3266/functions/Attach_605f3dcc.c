/* Module: pngu3266.dll
   Function: Attach
   Address: 605f3dcc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNIcon::Attach(struct HICON__ *) */

void __thiscall CPNIcon::Attach(CPNIcon *this,HICON__ *param_1)

{
                    /* 0x3dcc  810  ?Attach@CPNIcon@@QAEXPAUHICON__@@@Z */
  *(HICON__ **)(this + 0x2a) = param_1;
  return;
}


