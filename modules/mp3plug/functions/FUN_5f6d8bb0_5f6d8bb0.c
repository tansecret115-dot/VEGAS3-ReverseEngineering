/* Module: mp3plug.dll
   Function: FUN_5f6d8bb0
   Address: 5f6d8bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d8bb0(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((DAT_5f7529a4 != 0) && ((param_2 & 0xf) == 0)) && (0 < (int)(param_3 & 0xfffffffc))) {
    iVar2 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + iVar2 * 4);
      *puVar1 = param_1;
      puVar1[1] = param_1;
      puVar1[2] = param_1;
      puVar1[3] = param_1;
      iVar2 = iVar2 + 4;
    } while (iVar2 < (int)(param_3 & 0xfffffffc));
  }
  for (; iVar2 < (int)param_3; iVar2 = iVar2 + 1) {
    *(undefined4 *)(param_2 + iVar2 * 4) = param_1;
  }
  return;
}


