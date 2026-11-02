/* Module: pngu3266.dll
   Function: GetBitmap
   Address: 605f3965
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNBitmapImage * __thiscall XPNDC::GetBitmap(void) */

CPNBitmapImage * __thiscall XPNDC::GetBitmap(XPNDC *this)

{
                    /* 0x3965  1095  ?GetBitmap@XPNDC@@QAEPAVCPNBitmapImage@@XZ
                       0x3965  1187  ?GetFamily@XPNFont@@QBEHXZ
                       0x3965  1232  ?GetInterval@XPNTimer@@QBEKXZ
                       0x3965  1361  ?GetSource@CPNEvent@@QBEPAVCPNRouter@@XZ
                       0x3965  1493  ?IsAttached@XPNMenu@@QBEHXZ */
  return *(CPNBitmapImage **)(this + 0x10);
}


