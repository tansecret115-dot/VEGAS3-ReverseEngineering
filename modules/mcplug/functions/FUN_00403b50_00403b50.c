/* Module: mcplug.dll
   Function: FUN_00403b50
   Address: 00403b50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00403bf7) */
/* WARNING: Removing unreachable block (ram,0x00403c01) */

undefined4
FUN_00403b50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6)

{
  char cVar1;
  undefined4 uVar2;
  short sVar3;
  ushort uVar4;
  HANDLE pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  
  if (*(HANDLE *)(param_1 + 0x24) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x24));
  }
  pvVar5 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 0x24) = pvVar5;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  *(int *)(param_1 + 0x28) = param_6;
  sVar3 = (*(int *)(param_6 + 0x90) != 0) + 1;
  iVar6 = *(int *)(param_6 + 0x8c);
  uVar4 = (ushort)*(undefined4 *)(param_6 + 0x94);
  *(ushort *)(param_1 + 0x3a) = uVar4;
  uVar4 = (uVar4 >> 3) * sVar3;
  *(ushort *)(param_1 + 0x38) = uVar4;
  *(short *)(param_1 + 0x2e) = sVar3;
  *(int *)(param_1 + 0x30) = iVar6;
  *(uint *)(param_1 + 0x34) = (uint)uVar4 * iVar6;
  *(undefined2 *)(param_1 + 0x2c) = 1;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  puVar10 = (undefined4 *)(param_1 + 0x40);
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)(param_1 + 0x40) = 0x20;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xc;
  uVar7 = 0xffffffff;
  pcVar9 = "MCMP";
  do {
    pcVar11 = pcVar9;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar11 + -uVar7;
  pcVar11 = (char *)(param_1 + 100);
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0xa0);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = 1;
  return 0;
}


