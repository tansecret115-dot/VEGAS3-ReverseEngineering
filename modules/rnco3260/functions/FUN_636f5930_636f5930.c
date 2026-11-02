/* Module: rnco3260.dll
   Function: FUN_636f5930
   Address: 636f5930
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_636f5930(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_637956a0;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0xffffffff;
    puVar4 = puVar4 + 1;
  }
  iVar2 = 0;
  if (0 < param_1) {
    iVar3 = param_3 - (int)param_2;
    do {
      uVar1 = *(uint *)(iVar3 + (int)param_2);
      if ((uVar1 & 0xffffff00) != 0) break;
      if (((&DAT_637956a0)[uVar1] == 0xffffffff) ||
         ((&DAT_637956a0)[uVar1] == (*param_2 & 0xffffff))) {
        (&DAT_637956a0)[uVar1] = *param_2 & 0xffffff;
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 1;
    } while (iVar2 < param_1);
  }
  if (iVar2 == param_1) {
    return iVar2;
  }
  return -1;
}


