/* Module: pngu3266.dll
   Function: Create
   Address: 605fe5f3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNPropertyPage::Create(void) */

int __thiscall CPNPropertyPage::Create(CPNPropertyPage *this)

{
  int iVar1;
  
                    /* 0xe5f3  910  ?Create@CPNPropertyPage@@UAEHXZ */
  iVar1 = (**(code **)(*(int *)this + 0x178))(0);
  return iVar1;
}


