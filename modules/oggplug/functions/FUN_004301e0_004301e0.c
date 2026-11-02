/* Module: oggplug.dll
   Function: FUN_004301e0
   Address: 004301e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004301e0(uint *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  bool bVar6;
  short local_1c [4];
  int local_14 [5];
  
  if (param_3 != (undefined4 *)0x0) {
    FUN_00441de0(local_14,*param_3,param_3[1]);
    uVar1 = FUN_00442100(local_14,8);
    local_1c[0] = 0;
    local_1c[1] = 0;
    local_1c[2] = 0;
    FUN_004302e0(local_14,(undefined1 *)local_1c,6);
    iVar3 = 3;
    bVar6 = true;
    psVar4 = local_1c;
    psVar5 = (short *)s_vorbis_004510f0;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *psVar4 == *psVar5;
      psVar4 = psVar4 + 1;
      psVar5 = psVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      return 0xffffff7c;
    }
    if (uVar1 == 1) {
      if ((param_3[2] != 0) && (param_1[2] == 0)) {
        uVar2 = FUN_00430310(param_1,local_14);
        return uVar2;
      }
    }
    else if (uVar1 == 3) {
      if (param_1[2] != 0) {
        uVar2 = FUN_004303f0(param_2,local_14);
        return uVar2;
      }
    }
    else if (((uVar1 == 5) && (param_1[2] != 0)) && (param_2[3] != 0)) {
      uVar2 = FUN_004304d0(param_1,local_14);
      return uVar2;
    }
  }
  return 0xffffff7b;
}


