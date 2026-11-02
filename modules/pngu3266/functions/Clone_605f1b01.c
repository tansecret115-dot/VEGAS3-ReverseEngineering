/* Module: pngu3266.dll
   Function: Clone
   Address: 605f1b01
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual class CPNImage * __thiscall XPNImage::Clone(void) */

CPNImage * __thiscall XPNImage::Clone(XPNImage *this)

{
                    /* 0x1b01  864  ?Clone@XPNImage@@UAEPAVCPNImage@@XZ
                       0x1b01  1063  ?FreeResource@XPNImage@@UAEHXZ
                       0x1b01  1142  ?GetColorTable@XPNBitmapImage@@MAEPAEXZ
                       0x1b01  1218  ?GetImageData@CPNImage@@UAEPAEXZ
                       0x1b01  1220  ?GetImageHeader@CPNImage@@UAEPAUtagBITMAPINFO@@XZ
                       0x1b01  1270  ?GetModalWindow@CPNWindow@@UAEPAV1@XZ
                       0x1b01  1283  ?GetNumberOfColors@XPNBitmapImage@@MAEKXZ
                       0x1b01  1719  ?PositionOverTriggerRect@XPNToolTip@@IAEHXZ
                       0x1b01  1738  ?RealizeResource@XPNImage@@UAEHXZ */
  return (CPNImage *)0x0;
}


