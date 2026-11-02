/* Module: vegas30k.dll
   Function: FUN_0113ca30
   Address: 0113ca30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0113ca30(int param_1)

{
  undefined4 *puVar1;
  short *psVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  short sVar9;
  ushort uVar10;
  uint uVar11;
  short sVar12;
  int iStack_48;
  int iStack_44;
  uint auStack_40 [4];
  short sStack_30;
  short sStack_2e;
  uint uStack_2c;
  int iStack_28;
  ushort uStack_24;
  ushort uStack_22;
  undefined2 uStack_20;
  short sStack_1c;
  short sStack_1a;
  uint uStack_18;
  int iStack_14;
  ushort uStack_10;
  ushort uStack_e;
  undefined2 uStack_c;
  uint uStack_4;
  
  auStack_40[1] = 0;
  piVar8 = *(int **)(param_1 + 0x168);
  if (piVar8 == (int *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x11c);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x120);
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  iVar5 = (**(code **)(*piVar8 + 0x2c))(piVar8,*(undefined4 *)(param_1 + 0x11c));
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x16c) = 1;
    return 1;
  }
  iVar5 = 0;
  psVar2 = *(short **)(uStack_4 + 0x44);
  uStack_4 = 0;
  iStack_48 = 0;
  sStack_1a = psVar2[1];
  sStack_1c = *psVar2;
  uVar11 = *(uint *)(psVar2 + 2);
  uVar10 = psVar2[7];
  uVar4 = (uVar10 >> 3) * sStack_1a;
  _uStack_10 = CONCAT22(uVar10,uVar4);
  bVar3 = true;
  iStack_14 = uVar4 * uVar11;
  uStack_c = 0;
  uStack_18 = uVar11;
  sVar12 = sStack_1c;
  sVar9 = sStack_1a;
LAB_0113cb21:
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            if (iStack_48 != 0) {
              return iStack_44;
            }
            if (!bVar3) {
              uVar4 = (uVar10 >> 3) * sVar9;
              _uStack_24 = CONCAT22(uVar10,uVar4);
              iStack_28 = uVar4 * uVar11;
              uStack_20 = 0;
              sStack_30 = sVar12;
              sStack_2e = sVar9;
              uStack_2c = uVar11;
              iVar6 = _SfAudio_IsEqualFormat_8(&sStack_30,&sStack_1c);
              if (iVar6 != 0) {
                return iStack_44;
              }
              uVar7 = FUN_010400e0(&sStack_30);
              uVar7 = FUN_010401b0(uVar7);
              *(undefined4 *)(param_1 + 0x124) = uVar7;
              iVar6 = (**(code **)(**(int **)(param_1 + 0x168) + 0x2c))
                                (*(int **)(param_1 + 0x168),uVar7);
              if (iVar6 == 0) {
                puVar1 = (undefined4 *)(param_1 + 0x13c);
                *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x11c);
                *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x124);
                *(undefined4 *)(param_1 + 0x128) = 1;
                *(undefined4 *)(param_1 + 0x124) = 0;
                (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,auStack_40);
                auStack_40[0] = uStack_2c & 0xffff;
                auStack_40[1] = 0;
                iStack_44 = (iStack_44 / (int)(uint)(ushort)psVar2[6]) * auStack_40[0];
                piVar8 = (int *)FUN_01135cc0(0,&iStack_48);
                (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
                (**(code **)(**(int **)(param_1 + 0x138) + 8))(*(int **)(param_1 + 0x138));
                *(int **)(param_1 + 0x138) = piVar8;
                (**(code **)(*piVar8 + 4))(piVar8);
                (**(code **)**(undefined4 **)(param_1 + 0x138))
                          (*(undefined4 **)(param_1 + 0x138),&DAT_011ed2d0,puVar1);
                (**(code **)(*piVar8 + 8))(piVar8);
                *(undefined4 *)(param_1 + 0x128) = 1;
                return 1;
              }
              FUN_01040210(*(undefined4 *)(param_1 + 0x124));
              *(undefined4 *)(param_1 + 0x124) = 0;
            }
            bVar3 = false;
            switch(uStack_4) {
            case 0:
            case 1:
            case 5:
              iVar5 = 2;
              break;
            case 10:
              iVar5 = 1;
              uStack_4 = 0;
              break;
            case 0xb:
              iVar5 = 4;
              uStack_4 = 0;
              break;
            case 0xe:
              iVar5 = 1;
              uStack_4 = 4;
              break;
            case 0xf:
              iStack_48 = 1;
            }
            if (iVar5 != 1) break;
            sVar9 = (sVar9 != 2) + 1;
            uStack_4 = uStack_4 | 1;
          }
          if (iVar5 != 2) break;
          if (sVar12 == 3) {
            if (uVar10 == 0x40) {
              uVar10 = 0x20;
            }
            else {
              sVar12 = 1;
              uVar10 = 0x20;
            }
          }
          else if ((sVar12 == 1) || (sVar12 == -0x1ff)) {
            if (uVar10 == 0x20) {
              uVar10 = 0x18;
            }
            else if (uVar10 == 0x18) {
              uVar10 = 0x10;
            }
            else if (uVar10 == 0x10) {
              uVar10 = 8;
            }
            else if (uVar10 == 8) {
              sVar12 = -0x200;
              uVar10 = 0x20;
            }
          }
          else if (sVar12 == -0x200) {
            sVar12 = *psVar2;
            if (sVar12 == -0x200) {
              sVar12 = 1;
            }
            else {
              sVar9 = psVar2[1];
              uVar11 = *(uint *)(psVar2 + 2);
              uVar10 = psVar2[7];
              uStack_4 = uStack_4 | 10;
              bVar3 = true;
            }
          }
        }
      } while (iVar5 != 4);
      uStack_4 = uStack_4 | 4;
      if (uVar11 < 0x7d01) break;
      if (uVar11 == 0xac44) goto LAB_0113ccdc;
      if (uVar11 == 48000) goto LAB_0113ccd2;
      if (uVar11 == 96000) {
LAB_0113ccdc:
        uVar11 = uVar11 >> 1;
      }
    }
    if (uVar11 != 32000) {
      if (uVar11 == 8000) {
        sVar12 = *psVar2;
        sVar9 = psVar2[1];
        uVar11 = *(uint *)(psVar2 + 2);
        uVar10 = psVar2[7];
        iVar5 = 2;
        bVar3 = true;
      }
      else if (uVar11 == 0x2b11) {
        uVar11 = 8000;
      }
      else if (uVar11 == 0x5622) goto LAB_0113ccdc;
      goto LAB_0113cb21;
    }
LAB_0113ccd2:
    uVar11 = 0xac44;
  } while( true );
}


