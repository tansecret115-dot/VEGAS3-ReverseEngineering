/* Module: pngu3266.dll
   Function: GetLessPressed
   Address: 6060a440
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNScrollHelper::GetLessPressed(void) */

int __thiscall CPNScrollHelper::GetLessPressed(CPNScrollHelper *this)

{
                    /* 0x1a440  1241  ?GetLessPressed@CPNScrollHelper@@QAEHXZ
                       0x1a440  1255  ?GetMenuItemId@CPNEvent@@QBEKXZ
                       0x1a440  1320  ?GetRotation@XPNFont@@QAEHXZ
                       0x1a440  1387  ?GetTextBgColor@XPNDC@@QAEPAVCPNColor@@XZ
                       0x1a440  1410  ?GetUserData2@CPNEvent@@QBEKXZ
                       0x1a440  1458  ?InWindowUpdate@CPNMultipleWindowUpdate@@UBEHXZ
                       0x1a440  1496  ?IsDeviceDependent@XPNImage@@UBEHXZ */
  return *(int *)(this + 0x20);
}


