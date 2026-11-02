/* Module: vegas30.exe
   Function: FUN_005df570
   Address: 005df570
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005df570(undefined4 param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  LPCSTR lpString2;
  undefined1 *puVar5;
  uchar *_Dest;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  undefined4 *puVar11;
  int local_114;
  int local_110;
  undefined4 local_10c;
  int local_108;
  uchar local_104 [259];
  undefined1 local_1;
  
  uVar9 = 0;
  local_110 = 0;
  piVar1 = (int *)FUN_005b87b0(param_1);
  if (param_2[2] == 3) {
    uVar6 = *param_2 - 1;
    *param_2 = uVar6;
    *param_2 = uVar6 & ((int)uVar6 < 1) - 1;
  }
  iVar7 = 0;
  if (0 < *piVar1) {
    do {
      iVar8 = *(int *)(piVar1[2] + iVar7 * 4);
      if (*(uint *)(iVar8 + 4) == param_2[2]) {
        if (uVar9 == *param_2) {
          local_110 = iVar8;
        }
        uVar9 = uVar9 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *piVar1);
  }
  if ((int)uVar9 < (int)(*param_2 + 1)) {
    iVar8 = 0;
    iVar7 = (*param_2 - uVar9) + 1;
    if (0 < iVar7) {
      do {
        iVar2 = FUN_005ce780(&local_110,DAT_0064b138,param_2[2],0xffffffff,0);
        FUN_004ea250(param_1,local_110,0xb,0);
        if (iVar2 < 0) {
          return false;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar7);
    }
  }
  FUN_004ea250(param_1,local_110,1,0);
  local_108 = FUN_005c9cc0(&local_114,param_1,local_110,param_2[2],param_2[10],param_2[0xb],0,0,0);
  if (local_108 < 0) {
    return false;
  }
  *(uint *)(local_114 + 0x18) = param_2[10];
  *(uint *)(local_114 + 0x1c) = param_2[0xb];
  *(uint *)(local_114 + 0x20) = param_2[0xc];
  *(uint *)(local_114 + 0x24) = param_2[0xd];
  *(uint *)(local_114 + 0x28) = param_2[0x22];
  *(uint *)(local_114 + 0x2c) = param_2[0x23];
  *(undefined4 *)(local_114 + 0x48) = 0;
  *(uint *)(local_114 + 0x4c) = param_2[0x25];
  *(uint *)(local_114 + 0x10) = (param_2[0x26] & 1) << 3 | *(uint *)(local_114 + 0x10) & 0xfffffff7;
  *(uint *)(local_114 + 0x10) = (param_2[0x27] & 1) << 9 | *(uint *)(local_114 + 0x10) & 0xfffffdff;
  *(uint *)(local_114 + 0x10) =
       (param_2[0x28] & 3) << 0x1c | *(uint *)(local_114 + 0x10) & 0xcfffffff;
  *(uint *)(local_114 + 0x10) = (param_2[0x29] & 1) << 8 | *(uint *)(local_114 + 0x10) & 0xfffffeff;
  *(uint *)(local_114 + 0x10) = *(uint *)(local_114 + 0x10) & 0xfffffbff;
  if ((*(uint *)(local_110 + 0x10) & 0x200) != 0) {
    *(uint *)(local_114 + 0x10) = *(uint *)(local_114 + 0x10) | 0x400;
  }
  *(float *)(local_114 + 0x60) = (float)*(double *)(param_2 + 0x18);
  *(uint *)(local_114 + 0x78) = param_2[0x12];
  *(uint *)(local_114 + 0x7c) = param_2[0x13];
  *(uint *)(local_114 + 0x68) = param_2[0x1e];
  *(uint *)(local_114 + 0x70) = param_2[0x20];
  if (param_2[0x1e] == 0) {
    if (param_2[2] == 3) {
      *(undefined4 *)(local_114 + 0x68) = 1;
    }
    else {
      *(undefined4 *)(local_114 + 0x68) = 2;
    }
  }
  if (param_2[0x20] == 0) {
    if (param_2[2] == 3) {
      *(undefined4 *)(local_114 + 0x70) = 1;
    }
    else {
      *(undefined4 *)(local_114 + 0x70) = 0xfffffffe;
    }
  }
  *(uint *)(local_114 + 0x80) = param_2[0x14];
  *(uint *)(local_114 + 0x84) = param_2[0x15];
  *(uint *)(local_114 + 0x6c) = param_2[0x1f];
  *(uint *)(local_114 + 0x74) = param_2[0x21];
  if (param_2[0x1f] == 0) {
    if (param_2[2] == 3) {
      *(undefined4 *)(local_114 + 0x6c) = 1;
    }
    else {
      *(undefined4 *)(local_114 + 0x6c) = 0xfffffffe;
    }
  }
  if (param_2[0x21] == 0) {
    if (param_2[2] == 3) {
      *(undefined4 *)(local_114 + 0x74) = 1;
    }
    else {
      *(undefined4 *)(local_114 + 0x74) = 2;
    }
  }
  *(uint *)(local_114 + 0x58) = (param_2[0x2b] & 1) << 8 | *(uint *)(local_114 + 0x58) & 0xfffffeff;
  *(uint *)(local_114 + 0x58) = *(uint *)(local_114 + 0x58) & 0xffffffdf;
  *(uint *)(local_114 + 0x58) = *(uint *)(local_114 + 0x58) & 0xffffffbf;
  pcVar10 = lstrcmpA_exref;
  if ((param_2[2] == 2) && (iVar7 = lstrcmpA((LPCSTR)param_2[5],"D"), iVar7 == 0)) {
    *(undefined4 *)(local_114 + 0x68) = 2;
    *(uint *)(local_114 + 0x58) = *(uint *)(local_114 + 0x58) & 0xffffffdf;
  }
  if (param_2[2] == 3) {
    if (*(int *)(local_114 + 0x68) == -1) {
      *(undefined4 *)(local_114 + 0x68) = 1;
    }
    if (*(int *)(local_114 + 0x70) == -1) {
      *(undefined4 *)(local_114 + 0x70) = 1;
    }
    if (*(int *)(local_114 + 0x6c) == -1) {
      *(undefined4 *)(local_114 + 0x6c) = 1;
    }
    if (*(int *)(local_114 + 0x74) == -1) {
      *(undefined4 *)(local_114 + 0x74) = 1;
    }
  }
  iVar7 = lstrcmpA((LPCSTR)param_2[3],"BL");
  if (iVar7 != 0) {
    local_10c = 0;
    FUN_005b83b0(param_1,1);
    iVar7 = FUN_005ec8a0(param_2[4],&local_10c,1,0);
    local_108 = iVar7;
    FUN_005b84d0(param_1,1);
    if (iVar7 < 0) {
      return false;
    }
    puVar3 = calloc(1,0x28);
    if (puVar3 == (undefined4 *)0x0) {
      return false;
    }
    puVar11 = puVar3;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    *puVar3 = 0x10;
    puVar3[1] = local_114;
    puVar3[6] = local_10c;
    puVar3[7] = param_2[0x16];
    puVar3[2] = param_2[0xe];
    puVar3[3] = param_2[0xf];
    puVar3[4] = param_2[0x10];
    puVar3[5] = param_2[0x11];
    uVar4 = FUN_005f2d10();
    lpString2 = (LPCSTR)_SfGetFileNamePtrA_4(uVar4);
    lstrcpynA((LPSTR)local_104,lpString2,0x104);
    local_1 = 0;
    puVar5 = (undefined1 *)_SfGetFileNameExtensionPtrA_4(local_104);
    *puVar5 = 0;
    iVar7 = lstrlenA((LPCSTR)local_104);
    _Dest = calloc(1,iVar7 + 1);
    puVar3[8] = _Dest;
    _mbscpy(_Dest,local_104);
    FUN_005ed3f0(puVar3[6]);
    *(undefined4 **)(local_114 + 0x50) = puVar3;
    pcVar10 = lstrcmpA_exref;
  }
  if ((((param_2[2] == 3) && (param_2[5] != 0)) &&
      (iVar7 = (*pcVar10)(param_2[5],&DAT_0062aa8c), iVar7 != 0)) &&
     (iVar7 = (*pcVar10)(param_2[5],&DAT_0062aa88), iVar7 != 0)) {
    local_108 = FUN_005df560(param_1,local_110,param_2[10],param_2[0xb],param_2[8],param_2[9],
                             param_2[6]);
  }
  return -1 < local_108;
}


