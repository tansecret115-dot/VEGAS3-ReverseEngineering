/* Module: sfcdi.dll
   Function: FUN_5bf0fb40
   Address: 5bf0fb40
   Source: Ghidra pseudocode (Stage 10 batch) */


_cdtexttrkfield * FUN_5bf0fb40(_sfcdtext *param_1,uint param_2,undefined4 param_3)

{
  _cdtexttrkfield *p_Var1;
  
  p_Var1 = cdtext_GetDescription(param_1,param_2);
  if (p_Var1 != (_cdtexttrkfield *)0x0) {
    switch(param_3) {
    case 0:
      return p_Var1;
    case 1:
      return p_Var1 + 0xa4;
    case 2:
      return p_Var1 + 0x148;
    case 3:
      return p_Var1 + 0x1ec;
    case 4:
      return p_Var1 + 0x290;
    case 5:
      return p_Var1 + 0x334;
    case 0xe:
      return p_Var1 + 0x3d8;
    }
  }
  return (_cdtexttrkfield *)0x0;
}


