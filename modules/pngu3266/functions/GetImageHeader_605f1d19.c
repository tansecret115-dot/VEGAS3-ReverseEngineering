/* Module: pngu3266.dll
   Function: GetImageHeader
   Address: 605f1d19
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual struct tagBITMAPINFO * __thiscall CPNBitmapImage::GetImageHeader(void) */

tagBITMAPINFO * __thiscall CPNBitmapImage::GetImageHeader(CPNBitmapImage *this)

{
                    /* 0x1d19  1219  ?GetImageHeader@CPNBitmapImage@@UAEPAUtagBITMAPINFO@@XZ */
  return *(tagBITMAPINFO **)(this + 0x2b);
}


