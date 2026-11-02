/* Module: vidpcore.dll
   Function: FUN_5dec8ca0
   Address: 5dec8ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5dec8ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,double param_9,
                double param_10,int param_11)

{
  ushort uVar1;
  float10 fVar2;
  int iVar3;
  LPVOID lpAddress;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_fc;
  int local_f8;
  int *local_f4;
  undefined8 local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  double local_d8;
  undefined8 local_d0;
  undefined8 local_a8;
  undefined4 local_80 [10];
  double local_58 [5];
  double local_30 [5];
  
  iVar8 = 0;
  fVar2 = (float10)log2((float10)_DAT_5df231d0);
  local_f4 = (int *)0x0;
  local_d8 = (double)((float10)0.6931471805599453 * fVar2 + (float10)0.6931471805599453 * fVar2);
  local_f0 = SQRT(-(((ABS(param_9) + _DAT_5df26678) * (ABS(param_9) + _DAT_5df26678)) / local_d8));
  FUN_5dec78f0(&local_a8,local_80,&local_d0,local_58,local_30,local_f0);
  iVar3 = FUN_5debbfb0(&local_f8,&local_fc,&local_dc,&local_e0,param_1,param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,param_11);
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = FUN_5deca690(&local_f4,0x20,local_f8,local_fc,0,0,0);
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = local_fc;
  if (local_fc < local_f8) {
    iVar3 = local_f8;
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,iVar3 * 0x40 + 0x1b0,0x3000,4);
  if (lpAddress == (LPVOID)0x0) goto LAB_5dec909e;
  iVar9 = 2;
  puVar7 = (undefined4 *)((int)lpAddress + 400);
  local_e4 = (int)lpAddress + ((int)(iVar3 * 0x20 + (iVar3 * 0x20 >> 0x1f & 7U)) >> 3) * 8 + 0x1b0;
  do {
    puVar5 = puVar7 + -0x3c;
    iVar3 = 0;
    do {
      iVar6 = iVar3 + 8;
      puVar5[-0x28] = *(undefined4 *)((int)&local_a8 + iVar3);
      puVar5[-0x27] = *(undefined4 *)((int)&local_a8 + iVar3 + 4);
      puVar5[-0x14] = *(undefined4 *)((int)local_80 + iVar3);
      puVar5[-0x13] = *(undefined4 *)((int)local_80 + iVar3 + 4);
      *puVar5 = *(undefined4 *)((int)&local_d0 + iVar3);
      puVar5[1] = *(undefined4 *)((int)&local_d0 + iVar3 + 4);
      *(double *)(puVar5 + 0x14) =
           *(double *)((int)&local_a8 + iVar3) - *(double *)((int)local_58 + iVar3);
      *(double *)(puVar5 + 0x28) =
           *(double *)((int)&local_d0 + iVar3) - *(double *)((int)local_30 + iVar3);
      puVar5 = puVar5 + 4;
      iVar3 = iVar6;
    } while (iVar6 < 0x28);
    *puVar7 = 0xffffffff;
    puVar7[1] = 0x7fffffff;
    puVar7[4] = 0x4646d497;
    puVar7[5] = 0x3c670ef5;
    puVar7 = puVar7 + 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (local_f4[4] == 0) {
    if (((local_f4[8] != 0) || (uVar1 = *(ushort *)((int)local_f4 + 0xe), uVar1 == 0)) ||
       (8 < uVar1)) goto LAB_5dec8e94;
    iVar3 = 1 << ((byte)uVar1 & 0x1f);
LAB_5dec8e97:
    piVar10 = (int *)(*local_f4 + iVar3 * 4 + (int)local_f4);
  }
  else {
    if (local_f4[4] != 3) {
LAB_5dec8e94:
      iVar3 = local_f4[8];
      goto LAB_5dec8e97;
    }
    piVar10 = local_f4 + 0xd;
  }
  uVar4 = (uint)*(ushort *)((int)local_f4 + 0xe) * local_f4[1] + 0x1f;
  iVar3 = (int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  iVar9 = local_dc;
  local_e8 = iVar3;
  if (0 < local_fc) {
    do {
      if (param_11 == 4) {
        FUN_5dec7d60(piVar10,iVar9,local_f8,0,4,lpAddress,(undefined4)local_f0,local_f0._4_4_,
                     (int)lpAddress + 0x1b0,local_e4);
        iVar3 = local_e8;
      }
      piVar10 = (int *)((int)piVar10 + iVar3);
      iVar9 = iVar9 + param_7;
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_fc);
  }
  local_f0 = SQRT(-(((ABS(param_10) + _DAT_5df26678) * (ABS(param_10) + _DAT_5df26678)) / local_d8))
  ;
  FUN_5dec78f0(&local_a8,local_80,&local_d0,local_58,local_30,local_f0);
  iVar3 = 2;
  puVar7 = (undefined4 *)((int)lpAddress + 400);
  do {
    puVar5 = puVar7 + -0x3c;
    iVar8 = 0;
    do {
      iVar9 = iVar8 + 8;
      puVar5[-0x28] = *(undefined4 *)((int)&local_a8 + iVar8);
      puVar5[-0x27] = *(undefined4 *)((int)&local_a8 + iVar8 + 4);
      puVar5[-0x14] = *(undefined4 *)((int)local_80 + iVar8);
      puVar5[-0x13] = *(undefined4 *)((int)local_80 + iVar8 + 4);
      *puVar5 = *(undefined4 *)((int)&local_d0 + iVar8);
      puVar5[1] = *(undefined4 *)((int)&local_d0 + iVar8 + 4);
      *(double *)(puVar5 + 0x14) =
           *(double *)((int)&local_a8 + iVar8) - *(double *)((int)local_58 + iVar8);
      *(double *)(puVar5 + 0x28) =
           *(double *)((int)&local_d0 + iVar8) - *(double *)((int)local_30 + iVar8);
      puVar5 = puVar5 + 4;
      iVar8 = iVar9;
    } while (iVar9 < 0x28);
    *puVar7 = 0xffffffff;
    puVar7[1] = 0x7fffffff;
    puVar7[4] = 0x4646d497;
    puVar7[5] = 0x3c670ef5;
    puVar7 = puVar7 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (local_f4[4] == 0) {
    if (((local_f4[8] != 0) || (uVar1 = *(ushort *)((int)local_f4 + 0xe), uVar1 == 0)) ||
       (8 < uVar1)) goto LAB_5dec902c;
    iVar3 = 1 << ((byte)uVar1 & 0x1f);
LAB_5dec902f:
    piVar10 = (int *)(*local_f4 + iVar3 * 4 + (int)local_f4);
  }
  else {
    if (local_f4[4] != 3) {
LAB_5dec902c:
      iVar3 = local_f4[8];
      goto LAB_5dec902f;
    }
    piVar10 = local_f4 + 0xd;
  }
  iVar8 = 0;
  iVar3 = local_e0;
  if (0 < local_f8) {
    do {
      if (param_11 == 4) {
        FUN_5dec85b0(iVar3,param_3,piVar10,local_e8,local_fc,4,lpAddress,(undefined4)local_f0,
                     local_f0._4_4_,(int)lpAddress + 0x1b0,local_e4);
      }
      piVar10 = piVar10 + 4;
      iVar3 = iVar3 + param_11;
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_f8);
  }
  VirtualFree(lpAddress,0,0x8000);
LAB_5dec909e:
  if (local_f4 != (int *)0x0) {
    FUN_5deca630(local_f4,0);
  }
  return 0;
}


