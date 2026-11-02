/* Module: pngu3266.dll
   Function: Attach
   Address: 605f2cc5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNCursor::Attach(struct HICON__ *) */

void __thiscall CPNCursor::Attach(CPNCursor *this,HICON__ *param_1)

{
                    /* 0x2cc5  805  ?Attach@CPNCursor@@QAEXPAUHICON__@@@Z
                       0x2cc5  1921  ?SetId@XPNMenu@@QAEXK@Z
                       0x2cc5  2014  ?SetStyle@XPNWindow@@QAEXK@Z
                       0x2cc5  2038  ?SetType@CPNEvent@@QAEXK@Z */
  *(HICON__ **)(this + 8) = param_1;
  return;
}


