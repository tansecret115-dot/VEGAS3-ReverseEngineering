/* Module: pngu3266.dll
   Function: GetTextExtent
   Address: 605fb02b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::GetTextExtent(char const *,class CPNxSize &) */

void __thiscall CPNDC::GetTextExtent(CPNDC *this,char *param_1,CPNxSize *param_2)

{
  size_t c;
  tagSIZE *psizl;
  tagSIZE local_c;
  
                    /* 0xb02b  1389  ?GetTextExtent@CPNDC@@UAEXPBDAAVCPNxSize@@@Z */
  local_c.cx = 0;
  local_c.cy = 0;
  psizl = &local_c;
  c = strlen(param_1);
  GetTextExtentPoint32A(*(HDC *)(this + 0x1cf),param_1,c,psizl);
  *(LONG *)param_2 = local_c.cx;
  *(LONG *)(param_2 + 4) = local_c.cy;
  return;
}


