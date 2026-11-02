/* Module: mpgaout.dll
   Function: FUN_100044a8
   Address: 100044a8
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_100044a8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_18;
  
  iVar3 = *(int *)(param_3 + 0x10);
  iVar4 = *(int *)(param_3 + 0x14);
  local_18 = ((iVar4 * iVar3 + 0x20) - iVar4) * 4 + 0x20;
  iVar9 = 0;
LAB_100044e4:
  iVar1 = iVar9 + 1;
  iVar10 = 0;
LAB_100045dc:
  if (iVar9 < iVar4) {
    if (iVar3 <= iVar10) goto LAB_100045f8;
  }
  else if (0 < iVar10) goto LAB_100045f8;
  iVar2 = iVar10 * 0x100 + iVar9 * 8;
  iVar8 = 0;
  pdVar5 = *(double **)(param_1 + 0xc560);
  iVar7 = iVar10 + 1;
  if (*pdVar5 - *(double *)(param_2 + iVar2) < 0.0) {
    do {
      iVar8 = iVar8 + 1;
      if (0xd < iVar8) break;
      dVar6 = pdVar5[iVar8] - *(double *)(param_2 + iVar2);
    } while ((byte)(dVar6 < 0.0 | (byte)((ushort)((ushort)NAN(dVar6) << 10) >> 8) |
                   (byte)((ushort)((ushort)(dVar6 == 0.0) << 0xe) >> 8)) == 1);
  }
  if ((((iVar3 == 2) && (iVar4 <= iVar9)) && (iVar8 < 0xe)) &&
     (iVar10 = iVar9 * 8 + (1 - iVar10) * 0x100, pdVar5[iVar8] - *(double *)(param_2 + iVar10) < 0.0
     )) {
    do {
      iVar8 = iVar8 + 1;
      if (0xd < iVar8) break;
      dVar6 = pdVar5[iVar8] - *(double *)(param_2 + iVar10);
    } while ((byte)(dVar6 < 0.0 | (byte)((ushort)((ushort)NAN(dVar6) << 10) >> 8) |
                   (byte)((ushort)((ushort)(dVar6 == 0.0) << 0xe) >> 8)) == 1);
  }
  iVar10 = iVar7;
  if (0 < iVar8) {
    iVar7 = (iVar8 * 3 + 3) * 4;
    if (iVar9 < iVar4) {
      iVar7 = iVar7 + 6;
    }
    else {
      iVar7 = iVar7 + iVar3 * 6;
    }
    local_18 = iVar7 + local_18;
  }
  goto LAB_100045dc;
LAB_100045f8:
  iVar9 = iVar1;
  if (0x1f < iVar1) {
    return local_18;
  }
  goto LAB_100044e4;
}


