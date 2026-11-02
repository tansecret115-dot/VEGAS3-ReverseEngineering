/* Module: vegas30k.dll
   Function: FUN_01127060
   Address: 01127060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01127060(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int local_c;
  
  FUN_01158db0();
  FUN_01158de0(param_1,*param_2,param_2[1],*(undefined1 *)(param_2 + 6),
               *(undefined1 *)((int)param_2 + 0x19),*(undefined1 *)((int)param_2 + 0x1a),
               *(undefined1 *)((int)param_2 + 0x1b),*(undefined1 *)(param_2 + 7));
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_01159200();
  }
  if ((param_2[2] & 0x800) != 0) {
    FUN_01159240(param_1,*(undefined1 *)(param_2 + 0xb));
  }
  if ((*(byte *)(param_2 + 2) & 2) != 0) {
    FUN_01159280();
  }
  if ((*(byte *)(param_2 + 2) & 4) != 0) {
    FUN_01159340(param_1,(double)*(float *)((int)param_2 + 0x71),
                 (double)*(float *)((int)param_2 + 0x75),(double)*(float *)((int)param_2 + 0x79),
                 (double)*(float *)((int)param_2 + 0x7d),(double)*(float *)((int)param_2 + 0x81),
                 (double)*(float *)((int)param_2 + 0x85),(double)*(float *)((int)param_2 + 0x89),
                 (double)*(float *)((int)param_2 + 0x8d));
  }
  if ((*(byte *)(param_2 + 2) & 8) == 0) {
    if (*(char *)((int)param_2 + 0x19) == '\x03') {
      FUN_01155f80(param_1,"Valid palette required for paletted images\n");
    }
  }
  else {
    FUN_01159110();
  }
  if ((*(byte *)(param_2 + 2) & 0x10) != 0) {
    if ((((*(uint *)(param_1 + 0x68) & 0x80000) != 0) && (*(char *)((int)param_2 + 0x19) == '\x03'))
       && (iVar1 = 0, *(short *)((int)param_2 + 0x16) != 0)) {
      do {
        *(char *)(*(int *)((int)param_2 + 0x45) + iVar1) =
             -1 - *(char *)(*(int *)((int)param_2 + 0x45) + iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)(uint)*(ushort *)((int)param_2 + 0x16));
    }
    FUN_01159660();
  }
  if ((*(byte *)(param_2 + 2) & 0x20) != 0) {
    FUN_01159760();
  }
  if ((*(byte *)(param_2 + 2) & 0x40) != 0) {
    FUN_01159840();
  }
  if ((param_2[2] & 0x100) != 0) {
    FUN_01159e80(param_1,*(undefined4 *)((int)param_2 + 0x5b),*(undefined4 *)((int)param_2 + 0x5f),
                 *(undefined1 *)((int)param_2 + 99));
  }
  if ((param_2[2] & 0x400) != 0) {
    FUN_01159ee0(param_1,*(undefined4 *)((int)param_2 + 0x91),*(undefined4 *)((int)param_2 + 0x95),
                 *(undefined4 *)((int)param_2 + 0x99),*(undefined1 *)((int)param_2 + 0xa5),
                 *(undefined1 *)((int)param_2 + 0xa6),*(undefined4 *)((int)param_2 + 0x9d),
                 *(undefined4 *)((int)param_2 + 0xa1));
  }
  if ((*(byte *)(param_2 + 2) & 0x80) != 0) {
    FUN_0115a040(param_1,param_2[0x19],param_2[0x1a],*(undefined1 *)(param_2 + 0x1b));
  }
  if ((param_2[2] & 0x200) != 0) {
    FUN_0115a0a0(param_1,(int)param_2 + 0x39);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x10000;
  }
  iVar1 = 0;
  local_c = 0;
  if (0 < *(int *)((int)param_2 + 0x2d)) {
    do {
      piVar2 = (int *)(*(int *)((int)param_2 + 0x35) + iVar1);
      if (*piVar2 < 0) {
        if (*piVar2 == -1) {
          FUN_01159a30(param_1,piVar2[1],piVar2[2],piVar2[3]);
          *(undefined4 *)(iVar1 + *(int *)((int)param_2 + 0x35)) = 0xfffffffd;
        }
      }
      else {
        FUN_01159ac0();
        *(undefined4 *)(iVar1 + *(int *)((int)param_2 + 0x35)) = 0xfffffffe;
      }
      local_c = local_c + 1;
      iVar1 = iVar1 + 0x10;
    } while (local_c < *(int *)((int)param_2 + 0x2d));
  }
  return;
}


