/* Module: sfcdi.dll
   Function: prn_GetInterfaceCaps
   Address: 5bf086d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall prn_GetInterfaceCaps(int,struct prncaps_tag *,unsigned int) */

int prn_GetInterfaceCaps(int param_1,prncaps_tag *param_2,uint param_3)

{
  uint uVar1;
  prncaps_tag *ppVar2;
  
                    /* 0x86d0  254  ?prn_GetInterfaceCaps@@YGHHPAUprncaps_tag@@I@Z */
  if (param_2 == (prncaps_tag *)0x0) {
    return -3;
  }
  if (0x37 < param_3) {
    param_3 = 0x38;
  }
  if (DAT_5bf6663c < param_1) {
    return -4;
  }
  ppVar2 = (prncaps_tag *)(DAT_5bf66640 + 8 + param_1 * 0x44);
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)ppVar2;
    ppVar2 = ppVar2 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *ppVar2;
    ppVar2 = ppVar2 + 1;
    param_2 = param_2 + 1;
  }
  return param_3;
}


