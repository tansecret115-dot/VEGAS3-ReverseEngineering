/* Module: sfnetmedia.dll
   Function: FUN_00408390
   Address: 00408390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 * __fastcall FUN_00408390(undefined2 *param_1)

{
  int iVar1;
  int unaff_retaddr;
  
  iVar1 = Ordinal_9(param_1);
  if (iVar1 < 0) {
    *param_1 = 10;
    *(int *)(param_1 + 4) = iVar1;
  }
  *param_1 = 8;
  iVar1 = Ordinal_2(unaff_retaddr);
  *(int *)(param_1 + 4) = iVar1;
  if ((iVar1 == 0) && (unaff_retaddr != 0)) {
    *param_1 = 10;
    *(undefined4 *)(param_1 + 4) = 0x8007000e;
  }
  return param_1;
}


