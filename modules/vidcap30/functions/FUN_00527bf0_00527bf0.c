/* Module: vidcap30.exe
   Function: FUN_00527bf0
   Address: 00527bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00527bf0(int param_1)

{
  int iVar1;
  int iVar2;
  char local_34 [52];
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    sprintf(local_34,"NULL row buffer for row %ld, pass %d",*(undefined4 *)(param_1 + 0xdc),
            (uint)*(byte *)(param_1 + 0x11c));
    FUN_00549540(param_1,local_34);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x1000) != 0) {
    if (*(char *)(param_1 + 0x100) == '\x03') {
      FUN_00529d60(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,*(undefined4 *)(param_1 + 0x10c),
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
      FUN_00529f90(param_1 + 0xf8,iVar1 + 1,iVar2);
    }
  }
  if ((*(uint *)(param_1 + 0x68) & 0x40000) != 0) {
    FUN_005263f0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,0x80);
  }
  if (((*(uint *)(param_1 + 0x68) & 0x4000) != 0) && ((*(uint *)(param_1 + 100) & 0x20000) == 0)) {
    FUN_00528780(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if (((*(byte *)(param_1 + 0x68) & 0x80) != 0) &&
     ((*(short *)(param_1 + 0x112) != 0 || ((*(byte *)(param_1 + 0x11e) & 4) != 0)))) {
    FUN_00528960(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,param_1 + 0x17c,param_1 + 300,
                 param_1 + 0x135,*(undefined4 *)(param_1 + 0x156),*(undefined4 *)(param_1 + 0x15a),
                 *(undefined4 *)(param_1 + 0x15e),*(undefined4 *)(param_1 + 0x162),
                 *(undefined4 *)(param_1 + 0x166),*(undefined4 *)(param_1 + 0x16a),
                 *(undefined4 *)(param_1 + 0x14a));
  }
  if (((*(uint *)(param_1 + 0x68) & 0x2000) != 0) &&
     ((((*(uint *)(param_1 + 0x68) & 0x80) == 0 ||
       ((*(short *)(param_1 + 0x112) == 0 && ((*(byte *)(param_1 + 0x11e) & 4) == 0)))) &&
      (*(char *)(param_1 + 0x11e) != '\x03')))) {
    FUN_00529960(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,*(undefined4 *)(param_1 + 0x156),
                 *(undefined4 *)(param_1 + 0x162),*(undefined4 *)(param_1 + 0x14a));
  }
  if ((*(uint *)(param_1 + 0x68) & 0x400) != 0) {
    FUN_00528290(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(byte *)(param_1 + 0x68) & 0x40) != 0) {
    FUN_0052a330(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,*(undefined4 *)(param_1 + 0x1d9),
                 *(undefined4 *)(param_1 + 0x1dd));
    if (*(int *)(param_1 + 0xfc) == 0) {
      FUN_00549540(param_1,"png_do_dither returned rowbytes=0");
    }
  }
  if ((*(byte *)(param_1 + 0x68) & 0x20) != 0) {
    FUN_00526330(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(byte *)(param_1 + 0x68) & 8) != 0) {
    FUN_005280a0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,param_1 + 0x173);
  }
  if ((*(byte *)(param_1 + 0x68) & 4) != 0) {
    FUN_00527f70(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    FUN_00526610(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x10000) != 0) {
    FUN_005263a0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if (((*(uint *)(param_1 + 0x68) & 0x4000) != 0) && ((*(uint *)(param_1 + 100) & 0x20000) != 0)) {
    FUN_00528780(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x8000) != 0) {
    FUN_00528510(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1,*(undefined2 *)(param_1 + 0x125),
                 *(undefined4 *)(param_1 + 100));
  }
  if ((*(uint *)(param_1 + 0x68) & 0x80000) != 0) {
    FUN_005283f0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(uint *)(param_1 + 0x68) & 0x20000) != 0) {
    FUN_005282e0(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if ((*(byte *)(param_1 + 0x68) & 0x10) != 0) {
    FUN_00526360(param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  if (((*(uint *)(param_1 + 0x68) & 0x100000) != 0) && (*(code **)(param_1 + 0x54) != (code *)0x0))
  {
    (**(code **)(param_1 + 0x54))(param_1,param_1 + 0xf8,*(int *)(param_1 + 0xe4) + 1);
  }
  return;
}


