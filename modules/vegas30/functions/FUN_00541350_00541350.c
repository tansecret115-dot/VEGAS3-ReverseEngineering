/* Module: vegas30.exe
   Function: FUN_00541350
   Address: 00541350
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00541350(undefined4 *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  piVar2 = param_3;
  iVar5 = param_2;
  puVar1 = param_1;
  if (((param_1 == (undefined4 *)0x0) || (param_2 == 0)) || (param_3 == (int *)0x0)) {
    return -0x7ff8ffa9;
  }
  FUN_005b83b0(param_1,1);
  *piVar2 = 0;
  uVar3 = FUN_005b89a0(puVar1);
  param_2 = uVar3;
  iVar4 = FUN_0053fa20(puVar1,uVar3,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc));
  if (iVar4 == 0) {
    uVar3 = FUN_0053f8e0(puVar1);
    iVar4 = FUN_0053fa20(puVar1,uVar3,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc));
    if (iVar4 == 0) {
      iVar4 = _SfDosGetDateTime_4((uchar *)(iVar5 + 0x3c));
      iVar6 = 0;
      if ((iVar4 != 0) && (iVar4 == *(int *)(iVar5 + 0x2c))) {
        param_1 = (undefined4 *)0x0;
        iVar6 = FUN_005404e0(puVar1,&param_1);
        if (-1 < iVar6) {
          *param_1 = 0x46;
          uVar7 = FUN_0053f910(puVar1);
          *(undefined8 *)(param_1 + 2) = uVar7;
          param_1[1] = puVar1;
          param_1[4] = *(undefined4 *)(iVar5 + 0x10);
          param_1[5] = *(undefined4 *)(iVar5 + 0x14);
          param_1[6] = *(undefined4 *)(iVar5 + 0x18);
          param_1[7] = *(undefined4 *)(iVar5 + 0x1c);
          param_1[8] = *(undefined4 *)(iVar5 + 0x20);
          param_1[9] = *(undefined4 *)(iVar5 + 0x24);
          param_1[10] = *(undefined4 *)(iVar5 + 0x28);
          param_1[0xb] = *(undefined4 *)(iVar5 + 0x2c);
          param_1[0xd] = param_1[0xd] & 0xfffffffb;
          _mbscpy((uchar *)(param_1 + 0xf),(uchar *)(iVar5 + 0x3c));
          uVar3 = _SfGetFileNamePtrA_4(param_1 + 0xf);
          param_1[0xe] = uVar3;
          FUN_005b8da0(puVar1,1,1);
          iVar5 = FUN_00540570(puVar1,param_1);
          if (iVar5 < 0) {
            FUN_005403b0(param_1,0);
            FUN_005b84d0(puVar1,1);
            return iVar5;
          }
          iVar5 = FUN_005409c0(puVar1,param_1,1);
          if (iVar5 < 0) {
            FUN_005403b0(param_1,0);
            FUN_005b84d0(puVar1,1);
            return iVar5;
          }
          iVar5 = FUN_005ec620();
          if (iVar5 != 0) {
            iVar6 = FUN_005ec8a0(param_1 + 0xf,param_1 + 0xc,0,0);
            if (iVar6 < 0) {
              FUN_005400b0(param_2,param_1,1);
              goto LAB_005416c5;
            }
            FUN_005ed3f0(param_1[0xc]);
          }
          *param_3 = (int)param_1;
          FUN_005b84d0(puVar1,1);
          return 0;
        }
      }
LAB_005416c5:
      FUN_005b84d0(puVar1,1);
      return iVar6;
    }
    if (*(int *)(iVar5 + 0x2c) == *(int *)(iVar4 + 0x2c)) {
      iVar5 = lstrcmpiA((LPCSTR)(iVar5 + 0x3c),(LPCSTR)(iVar4 + 0x3c));
      if (iVar5 == 0) {
        iVar5 = _SfDosGetDateTime_4(iVar4 + 0x3c);
        if ((iVar5 == 0) || (iVar5 != *(int *)(iVar4 + 0x2c))) {
          FUN_005400b0(uVar3,iVar4,0);
          FUN_005b84d0(puVar1,1);
          return 0;
        }
        iVar5 = FUN_0053fef0(puVar1,iVar4);
        if (iVar5 != 0) {
          uVar3 = _SfList_FindSpecificItemRange_16(uVar3,0,0xffffffff,iVar4);
          iVar6 = FUN_00540fe0(puVar1,iVar4,uVar3);
          if (-1 < iVar6) {
            *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) & 0xfffffffb;
            *param_3 = iVar4;
            FUN_005b84d0(puVar1,1);
            return iVar6;
          }
          goto LAB_005416c5;
        }
      }
    }
  }
  else if (*(int *)(iVar5 + 0x2c) == *(int *)(iVar4 + 0x2c)) {
    iVar5 = lstrcmpiA((LPCSTR)(iVar5 + 0x3c),(LPCSTR)(iVar4 + 0x3c));
    if (iVar5 == 0) {
      iVar5 = _SfDosGetDateTime_4(iVar4 + 0x3c);
      if ((iVar5 != 0) && (iVar5 == *(int *)(iVar4 + 0x2c))) {
        iVar5 = FUN_0053fef0(puVar1,iVar4);
        if (iVar5 == 0) {
          FUN_005b84d0(puVar1,1);
          return -0x7fffbffb;
        }
        *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) & 0xfffffffb;
        *param_3 = iVar4;
        FUN_005b84d0(puVar1,1);
        return 0;
      }
      FUN_005400b0(uVar3,iVar4,0);
      FUN_005b84d0(puVar1,1);
      return 0;
    }
  }
  FUN_005b84d0(puVar1,1);
  return -0x7fffbffb;
}


