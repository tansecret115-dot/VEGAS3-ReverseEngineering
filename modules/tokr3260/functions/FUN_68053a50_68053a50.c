/* Module: tokr3260.dll
   Function: FUN_68053a50
   Address: 68053a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68053a50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    if (DAT_6805f05c != 0) {
      free((void *)DAT_6805f05c);
      DAT_6805f05c = 0;
    }
    return 0;
  }
  if (DAT_6805f05c == 0) {
    DAT_6805f05c = (int)calloc(0x21,4);
    if ((void *)DAT_6805f05c == (void *)0x0) {
      return 0xfff0bdc1;
    }
    iVar3 = 0;
    iVar2 = 0;
    do {
      *(int *)(DAT_6805f05c + iVar2 * 4) = iVar3;
      iVar1 = FUN_68053920(iVar2);
      iVar3 = iVar3 + iVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x20);
    *(int *)(DAT_6805f05c + 0x80) = iVar3;
  }
  if ((-1 < param_1) && (param_1 < 0x21)) {
    return *(undefined4 *)(DAT_6805f05c + param_1 * 4);
  }
  return 0xfff0bdc1;
}


