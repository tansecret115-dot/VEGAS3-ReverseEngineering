/* Module: pngu3266.dll
   Function: GetColorTableIndexAt
   Address: 605f53cd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall CPNBitmapImage::GetColorTableIndexAt(long,long) */

long __thiscall CPNBitmapImage::GetColorTableIndexAt(CPNBitmapImage *this,long param_1,long param_2)

{
  long lVar1;
  
                    /* 0x53cd  1144  ?GetColorTableIndexAt@CPNBitmapImage@@UAEJJJ@Z */
  lVar1 = GetColorTableIndex(this,param_1,param_2);
  return lVar1;
}


