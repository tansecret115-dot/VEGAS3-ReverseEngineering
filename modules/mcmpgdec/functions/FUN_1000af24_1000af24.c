/* Module: mcmpgdec.dll
   Function: FUN_1000af24
   Address: 1000af24
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_1000af24(void)

{
  undefined2 uVar1;
  int iVar2;
  
  DAT_10035ab0 = &DAT_100356b0;
  iVar2 = -0x200;
  do {
    if (iVar2 < -0x100) {
      *(undefined2 *)(DAT_10035ab0 + iVar2 * 2) = 0xff00;
    }
    else {
      uVar1 = (undefined2)iVar2;
      if (0xff < iVar2) {
        uVar1 = 0xff;
      }
      *(undefined2 *)(DAT_10035ab0 + iVar2 * 2) = uVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x200);
  return;
}


