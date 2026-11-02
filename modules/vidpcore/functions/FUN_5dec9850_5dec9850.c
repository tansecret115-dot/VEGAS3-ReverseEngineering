/* Module: vidpcore.dll
   Function: FUN_5dec9850
   Address: 5dec9850
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5dec9850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,
                undefined4 param_9,undefined4 param_10,double param_11,double param_12,int param_13)

{
  ushort uVar1;
  float10 fVar2;
  int iVar3;
  HGLOBAL pvVar4;
  LPVOID pMem;
  LPVOID pvVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  int local_110;
  int local_10c;
  int local_108;
  int *local_104;
  undefined8 local_100;
  LPVOID local_f8;
  LPVOID local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  double local_d8;
  undefined1 local_d0 [40];
  undefined1 local_a8 [40];
  undefined1 local_80 [40];
  undefined1 local_58 [40];
  undefined1 local_30 [44];
  
  local_104 = (int *)0x0;
  fVar2 = (float10)log2((float10)_DAT_5df231d0);
  local_d8 = (double)((float10)0.6931471805599453 * fVar2 + (float10)0.6931471805599453 * fVar2);
  local_100 = SQRT(-(((ABS(param_11) + _DAT_5df26678) * (ABS(param_11) + _DAT_5df26678)) / local_d8)
                  );
  FUN_5dec78f0(local_30,local_80,local_d0,local_58,local_a8,local_100);
  iVar3 = FUN_5debbfb0(&local_110,&local_10c,&local_e0,&local_ec,param_1,param_2,param_3,param_4,
                       param_6,param_7,param_8,param_9,param_13);
  if (iVar3 < 0) {
    return iVar3;
  }
  local_dc = FUN_5debe420(param_10,param_13);
  local_e8 = FUN_5debe420(param_5,param_13);
  FUN_5debe420(param_10,0x10);
  local_f0 = FUN_5debe420(param_5,0x10);
  local_e4 = FUN_5deca690(&local_104,0x20,local_110,local_10c,0,0,0);
  if (local_e4 < 0) {
    return local_e4;
  }
  iVar3 = local_110;
  if (local_110 <= local_10c) {
    iVar3 = local_10c;
  }
  pvVar4 = GlobalAlloc(2,iVar3 << 5);
  pMem = GlobalLock(pvVar4);
  iVar3 = local_110;
  if (local_110 <= local_10c) {
    iVar3 = local_10c;
  }
  local_f4 = pMem;
  pvVar4 = GlobalAlloc(2,iVar3 << 5);
  pvVar5 = GlobalLock(pvVar4);
  pcVar8 = GlobalHandle_exref;
  local_f8 = pvVar5;
  if (pMem == (LPVOID)0x0) goto LAB_5dec9bdc;
  if (pvVar5 != (LPVOID)0x0) {
    if (local_104[4] == 0) {
      if (((local_104[8] != 0) || (uVar1 = *(ushort *)((int)local_104 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_5dec99f3;
      iVar3 = 1 << ((byte)uVar1 & 0x1f);
LAB_5dec99f6:
      piVar9 = (int *)(*local_104 + iVar3 * 4 + (int)local_104);
    }
    else {
      if (local_104[4] != 3) {
LAB_5dec99f3:
        iVar3 = local_104[8];
        goto LAB_5dec99f6;
      }
      piVar9 = local_104 + 0xd;
    }
    local_108 = 0;
    uVar6 = (uint)*(ushort *)((int)local_104 + 0xe) * local_104[1] + 0x1f;
    iVar7 = (int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3;
    iVar3 = local_e0;
    if (0 < local_10c) {
      do {
        if (param_13 == 4) {
          FUN_5dec80f0((int)piVar9 + local_f0,iVar3,local_110,local_dc,1,local_30,local_80,local_d0,
                       local_58,local_a8,(undefined4)local_100,local_100._4_4_,local_f4,local_f8);
        }
        iVar3 = iVar3 + param_8;
        piVar9 = (int *)((int)piVar9 + iVar7);
        local_108 = local_108 + 1;
      } while (local_108 < local_10c);
    }
    local_100 = SQRT(-(((ABS(param_12) + _DAT_5df26678) * (ABS(param_12) + _DAT_5df26678)) /
                      local_d8));
    FUN_5dec78f0(local_30,local_80,local_d0,local_58,local_a8,local_100);
    if (local_104[4] == 0) {
      if (((local_104[8] != 0) || (uVar1 = *(ushort *)((int)local_104 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_5dec9b1b;
      iVar3 = 1 << ((byte)uVar1 & 0x1f);
LAB_5dec9b1e:
      piVar9 = (int *)(*local_104 + iVar3 * 4 + (int)local_104);
    }
    else {
      if (local_104[4] != 3) {
LAB_5dec9b1b:
        iVar3 = local_104[8];
        goto LAB_5dec9b1e;
      }
      piVar9 = local_104 + 0xd;
    }
    local_108 = 0;
    pMem = local_f4;
    if (0 < local_110) {
      iVar3 = local_e8 + local_ec;
      iVar10 = (int)piVar9 + local_f0;
      do {
        if (param_13 == 4) {
          FUN_5dec8970(iVar3,param_3,iVar10,iVar7,local_10c,1,local_30,local_80,local_d0,local_58,
                       local_a8,(undefined4)local_100,local_100._4_4_,local_f4,local_f8);
        }
        iVar3 = iVar3 + param_13;
        iVar10 = iVar10 + 0x10;
        local_108 = local_108 + 1;
        pMem = local_f4;
      } while (local_108 < local_110);
    }
  }
  pvVar5 = local_f8;
  pcVar8 = GlobalHandle_exref;
  pvVar4 = GlobalHandle(pMem);
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(pMem);
  GlobalFree(pvVar4);
LAB_5dec9bdc:
  if (pvVar5 != (LPVOID)0x0) {
    pvVar4 = (HGLOBAL)(*pcVar8)(pvVar5);
    GlobalUnlock(pvVar4);
    pvVar4 = (HGLOBAL)(*pcVar8)(pvVar5);
    GlobalFree(pvVar4);
  }
  if (local_104 != (int *)0x0) {
    FUN_5deca630(local_104,0);
  }
  return local_e4;
}


