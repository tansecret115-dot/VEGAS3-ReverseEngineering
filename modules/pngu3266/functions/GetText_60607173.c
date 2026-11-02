/* Module: pngu3266.dll
   Function: GetText
   Address: 60607173
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNCustomText::GetText(char *,int)const  */

void __thiscall XPNCustomText::GetText(XPNCustomText *this,char *param_1,int param_2)

{
                    /* 0x17173  1386  ?GetText@XPNCustomText@@QBEXPADH@Z
                       0x17173  1396  ?GetTitle@XPNTextWithLink@@UBEXPADJ@Z */
  strncpy(param_1,*(char **)(this + 0xc4),param_2);
  return;
}


