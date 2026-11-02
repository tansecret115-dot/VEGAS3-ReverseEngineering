/* Module: vegas30.exe
   Function: FUN_005c2880
   Address: 005c2880
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c2880(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piStack_2c8;
  uint *puStack_2c4;
  undefined4 uStack_2c0;
  int *piStack_2bc;
  int *piStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  int **ppiStack_2a8;
  uchar local_298 [260];
  int local_194 [5];
  int local_180;
  int local_17c;
  int local_178;
  uint local_174;
  int local_170;
  undefined4 local_168;
  undefined4 local_15c;
  uchar local_158 [276];
  undefined4 local_44 [4];
  uint local_34;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  int local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  ppiStack_2a8 = (int **)param_3;
  uStack_2ac = 0x5c2895;
  FUN_005b89a0();
  piVar4 = param_1;
  ppiStack_2a8 = &local_10;
  uStack_2ac = 1;
  uStack_2b0 = 0;
  uStack_2b4 = 0;
  piStack_2b8 = param_1;
  local_8 = 0;
  piStack_2bc = (int *)0x5c28af;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (-1 < iVar1) {
    piStack_2bc = (int *)&param_1;
    puStack_2c4 = &local_8;
    uStack_2c0 = 4;
    piStack_2c8 = piVar4;
    iVar1 = (**(code **)(*piVar4 + 0xc))();
    if (-1 < iVar1) {
      if (param_1 != (int *)0x4) {
        local_8 = 0;
      }
      piStack_2bc = (int *)0x0;
      uStack_2c0 = 0;
      puStack_2c4 = (uint *)local_c;
      piStack_2c8 = local_10;
      iVar1 = (**(code **)(*piVar4 + 0x14))(piVar4);
      if (iVar1 < 0) {
        return -0x7ffb1f7d;
      }
    }
  }
  if (local_8 != 0x30) {
    return -0x7ffb1f7d;
  }
  puStack_2c4 = local_44;
  puVar3 = local_44;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  piStack_2bc = &local_14;
  uStack_2c0 = 0x30;
  piStack_2c8 = piVar4;
  iVar1 = (**(code **)(*piVar4 + 0xc))();
  if (-1 < iVar1) {
    if (local_14 != 0x30) {
      return -0x7ffb1ff8;
    }
    local_298[0] = '\0';
    if (local_34 != 0) {
      param_1 = (int *)local_34;
      local_8 = local_34 >> 1;
      if (local_8 * 2 <= local_34) {
        param_1 = (int *)(local_8 * 2);
      }
      FUN_0060ac30();
      local_c = (**(code **)(*piVar4 + 0xc))(piVar4,&piStack_2c8,param_1,&param_1);
      if (-1 < local_c) {
        if ((&stack0x00000000 == (undefined1 *)0x2c8) || ((short)piStack_2c8 != 0)) {
          WideCharToMultiByte(0,0,(LPCWSTR)&piStack_2c8,-1,(LPSTR)local_298,local_8,(LPCSTR)0x0,
                              (LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x298) {
          local_298[0] = '\0';
        }
        iVar1 = local_8 - 1;
        local_298[iVar1] = '\0';
        if (param_1 < local_34) {
          (**(code **)(*piVar4 + 0x14))(piVar4,local_34 - (int)param_1,0,1,0);
          local_298[iVar1] = '\0';
        }
      }
      iVar1 = param_3;
      if (-1 < local_c) {
        piVar4 = local_194;
        for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = 0;
          piVar4 = piVar4 + 1;
        }
        local_194[0] = 0x46;
        if (param_5 == 0) {
          local_194[2] = local_44[2];
          local_194[3] = local_44[3];
        }
        else {
          local_194[2] = 0;
          local_194[3] = 0;
        }
        local_174 = local_24;
        local_17c = local_24 + local_2c;
        local_170 = local_20;
        local_194[4] = local_2c;
        local_178 = local_20 + local_28 + (uint)CARRY4(local_24,local_2c);
        local_194[1] = param_3;
        local_180 = local_28;
        local_168 = local_1c;
        _mbscpy(local_158,local_298);
        local_15c = _SfGetFileNamePtrA_4(local_298);
        iVar1 = FUN_00541350(iVar1,local_194,&param_3);
        if (param_3 != 0) {
          *(uint *)(param_3 + 0x34) = *(uint *)(param_3 + 0x34) & 0xfffffff7;
        }
        return iVar1;
      }
      return local_c;
    }
    return -0x7ffb1ff8;
  }
  return iVar1;
}


