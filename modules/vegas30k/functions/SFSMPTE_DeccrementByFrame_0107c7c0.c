/* Module: vegas30k.dll
   Function: SFSMPTE_DeccrementByFrame
   Address: 0107c7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SFSMPTE_DeccrementByFrame(struct _smpteval *,unsigned long) */

void SFSMPTE_DeccrementByFrame(_smpteval *param_1,ulong param_2)

{
  int iVar1;
  
                    /* 0x7c7c0  269  ?SFSMPTE_DeccrementByFrame@@YGXPAU_smpteval@@K@Z */
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  switch(*(undefined4 *)param_1) {
  case 2:
  case 5:
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x10) = 0x1d;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    }
    if (-1 < *(int *)(param_1 + 0xc)) {
      return;
    }
    iVar1 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xc) = 0x3b;
    *(int *)(param_1 + 8) = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      *(undefined4 *)(param_1 + 8) = 0x3b;
      iVar1 = (*(uint *)(param_1 + 4) & 0x1f) - 1;
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 < 0) {
        *(undefined4 *)(param_1 + 4) = 0x17;
      }
    }
    if (*(uint *)(param_1 + 8) % 10 == 0) {
      return;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 2;
    return;
  case 3:
    if (-1 < iVar1) goto LAB_0107c871;
    *(undefined4 *)(param_1 + 0x10) = 0x18;
    break;
  case 4:
    if (-1 < iVar1) goto LAB_0107c871;
    *(undefined4 *)(param_1 + 0x10) = 0x17;
    break;
  default:
    if (-1 < iVar1) goto LAB_0107c871;
    *(undefined4 *)(param_1 + 0x10) = 0x1d;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
LAB_0107c871:
  if (*(int *)(param_1 + 0xc) < 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xc) = 0x3b;
    *(int *)(param_1 + 8) = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      *(undefined4 *)(param_1 + 8) = 0x3b;
      iVar1 = (*(uint *)(param_1 + 4) & 0x1f) - 1;
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 < 0) {
        *(undefined4 *)(param_1 + 4) = 0x17;
      }
    }
  }
  return;
}


