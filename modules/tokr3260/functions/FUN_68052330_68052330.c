/* Module: tokr3260.dll
   Function: FUN_68052330
   Address: 68052330
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68052330(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_3 + 0xf224) + 0x38);
  *(int *)(param_3 + 0xf1e0) = param_2;
  if (0 < param_2) {
    iVar1 = (param_2 << 0xb) / param_1;
    iVar2 = 0;
    *(int *)(param_3 + 0xf1e4) = iVar1;
    do {
      piVar3 = piVar3 + 1;
      if (iVar1 <= *piVar3) break;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x20);
    *(int *)(param_3 + 0xf1e8) = iVar2 + 1;
    iVar2 = (int)(iVar1 + 0xff + (iVar1 + 0xff >> 0x1f & 0xffU)) >> 8;
    *(int *)(param_3 + 0xf1ec) = iVar2;
    *(int *)(param_3 + 0xf1f0) = iVar2;
    *(int *)(param_3 + 0xf1f4) = (int)(iVar1 + 0x3f + (iVar1 + 0x3f >> 0x1f & 0x3fU)) >> 6;
  }
  return;
}


