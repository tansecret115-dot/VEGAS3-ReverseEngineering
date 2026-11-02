/* Module: vegas30k.dll
   Function: FUN_0113bea0
   Address: 0113bea0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0113bea0(int param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  ushort uVar8;
  uint uVar9;
  short sVar10;
  ushort uVar11;
  short sVar12;
  int iStack_4c;
  int iStack_48;
  int local_44;
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
  
  piVar1 = *(int **)(param_1 + 0x130);
  auStack_40[1] = 0;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  local_44 = param_1;
  iVar4 = (**(code **)(*piVar1 + 0x2c))(piVar1,param_2);
  if (iVar4 == 0) {
    return 1;
  }
  psVar2 = *(short **)(param_2 + 0x44);
  uVar5 = FUN_010401b0(param_2);
  *(undefined4 *)(param_1 + 0x11c) = uVar5;
  uVar11 = psVar2[7];
  sStack_1a = psVar2[1];
  uVar8 = (uVar11 >> 3) * sStack_1a;
  uVar9 = *(uint *)(psVar2 + 2);
  iVar4 = 0;
  uStack_4 = 0;
  sVar10 = *psVar2;
  _uStack_10 = CONCAT22(uVar11,uVar8);
  bVar3 = true;
  iStack_48 = 0;
  iStack_14 = uVar8 * uVar9;
  uStack_c = 0;
  sStack_1c = sVar10;
  uStack_18 = uVar9;
  sVar12 = sStack_1a;
LAB_0113bf54:
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            if (iStack_48 != 0) {
              return local_44;
            }
            if (!bVar3) {
              uVar8 = (uVar11 >> 3) * sVar12;
              _uStack_24 = CONCAT22(uVar11,uVar8);
              iStack_28 = uVar8 * uVar9;
              uStack_20 = 0;
              sStack_30 = sVar10;
              sStack_2e = sVar12;
              uStack_2c = uVar9;
              iVar6 = _SfAudio_IsEqualFormat_8(&sStack_30,&sStack_1c);
              if (iVar6 != 0) {
                return local_44;
              }
              uVar5 = FUN_010400e0(&sStack_30);
              uVar5 = FUN_010401b0(uVar5);
              *(undefined4 *)(iStack_4c + 0x120) = uVar5;
              iVar6 = (**(code **)(**(int **)(iStack_4c + 0x130) + 0x2c))
                                (*(int **)(iStack_4c + 0x130),uVar5);
              if (iVar6 == 0) {
                (**(code **)(**(int **)(iStack_4c + 0x13c) + 0x10))
                          (*(int **)(iStack_4c + 0x13c),auStack_40);
                auStack_40[0] = uStack_2c & 0xffff;
                auStack_40[1] = 0;
                local_44 = (local_44 / (int)(uint)(ushort)psVar2[6]) * auStack_40[0];
                piVar7 = (int *)FUN_01135cc0(0,&iStack_48);
                piVar1 = *(int **)(iStack_4c + 0x13c);
                (**(code **)(*piVar1 + 8))(piVar1);
                (**(code **)(**(int **)(iStack_4c + 0x138) + 8))(*(int **)(iStack_4c + 0x138));
                *(int **)(iStack_4c + 0x138) = piVar7;
                (**(code **)(*piVar7 + 4))(piVar7);
                (**(code **)**(undefined4 **)(iStack_4c + 0x138))
                          (*(undefined4 **)(iStack_4c + 0x138),&DAT_011ed2d0,
                           (undefined4 *)(iStack_4c + 0x13c));
                (**(code **)(*piVar7 + 8))(piVar7);
                *(undefined4 *)(iStack_4c + 0x128) = 1;
                return 1;
              }
              FUN_01040210(*(undefined4 *)(iStack_4c + 0x120));
              *(undefined4 *)(iStack_4c + 0x120) = 0;
            }
            bVar3 = false;
            switch(uStack_4) {
            case 0:
            case 1:
            case 5:
              iVar4 = 2;
              break;
            case 10:
              iVar4 = 1;
              uStack_4 = 0;
              break;
            case 0xb:
              iVar4 = 4;
              uStack_4 = 0;
              break;
            case 0xe:
              iVar4 = 1;
              uStack_4 = 4;
              break;
            case 0xf:
              iStack_48 = 1;
            }
            if (iVar4 != 1) break;
            sVar12 = (sVar12 != 2) + 1;
            uStack_4 = uStack_4 | 1;
          }
          if (iVar4 != 2) break;
          if (sVar10 == 3) {
            if (uVar11 == 0x40) {
              uVar11 = 0x20;
            }
            else {
              sVar10 = 1;
              uVar11 = 0x20;
            }
          }
          else if ((sVar10 == 1) || (sVar10 == -0x1ff)) {
            if (uVar11 == 0x20) {
              uVar11 = 0x18;
            }
            else if (uVar11 == 0x18) {
              uVar11 = 0x10;
            }
            else if (uVar11 == 0x10) {
              uVar11 = 8;
            }
            else if (uVar11 == 8) {
              sVar10 = -0x200;
              uVar11 = 0x20;
            }
          }
          else if (sVar10 == -0x200) {
            sVar10 = *psVar2;
            if (sVar10 == -0x200) {
              sVar10 = 1;
            }
            else {
              sVar12 = psVar2[1];
              uVar9 = *(uint *)(psVar2 + 2);
              uVar11 = psVar2[7];
              uStack_4 = uStack_4 | 10;
              bVar3 = true;
            }
          }
        }
      } while (iVar4 != 4);
      uStack_4 = uStack_4 | 4;
      if (uVar9 < 0x7d01) break;
      if (uVar9 == 0xac44) goto LAB_0113c10f;
      if (uVar9 == 48000) goto LAB_0113c105;
      if (uVar9 == 96000) {
LAB_0113c10f:
        uVar9 = uVar9 >> 1;
      }
    }
    if (uVar9 != 32000) {
      if (uVar9 == 8000) {
        sVar12 = psVar2[1];
        sVar10 = *psVar2;
        uVar9 = *(uint *)(psVar2 + 2);
        uVar11 = psVar2[7];
        iVar4 = 2;
        bVar3 = true;
      }
      else if (uVar9 == 0x2b11) {
        uVar9 = 8000;
      }
      else if (uVar9 == 0x5622) goto LAB_0113c10f;
      goto LAB_0113bf54;
    }
LAB_0113c105:
    uVar9 = 0xac44;
  } while( true );
}


