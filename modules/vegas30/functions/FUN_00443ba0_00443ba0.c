/* Module: vegas30.exe
   Function: FUN_00443ba0
   Address: 00443ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00443ba0(undefined4 *param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined1 *puStack_430;
  int iStack_420;
  int iStack_418;
  undefined4 *local_410 [64];
  char acStack_310 [256];
  char acStack_210 [256];
  char acStack_110 [268];
  
  puStack_430 = &stack0xfffffffc;
  puVar16 = param_1;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  local_410[0] = param_1;
  iVar10 = DrawDibOpen();
  param_1[10] = iVar10;
  if (iVar10 == 0) {
    return -0x7fffbffb;
  }
  uVar7 = FUN_004019f0();
  DrawDibSetPalette(param_1[10],uVar7);
  iVar10 = 0;
  do {
    iVar8 = _SfDibAlloc_28(param_1,0x1c,0x100,8,0,0,0);
    if (iVar8 < 0) goto LAB_00443c19;
    iVar10 = iVar10 + 1;
    param_1 = param_1 + 1;
  } while (iVar10 < 10);
  if (iVar8 < 0) {
LAB_00443c19:
    FUN_00443ea0();
    return iVar8;
  }
  iVar10 = 0;
  do {
    cVar6 = ftol();
    *(char *)((int)local_410 + iVar10) = cVar6 + '3';
    _CIpow();
    cVar6 = ftol();
    acStack_310[iVar10] = cVar6 + '3';
    _CIpow();
    cVar6 = ftol();
    acStack_210[iVar10] = cVar6 + '3';
    cVar6 = ftol();
    acStack_110[iVar10] = cVar6 + '3';
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x100);
  iVar10 = 0;
  do {
    bVar5 = false;
    bVar4 = 0;
    switch(iVar10) {
    case 0:
      puStack_430 = (undefined1 *)0x0;
      bVar4 = 1;
      break;
    case 1:
      bVar5 = true;
      puStack_430 = (undefined1 *)0x0;
      bVar4 = 1;
      break;
    case 2:
      puStack_430 = (undefined1 *)0x0;
      break;
    case 3:
      puStack_430 = (undefined1 *)0x0;
      goto LAB_00443d76;
    case 4:
      puStack_430 = (undefined1 *)0x1;
      break;
    case 5:
      puStack_430 = (undefined1 *)0x2;
      goto LAB_00443d76;
    case 6:
      puStack_430 = (undefined1 *)0x2;
      break;
    case 7:
      bVar5 = true;
      puStack_430 = (undefined1 *)0x1;
      break;
    case 8:
      puStack_430 = (undefined1 *)0x3;
      break;
    case 9:
      puStack_430 = (undefined1 *)0x3;
LAB_00443d76:
      bVar5 = true;
    }
    iStack_420 = 0;
    iVar13 = 8;
    iVar3 = *(int *)(iStack_418 + iVar10 * 4);
    uVar9 = (uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f;
    do {
      piVar11 = *(int **)(iStack_418 + iVar10 * 4);
      if (piVar11[4] == 0) {
        if (((piVar11[8] != 0) || (uVar2 = *(ushort *)((int)piVar11 + 0xe), uVar2 == 0)) ||
           (8 < uVar2)) goto LAB_00443df4;
        piVar11 = (int *)((int)piVar11 + *piVar11 + (1 << ((byte)uVar2 & 0x1f)) * 4);
      }
      else if (piVar11[4] == 3) {
        piVar11 = piVar11 + 0xd;
      }
      else {
LAB_00443df4:
        piVar11 = (int *)((int)piVar11 + *piVar11 + piVar11[8] * 4);
      }
      uVar15 = 0;
      puVar14 = (undefined1 *)(iStack_420 + (int)piVar11);
      do {
        uVar12 = ~-(uint)bVar4 & uVar15;
        if (bVar5) {
          uVar12 = 0xff - uVar12;
        }
        uVar1 = *(undefined1 *)((int)local_410 + uVar12 + (int)puStack_430 * 0x100);
        *puVar14 = uVar1;
        puVar14[1] = uVar1;
        puVar14[2] = uVar1;
        puVar14[3] = uVar1;
        puVar14 = puVar14 + 4;
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < 0x100);
      iStack_420 = iStack_420 + ((int)((uVar9 & 0xffffffe0) + ((int)uVar9 >> 0x1f & 7U)) >> 3);
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    iVar10 = iVar10 + 1;
    if (9 < iVar10) {
      return iVar8;
    }
  } while( true );
}


