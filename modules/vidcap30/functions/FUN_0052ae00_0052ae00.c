/* Module: vidcap30.exe
   Function: FUN_0052ae00
   Address: 0052ae00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052ae00(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int local_c;
  
  FUN_0054c4c0();
  FUN_0054c4f0(param_1,*param_2,param_2[1],*(undefined1 *)(param_2 + 6),
               *(undefined1 *)((int)param_2 + 0x19),*(undefined1 *)((int)param_2 + 0x1a),
               *(undefined1 *)((int)param_2 + 0x1b),*(undefined1 *)(param_2 + 7));
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_0054c910();
  }
  if ((param_2[2] & 0x800) != 0) {
    FUN_0054c950(param_1,*(undefined1 *)(param_2 + 0xb));
  }
  if ((*(byte *)(param_2 + 2) & 2) != 0) {
    FUN_0054c990();
  }
  if ((*(byte *)(param_2 + 2) & 4) != 0) {
    FUN_0054ca50(param_1,(double)*(float *)((int)param_2 + 0x71),
                 (double)*(float *)((int)param_2 + 0x75),(double)*(float *)((int)param_2 + 0x79),
                 (double)*(float *)((int)param_2 + 0x7d),(double)*(float *)((int)param_2 + 0x81),
                 (double)*(float *)((int)param_2 + 0x85),(double)*(float *)((int)param_2 + 0x89),
                 (double)*(float *)((int)param_2 + 0x8d));
  }
  if ((*(byte *)(param_2 + 2) & 8) == 0) {
    if (*(char *)((int)param_2 + 0x19) == '\x03') {
      FUN_00549540(param_1,"Valid palette required for paletted images\n");
    }
  }
  else {
    FUN_0054c820();
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
    FUN_0054cd70();
  }
  if ((*(byte *)(param_2 + 2) & 0x20) != 0) {
    FUN_0054ce70();
  }
  if ((*(byte *)(param_2 + 2) & 0x40) != 0) {
    FUN_0054cf50();
  }
  if ((param_2[2] & 0x100) != 0) {
    FUN_0054d590(param_1,*(undefined4 *)((int)param_2 + 0x5b),*(undefined4 *)((int)param_2 + 0x5f),
                 *(undefined1 *)((int)param_2 + 99));
  }
  if ((param_2[2] & 0x400) != 0) {
    FUN_0054d5f0(param_1,*(undefined4 *)((int)param_2 + 0x91),*(undefined4 *)((int)param_2 + 0x95),
                 *(undefined4 *)((int)param_2 + 0x99),*(undefined1 *)((int)param_2 + 0xa5),
                 *(undefined1 *)((int)param_2 + 0xa6),*(undefined4 *)((int)param_2 + 0x9d),
                 *(undefined4 *)((int)param_2 + 0xa1));
  }
  if ((*(byte *)(param_2 + 2) & 0x80) != 0) {
    FUN_0054d750(param_1,param_2[0x19],param_2[0x1a],*(undefined1 *)(param_2 + 0x1b));
  }
  if ((param_2[2] & 0x200) != 0) {
    FUN_0054d7b0(param_1,(int)param_2 + 0x39);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x10000;
  }
  iVar1 = 0;
  local_c = 0;
  if (0 < *(int *)((int)param_2 + 0x2d)) {
    do {
      piVar2 = (int *)(*(int *)((int)param_2 + 0x35) + iVar1);
      if (*piVar2 < 0) {
        if (*piVar2 == -1) {
          FUN_0054d140(param_1,piVar2[1],piVar2[2],piVar2[3]);
          *(undefined4 *)(iVar1 + *(int *)((int)param_2 + 0x35)) = 0xfffffffd;
        }
      }
      else {
        FUN_0054d1d0();
        *(undefined4 *)(iVar1 + *(int *)((int)param_2 + 0x35)) = 0xfffffffe;
      }
      local_c = local_c + 1;
      iVar1 = iVar1 + 0x10;
    } while (local_c < *(int *)((int)param_2 + 0x2d));
  }
  return;
}


