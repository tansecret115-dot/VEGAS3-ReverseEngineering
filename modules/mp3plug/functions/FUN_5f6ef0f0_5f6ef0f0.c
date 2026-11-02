/* Module: mp3plug.dll
   Function: FUN_5f6ef0f0
   Address: 5f6ef0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_5f6ef0f0(int *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5,int param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  
  param_1[3] = param_6;
  FUN_5f705910(*(int *)(*param_3 + 8),0);
  iVar2 = FUN_5f705910(*(int *)(param_3[1] + 8),0);
  FUN_5f6ef770(**(int **)param_1[4],iVar2);
  FUN_5f6d5cf0(*(float **)(*param_4 + 0x88),*(float **)(param_4[1] + 0x88),(float *)param_1[0xb],
               **(uint **)param_1[4]);
  if ((param_6 == 2) || (param_6 == 5)) {
    iVar2 = -3;
    uVar6 = 6;
    piVar4 = param_1;
    do {
      FUN_5f705910(*(int *)(*param_3 + 0xc),uVar6);
      iVar3 = FUN_5f705910(*(int *)(param_3[1] + 0xc),uVar6);
      FUN_5f6ef770(**(int **)(param_1[4] + 4),iVar3);
      FUN_5f6d5cf0(*(float **)(*param_4 + 0x98 + iVar2 * 4),
                   *(float **)(param_4[1] + 0x98 + iVar2 * 4),(float *)piVar4[0x11],
                   **(uint **)(param_1[4] + 4));
      uVar6 = uVar6 - 1;
      piVar4 = piVar4 + 6;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0);
  }
  FUN_5f6ef0a0(*(int *)param_1[4] + 0x14,**(int **)param_1[4]);
  if (param_1[2] == 0) {
    fVar1 = _DAT_5f75dca4 - _DAT_5f75dca8;
  }
  else {
    fVar1 = _DAT_5f75dca8 + _DAT_5f75dca4;
  }
  param_1[2] = (uint)((float)param_1[0xd] + (float)param_1[0xc] <
                     fVar1 * (*(float *)(*param_4 + 0x78) + *(float *)(param_4[1] + 0x78)) +
                     _DAT_5f75dca0);
  if (param_2 == 0) {
    param_1[1] = param_1[2];
  }
  if (param_1[1] != 0) {
    if ((((param_6 == 0) || (param_6 == 1)) || (param_6 == 3)) || ((param_6 == 4 || (param_6 == 6)))
       ) {
      FUN_5f7094b0(*(uint **)param_1[6],param_1[0xb],param_1[9],param_1[8],*(int *)param_1[4] + 0x14
                   ,(float *)param_1[0x38],(float *)param_1[0x28],(float *)param_1[0x30]);
      FUN_5f7099d0(*(int **)param_1[6],*(int *)(*param_4 + 0x24),*(int *)param_1[4] + 0x14,
                   param_1[0x20]);
      FUN_5f7094b0(*(uint **)param_1[6],param_1[0xb],param_1[10],param_1[8],
                   *(int *)param_1[4] + 0x14,(float *)param_1[0x39],(float *)param_1[0x29],
                   (float *)param_1[0x31]);
      FUN_5f7099d0(*(int **)param_1[6],*(int *)(param_4[1] + 0x24),*(int *)param_1[4] + 0x14,
                   param_1[0x21]);
      FUN_5f6d5f70((float *)param_1[0x20],(float *)param_1[0x21],(float *)param_1[0x20],
                   **(uint **)param_1[6]);
      param_1[0x40] = 0x16;
    }
    else if (param_6 == 2) {
      piVar4 = param_1;
      piVar5 = param_1;
      do {
        FUN_5f7094b0(*(uint **)(param_1[6] + 4),piVar5[0x11],piVar5[0xf],piVar5[0xe],
                     *(int *)(param_1[4] + 4) + 0x14,(float *)piVar4[0x3a],(float *)piVar4[0x2a],
                     (float *)piVar4[0x32]);
        FUN_5f7094b0(*(uint **)(param_1[6] + 4),piVar5[0x11],piVar5[0x10],piVar5[0xe],
                     *(int *)(param_1[4] + 4) + 0x14,(float *)piVar4[0x3d],(float *)piVar4[0x2d],
                     (float *)piVar4[0x35]);
        piVar5 = piVar5 + 6;
        piVar4[0x41] = 0xd;
        piVar4 = piVar4 + 1;
      } while ((int)piVar4 < (int)(param_1 + 3));
    }
    else if (param_6 == 5) {
      FUN_5f7094b0(*(uint **)param_1[6],param_1[0xb],param_1[9],param_1[8],*(int *)param_1[4] + 0x14
                   ,(float *)param_1[0x38],(float *)param_1[0x28],(float *)param_1[0x30]);
      FUN_5f7099d0(*(int **)param_1[6],*(int *)(*param_4 + 0x24),*(int *)param_1[4] + 0x14,
                   param_1[0x20]);
      FUN_5f7094b0(*(uint **)param_1[6],param_1[0xb],param_1[10],param_1[8],
                   *(int *)param_1[4] + 0x14,(float *)param_1[0x39],(float *)param_1[0x29],
                   (float *)param_1[0x31]);
      FUN_5f7099d0(*(int **)param_1[6],*(int *)(param_4[1] + 0x24),*(int *)param_1[4] + 0x14,
                   param_1[0x21]);
      FUN_5f6d5f70((float *)param_1[0x20],(float *)param_1[0x21],(float *)param_1[0x20],
                   **(uint **)param_1[6]);
      iVar2 = *param_1;
      if (iVar2 == 0) {
        param_1[0x40] = 8;
      }
      else if ((iVar2 == 1) || (iVar2 == 2)) {
        param_1[0x40] = 6;
      }
      piVar4 = param_1;
      piVar5 = param_1;
      do {
        FUN_5f7094b0(*(uint **)(param_1[6] + 4),piVar5[0x11],piVar5[0xf],piVar5[0xe],
                     *(int *)(param_1[4] + 4) + 0x14,(float *)piVar4[0x3a],(float *)piVar4[0x2a],
                     (float *)piVar4[0x32]);
        FUN_5f7094b0(*(uint **)(param_1[6] + 4),piVar5[0x11],piVar5[0x10],piVar5[0xe],
                     *(int *)(param_1[4] + 4) + 0x14,(float *)piVar4[0x3d],(float *)piVar4[0x2d],
                     (float *)piVar4[0x35]);
        piVar5 = piVar5 + 6;
        piVar4[0x41] = **(int **)(param_1[6] + 4) + -3;
        piVar4 = piVar4 + 1;
      } while ((int)piVar4 < (int)(param_1 + 3));
    }
  }
  return 0;
}


