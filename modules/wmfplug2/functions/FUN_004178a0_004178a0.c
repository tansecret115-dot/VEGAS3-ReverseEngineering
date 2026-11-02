/* Module: wmfplug2.dll
   Function: FUN_004178a0
   Address: 004178a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0041797a) */
/* WARNING: Removing unreachable block (ram,0x00417982) */

undefined4
FUN_004178a0(int param_1,undefined4 *param_2,uint param_3,int *param_4,undefined4 *param_5,
            uint param_6,undefined4 *param_7)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar4 = param_1;
  if (*(short *)(param_1 + 0x16) == 0) {
    puVar6 = (undefined4 *)(param_1 + 4);
    iVar1 = param_1 + 8;
    param_1 = 0x12;
    (*(code *)**(undefined4 **)*puVar6)((undefined4 *)*puVar6,iVar1,&param_1);
  }
  if (param_2 != (undefined4 *)0x0) {
    sVar2 = *(short *)(iVar4 + 8);
    if ((sVar2 == 3) || (sVar2 == 1)) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = *(ushort *)(iVar4 + 0x18) + 0x12;
    }
    if (uVar3 <= param_3) {
      if ((sVar2 == 3) || (sVar2 == 1)) {
        uVar3 = 0x10;
      }
      else {
        uVar3 = *(ushort *)(iVar4 + 0x18) + 0x12;
      }
      puVar6 = (undefined4 *)(iVar4 + 8);
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_2 = *puVar6;
        puVar6 = puVar6 + 1;
        param_2 = param_2 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
    }
  }
  if (param_4 != (int *)0x0) {
    if ((*(short *)(iVar4 + 8) == 3) || (*(short *)(iVar4 + 8) == 1)) {
      iVar4 = 0x10;
    }
    else {
      iVar4 = *(ushort *)(iVar4 + 0x18) + 0x12;
    }
    *param_4 = iVar4;
  }
  if ((param_5 != (undefined4 *)0x0) && (0x1f < param_6)) {
    puVar6 = param_5;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *param_5 = 0x20;
    param_5[1] = param_5[1] & 0xfffffffe;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0x20;
  }
  return 0;
}


