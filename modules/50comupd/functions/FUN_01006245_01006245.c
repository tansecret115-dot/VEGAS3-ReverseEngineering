/* Module: 50comupd.exe
   Function: FUN_01006245
   Address: 01006245
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01006245(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  puVar1 = param_1;
  puVar5 = (undefined4 *)param_1[0x1d];
  if (puVar5 == (undefined4 *)0x0) {
LAB_01006304:
    puVar5 = puVar1 + 0x1ef;
    puVar1[0x1f0] = puVar1 + 0x2d;
    puVar1[500] = puVar1[0x23];
    *(undefined2 *)(puVar1 + 0x1f5) = *(undefined2 *)((int)puVar1 + 0x7e);
    *(undefined2 *)((int)puVar1 + 0x7d6) = *(undefined2 *)(puVar1 + 0x20);
    *(undefined2 *)(puVar1 + 0x1f6) = *(undefined2 *)((int)puVar1 + 0x82);
    puVar1[499] = puVar1[0xe];
    *puVar5 = 0;
    *(undefined2 *)((int)puVar1 + 0x7de) = *(undefined2 *)(puVar1 + 0x1f);
    if ((*(ushort *)(puVar1 + 0x1f6) & 0x40) != 0) {
      *puVar5 = 1;
      *(ushort *)(puVar1 + 0x1f6) = *(ushort *)(puVar1 + 0x1f6) & 0xffbf;
    }
    iVar2 = (*(code *)puVar1[9])(3,puVar5);
    puVar1[0x23] = 0xffffffff;
    if (iVar2 == -1) {
      uVar6 = 0xb;
    }
    else {
      if (iVar2 != 0) {
        return 1;
      }
      uVar6 = 8;
    }
    FUN_01006dcb((undefined4 *)*puVar1,uVar6,0);
    return 0;
  }
  uVar4 = param_1[0x1e];
  if (uVar4 < (uint)param_1[0xc]) {
    param_1[0x24] = 0xffff;
  }
  iVar2 = FUN_01006605(param_1,(uint)*(ushort *)(param_1 + 0x1f));
  while (iVar2 != 0) {
    if (uVar4 < (uint)*(ushort *)(param_1[0x12] + 6) + param_1[0xc]) goto LAB_01006293;
    iVar2 = FUN_01006397(param_1);
  }
  goto LAB_010062e2;
  while( true ) {
    uVar4 = uVar4 + (int)puVar5;
    puVar5 = (undefined4 *)((int)param_1 - (int)puVar5);
    if ((puVar5 != (undefined4 *)0x0) && (iVar2 = FUN_01006397(puVar1), iVar2 == 0)) break;
LAB_01006293:
    param_1 = puVar5;
    if (param_1 == (undefined4 *)0x0) goto LAB_01006304;
    puVar5 = (undefined4 *)((uint)*(ushort *)(puVar1[0x12] + 6) - (uVar4 - puVar1[0xc]));
    if (param_1 < puVar5) {
      puVar5 = param_1;
    }
    puVar3 = (undefined4 *)
             (*(code *)puVar1[5])(puVar1[0x23],(uVar4 - puVar1[0xc]) + puVar1[0x10],puVar5);
    if (puVar5 != puVar3) {
      FUN_01006dcb((undefined4 *)*puVar1,8,0);
      break;
    }
  }
LAB_010062e2:
  if (puVar1[0x23] != -1) {
    (*(code *)puVar1[6])(puVar1[0x23]);
    puVar1[0x23] = 0xffffffff;
  }
  return 0;
}


