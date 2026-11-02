/* Module: pngu3266.dll
   Function: operator=
   Address: 606177e4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNImageBorder & __thiscall CPNImageBorder::operator=(class CPNImageBorder const &)
    */

CPNImageBorder * __thiscall CPNImageBorder::operator=(CPNImageBorder *this,CPNImageBorder *param_1)

{
  CPNImageBorder *pCVar1;
  int iVar2;
  
                    /* 0x277e4  463  ??4CPNImageBorder@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  pCVar1 = this + 0x10;
  iVar2 = 4;
  do {
    *(undefined4 *)pCVar1 = *(undefined4 *)(pCVar1 + ((int)param_1 - (int)this));
    pCVar1 = pCVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  CPNColor::operator=((CPNColor *)(this + 0x20),(CPNColor *)(param_1 + 0x20));
  return this;
}


