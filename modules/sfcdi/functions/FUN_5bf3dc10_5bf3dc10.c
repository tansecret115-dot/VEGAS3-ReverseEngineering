/* Module: sfcdi.dll
   Function: FUN_5bf3dc10
   Address: 5bf3dc10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3dc10(int param_1,int param_2,uchar *param_3,uchar *param_4,uchar *param_5,int param_6,
                int param_7,undefined4 param_8,undefined4 param_9,uint param_10,int param_11,
                undefined4 *param_12)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  BYTE *pBVar6;
  undefined4 *local_204;
  uchar local_200 [512];
  
  FUN_5bf3ce50(param_1,(LPCSTR)0x0);
  if (param_2 == 0) {
    puVar4 = calloc(1,0x358);
    if (puVar4 != (undefined4 *)0x0) {
      local_204 = (undefined4 *)0xffffffff;
LAB_5bf3dcab:
      *puVar4 = 0xfacefeed;
      puVar4[1] = 0x358;
      puVar4[2] = param_10;
      puVar4[0x87] = param_2;
      puVar4[0x88] = local_204;
      if (param_3 != (uchar *)0x0) {
        _mbscpy((uchar *)(puVar4 + 3),param_3);
      }
      _mbscpy((uchar *)(puVar4 + 0x44),param_4);
      if ((param_10 & 0x10) == 0) {
        if (param_5 != (uchar *)0x0) {
          _mbscpy((uchar *)(puVar4 + 0x89),param_5);
        }
        puVar4[0xcc] = param_8;
        puVar4[0xcd] = param_9;
        if ((param_6 != 0) || (param_7 != 0)) {
          puVar4[0xca] = param_6;
          puVar4[0xcb] = param_7;
          puVar4[0x86] = puVar4[0x86] | 1;
        }
        uVar2 = *(uint *)(param_1 + 0x18);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        uVar3 = puVar4[0xcc];
        iVar5 = puVar4[0xcd];
        *(uint *)(param_1 + 0x18) = uVar2 + uVar3;
        *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar5 + (uint)CARRY4(uVar2,uVar3);
        iVar5 = FUN_5bf3cfa0(param_1,(int)puVar4);
        if (iVar5 < 0) goto LAB_5bf3de7e;
      }
      else {
        iVar5 = FUN_5bf2b110(puVar4 + 0x85,4,-1,-1,0x40000002);
        if (iVar5 < 0) {
LAB_5bf3de7e:
          pBVar6 = FUN_5bf29180(DAT_5bf76078,0x1083);
          FUN_5bf25750(local_200,pBVar6);
          FUN_5bf3ce50(param_1,(LPCSTR)local_200);
          goto LAB_5bf3dea8;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
      if ((*(uint *)(param_1 + 8) & 1) == 0) {
        iVar5 = FUN_5bf3d640(param_1,puVar4);
        if (iVar5 < 0) goto LAB_5bf3deac;
      }
      if ((param_11 != 0) && (puVar4[0x87] != 0)) {
        iVar5 = FUN_5bf3d470(param_1,param_2);
      }
      goto LAB_5bf3dea8;
    }
LAB_5bf3de4d:
    pBVar6 = FUN_5bf29180(DAT_5bf76078,0x1083);
    FUN_5bf25750(local_200,pBVar6);
    FUN_5bf3ce50(param_1,(LPCSTR)local_200);
    iVar5 = -0x7ff8fff2;
  }
  else {
    iVar5 = FUN_5bf2ade0(*(int **)(param_2 + 0x214),(int *)0x0,0x358,-1,(int *)&local_204);
    if (-1 < iVar5) {
      piVar1 = *(int **)(param_2 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      if (((int)local_204 < 0) || (iVar5 + -1 < (int)local_204)) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = *(undefined4 **)(piVar1[2] + (int)local_204 * 4);
      }
      if (puVar4 == (undefined4 *)0x0) goto LAB_5bf3de4d;
      goto LAB_5bf3dcab;
    }
    pBVar6 = FUN_5bf29180(DAT_5bf76078,0x1083);
    FUN_5bf25750(local_200,pBVar6);
    FUN_5bf3ce50(param_1,(LPCSTR)local_200);
    puVar4 = local_204;
LAB_5bf3dea8:
    if (-1 < iVar5) goto LAB_5bf3deb5;
  }
LAB_5bf3deac:
  FUN_5bf3dfc0(param_1,(int)puVar4);
  puVar4 = (undefined4 *)0x0;
LAB_5bf3deb5:
  if (param_12 != (undefined4 *)0x0) {
    *param_12 = puVar4;
  }
  return iVar5;
}


