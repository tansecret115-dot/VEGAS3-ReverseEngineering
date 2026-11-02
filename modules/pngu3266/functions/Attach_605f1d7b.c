/* Module: pngu3266.dll
   Function: Attach
   Address: 605f1d7b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNBitmapImage::Attach(unsigned long) */

void __thiscall CPNBitmapImage::Attach(CPNBitmapImage *this,ulong param_1)

{
                    /* 0x1d7b  802  ?Attach@CPNBitmapImage@@UAEXK@Z */
  (**(code **)(*(int *)this + 0x88))(param_1);
  return;
}


