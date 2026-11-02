/* Module: pngu3266.dll
   Function: SetupDefBitmap
   Address: 605fbb5f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SetupDefBitmap(class CPNBitmapImage *) */

void __thiscall CPNDC::SetupDefBitmap(CPNDC *this,CPNBitmapImage *param_1)

{
  HGDIOBJ pvVar1;
  
                    /* 0xbb5f  2049  ?SetupDefBitmap@CPNDC@@UAEXPAVCPNBitmapImage@@@Z */
  pvVar1 = GetCurrentObject(*(HDC *)(this + 0x1cf),7);
  if (pvVar1 != (HGDIOBJ)0x0) {
    (**(code **)(*(int *)param_1 + 0x88))(pvVar1);
  }
  return;
}


