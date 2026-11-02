/* Module: pngu3266.dll
   Function: HasSubImageType
   Address: 605fdd09
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall CPNImageButton::HasSubImageType(enum eSubImageType) */

int __thiscall CPNImageButton::HasSubImageType(CPNImageButton *this,eSubImageType param_1)

{
                    /* 0xdd09  1450  ?HasSubImageType@CPNImageButton@@MAEHW4eSubImageType@@@Z */
  return (uint)(*(int *)(this + param_1 * 4 + 0x117) != -1);
}


