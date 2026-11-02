/* Module: vegas30.exe
   Function: FUN_0052dc50
   Address: 0052dc50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052dc50(undefined4 param_1,int param_2)

{
  tWAVEFORMATEX *ptVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  EMIXERTYPE EVar7;
  int *piVar8;
  int iVar9;
  ulong uVar10;
  undefined4 local_4;
  
  uVar10 = 0;
  local_4 = 0;
  iVar9 = 0;
  uVar4 = Mixer_GetNumMainBuses((ISFMixer *)0x0);
  if (uVar4 != 0) {
    do {
      iVar5 = Mixer_BusMuted(uVar10);
      if (iVar5 == 0) {
        iVar9 = iVar9 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar4);
    if (iVar9 != 0) {
      *(uint *)(param_2 + 0x148) = uVar4;
      piVar6 = (int *)FUN_005b87b0(param_1);
      iVar9 = 0;
      if (0 < *piVar6) {
        piVar8 = (int *)piVar6[2];
        do {
          if (((*(uint *)(*piVar8 + 0x10) & 0x20000) == 0) && (*(int *)(*piVar8 + 4) == 2)) {
            *(uint *)(param_2 + 0x108) = *(uint *)(param_2 + 0x108) | 1;
            break;
          }
          iVar9 = iVar9 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar9 < *piVar6);
      }
      if ((*(byte *)(param_2 + 0x108) & 1) != 0) goto LAB_0052dcdf;
    }
  }
  local_4 = 0x4e001;
LAB_0052dcdf:
  ptVar1 = (tWAVEFORMATEX *)(param_2 + 0x134);
  *(undefined4 *)(param_2 + 0x104) = 0;
  Mixer_GetDeviceAudioFormat(ptVar1,0);
  iVar9 = *(int *)(param_2 + 0x138);
  uVar3 = *(ushort *)(param_2 + 0x142);
  *(undefined2 *)ptVar1 = 1;
  *(ushort *)(param_2 + 0x142) = uVar3;
  *(int *)(param_2 + 0x138) = iVar9;
  iVar5 = *(int *)(param_2 + 0x148) * 2;
  uVar4 = (uint)(uVar3 >> 3) * iVar5;
  *(short *)(param_2 + 0x140) = (short)uVar4;
  *(short *)(param_2 + 0x136) = (short)iVar5;
  *(uint *)(param_2 + 0x13c) = (uVar4 & 0xffff) * iVar9;
  *(undefined2 *)(param_2 + 0x144) = 0;
  EVar7 = Mixer_GetMixerType((ISFMixer *)0x0);
  puVar2 = (undefined4 *)(param_2 + 0x14c);
  *(EMIXERTYPE *)(param_2 + 0x130) = EVar7;
  *puVar2 = *(undefined4 *)ptVar1;
  *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_2 + 0x140);
  *(undefined2 *)(param_2 + 0x15c) = *(undefined2 *)(param_2 + 0x144);
  if (EVar7 == 1) {
    *(undefined2 *)puVar2 = 1;
    *(ushort *)(param_2 + 0x15a) = *(ushort *)(param_2 + 0x142);
    *(undefined2 *)(param_2 + 0x14e) = 2;
    uVar3 = (*(ushort *)(param_2 + 0x142) >> 3) << 1;
    *(ushort *)(param_2 + 0x158) = uVar3;
    *(int *)(param_2 + 0x150) = *(int *)(param_2 + 0x138);
    *(uint *)(param_2 + 0x154) = (uint)uVar3 * *(int *)(param_2 + 0x138);
    *(undefined2 *)(param_2 + 0x15c) = 0;
    *(undefined4 *)(param_2 + 0x180) = *(undefined4 *)(param_2 + 0x148);
  }
  else {
    *(undefined2 *)puVar2 = 1;
    *(ushort *)(param_2 + 0x15a) = *(ushort *)(param_2 + 0x142);
    *(int *)(param_2 + 0x150) = *(int *)(param_2 + 0x138);
    iVar9 = *(int *)(param_2 + 0x148) * 2;
    uVar4 = (uint)(*(ushort *)(param_2 + 0x142) >> 3) * iVar9;
    *(short *)(param_2 + 0x158) = (short)uVar4;
    *(short *)(param_2 + 0x14e) = (short)iVar9;
    *(uint *)(param_2 + 0x154) = (uVar4 & 0xffff) * *(int *)(param_2 + 0x138);
    *(undefined2 *)(param_2 + 0x15c) = 0;
    *(undefined4 *)(param_2 + 0x180) = *(undefined4 *)(param_2 + 0x148);
  }
  *(undefined4 *)(param_2 + 0x128) = 0;
  *(undefined4 *)(param_2 + 300) = 0;
  *(undefined4 *)(param_2 + 0x120) = 0;
  *(undefined4 *)(param_2 + 0x124) = 0;
  return local_4;
}


