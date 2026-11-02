/* Module: pngu3266.dll
   Function: Clone
   Address: 60615f7f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual class CPNImage * __thiscall XPNGifImage::Clone(void) */

CPNImage * __thiscall XPNGifImage::Clone(XPNGifImage *this)

{
  CPNGifImage *this_00;
  XPNGifImage *this_01;
  
                    /* 0x25f7f  863  ?Clone@XPNGifImage@@UAEPAVCPNImage@@XZ */
  this_00 = operator_new(0x437);
  if (this_00 == (CPNGifImage *)0x0) {
    this_01 = (XPNGifImage *)0x0;
  }
  else {
    this_01 = (XPNGifImage *)CPNGifImage::CPNGifImage(this_00);
  }
  if (this_01 != (XPNGifImage *)0x0) {
    CopyImage(this_01,this);
  }
  return (CPNImage *)this_01;
}


