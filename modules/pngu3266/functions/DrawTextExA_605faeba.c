/* Module: pngu3266.dll
   Function: DrawTextExA
   Address: 605faeba
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::DrawTextExA(char const *,class CPNxRect &,unsigned long)
    */

void __thiscall CPNDC::DrawTextExA(CPNDC *this,char *param_1,CPNxRect *param_2,ulong param_3)

{
  size_t cchText;
  tagRECT *lprc;
  uint format;
  tagRECT local_1c;
  CPNDC *local_c;
  uint local_8;
  
                    /* 0xaeba  1019  ?DrawTextExA@CPNDC@@UAEXPBDAAVCPNxRect@@K@Z */
  local_8 = 0;
  if ((param_3 & 1) != 0) {
    local_8 = 0x400;
  }
  if ((param_3 & 2) != 0) {
    local_8 = local_8 | 1;
  }
  if ((param_3 & 0x20) != 0) {
    local_8 = local_8 | 0x40;
  }
  if ((param_3 & 0x40) != 0) {
    local_8 = local_8 | 0x200;
  }
  if ((param_3 & 0x200) != 0) {
    local_8 = local_8 | 0x100;
  }
  if ((param_3 & 0x400) == 0) {
    local_8 = local_8 | 0x800;
  }
  if ((param_3 & 0x800) != 0) {
    local_8 = local_8 | 2;
  }
  if ((param_3 & 0x2000) != 0) {
    local_8 = local_8 | 0x20;
  }
  if ((param_3 & 0x4000) != 0) {
    local_8 = local_8 | 0x80;
  }
  if ((param_3 & 0x10000) != 0) {
    local_8 = local_8 | 4;
  }
  if ((param_3 & 0x20000) != 0) {
    local_8 = local_8 | 0x10;
  }
  if ((param_3 & 0x40000) != 0) {
    local_8 = local_8 | 8;
  }
  if ((param_3 & 4) != 0) {
    local_8 = local_8 | 0x2000;
  }
  if ((param_3 & 8) != 0) {
    local_8 = local_8 | 0x8000;
  }
  if ((param_3 & 0x10) != 0) {
    local_8 = local_8 | 0x4000;
  }
  if ((param_3 & 0x100) != 0) {
    local_8 = local_8 | 0x10000;
  }
  if ((param_3 & 0x1000) != 0) {
    local_8 = local_8 | 0x20000;
  }
  local_1c.left = *(LONG *)param_2;
  local_1c.top = *(LONG *)(param_2 + 4);
  local_1c.right = *(LONG *)(param_2 + 8);
  local_1c.bottom = *(LONG *)(param_2 + 0xc);
  lprc = &local_1c;
  format = local_8;
  local_c = this;
  cchText = strlen(param_1);
  ::DrawTextA(*(HDC *)(local_c + 0x1cf),param_1,cchText,lprc,format);
  if ((local_8 & 0x400) != 0) {
    *(LONG *)param_2 = local_1c.left;
    *(LONG *)(param_2 + 4) = local_1c.top;
    *(LONG *)(param_2 + 8) = local_1c.right;
    *(LONG *)(param_2 + 0xc) = local_1c.bottom;
  }
  return;
}


