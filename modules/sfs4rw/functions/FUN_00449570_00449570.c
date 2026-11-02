/* Module: sfs4rw.dll
   Function: FUN_00449570
   Address: 00449570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00449570(int *param_1)

{
  int iVar1;
  int *piVar2;
  char local_34 [52];
  
  if (param_1[0x39] == 0) {
    sprintf(local_34,"NULL row buffer for row %ld, pass %d",param_1[0x37],
            (uint)*(byte *)(param_1 + 0x47));
    FUN_00475ad0(param_1,local_34);
  }
  if ((param_1[0x1a] & 0x1000U) != 0) {
    if ((char)param_1[0x40] == '\x03') {
      FUN_0044b6e0((uint *)(param_1 + 0x3e),param_1[0x39] + 1,param_1[0x43],param_1[0x5e],
                   (uint)*(ushort *)((int)param_1 + 0x112));
    }
    else {
      if (*(short *)((int)param_1 + 0x112) == 0) {
        iVar1 = param_1[0x39];
        piVar2 = (int *)0x0;
      }
      else {
        iVar1 = param_1[0x39];
        piVar2 = param_1 + 0x5f;
      }
      FUN_0044b910(param_1 + 0x3e,iVar1 + 1,(int)piVar2);
    }
  }
  if ((param_1[0x1a] & 0x40000U) != 0) {
    FUN_00447d70((uint *)(param_1 + 0x3e),(undefined1 *)(param_1[0x39] + 1),0x80);
  }
  if (((param_1[0x1a] & 0x4000U) != 0) && ((param_1[0x19] & 0x20000U) == 0)) {
    FUN_0044a100(param_1 + 0x3e,param_1[0x39] + 1);
  }
  if (((*(byte *)(param_1 + 0x1a) & 0x80) != 0) &&
     ((*(short *)((int)param_1 + 0x112) != 0 || ((*(byte *)((int)param_1 + 0x11e) & 4) != 0)))) {
    FUN_0044a2e0(param_1 + 0x3e,(byte *)(param_1[0x39] + 1),(uint)(param_1 + 0x5f),
                 (int)(param_1 + 0x4b),(int)param_1 + 0x135,*(int *)((int)param_1 + 0x156),
                 *(int *)((int)param_1 + 0x15a),*(int *)((int)param_1 + 0x15e),
                 *(int *)((int)param_1 + 0x162),*(int *)((int)param_1 + 0x166),
                 *(int *)((int)param_1 + 0x16a),(byte)*(undefined4 *)((int)param_1 + 0x14a));
  }
  if (((param_1[0x1a] & 0x2000U) != 0) &&
     ((((param_1[0x1a] & 0x80U) == 0 ||
       ((*(short *)((int)param_1 + 0x112) == 0 && ((*(byte *)((int)param_1 + 0x11e) & 4) == 0)))) &&
      (*(char *)((int)param_1 + 0x11e) != '\x03')))) {
    FUN_0044b2e0(param_1 + 0x3e,(byte *)(param_1[0x39] + 1),*(int *)((int)param_1 + 0x156),
                 *(int *)((int)param_1 + 0x162),(byte)*(undefined4 *)((int)param_1 + 0x14a));
  }
  if ((param_1[0x1a] & 0x400U) != 0) {
    FUN_00449c10(param_1 + 0x3e,(undefined1 *)(param_1[0x39] + 1));
  }
  if ((*(byte *)(param_1 + 0x1a) & 0x40) != 0) {
    FUN_0044bcb0(param_1 + 0x3e,(byte *)(param_1[0x39] + 1),*(int *)((int)param_1 + 0x1d9),
                 *(int *)((int)param_1 + 0x1dd));
    if (param_1[0x3f] == 0) {
      FUN_00475ad0(param_1,"png_do_dither returned rowbytes=0");
    }
  }
  if ((*(byte *)(param_1 + 0x1a) & 0x20) != 0) {
    FUN_00447cb0((int)(param_1 + 0x3e),(byte *)(param_1[0x39] + 1));
  }
  if ((*(byte *)(param_1 + 0x1a) & 8) != 0) {
    FUN_00449a20(param_1 + 0x3e,(byte *)(param_1[0x39] + 1),(byte *)((int)param_1 + 0x173));
  }
  if ((*(byte *)(param_1 + 0x1a) & 4) != 0) {
    FUN_004498f0(param_1 + 0x3e,param_1[0x39] + 1);
  }
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    FUN_00447f90(param_1 + 0x3e,(undefined1 *)(param_1[0x39] + 1));
  }
  if ((param_1[0x1a] & 0x10000U) != 0) {
    FUN_00447d20((int)(param_1 + 0x3e),(byte *)(param_1[0x39] + 1));
  }
  if (((param_1[0x1a] & 0x4000U) != 0) && ((param_1[0x19] & 0x20000U) != 0)) {
    FUN_0044a100(param_1 + 0x3e,param_1[0x39] + 1);
  }
  if ((param_1[0x1a] & 0x8000U) != 0) {
    FUN_00449e90((uint *)(param_1 + 0x3e),param_1[0x39] + 1,(uint)*(ushort *)((int)param_1 + 0x125),
                 (byte)param_1[0x19]);
  }
  if ((param_1[0x1a] & 0x80000U) != 0) {
    FUN_00449d70(param_1 + 0x3e,param_1[0x39] + 1);
  }
  if ((param_1[0x1a] & 0x20000U) != 0) {
    FUN_00449c60(param_1 + 0x3e,param_1[0x39] + 1);
  }
  if ((*(byte *)(param_1 + 0x1a) & 0x10) != 0) {
    FUN_00447ce0(param_1 + 0x3e,(undefined1 *)(param_1[0x39] + 1));
  }
  if (((param_1[0x1a] & 0x100000U) != 0) && ((code *)param_1[0x15] != (code *)0x0)) {
    (*(code *)param_1[0x15])(param_1,param_1 + 0x3e,param_1[0x39] + 1);
  }
  return;
}


