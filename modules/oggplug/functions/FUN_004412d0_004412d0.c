/* Module: oggplug.dll
   Function: FUN_004412d0
   Address: 004412d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004412d0(int *param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int local_4;
  
  piVar3 = param_1;
  iVar5 = DAT_004532c4;
  iVar10 = param_1[7];
  if (0xff < iVar10) {
    iVar10 = 0xff;
  }
  puVar7 = (undefined4 *)param_1[5];
  iVar9 = 0;
  param_1 = (int *)0x0;
  uVar4 = *puVar7;
  uVar8 = puVar7[1];
  local_4 = 0;
  if (iVar10 == 0) {
    return 0;
  }
  if (piVar3[0x53] == 0) {
    uVar4 = 0;
    uVar8 = 0;
    if (0 < iVar10) {
      puVar6 = (uint *)piVar3[4];
      do {
        if ((*puVar6 & 0xff) < 0xff) {
          iVar9 = iVar9 + 1;
          break;
        }
        iVar9 = iVar9 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar9 < iVar10);
    }
  }
  else if (0 < iVar10) {
    do {
      if (0x1000 < local_4) break;
      local_4 = local_4 + (*(uint *)(piVar3[4] + iVar9 * 4) & 0xff);
      uVar8 = puVar7[1];
      uVar4 = *puVar7;
      iVar9 = iVar9 + 1;
      puVar7 = puVar7 + 2;
    } while (iVar9 < iVar10);
  }
  uVar11 = CONCAT44(uVar8,uVar4);
  piVar1 = piVar3 + 10;
  *(undefined1 *)(piVar3 + 0xb) = 0;
  *(undefined1 *)((int)piVar3 + 0x2d) = 0;
  *piVar1 = iVar5;
  if ((*(uint *)piVar3[4] & 0x100) == 0) {
    *(undefined1 *)((int)piVar3 + 0x2d) = 1;
  }
  if (piVar3[0x53] == 0) {
    *(byte *)((int)piVar3 + 0x2d) = *(byte *)((int)piVar3 + 0x2d) | 2;
  }
  if ((piVar3[0x52] != 0) && (piVar3[7] == iVar9)) {
    *(byte *)((int)piVar3 + 0x2d) = *(byte *)((int)piVar3 + 0x2d) | 4;
  }
  piVar3[0x53] = 1;
  iVar10 = 6;
  do {
    *(char *)(iVar10 + (int)piVar1) = (char)uVar11;
    uVar11 = __allshr(8,(int)((ulonglong)uVar11 >> 0x20));
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0xe);
  iVar10 = piVar3[0x54];
  iVar5 = 0xe;
  do {
    *(char *)(iVar5 + (int)piVar1) = (char)iVar10;
    iVar10 = iVar10 >> 8;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x12);
  if (piVar3[0x55] == -1) {
    piVar3[0x55] = 0;
  }
  iVar10 = piVar3[0x55];
  iVar5 = 0x12;
  piVar3[0x55] = iVar10 + 1;
  do {
    *(char *)(iVar5 + (int)piVar1) = (char)iVar10;
    iVar10 = iVar10 >> 8;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x16);
  iVar10 = 0;
  *(undefined1 *)((int)piVar3 + 0x3e) = 0;
  *(undefined1 *)((int)piVar3 + 0x3f) = 0;
  *(undefined1 *)(piVar3 + 0x10) = 0;
  *(undefined1 *)((int)piVar3 + 0x41) = 0;
  *(char *)((int)piVar3 + 0x42) = (char)iVar9;
  if (0 < iVar9) {
    do {
      bVar2 = *(byte *)(piVar3[4] + iVar10 * 4);
      *(byte *)((int)piVar3 + iVar10 + 0x43) = bVar2;
      param_1 = (int *)((int)param_1 + (uint)bVar2);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  *param_2 = (int)piVar1;
  piVar3[0x51] = iVar9 + 0x1b;
  param_2[1] = iVar9 + 0x1b;
  iVar10 = *piVar3;
  iVar5 = piVar3[3];
  param_2[3] = (int)param_1;
  param_2[2] = iVar10 + iVar5;
  iVar10 = piVar3[7];
  piVar3[7] = iVar10 - iVar9;
  memmove((void *)piVar3[4],(void *)(piVar3[4] + iVar9 * 4),(iVar10 - iVar9) * 4);
  memmove((void *)piVar3[5],(void *)(piVar3[5] + iVar9 * 8),piVar3[7] << 3);
  piVar3[3] = piVar3[3] + (int)param_1;
  FUN_004414d0(param_2);
  return 1;
}


