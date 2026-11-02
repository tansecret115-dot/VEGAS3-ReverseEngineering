/* Module: sfcdi.dll
   Function: cdr_GetInterfaceCaps
   Address: 5bf072b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_GetInterfaceCaps(int,struct cdrcaps_tag *) */

long cdr_GetInterfaceCaps(int param_1,cdrcaps_tag *param_2)

{
  uint uVar1;
  uint uVar2;
  cdrcaps_tag *pcVar3;
  
                    /* 0x72b0  179  ?cdr_GetInterfaceCaps@@YGJHPAUcdrcaps_tag@@@Z */
  if (param_2 == (cdrcaps_tag *)0x0) {
    return -0x7fffbffd;
  }
  uVar1 = *(uint *)param_2;
  if (uVar1 < 100) {
    if (uVar1 == 0) {
      return 0;
    }
  }
  else {
    uVar1 = 100;
  }
  if ((-1 < param_1) && (param_1 < DAT_5bf66624)) {
    pcVar3 = (cdrcaps_tag *)(DAT_5bf66628 + 4 + param_1 * 0x6c);
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)param_2 = 0;
    param_2 = param_2 + 4;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = (cdrcaps_tag)0x0;
    param_2 = param_2 + 1;
  }
  return -0x7ff8ffa9;
}


