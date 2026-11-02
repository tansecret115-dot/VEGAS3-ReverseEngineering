/* Module: mpgaout.dll
   Function: FUN_10005c20
   Address: 10005c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10005c20(int *param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar9 = *param_1;
  iVar2 = param_1[4];
  iVar3 = param_1[6];
  uVar7 = 8;
  iVar4 = param_1[5];
  iVar6 = param_1[2];
  *param_4 = 0xffff;
  uVar5 = *(uint *)(iVar9 + 0xc);
  do {
    bVar10 = (*param_4 & 0x8000) != 0;
    *param_4 = *param_4 * 2;
    if ((uVar5 & uVar7) == 0) {
      if (bVar10) {
LAB_10005c7c:
        *param_4 = *param_4 ^ 0x8005;
      }
    }
    else if (!bVar10) goto LAB_10005c7c;
    uVar7 = uVar7 >> 1;
  } while (uVar7 != 0);
  uVar7 = 2;
  *param_4 = (uint)(ushort)*param_4;
  uVar5 = *(uint *)(iVar9 + 0x10);
  do {
    bVar10 = (*param_4 & 0x8000) != 0;
    *param_4 = *param_4 * 2;
    if ((uVar5 & uVar7) == 0) {
      if (bVar10) {
LAB_10005cb4:
        *param_4 = *param_4 ^ 0x8005;
      }
    }
    else if (!bVar10) goto LAB_10005cb4;
    uVar7 = uVar7 >> 1;
  } while (uVar7 != 0);
  *param_4 = (uint)(ushort)*param_4;
  uVar5 = *(uint *)(iVar9 + 0x14);
  bVar10 = (*param_4 & 0x8000) != 0;
  *param_4 = *param_4 * 2;
  if ((uVar5 & 1) == 0) {
    if (bVar10) {
LAB_10005cec:
      *param_4 = *param_4 ^ 0x8005;
    }
  }
  else if (!bVar10) goto LAB_10005cec;
  *param_4 = (uint)(ushort)*param_4;
  uVar5 = *(uint *)(iVar9 + 0x18);
  bVar10 = (*param_4 & 0x8000) != 0;
  *param_4 = *param_4 * 2;
  if ((uVar5 & 1) == 0) {
    if (bVar10) {
LAB_10005d24:
      *param_4 = *param_4 ^ 0x8005;
    }
  }
  else if (!bVar10) goto LAB_10005d24;
  uVar7 = 2;
  *param_4 = (uint)(ushort)*param_4;
  uVar5 = *(uint *)(iVar9 + 0x1c);
  do {
    bVar10 = (*param_4 & 0x8000) != 0;
    *param_4 = *param_4 * 2;
    if ((uVar5 & uVar7) == 0) {
      if (bVar10) {
LAB_10005d5c:
        *param_4 = *param_4 ^ 0x8005;
      }
    }
    else if (!bVar10) goto LAB_10005d5c;
    uVar7 = uVar7 >> 1;
  } while (uVar7 != 0);
  uVar7 = 2;
  *param_4 = (uint)(ushort)*param_4;
  uVar5 = *(uint *)(iVar9 + 0x20);
  do {
    bVar10 = (*param_4 & 0x8000) != 0;
    *param_4 = *param_4 * 2;
    if ((uVar5 & uVar7) == 0) {
      if (bVar10) {
LAB_10005d94:
        *param_4 = *param_4 ^ 0x8005;
      }
    }
    else if (!bVar10) goto LAB_10005d94;
    uVar7 = uVar7 >> 1;
  } while (uVar7 != 0);
  *param_4 = (uint)(ushort)*param_4;
  uVar5 = *(uint *)(iVar9 + 0x24);
  bVar10 = (*param_4 & 0x8000) != 0;
  *param_4 = *param_4 * 2;
  if ((uVar5 & 1) == 0) {
    if (bVar10) {
LAB_10005dcc:
      *param_4 = *param_4 ^ 0x8005;
    }
  }
  else if (!bVar10) goto LAB_10005dcc;
  *param_4 = (uint)(ushort)*param_4;
  uVar5 = *(uint *)(iVar9 + 0x28);
  bVar10 = (*param_4 & 0x8000) == 0;
  *param_4 = *param_4 * 2;
  if ((uVar5 & 1) == 0) {
    if (bVar10) goto code_r0x10005e0e;
  }
  else if (!bVar10) goto code_r0x10005e0e;
  *param_4 = *param_4 ^ 0x8005;
code_r0x10005e0e:
  uVar7 = 2;
  *param_4 = (uint)(ushort)*param_4;
  uVar5 = *(uint *)(iVar9 + 0x2c);
  do {
    bVar10 = (*param_4 & 0x8000) != 0;
    *param_4 = *param_4 * 2;
    if ((uVar5 & uVar7) == 0) {
      if (bVar10) {
LAB_10005e3c:
        *param_4 = *param_4 ^ 0x8005;
      }
    }
    else if (!bVar10) goto LAB_10005e3c;
    uVar7 = uVar7 >> 1;
  } while (uVar7 != 0);
  *param_4 = (uint)(ushort)*param_4;
  iVar9 = 0;
  if (iVar3 < 1) {
LAB_10005ee2:
    iVar9 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = iVar9 + 1;
        if (0 < iVar2) {
          iVar6 = 0;
          do {
            iVar1 = iVar6 + 1;
            iVar6 = iVar6 * 0x80 + iVar9 * 4;
            if (*(int *)(param_2 + iVar6) != 0) {
              uVar7 = 2;
              uVar5 = *(uint *)(param_3 + iVar6);
              do {
                bVar10 = (*param_4 & 0x8000) != 0;
                *param_4 = *param_4 * 2;
                if ((uVar5 & uVar7) == 0) {
                  if (bVar10) {
LAB_10005f44:
                    *param_4 = *param_4 ^ 0x8005;
                  }
                }
                else if (!bVar10) goto LAB_10005f44;
                uVar7 = uVar7 >> 1;
              } while (uVar7 != 0);
              *param_4 = (uint)(ushort)*param_4;
            }
            iVar6 = iVar1;
          } while (iVar1 < iVar2);
        }
        iVar9 = iVar4;
      } while (iVar4 < iVar3);
    }
    return;
  }
LAB_10005e58:
  iVar8 = 0;
  iVar1 = iVar9 + 1;
  do {
    if (iVar9 < iVar4) {
      if (iVar2 <= iVar8) break;
    }
    else if (0 < iVar8) break;
    uVar5 = *(uint *)(param_2 + iVar8 * 0x80 + iVar9 * 4);
    uVar7 = 1 << ((byte)*(undefined4 *)(iVar6 + 4 + iVar9 * 0x100) & 0x1f);
    iVar8 = iVar8 + 1;
joined_r0x10005e8e:
    while (uVar7 = uVar7 >> 1, uVar7 != 0) {
      bVar10 = (*param_4 & 0x8000) != 0;
      *param_4 = *param_4 * 2;
      if ((uVar5 & uVar7) != 0) goto LAB_10005eac;
      if (bVar10) goto LAB_10005eb0;
    }
    *param_4 = (uint)(ushort)*param_4;
  } while( true );
  iVar9 = iVar1;
  if (iVar3 <= iVar1) goto LAB_10005ee2;
  goto LAB_10005e58;
LAB_10005eac:
  if (!bVar10) {
LAB_10005eb0:
    *param_4 = *param_4 ^ 0x8005;
  }
  goto joined_r0x10005e8e;
}


