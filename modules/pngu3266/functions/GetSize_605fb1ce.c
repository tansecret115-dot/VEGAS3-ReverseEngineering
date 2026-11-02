/* Module: pngu3266.dll
   Function: GetSize
   Address: 605fb1ce
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::GetSize(long *,long *) */

void __thiscall CPNDC::GetSize(CPNDC *this,long *param_1,long *param_2)

{
  int iVar1;
  
                    /* 0xb1ce  1352  ?GetSize@CPNDC@@UAEXPAJ0@Z */
  iVar1 = GetDeviceCaps(*(HDC *)(this + 0x1cf),8);
  *param_1 = iVar1;
  iVar1 = GetDeviceCaps(*(HDC *)(this + 0x1cf),10);
  *param_2 = iVar1;
  return;
}


