/* Module: rnco3260.dll
   Function: FUN_637608b0
   Address: 637608b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_637608b0(undefined1 *param_1,undefined1 *param_2,byte param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_3 & 2) != 0) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
    param_4 = param_4 - 2;
  }
  iVar3 = 0;
  iVar5 = (int)(param_4 + ((int)param_4 >> 0x1f & 3U)) >> 2;
  puVar2 = param_1;
  if (0 < iVar5) {
    do {
      iVar4 = iVar3 + 1;
      *puVar2 = param_2[iVar3];
      puVar2[1] = param_2[iVar3];
      puVar2 = puVar2 + 2;
      iVar3 = iVar4;
    } while (iVar4 < iVar5);
  }
  if ((param_4 & 2) != 0) {
    param_1[(int)param_4 / 2] = param_2[iVar5];
  }
  return;
}


