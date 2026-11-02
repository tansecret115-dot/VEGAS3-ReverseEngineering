/* Module: mp3rw.dll
   Function: FUN_0044c800
   Address: 0044c800
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044c800(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  
  FUN_00478980(param_1);
  FUN_004789b0(param_1,*param_2,param_2[1],(uint)*(byte *)(param_2 + 6),
               (uint)*(byte *)((int)param_2 + 0x19),(uint)*(byte *)((int)param_2 + 0x1a),
               (uint)*(byte *)((int)param_2 + 0x1b),(uint)*(byte *)(param_2 + 7));
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_00478dd0(param_1);
  }
  if ((param_2[2] & 0x800U) != 0) {
    FUN_00478e10(param_1,(uint)*(byte *)(param_2 + 0xb));
  }
  if ((*(byte *)(param_2 + 2) & 2) != 0) {
    FUN_00478e50(param_1,(byte *)(param_2 + 0x10),(uint)*(byte *)((int)param_2 + 0x19));
  }
  if ((*(byte *)(param_2 + 2) & 4) != 0) {
    FUN_00478f10(param_1,(double)*(float *)((int)param_2 + 0x71),
                 (double)*(float *)((int)param_2 + 0x75),(double)*(float *)((int)param_2 + 0x79),
                 (double)*(float *)((int)param_2 + 0x7d),(double)*(float *)((int)param_2 + 0x81),
                 (double)*(float *)((int)param_2 + 0x85),(double)*(float *)((int)param_2 + 0x89),
                 (double)*(float *)((int)param_2 + 0x8d));
  }
  if ((*(byte *)(param_2 + 2) & 8) == 0) {
    if (*(char *)((int)param_2 + 0x19) == '\x03') {
      FUN_00475b50(param_1,"Valid palette required for paletted images\n");
    }
  }
  else {
    FUN_00478ce0(param_1,param_2[4],(uint)*(ushort *)(param_2 + 5));
  }
  if ((*(byte *)(param_2 + 2) & 0x10) != 0) {
    if ((((param_1[0x1a] & 0x80000U) != 0) && (*(char *)((int)param_2 + 0x19) == '\x03')) &&
       (iVar2 = 0, *(short *)((int)param_2 + 0x16) != 0)) {
      do {
        *(char *)(*(int *)((int)param_2 + 0x45) + iVar2) =
             -1 - *(char *)(*(int *)((int)param_2 + 0x45) + iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(ushort *)((int)param_2 + 0x16));
    }
    FUN_00479230(param_1,*(byte **)((int)param_2 + 0x45),(int)param_2 + 0x49,
                 (uint)*(ushort *)((int)param_2 + 0x16),(uint)*(byte *)((int)param_2 + 0x19));
  }
  if ((*(byte *)(param_2 + 2) & 0x20) != 0) {
    FUN_00479330(param_1,(byte *)((int)param_2 + 0x52),(uint)*(byte *)((int)param_2 + 0x19));
  }
  if ((*(byte *)(param_2 + 2) & 0x40) != 0) {
    FUN_00479410(param_1,*(ushort **)((int)param_2 + 0x6d),(uint)*(ushort *)(param_2 + 5));
  }
  if ((param_2[2] & 0x100U) != 0) {
    FUN_00479a50(param_1,*(undefined4 *)((int)param_2 + 0x5b),*(undefined4 *)((int)param_2 + 0x5f),
                 (uint)*(byte *)((int)param_2 + 99));
  }
  if ((param_2[2] & 0x400U) != 0) {
    FUN_00479ab0(param_1,*(byte **)((int)param_2 + 0x91),*(undefined4 *)((int)param_2 + 0x95),
                 *(undefined4 *)((int)param_2 + 0x99),(uint)*(byte *)((int)param_2 + 0xa5),
                 (uint)*(byte *)((int)param_2 + 0xa6),*(byte **)((int)param_2 + 0x9d),
                 *(undefined4 **)((int)param_2 + 0xa1));
  }
  if ((*(byte *)(param_2 + 2) & 0x80) != 0) {
    FUN_00479c10(param_1,param_2[0x19],param_2[0x1a],(uint)*(byte *)(param_2 + 0x1b));
  }
  if ((param_2[2] & 0x200U) != 0) {
    FUN_00479c70(param_1,(ushort *)((int)param_2 + 0x39));
    param_1[0x19] = param_1[0x19] | 0x10000;
  }
  iVar2 = 0;
  local_c = 0;
  if (0 < *(int *)((int)param_2 + 0x2d)) {
    do {
      piVar3 = (int *)(*(int *)((int)param_2 + 0x35) + iVar2);
      iVar1 = *piVar3;
      if (iVar1 < 0) {
        if (iVar1 == -1) {
          FUN_00479600(param_1,(byte *)piVar3[1],(byte *)piVar3[2],piVar3[3]);
          *(undefined4 *)(iVar2 + *(int *)((int)param_2 + 0x35)) = 0xfffffffd;
        }
      }
      else {
        FUN_00479690(param_1,(byte *)piVar3[1],(byte *)piVar3[2],(int *)piVar3[3],iVar1);
        *(undefined4 *)(iVar2 + *(int *)((int)param_2 + 0x35)) = 0xfffffffe;
      }
      local_c = local_c + 1;
      iVar2 = iVar2 + 0x10;
    } while (local_c < *(int *)((int)param_2 + 0x2d));
  }
  return;
}


