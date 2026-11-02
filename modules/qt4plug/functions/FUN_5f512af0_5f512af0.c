/* Module: qt4plug.dll
   Function: FUN_5f512af0
   Address: 5f512af0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f513196) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5f512af0(int param_1,int param_2,uint param_3,int param_4,uint *param_5,LPWSTR param_6,
            int param_7)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  uint uVar5;
  int iVar6;
  BYTE *pBVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puStack_150;
  undefined4 local_128;
  uint local_124;
  undefined4 local_120;
  uint local_11c;
  uint uStack_118;
  uchar auStack_104 [260];
  
  if (param_4 != 0x73636f6d) {
    iVar6 = FUN_5f5782f0();
    if (iVar6 == 0) {
      return 1;
    }
    iVar6 = FUN_5f5782f0();
    if (iVar6 == 0) {
      iVar6 = FUN_5f5782f0();
      if (iVar6 != 0) {
        FUN_5f5781b0();
      }
    }
    else {
      sVar2 = FUN_5f5781b0();
      if (sVar2 == 0) {
        local_124 = (local_124 & 0xff0000 | local_124 >> 0x10) >> 8 |
                    (local_124 << 0x10 | local_124 & 0xff00) << 8;
        local_120 = (local_120 & 0xff0000 | local_120 >> 0x10) >> 8 |
                    (local_120 << 0x10 | local_120 & 0xff00) << 8;
        local_11c = (local_11c & 0xff0000 | local_11c >> 0x10) >> 8 |
                    (local_11c << 0x10 | local_11c & 0xff00) << 8;
        uStack_118 = (uStack_118 & 0xff0000 | uStack_118 >> 0x10) >> 8 |
                     (uStack_118 << 0x10 | uStack_118 & 0xff00) << 8;
        if (local_124 != 1) {
          uVar3 = local_120 << 0xd;
          goto LAB_5f5131e4;
        }
      }
    }
    if (param_1 == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x428) == 0) {
      return 1;
    }
    if (*(int *)(*(int *)(param_1 + 0x428) + 0x48) == 0) {
      return 1;
    }
    iVar6 = FUN_5f5782f0();
    if (iVar6 == 0) {
      return 1;
    }
    sVar2 = FUN_5f5781b0();
    if (sVar2 != 0) {
      return 1;
    }
    FUN_5f581820();
    return 1;
  }
  local_124 = 0x454e4f4e;
  local_120 = 0x100002;
  local_11c = 0xac440000;
  FUN_5f5183a0(param_3,&local_128);
  uVar5 = local_124;
  uVar3 = FUN_5f5127d0(local_11c);
  uVar3 = (int)local_120._2_2_ * (int)(short)local_120 * uVar3;
  puVar4 = (undefined4 *)FUN_5f57aed0();
  bVar1 = FUN_5f5182c0();
  if (uVar5 < 0x616c6178) {
    if (uVar5 == 0x616c6177) {
LAB_5f512e3c:
      uVar3 = uVar3 >> 1;
    }
    else if (uVar5 < 0x51444d33) {
      if (uVar5 == 0x51444d32) {
        if (CONCAT31(extraout_var,bVar1) != 0) {
          FUN_5f57b130();
          puVar10 = (uint *)*puVar4;
          puVar9 = (uint *)0x0;
          uVar5 = *puVar10;
          for (uVar5 = (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8 |
                       (uVar5 << 0x10 | uVar5 & 0xff00) << 8; 7 < (int)uVar5;
              uVar5 = (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8 |
                      (uVar5 << 0x10 | uVar5 & 0xff00) << 8) {
            uVar8 = puVar10[1];
            uVar8 = (uVar8 & 0xff0000 | uVar8 >> 0x10) >> 8 | (uVar8 << 0x10 | uVar8 & 0xff00) << 8;
            if (uVar8 == 0x51444341) {
              puVar9 = puVar10 + 2;
            }
            else if (uVar8 == 0) break;
            puVar10 = (uint *)((int)puVar10 + uVar5);
            if (puVar9 != (uint *)0x0) break;
            uVar5 = *puVar10;
          }
          FUN_5f57b0d0();
          if (puVar9 != (uint *)0x0) {
            uVar3 = puVar9[3];
            uVar3 = (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 << 0x10 | uVar3 & 0xff00) << 8;
            FUN_5f57b390();
            goto LAB_5f5131e4;
          }
        }
      }
      else {
        if (uVar5 == 0x4d414333) {
          uVar3 = uVar3 / 3;
          FUN_5f57b390();
          goto LAB_5f5131e4;
        }
        if (uVar5 == 0x4d414336) {
          uVar3 = uVar3 / 6;
          FUN_5f57b390();
          goto LAB_5f5131e4;
        }
      }
    }
    else if ((uVar5 == 0x51636c70) && (CONCAT31(extraout_var,bVar1) != 0)) {
      FUN_5f57b130();
      puVar9 = (uint *)*puVar4;
      uVar5 = *puVar9;
      puStack_150 = (uint *)0x0;
      for (uVar5 = (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8 | (uVar5 << 0x10 | uVar5 & 0xff00) << 8;
          7 < (int)uVar5;
          uVar5 = (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8 | (uVar5 << 0x10 | uVar5 & 0xff00) << 8) {
        uVar8 = puVar9[1];
        uVar8 = (uVar8 & 0xff0000 | uVar8 >> 0x10) >> 8 | (uVar8 << 0x10 | uVar8 & 0xff00) << 8;
        if (uVar8 == 0x51636c70) {
          puStack_150 = puVar9 + 2;
        }
        else if (uVar8 == 0) break;
        puVar9 = (uint *)((int)puVar9 + uVar5);
        if (puStack_150 != (uint *)0x0) break;
        uVar5 = *puVar9;
      }
      FUN_5f57b0d0();
      if (puStack_150 != (uint *)0x0) {
        uVar8 = 1;
        uVar5 = puStack_150[1] & 0xff;
        if (uVar5 == 0x46) {
          uVar3 = uVar3 / 9;
          FUN_5f57b390();
        }
        else if (uVar5 == 0x48) {
          uVar3 = uVar3 / 0x13;
          FUN_5f57b390();
        }
        else {
          if (uVar5 == 0x51) {
            uVar8 = 0xe;
          }
          uVar3 = uVar3 / uVar8;
          FUN_5f57b390();
        }
        goto LAB_5f5131e4;
      }
    }
  }
  else {
    if (uVar5 < 0x696d6135) {
      if (uVar5 != 0x696d6134) {
        if (uVar5 == 0x63647832) goto LAB_5f512e3c;
        if (uVar5 != 0x63647834) goto LAB_5f512e3e;
      }
      uVar3 = uVar3 >> 2;
      FUN_5f57b390();
      goto LAB_5f5131e4;
    }
    if (uVar5 == 0x756c6177) goto LAB_5f512e3c;
  }
LAB_5f512e3e:
  FUN_5f57b390();
LAB_5f5131e4:
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar3;
    param_5[1] = 0;
  }
  if (param_6 == (LPWSTR)0x0) {
    return 0;
  }
  pBVar7 = (BYTE *)FUN_5f527a90(DAT_5f5a4158,0x47);
  FUN_5f52c900(auStack_104,pBVar7);
  MultiByteToWideChar(0,1,(LPCSTR)auStack_104,-1,param_6,param_7);
  param_6[param_7 + -1] = L'\0';
  return 1;
}


