/* Module: 28_83260.dll
   Function: FUN_100063a0
   Address: 100063a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_100063a0(void *this,int param_1,short param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 == 0x10) &&
     ((((param_1 == 8000 || (param_1 == 0x2b11)) || (param_1 == 0x5622)) || (param_1 == 0xac44)))) {
    if (param_1 == 8000) {
      *param_3 = 0xa0;
    }
    else if (param_1 == 0x2b11) {
      *param_3 = 0xdc;
    }
    else if (param_1 == 0x5622) {
      *param_3 = 0x1b8;
    }
    else if (param_1 == 0xac44) {
      *param_3 = 0x370;
    }
    DAT_1000cd34 = param_1;
    DAT_1000cd28 = *(undefined2 *)param_3;
    *param_4 = 0x26;
    DAT_1000cd30 = malloc(0x800);
    puVar2 = DAT_1000cd30;
    for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_1000cd2c = malloc(0x1000);
    puVar2 = DAT_1000cd2c;
    for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_1000cd3c = malloc(0x2000);
    puVar2 = DAT_1000cd3c;
    for (iVar1 = 0x800; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_1000cd38 = malloc(0x2000);
    puVar2 = DAT_1000cd38;
    for (iVar1 = 0x800; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    if (((DAT_1000cd30 != (undefined4 *)0x0) && (DAT_1000cd2c != (undefined4 *)0x0)) &&
       ((DAT_1000cd3c != (undefined4 *)0x0 && (DAT_1000cd38 != (undefined4 *)0x0)))) {
      *(undefined4 *)((int)this + 0x1c44) = 1;
      FUN_10003890(this);
      puVar2 = &DAT_1000c3a8;
      for (iVar1 = 0x3c; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      return 0;
    }
  }
  return 0xffffffff;
}


