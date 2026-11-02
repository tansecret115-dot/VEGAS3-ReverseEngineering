/* Module: vegas30k.dll
   Function: FUN_01123e50
   Address: 01123e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01123e50(int param_1)

{
  int iVar1;
  int iVar2;
  char local_34 [52];
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    sprintf(local_34,"NULL row buffer for row %ld, pass %d",*(undefined4 *)(param_1 + 0xdc),
            (uint)*(byte *)(param_1 + 0x11c));
    FUN_01155f80(param_1,local_34);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x1000) != 0) {
    if (*(char *)(param_1 + 0x100) == '\x03') {
      FUN_01125fc0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,*(undefined4 *)(param_1 + 0x10c),
                   *(undefined4 *)(param_1 + 0x178),*(undefined2 *)(param_1 + 0x112));
    }
    else {
      if (*(short *)(param_1 + 0x112) == 0) {
        iVar1 = *(int *)(param_1 + 0xe4);
        iVar2 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0xe4);
        iVar2 = param_1 + 0x17c;
      }
      FUN_011261f0(param_1 + 0xf8,iVar1 + 1,iVar2);
    }
  }
  if ((*(uint *)(param_1 + 0x68) & 0x40000) != 0) {
    FUN_01122650(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,0x80);
  }
  if (((*(uint *)(param_1 + 0x68) & 0x4000) != 0) && ((*(uint *)(param_1 + 100) & 0x20000) == 0)) {
    FUN_011249e0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if (((*(byte *)(param_1 + 0x68) & 0x80) != 0) &&
     ((*(short *)(param_1 + 0x112) != 0 || ((*(byte *)(param_1 + 0x11e) & 4) != 0)))) {
    FUN_01124bc0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,param_1 + 0x17c,param_1 + 300,
                 param_1 + 0x135,*(undefined4 *)(param_1 + 0x156),*(undefined4 *)(param_1 + 0x15a),
                 *(undefined4 *)(param_1 + 0x15e),*(undefined4 *)(param_1 + 0x162),
                 *(undefined4 *)(param_1 + 0x166),*(undefined4 *)(param_1 + 0x16a),
                 *(undefined4 *)(param_1 + 0x14a));
  }
  if (((*(uint *)(param_1 + 0x68) & 0x2000) != 0) &&
     ((((*(uint *)(param_1 + 0x68) & 0x80) == 0 ||
       ((*(short *)(param_1 + 0x112) == 0 && ((*(byte *)(param_1 + 0x11e) & 4) == 0)))) &&
      (*(char *)(param_1 + 0x11e) != '\x03')))) {
    FUN_01125bc0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,*(undefined4 *)(param_1 + 0x156),
                 *(undefined4 *)(param_1 + 0x162),*(undefined4 *)(param_1 + 0x14a));
  }
  if ((*(uint *)(param_1 + 0x68) & 0x400) != 0) {
    FUN_011244f0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(byte *)(param_1 + 0x68) & 0x40) != 0) {
    FUN_01126590(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,*(undefined4 *)(param_1 + 0x1d9),
                 *(undefined4 *)(param_1 + 0x1dd));
    if (*(int *)(param_1 + 0xfc) == 0) {
      FUN_01155f80(param_1,"png_do_dither returned rowbytes=0");
    }
  }
  if ((*(byte *)(param_1 + 0x68) & 0x20) != 0) {
    FUN_01122590(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(byte *)(param_1 + 0x68) & 8) != 0) {
    FUN_01124300(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,param_1 + 0x173);
  }
  if ((*(byte *)(param_1 + 0x68) & 4) != 0) {
    FUN_011241d0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    FUN_01122870(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    FUN_01122600(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if (((*(uint *)(param_1 + 0x68) & 0x4000) != 0) && ((*(uint *)(param_1 + 100) & 0x20000) != 0)) {
    FUN_011249e0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x8000) != 0) {
    FUN_01124770(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,*(undefined2 *)(param_1 + 0x125),
                 *(undefined4 *)(param_1 + 100));
  }
  if ((*(uint *)(param_1 + 0x68) & 0x80000) != 0) {
    FUN_01124650(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
    FUN_01124540(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(byte *)(param_1 + 0x68) & 0x10) != 0) {
    FUN_011225c0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if (((*(uint *)(param_1 + 0x68) & 0x100000) != 0) && (*(code **)(param_1 + 0x54) != (code *)0x0))
  {
    (**(code **)(param_1 + 0x54))(param_1,param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  return;
}


