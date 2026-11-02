/* Module: sfcdi.dll
   Function: ldr_GetInterfaceCaps
   Address: 5bf08260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall ldr_GetInterfaceCaps(int,struct ldrcaps_tag *,unsigned int) */

int ldr_GetInterfaceCaps(int param_1,ldrcaps_tag *param_2,uint param_3)

{
  uint uVar1;
  ldrcaps_tag *plVar2;
  
                    /* 0x8260  241  ?ldr_GetInterfaceCaps@@YGHHPAUldrcaps_tag@@I@Z */
  if (param_2 == (ldrcaps_tag *)0x0) {
    return -3;
  }
  if (0x3f < param_3) {
    param_3 = 0x40;
  }
  if (DAT_5bf66630 < param_1) {
    return -4;
  }
  plVar2 = (ldrcaps_tag *)(DAT_5bf66634 + 8 + param_1 * 0x4c);
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)plVar2;
    plVar2 = plVar2 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *plVar2;
    plVar2 = plVar2 + 1;
    param_2 = param_2 + 1;
  }
  return param_3;
}


