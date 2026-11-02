/* Module: 50comupd.exe
   Function: FUN_01006661
   Address: 01006661
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01006661(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  
  param_1[0x24] = param_2;
  iVar2 = (*(code *)param_1[7])(param_1[0x21],param_2 * param_1[0x29] + param_1[0xb],0);
  if (((iVar2 == -1) ||
      (iVar2 = (*(code *)param_1[4])(param_1[0x21],param_1[0x11],param_1[0x29]),
      param_1[0x29] != iVar2)) ||
     (iVar2 = (*(code *)param_1[7])(param_1[0x21],*(undefined4 *)param_1[0x11],0), iVar2 == -1)) {
    uVar3 = 4;
  }
  else {
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_1[0x11] + 4);
    bVar1 = FUN_010069ee(*(short *)(param_1[0x11] + 6),param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      return 0;
    }
    if (param_1[10] == 0) {
      return 1;
    }
    param_1[0x1f9] = 1;
    param_1[0x1fa] = param_1[0xe];
    *(short *)(param_1 + 0x1fc) = *(short *)(param_1 + 0x29) + -8;
    if ((short)(*(short *)(param_1 + 0x29) + -8) == 0) {
      param_1[0x1fb] = 0;
    }
    else {
      param_1[0x1fb] = param_1[0x11] + 8;
    }
    *(short *)((int)param_1 + 0x7f2) = (short)param_2;
    iVar2 = (*(code *)param_1[10])(param_1 + 0x1f9);
    if (iVar2 != -1) {
      return 1;
    }
    uVar3 = 0xb;
  }
  FUN_01006dcb((undefined4 *)*param_1,uVar3,0);
  return 0;
}


