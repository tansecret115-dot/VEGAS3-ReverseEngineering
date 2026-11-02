/* Module: pngu3266.dll
   Function: operator_struct_HBITMAP__*
   Address: 6060a596
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNBitmapImage::operator struct HBITMAP__ *(void) */

HBITMAP__ * __thiscall CPNBitmapImage::operator_struct_HBITMAP___(CPNBitmapImage *this)

{
                    /* 0x1a596  580  ??BCPNBitmapImage@@QAEPAUHBITMAP__@@XZ
                       0x1a596  588  ??BCPNMenu@@QAEPAXXZ
                       0x1a596  589  ??BCPNMenu@@QBEPAUHMENU__@@XZ
                       0x1a596  1196  ?GetFont@XPNDC@@QAEPAVCPNFont@@XZ
                       0x1a596  1197  ?GetFontId@XPNFont@@QBEHXZ
                       0x1a596  1207  ?GetHandle@CPNMenu@@UBEPAXXZ
                       0x1a596  1302  ?GetPosition@CPNScrollHelper@@QAEJXZ
                       0x1a596  1312  ?GetRawImage@XPNImage@@QAEKXZ
                       0x1a596  1394  ?GetTimePosted@CPNEvent@@QBEKXZ */
  return *(HBITMAP__ **)(this + 0x14);
}


