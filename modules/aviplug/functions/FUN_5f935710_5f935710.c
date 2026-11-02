/* Module: aviplug.dll
   Function: FUN_5f935710
   Address: 5f935710
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f935710(int param_1,int param_2)

{
  ushort *puVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  LPSTR lpMultiByteStr;
  BYTE *pBVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_328;
  undefined4 local_318;
  uchar local_314 [260];
  uchar local_210 [260];
  uchar local_10c [264];
  
  uVar7 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    puVar3 = FUN_5f936c60(param_1);
    *(undefined **)(param_1 + 0x2c) = puVar3;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    return -0x7ff8fff2;
  }
  if (param_2 == 0) {
    iVar4 = FUN_5f936b10(param_1);
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 0x424);
    local_318 = 0;
    local_328 = 0;
    if ((iVar4 != 0) && (*(int *)(param_2 + 0x424) != 0)) {
      local_318 = *(undefined4 *)(iVar4 + 0x3e);
      local_328 = *(undefined4 *)(iVar4 + 0x3a);
      *(undefined4 *)(iVar4 + 0x3e) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x424) + 0x3a) = 0;
    }
    uVar8 = 0;
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 0x428);
    if (iVar4 != 0) {
      uVar8 = *(undefined4 *)(iVar4 + 0x94);
      uVar7 = *(undefined4 *)(iVar4 + 0x90);
      *(undefined4 *)(iVar4 + 0x94) = 0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x428) + 0x90) = 0;
    }
    iVar4 = FUN_5f936b10(param_1);
    iVar6 = *(int *)(*(int *)(param_1 + 0x2c) + 0x424);
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0x3e) = local_318;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x424) + 0x3a) = local_328;
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x2c) + 0x428);
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0x94) = uVar8;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x428) + 0x90) = uVar7;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x2c) + 4) = DAT_5f9f103c;
  if (-1 < iVar4) {
    lpMultiByteStr = FUN_5f9811c0(DAT_5f9f5978,1);
    iVar6 = *(int *)(param_1 + 0x2c);
    MultiByteToWideChar(0,1,lpMultiByteStr,-1,(LPWSTR)(iVar6 + 0x14),0x104);
    *(undefined2 *)(iVar6 + 0x21a) = 0;
    local_210[0] = '\0';
    puVar1 = *(ushort **)(*(int *)(param_1 + 0x2c) + 0x424);
    if ((puVar1 != (ushort *)0x0) && (*(int *)(puVar1 + 9) != 0)) {
      FUN_5f98caa0(puVar1,local_210);
    }
    local_314[0] = '\0';
    piVar2 = *(int **)(*(int *)(param_1 + 0x2c) + 0x428);
    if (((piVar2 != (int *)0x0) && (piVar2[1] != 0)) &&
       (((iVar6 = piVar2[0x12], iVar6 != 0 &&
         ((*(int *)(iVar6 + 8) != 0 && (*(int *)(iVar6 + 4) != 0)))) ||
        ((iVar6 = *piVar2, iVar6 != 0 && ((*(int *)(iVar6 + 8) != 0 && (*(int *)(iVar6 + 4) != 0))))
        )))) {
      FUN_5f97a270(iVar6,local_314);
    }
    local_10c[0] = '\0';
    if (local_314[0] == '\0') {
      if (local_210[0] != '\0') {
        pBVar5 = (BYTE *)FUN_5f9811c0(DAT_5f9f5978,3);
        FUN_5f988570(local_10c,pBVar5);
      }
    }
    else if (local_210[0] == '\0') {
      pBVar5 = (BYTE *)FUN_5f9811c0(DAT_5f9f5978,2);
      FUN_5f988570(local_10c,pBVar5);
    }
    else {
      pBVar5 = (BYTE *)FUN_5f9811c0(DAT_5f9f5978,4);
      FUN_5f988570(local_10c,pBVar5);
    }
    iVar6 = *(int *)(param_1 + 0x2c);
    MultiByteToWideChar(0,1,(LPCSTR)local_10c,-1,(LPWSTR)(iVar6 + 0x21c),0x104);
    *(undefined2 *)(iVar6 + 0x422) = 0;
    return iVar4;
  }
  return iVar4;
}


