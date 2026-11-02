/* Module: tokr3260.dll
   Function: FUN_68053ae0
   Address: 68053ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68053ae0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (param_2 != 0) {
    if (DAT_6805f060 != 0) {
      free((void *)DAT_6805f060);
      DAT_6805f060 = 0;
    }
    return 0;
  }
  if (DAT_6805f060 == 0) {
    DAT_6805f060 = (int)calloc(5,4);
    if ((void *)DAT_6805f060 == (void *)0x0) {
      return 0xfff0bdc1;
    }
    iVar5 = 0;
    uVar3 = 0;
    do {
      uVar2 = (int)uVar3 >> 0x1f;
      if (((uVar3 ^ uVar2) - uVar2 & 0xff ^ uVar2) == uVar2) {
        *(int *)(DAT_6805f060 + iVar5 * 4) = iVar4;
        iVar5 = iVar5 + 1;
      }
      iVar1 = FUN_68053920(iVar4);
      uVar3 = uVar3 + iVar1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x20);
    *(int *)(DAT_6805f060 + iVar5 * 4) = iVar4;
  }
  if ((param_1 < 0) && (4 < param_1)) {
    return 0xfff0bdc1;
  }
  return *(undefined4 *)(DAT_6805f060 + param_1 * 4);
}


