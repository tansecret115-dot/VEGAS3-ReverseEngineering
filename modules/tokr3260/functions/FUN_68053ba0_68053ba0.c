/* Module: tokr3260.dll
   Function: FUN_68053ba0
   Address: 68053ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68053ba0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    if (DAT_6805f064 != 0) {
      free((void *)DAT_6805f064);
      DAT_6805f064 = 0;
    }
    return 0;
  }
  if (DAT_6805f064 == 0) {
    DAT_6805f064 = (int)calloc(0x20,4);
    if ((void *)DAT_6805f064 == (void *)0x0) {
      return 0xfff0bdc1;
    }
    iVar2 = 0;
    iVar3 = 1;
    do {
      iVar1 = FUN_68053ae0(iVar3,0);
      if (iVar1 == -999999) {
        return 0xfff0bdc1;
      }
      iVar1 = FUN_68053ae0(iVar3,0);
      if (iVar2 == iVar1) {
        iVar3 = iVar3 + 1;
      }
      *(int *)(DAT_6805f064 + iVar2 * 4) = iVar3 + -1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x20);
  }
  if ((-1 < param_1) && (param_1 < 0x20)) {
    return *(undefined4 *)(DAT_6805f064 + param_1 * 4);
  }
  return 0xfff0bdc1;
}


