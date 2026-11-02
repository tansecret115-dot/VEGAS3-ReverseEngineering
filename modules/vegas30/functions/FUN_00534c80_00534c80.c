/* Module: vegas30.exe
   Function: FUN_00534c80
   Address: 00534c80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00534c80(undefined4 *param_1,undefined4 param_2,uchar *param_3,LPCSTR param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uchar *puVar5;
  undefined1 *puStack_f84;
  undefined4 uStack_f80;
  undefined1 *puStack_f7c;
  undefined1 *puStack_f78;
  undefined4 uStack_f74;
  WCHAR aWStack_e80 [250];
  undefined1 auStack_c8c [84];
  uchar local_c38 [180];
  undefined4 uStack_b84;
  undefined4 uStack_b80;
  undefined1 auStack_b7c [8];
  int *piStack_b74;
  int *piStack_b68;
  int *piStack_b34;
  undefined4 local_b28;
  undefined1 auStack_afc [20];
  undefined1 auStack_ae8 [36];
  undefined1 auStack_ac4 [2196];
  undefined4 uStack_230;
  WCHAR local_208 [230];
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  LPCSTR pCStack_2c;
  undefined2 local_2;
  
  puVar4 = param_1;
  for (iVar2 = 0x24c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar5 = local_c38;
  for (iVar2 = 0x28c; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar5[0] = '\0';
    puVar5[1] = '\0';
    puVar5[2] = '\0';
    puVar5[3] = '\0';
    puVar5 = puVar5 + 4;
  }
  _mbscpy(local_c38,param_3);
  iVar2 = FUN_0052dfc0();
  if ((-1 < iVar2) && (iVar2 != 0x4e001)) {
    local_b28 = 0;
    uStack_f74 = 0x534d15;
    MultiByteToWideChar(0,1,param_4,-1,local_208,0x104);
    local_2 = 0;
    iVar2 = (**(code **)(*DAT_0064b510 + 0x54))();
    if (-1 < iVar2) {
      uVar1 = (**(code **)(*piStack_b34 + 0x10))();
      uStack_f74 = uStack_230;
      puStack_f78 = auStack_ac4;
      puStack_f7c = auStack_ae8;
      puStack_f84 = auStack_afc;
      uStack_f80 = 1;
      (**(code **)(*DAT_0064b510 + 0x74))(DAT_0064b510);
      puStack_f7c = (undefined1 *)0x0;
      iVar2 = (**(code **)(*DAT_0064b510 + 0x78))(DAT_0064b510,uVar1,&puStack_f7c);
      if (iVar2 < 0) {
        (**(code **)(*piStack_b68 + 8))(piStack_b68);
        return iVar2;
      }
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          iVar2 = (**(code **)(*DAT_0064b510 + 0x80))(DAT_0064b510,uVar1,uVar3,aWStack_e80,0x104);
          if (-1 < iVar2) {
            if ((&stack0x00000000 == (undefined1 *)0xe80) || (aWStack_e80[0] != L'\0')) {
              WideCharToMultiByte(0,0,aWStack_e80,-1,(LPSTR)&puStack_f84,0x104,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
            }
            else if (&stack0x00000000 != (undefined1 *)0xf84) {
              puStack_f84 = (undefined1 *)((uint)puStack_f84 & 0xffffff00);
            }
            iVar2 = lstrcmpA(pCStack_2c,(LPCSTR)&puStack_f84);
            if (iVar2 == 0) {
              (**(code **)(*DAT_0064b510 + 0x7c))(DAT_0064b510,uVar1,uVar3);
              (**(code **)(*piStack_b74 + 0x20))(piStack_b74,auStack_b7c);
              uStack_b80 = uStack_b84;
              iVar2 = FUN_00532af0(auStack_c8c,param_1);
              param_1[0x240] = 0;
              param_1[1] = uStack_b80;
              if (((0 < iStack_38) || ((-1 < iStack_38 && (iStack_3c != 0)))) ||
                 ((-1 < iStack_30 && ((0 < iStack_30 || (iStack_34 != 0)))))) {
                param_1[0x238] = iStack_3c;
                param_1[0x23c] = iStack_34;
                param_1[0x240] = 1;
                param_1[0x239] = iStack_38;
                param_1[0x23d] = iStack_30;
              }
              param_1[0x241] = DAT_0064a56c;
              param_1[0x242] = 1;
              param_1[0x243] = 0;
              param_1[0x244] = 0;
              param_1[0x245] = 0;
              param_1[0x246] = 0;
              FUN_0052e040(auStack_c8c);
              return iVar2;
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
      }
      (**(code **)(*piStack_b68 + 8))(piStack_b68);
      return -0x7fffbffb;
    }
  }
  return iVar2;
}


