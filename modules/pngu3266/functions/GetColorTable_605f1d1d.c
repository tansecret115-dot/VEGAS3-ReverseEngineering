/* Module: pngu3266.dll
   Function: GetColorTable
   Address: 605f1d1d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual unsigned char * __thiscall CPNBitmapImage::GetColorTable(void) */

uchar * __thiscall CPNBitmapImage::GetColorTable(CPNBitmapImage *this)

{
                    /* 0x1d1d  1141  ?GetColorTable@CPNBitmapImage@@MAEPAEXZ */
  if (*(int *)(this + 0x2b) != 0) {
    return (uchar *)(*(int *)(this + 0x2b) + 0x28);
  }
  return (uchar *)0x0;
}


