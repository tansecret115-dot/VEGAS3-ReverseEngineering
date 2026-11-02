/* Module: pngu3266.dll
   Function: Destroy
   Address: 605fc174
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDialog::Destroy(void) */

void __thiscall CPNDialog::Destroy(CPNDialog *this)

{
                    /* 0xc174  941  ?Destroy@CPNDialog@@UAEXXZ */
  (**(code **)(*(int *)this + 300))(2);
  return;
}


