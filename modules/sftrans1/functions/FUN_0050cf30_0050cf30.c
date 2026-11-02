/* Module: sftrans1.dll
   Function: FUN_0050cf30
   Address: 0050cf30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0050cf30(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  HGLOBAL hMem;
  LPVOID pvVar7;
  undefined4 *puVar8;
  
  if (param_2 == 0) {
    return;
  }
  *(int *)(param_1 + 4) = param_2;
  piVar2 = (int *)FUN_004db920();
  piVar3 = (int *)FUN_004db310();
  if (piVar3 == (int *)0x0) {
    return;
  }
  if (piVar2 == (int *)0x0) {
    if (piVar3[4] == 0) {
      if (((piVar3[8] == 0) && (uVar1 = *(ushort *)((int)piVar3 + 0xe), uVar1 != 0)) && (uVar1 < 9))
      {
        piVar2 = (int *)(*piVar3 + (1 << ((byte)uVar1 & 0x1f)) * 4 + (int)piVar3);
        goto LAB_0050cfa7;
      }
    }
    else if (piVar3[4] == 3) {
      piVar2 = piVar3 + 0xd;
      goto LAB_0050cfa7;
    }
    piVar2 = (int *)(*piVar3 + piVar3[8] * 4 + (int)piVar3);
  }
LAB_0050cfa7:
  puVar8 = &param_2;
  *(int **)(param_1 + 8) = piVar2;
  uVar4 = FUN_004ddb90(piVar3);
  uVar5 = FUN_004dde20(uVar4,puVar8);
  *(uint *)(param_1 + 0x28) = uVar5 >> 3;
  iVar6 = FUN_004db930();
  if (iVar6 == 0) {
    uVar5 = (uint)*(ushort *)((int)piVar3 + 0xe) * piVar3[1] + 0x1f;
    iVar6 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
  }
  *(int *)(param_1 + 0x10) = iVar6;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (piVar3[2] + -1) * iVar6;
  *(int *)(param_1 + 0x10) = -iVar6;
  if (param_3 != 0) {
    *(int *)(param_1 + 8) =
         *(int *)(param_1 + 8) + *(int *)(param_3 + 0x10) * -iVar6 + *(int *)(param_3 + 8) * 4;
  }
  hMem = GlobalAlloc(0,piVar3[1] << 2);
  pvVar7 = GlobalLock(hMem);
  *(LPVOID *)(param_1 + 0x1c) = pvVar7;
  if (pvVar7 == (LPVOID)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    iVar6 = piVar3[1];
    uVar5 = 0;
    *(int *)(param_1 + 0x20) = iVar6;
    if (iVar6 != 0) {
      do {
        uVar5 = uVar5 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + -4 + uVar5 * 4) = 6;
      } while (uVar5 < *(uint *)(param_1 + 0x20));
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


