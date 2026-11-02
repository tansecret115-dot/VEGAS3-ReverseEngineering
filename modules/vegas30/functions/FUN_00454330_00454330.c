/* Module: vegas30.exe
   Function: FUN_00454330
   Address: 00454330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00454330(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x70000000 < param_2) {
    param_2 = 0x70000000;
  }
  if (param_2 == *(int *)(param_1 + 0x674)) {
    return;
  }
  if (param_2 == 0) {
    iVar2 = 0;
    iVar1 = 0;
    goto LAB_004543a2;
  }
  iVar1 = *(int *)(param_1 + 0xbac);
  iVar2 = *(int *)(param_1 + 0xba8);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x674) < iVar1)) {
    iVar1 = MulDiv(*(int *)(param_1 + 0xbb0),DAT_006477b0,0x200);
  }
  else {
    if (iVar2 + iVar1 <= param_2) goto LAB_004543a2;
    if (iVar1 < param_2) {
      iVar2 = param_2 - iVar1;
      goto LAB_004543a2;
    }
  }
  iVar2 = 0;
LAB_004543a2:
  *(int *)(param_1 + 0x674) = param_2;
  FUN_004549b0(param_1,iVar2,iVar1,1);
  return;
}


