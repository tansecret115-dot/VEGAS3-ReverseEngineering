/* Module: rmbe3260.dll
   Function: thunk_FUN_6603cf90
   Address: 6603bed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 thunk_FUN_6603cf90(void)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = 0xfff1;
  if (DAT_66075294 != 0) {
    if (DAT_660752b4 != (int *)0x0) {
      FUN_66043a80(DAT_660752b4);
      DAT_660752b4 = (int *)0x0;
    }
    thunk_FUN_66044130();
    if (DAT_66075284 != (void *)0x0) {
      iVar3 = 0;
      if ((short)DAT_66075278 != 0) {
        do {
          pvVar1 = *(void **)((int)DAT_66075284 + iVar3 * 4);
          if (pvVar1 != (void *)0x0) {
            operator_delete(pvVar1);
          }
          pvVar1 = *(void **)((int)DAT_66075288 + iVar3 * 4);
          if (pvVar1 != (void *)0x0) {
            operator_delete(pvVar1);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(DAT_66075278 & 0xffff));
      }
      operator_delete(DAT_66075284);
      DAT_66075284 = (void *)0x0;
      operator_delete(DAT_66075288);
      DAT_66075288 = (void *)0x0;
    }
    if (DAT_66075280 != (void *)0x0) {
      operator_delete(DAT_66075280);
      DAT_66075280 = (void *)0x0;
    }
    if (DAT_660752a4 != (void *)0x0) {
      uVar4 = 0;
      if (DAT_6607529c != 0) {
        do {
          pvVar1 = *(void **)((int)DAT_660752a4 + uVar4 * 4);
          if (pvVar1 != (void *)0x0) {
            operator_delete(pvVar1);
          }
          pvVar1 = *(void **)((int)DAT_660752a8 + uVar4 * 4);
          if (pvVar1 != (void *)0x0) {
            operator_delete(pvVar1);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < DAT_6607529c);
      }
      operator_delete(DAT_660752a4);
      DAT_660752a4 = (void *)0x0;
      operator_delete(DAT_660752a8);
      DAT_660752a8 = (void *)0x0;
    }
    if (DAT_660752a0 != (void *)0x0) {
      operator_delete(DAT_660752a0);
      DAT_660752a0 = (void *)0x0;
    }
    FUN_6605c880((int *)&DAT_66075258);
    if (DAT_6607527c != (void *)0x0) {
      operator_delete(DAT_6607527c);
      DAT_6607527c = (void *)0x0;
    }
    if (DAT_6607528c != (void *)0x0) {
      operator_delete(DAT_6607528c);
      DAT_6607528c = (void *)0x0;
    }
    if (DAT_66075290 != (void *)0x0) {
      operator_delete(DAT_66075290);
      DAT_66075290 = (void *)0x0;
    }
    if (DAT_660752ac != (void *)0x0) {
      operator_delete(DAT_660752ac);
      DAT_660752ac = (void *)0x0;
    }
    if (DAT_660752b0 != (void *)0x0) {
      operator_delete(DAT_660752b0);
      DAT_660752b0 = (void *)0x0;
    }
    DAT_66075278 = DAT_66075278 & 0xffff0000;
    DAT_6607529c = 0;
    DAT_66075294 = 0;
    uVar2 = 0;
  }
  return uVar2;
}


