/* Module: pngu3266.dll
   Function: Clone
   Address: 605f4cd9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual class CPNImage * __thiscall CPNBitmapImage::Clone(void) */

CPNImage * __thiscall CPNBitmapImage::Clone(CPNBitmapImage *this)

{
  int iVar1;
  CPNBitmapImage *this_00;
  CPNImage *pCVar2;
  
                    /* 0x4cd9  862  ?Clone@CPNBitmapImage@@UAEPAVCPNImage@@XZ */
  iVar1 = (**(code **)(*(int *)this + 4))();
  if (iVar1 != 0) {
    this_00 = operator_new(0x33);
    if (this_00 != (CPNBitmapImage *)0x0) {
      pCVar2 = (CPNImage *)CPNBitmapImage(this_00,this);
      return pCVar2;
    }
  }
  return (CPNImage *)0x0;
}


