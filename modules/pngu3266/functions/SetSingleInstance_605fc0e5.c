/* Module: pngu3266.dll
   Function: SetSingleInstance
   Address: 605fc0e5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDialog::SetSingleInstance(int) */

void __thiscall CPNDialog::SetSingleInstance(CPNDialog *this,int param_1)

{
                    /* 0xc0e5  2001  ?SetSingleInstance@CPNDialog@@UAEXH@Z */
  *(int *)(this + 0xc4) = param_1;
  return;
}


