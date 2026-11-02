/* Module: mpgaout.dll
   Function: FUN_10005980
   Address: 10005980
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10005980(int *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = *param_1;
  iVar2 = param_1[4];
  iVar3 = param_1[5];
  uVar6 = 8;
  *param_3 = 0xffff;
  uVar4 = *(uint *)(iVar8 + 0xc);
  do {
    bVar9 = (*param_3 & 0x8000) != 0;
    *param_3 = *param_3 * 2;
    if ((uVar4 & uVar6) == 0) {
      if (bVar9) {
LAB_100059d0:
        *param_3 = *param_3 ^ 0x8005;
      }
    }
    else if (!bVar9) goto LAB_100059d0;
    uVar6 = uVar6 >> 1;
  } while (uVar6 != 0);
  uVar6 = 2;
  *param_3 = (uint)(ushort)*param_3;
  uVar4 = *(uint *)(iVar8 + 0x10);
  do {
    bVar9 = (*param_3 & 0x8000) != 0;
    *param_3 = *param_3 * 2;
    if ((uVar4 & uVar6) == 0) {
      if (bVar9) {
LAB_10005a08:
        *param_3 = *param_3 ^ 0x8005;
      }
    }
    else if (!bVar9) goto LAB_10005a08;
    uVar6 = uVar6 >> 1;
  } while (uVar6 != 0);
  *param_3 = (uint)(ushort)*param_3;
  uVar4 = *(uint *)(iVar8 + 0x14);
  bVar9 = (*param_3 & 0x8000) != 0;
  *param_3 = *param_3 * 2;
  if ((uVar4 & 1) == 0) {
    if (bVar9) {
LAB_10005a40:
      *param_3 = *param_3 ^ 0x8005;
    }
  }
  else if (!bVar9) goto LAB_10005a40;
  *param_3 = (uint)(ushort)*param_3;
  uVar4 = *(uint *)(iVar8 + 0x18);
  bVar9 = (*param_3 & 0x8000) != 0;
  *param_3 = *param_3 * 2;
  if ((uVar4 & 1) == 0) {
    if (bVar9) {
LAB_10005a78:
      *param_3 = *param_3 ^ 0x8005;
    }
  }
  else if (!bVar9) goto LAB_10005a78;
  uVar6 = 2;
  *param_3 = (uint)(ushort)*param_3;
  uVar4 = *(uint *)(iVar8 + 0x1c);
  do {
    bVar9 = (*param_3 & 0x8000) != 0;
    *param_3 = *param_3 * 2;
    if ((uVar4 & uVar6) == 0) {
      if (bVar9) {
LAB_10005ab0:
        *param_3 = *param_3 ^ 0x8005;
      }
    }
    else if (!bVar9) goto LAB_10005ab0;
    uVar6 = uVar6 >> 1;
  } while (uVar6 != 0);
  uVar6 = 2;
  *param_3 = (uint)(ushort)*param_3;
  uVar4 = *(uint *)(iVar8 + 0x20);
  do {
    bVar9 = (*param_3 & 0x8000) != 0;
    *param_3 = *param_3 * 2;
    if ((uVar4 & uVar6) == 0) {
      if (bVar9) {
LAB_10005ae8:
        *param_3 = *param_3 ^ 0x8005;
      }
    }
    else if (!bVar9) goto LAB_10005ae8;
    uVar6 = uVar6 >> 1;
  } while (uVar6 != 0);
  *param_3 = (uint)(ushort)*param_3;
  uVar4 = *(uint *)(iVar8 + 0x24);
  bVar9 = (*param_3 & 0x8000) != 0;
  *param_3 = *param_3 * 2;
  if ((uVar4 & 1) == 0) {
    if (bVar9) {
LAB_10005b20:
      *param_3 = *param_3 ^ 0x8005;
    }
  }
  else if (!bVar9) goto LAB_10005b20;
  *param_3 = (uint)(ushort)*param_3;
  uVar4 = *(uint *)(iVar8 + 0x28);
  bVar9 = (*param_3 & 0x8000) == 0;
  *param_3 = *param_3 * 2;
  if ((uVar4 & 1) == 0) {
    if (bVar9) goto code_r0x10005b62;
  }
  else if (!bVar9) goto code_r0x10005b62;
  *param_3 = *param_3 ^ 0x8005;
code_r0x10005b62:
  uVar6 = 2;
  *param_3 = (uint)(ushort)*param_3;
  uVar4 = *(uint *)(iVar8 + 0x2c);
  do {
    bVar9 = (*param_3 & 0x8000) != 0;
    *param_3 = *param_3 * 2;
    if ((uVar4 & uVar6) == 0) {
      if (bVar9) {
LAB_10005b90:
        *param_3 = *param_3 ^ 0x8005;
      }
    }
    else if (!bVar9) goto LAB_10005b90;
    uVar6 = uVar6 >> 1;
  } while (uVar6 != 0);
  *param_3 = (uint)(ushort)*param_3;
  iVar8 = 0;
LAB_10005ba4:
  iVar7 = 0;
  iVar1 = iVar8 + 1;
  do {
    if (iVar8 < iVar3) {
      if (iVar2 <= iVar7) break;
    }
    else if (0 < iVar7) break;
    iVar5 = iVar7 * 0x80;
    iVar7 = iVar7 + 1;
    uVar4 = *(uint *)(param_2 + iVar5 + iVar8 * 4);
    uVar6 = 8;
    do {
      bVar9 = (*param_3 & 0x8000) != 0;
      *param_3 = *param_3 * 2;
      if ((uVar4 & uVar6) == 0) {
        if (bVar9) {
LAB_10005be8:
          *param_3 = *param_3 ^ 0x8005;
        }
      }
      else if (!bVar9) goto LAB_10005be8;
      uVar6 = uVar6 >> 1;
    } while (uVar6 != 0);
    *param_3 = (uint)(ushort)*param_3;
  } while( true );
  iVar8 = iVar1;
  if (0x1f < iVar1) {
    return;
  }
  goto LAB_10005ba4;
}


