/* Module: sfmarket2.dll
   Function: FUN_00451c60
   Address: 00451c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00451c60(int *param_1)

{
  int iVar1;
  int *piVar2;
  char local_34 [52];
  
  if (param_1[0x39] == 0) {
    sprintf(local_34,"NULL row buffer for row %ld, pass %d",param_1[0x37],
            (uint)*(byte *)(param_1 + 0x47));
    FUN_0047e340(param_1,local_34);
  }
  if ((param_1[0x1a] & 0x1000U) != 0) {
    if ((char)param_1[0x40] == '\x03') {
      FUN_00453dd0((uint *)(param_1 + 0x3e),param_1[0x39] + 1,param_1[0x43],param_1[0x5e],
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
      FUN_00454000(param_1 + 0x3e,iVar1 + 1,(int)piVar2);
    }
  }
  if ((param_1[0x1a] & 0x40000U) != 0) {
    FUN_00450460((uint *)(param_1 + 0x3e),(undefined1 *)(param_1[0x39] + 1),0x80);
  }
  if (((param_1[0x1a] & 0x4000U) != 0) && ((param_1[0x19] & 0x20000U) == 0)) {
    FUN_004527f0(param_1 + 0x3e,param_1[0x39] + 1);
  }
  if (((*(byte *)(param_1 + 0x1a) & 0x80) != 0) &&
     ((*(short *)((int)param_1 + 0x112) != 0 || ((*(byte *)((int)param_1 + 0x11e) & 4) != 0)))) {
    FUN_004529d0(param_1 + 0x3e,(byte *)(param_1[0x39] + 1),(uint)(param_1 + 0x5f),
                 (int)(param_1 + 0x4b),(int)param_1 + 0x135,*(int *)((int)param_1 + 0x156),
                 *(int *)((int)param_1 + 0x15a),*(int *)((int)param_1 + 0x15e),
                 *(int *)((int)param_1 + 0x162),*(int *)((int)param_1 + 0x166),
                 *(int *)((int)param_1 + 0x16a),(byte)*(undefined4 *)((int)param_1 + 0x14a));
  }
  if (((param_1[0x1a] & 0x2000U) != 0) &&
     ((((param_1[0x1a] & 0x80U) == 0 ||
       ((*(short *)((int)param_1 + 0x112) == 0 && ((*(byte *)((int)param_1 + 0x11e) & 4) == 0)))) &&
      (*(char *)((int)param_1 + 0x11e) != '\x03')))) {
    FUN_004539d0(param_1 + 0x3e,(byte *)(param_1[0x39] + 1),*(int *)((int)param_1 + 0x156),
                 *(int *)((int)param_1 + 0x162),(byte)*(undefined4 *)((int)param_1 + 0x14a));
  }
  if ((param_1[0x1a] & 0x400U) != 0) {
    FUN_00452300(param_1 + 0x3e,(undefined1 *)(param_1[0x39] + 1));
  }
  if ((*(byte *)(param_1 + 0x1a) & 0x40) != 0) {
    FUN_004543a0(param_1 + 0x3e,(byte *)(param_1[0x39] + 1),*(int *)((int)param_1 + 0x1d9),
                 *(int *)((int)param_1 + 0x1dd));
    if (param_1[0x3f] == 0) {
      FUN_0047e340(param_1,"png_do_dither returned rowbytes=0");
    }
  }
  if ((*(byte *)(param_1 + 0x1a) & 0x20) != 0) {
    FUN_004503a0((int)(param_1 + 0x3e),(byte *)(param_1[0x39] + 1));
  }
  if ((*(byte *)(param_1 + 0x1a) & 8) != 0) {
    FUN_00452110(param_1 + 0x3e,(byte *)(param_1[0x39] + 1),(byte *)((int)param_1 + 0x173));
  }
  if ((*(byte *)(param_1 + 0x1a) & 4) != 0) {
    FUN_00451fe0(param_1 + 0x3e,param_1[0x39] + 1);
  }
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    FUN_00450680(param_1 + 0x3e,(undefined1 *)(param_1[0x39] + 1));
  }
  if ((param_1[0x1a] & 0x10000U) != 0) {
    FUN_00450410((int)(param_1 + 0x3e),(byte *)(param_1[0x39] + 1));
  }
  if (((param_1[0x1a] & 0x4000U) != 0) && ((param_1[0x19] & 0x20000U) != 0)) {
    FUN_004527f0(param_1 + 0x3e,param_1[0x39] + 1);
  }
  if ((param_1[0x1a] & 0x8000U) != 0) {
    FUN_00452580((uint *)(param_1 + 0x3e),param_1[0x39] + 1,(uint)*(ushort *)((int)param_1 + 0x125),
                 (byte)param_1[0x19]);
  }
  if ((param_1[0x1a] & 0x80000U) != 0) {
    FUN_00452460(param_1 + 0x3e,param_1[0x39] + 1);
  }
  if ((param_1[0x1a] & 0x20000U) != 0) {
    FUN_00452350(param_1 + 0x3e,param_1[0x39] + 1);
  }
  if ((*(byte *)(param_1 + 0x1a) & 0x10) != 0) {
    FUN_004503d0(param_1 + 0x3e,(undefined1 *)(param_1[0x39] + 1));
  }
  if (((param_1[0x1a] & 0x100000U) != 0) && ((code *)param_1[0x15] != (code *)0x0)) {
    (*(code *)param_1[0x15])(param_1,param_1 + 0x3e,param_1[0x39] + 1);
  }
  return;
}


