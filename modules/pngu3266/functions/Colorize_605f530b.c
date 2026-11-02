/* Module: pngu3266.dll
   Function: Colorize
   Address: 605f530b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNBitmapImage::Colorize(class CPNColor const &) */

int __thiscall CPNBitmapImage::Colorize(CPNBitmapImage *this,CPNColor *param_1)

{
  int iVar1;
  
                    /* 0x530b  866  ?Colorize@CPNBitmapImage@@UAEHABVCPNColor@@@Z */
  iVar1 = (**(code **)(*(int *)this + 0x4c))(param_1,0,0);
  return iVar1;
}


