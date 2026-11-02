/* Module: vegas30.exe
   Function: FUN_0058aa50
   Address: 0058aa50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0058aa50(int *param_1)

{
  int *piVar1;
  int *piVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 local_20;
  int local_10;
  undefined4 local_8;
  
  piVar2 = param_1;
  local_20 = 2;
  piVar1 = param_1 + 0x44;
  switch(*(undefined4 *)(*param_1 + 0x40)) {
  case 0:
    BVar3 = WriteFile((HANDLE)param_1[0x49],(LPCVOID)param_1[param_1[0x4e] + 0x4b],param_1[0x4f],
                      (LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      return 0x8004e009;
    }
    local_20 = 2;
    goto switchD_0058aa7e_default;
  case 1:
    _SfAudio_ExtractChannel_20
              (param_1[param_1[0x4e] + 0x4b],0,param_1[param_1[0x4e] + 0x4b],piVar1,
               param_1[0x4f] / (int)(uint)*(ushort *)(param_1 + 0x47));
    iVar4 = WriteFile((HANDLE)piVar2[0x49],(LPCVOID)piVar2[piVar2[0x4e] + 0x4b],piVar2[0x4f] / 2,
                      (LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    break;
  case 3:
    _SfAudio_ChannelChange_20
              (param_1[param_1[0x4e] + 0x4b],1,param_1[param_1[0x4e] + 0x4b],piVar1,
               param_1[0x4f] / (int)(uint)*(ushort *)(param_1 + 0x47));
    BVar3 = WriteFile((HANDLE)piVar2[0x49],(LPCVOID)piVar2[piVar2[0x4e] + 0x4b],piVar2[0x4f] / 2,
                      (LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      return 0x8004e009;
    }
  case 2:
    _SfAudio_ExtractChannel_20
              (piVar2[piVar2[0x4e] + 0x4b],1,piVar2[piVar2[0x4e] + 0x4b],piVar1,
               piVar2[0x4f] / (int)(uint)*(ushort *)(piVar2 + 0x47));
    iVar4 = WriteFile((HANDLE)piVar2[0x49],(LPCVOID)piVar2[piVar2[0x4e] + 0x4b],piVar2[0x4f] / 2,
                      (LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    break;
  default:
    goto switchD_0058aa7e_default;
  }
  if (iVar4 == 0) {
    return 0x8004e009;
  }
  local_20 = 1;
switchD_0058aa7e_default:
  iVar4 = *(int *)(*piVar2 + 0x40);
  if (iVar4 == 0) {
    local_10 = piVar2[0x45];
    local_8 = piVar2[0x47];
  }
  else if ((0 < iVar4) && (iVar4 < 4)) {
    local_10 = piVar2[0x45];
    local_8 = CONCAT22(*(ushort *)((int)piVar2 + 0x11e),*(ushort *)((int)piVar2 + 0x11e) >> 3);
  }
  iVar4 = piVar2[1];
  uVar5 = local_8 & 0xffff;
  if (iVar4 != 0) {
    if (DAT_0064b56c == 0) {
      *(undefined4 *)(iVar4 + 0x20) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x24) = 0x1fffffff;
    }
    else if (local_10 == 0) {
      *(undefined4 *)(iVar4 + 0x20) = 0x1312d0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
    }
    else {
      __alldiv(piVar2[0x54] + 0x4000,piVar2[0x55] + (uint)(0xffffbfff < (uint)piVar2[0x54]),uVar5,0)
      ;
      lVar7 = ftol();
      *(longlong *)(iVar4 + 0x20) = lVar7 + 0x1312d0;
    }
  }
  if (DAT_0064b56c != 0) {
    *(uint *)(*piVar2 + 0x10) = *(uint *)(*piVar2 + 0x10) | 0x200000;
    _DAT_0064b4d8 = 1;
  }
  uVar6 = (uint)param_1 / uVar5;
  iVar4 = piVar2[piVar2[0x4e] + 0x4b];
  uVar8 = __alldiv(piVar2[0x54],piVar2[0x55],uVar5,0);
  FUN_0058a940(piVar2,piVar2[0x4d],uVar8,iVar4,uVar6,local_20);
  uVar5 = piVar2[0x54];
  iVar4 = piVar2[0x4e];
  piVar2[0x54] = uVar5 + (int)param_1;
  piVar2[0x55] = piVar2[0x55] + (uint)CARRY4(uVar5,(uint)param_1);
  piVar2[0x4e] = iVar4 + 1U;
  if (1 < iVar4 + 1U) {
    piVar2[0x4e] = 0;
  }
  return 0;
}


