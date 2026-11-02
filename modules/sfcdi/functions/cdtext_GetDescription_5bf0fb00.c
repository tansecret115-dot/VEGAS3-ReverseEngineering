/* Module: sfcdi.dll
   Function: cdtext_GetDescription
   Address: 5bf0fb00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct _cdtexttrkfield const * __stdcall cdtext_GetDescription(struct _sfcdtext const *,unsigned
   int) */

_cdtexttrkfield * cdtext_GetDescription(_sfcdtext *param_1,uint param_2)

{
  uint uVar1;
  
                    /* 0xfb00  215  ?cdtext_GetDescription@@YGPBU_cdtexttrkfield@@PBU_sfcdtext@@I@Z
                        */
  if (param_2 == 0) {
    return (_cdtexttrkfield *)(param_1 + 0x1c);
  }
  uVar1 = cdtext_GetTrackCount(param_1);
  if (uVar1 < param_2) {
    return (_cdtexttrkfield *)0x0;
  }
  return *(_cdtexttrkfield **)(*(int *)(*(int *)(param_1 + 0x498) + 8) + -4 + param_2 * 4);
}


