/* Module: mp3plug.dll
   Function: FUN_5f71a5f0
   Address: 5f71a5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_5f71a5f0(char *param_1,void *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = (int)(param_3 + ((uint)(param_3 >> 2) >> 0x1d)) >> 3;
  if (0 < iVar2 * 8) {
    *(int *)((int)param_2 + 0x10) = *(int *)((int)param_2 + 0x10) + iVar2 * 8;
    *(int *)((int)param_2 + 0x18) = *(int *)((int)param_2 + 0x18) + iVar2 * -8;
    *(uint *)((int)param_2 + 0x1c) =
         iVar2 * -8 + *(int *)((int)param_2 + 0x1c) & *(int *)((int)param_2 + 0xc) - 1U;
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = FUN_5f714080(param_2,8);
      param_1[iVar4] = (char)uVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  param_1[iVar4] = '\0';
  cVar1 = *param_1;
  if (((((cVar1 != 'V') || (cVar1 = 'V', param_1[1] != 'B')) || (cVar1 = 'V', param_1[2] != 'R')) ||
      (cVar1 = 'V', param_1[3] != 'I')) &&
     (((cVar1 != 'X' || (param_1[1] != 'I')) || ((param_1[2] != 'N' || (param_1[3] != 'G')))))) {
    return iVar4;
  }
  *param_1 = '\0';
  return 0;
}


