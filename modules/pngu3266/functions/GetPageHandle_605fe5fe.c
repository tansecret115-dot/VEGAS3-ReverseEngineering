/* Module: pngu3266.dll
   Function: GetPageHandle
   Address: 605fe5fe
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: struct _PSP * __thiscall CPNPropertyPage::GetPageHandle(void) */

_PSP * __thiscall CPNPropertyPage::GetPageHandle(CPNPropertyPage *this)

{
                    /* 0xe5fe  1289  ?GetPageHandle@CPNPropertyPage@@QAEPAU_PSP@@XZ */
  return *(_PSP **)(this + 0xec);
}


