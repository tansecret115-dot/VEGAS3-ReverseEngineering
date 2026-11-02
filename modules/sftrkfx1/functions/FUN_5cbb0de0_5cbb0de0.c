/* Module: sftrkfx1.dll
   Function: FUN_5cbb0de0
   Address: 5cbb0de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbb0de0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piStack_c4;
  undefined4 ***pppuStack_c0;
  int *piStack_bc;
  int **ppiStack_b8;
  int *piStack_b4;
  int ***pppiStack_b0;
  int *piStack_ac;
  int **ppiStack_a8;
  int *piStack_a4;
  int ***pppiStack_a0;
  int *piStack_9c;
  int **ppiStack_98;
  int *piStack_94;
  undefined4 ***pppuStack_90;
  int *piStack_8c;
  int **ppiStack_88;
  int *piStack_84;
  int ***pppiStack_80;
  int *piStack_7c;
  int **ppiStack_78;
  int *piStack_74;
  int ***pppiStack_70;
  int *piStack_6c;
  int **ppiStack_68;
  int *piStack_64;
  undefined1 ***pppuStack_60;
  int *piStack_5c;
  int **ppiStack_58;
  int *piStack_54;
  undefined1 **ppuStack_50;
  int *piStack_4c;
  int **ppiStack_48;
  int *piStack_44;
  undefined1 **ppuStack_40;
  int *piStack_3c;
  undefined1 *puStack_38;
  int *piStack_34;
  int **ppiStack_30;
  int *piStack_2c;
  undefined1 *puStack_28;
  int *piStack_24;
  int *piStack_20;
  undefined1 auStack_4 [4];
  
  iVar2 = param_2;
  piStack_20 = &param_2;
  piStack_24 = param_1;
  puVar1 = (undefined4 *)(param_2 + 0x30);
  puStack_28 = (undefined1 *)0x5cbb0dfc;
  (**(code **)(*param_1 + 0x5c))();
  puStack_28 = auStack_4;
  piStack_2c = param_1;
  ppiStack_30 = (int **)0x5cbb0e07;
  (**(code **)(*param_1 + 0x1c))();
  ppiStack_30 = &piStack_20;
  piStack_34 = param_1;
  puStack_38 = (undefined1 *)0x5cbb0e12;
  (**(code **)(*param_1 + 0x3c))();
  puStack_38 = &stack0xffffffe4;
  piStack_3c = param_1;
  ppuStack_40 = (undefined1 **)0x5cbb0e20;
  (**(code **)(*param_1 + 0x9c))();
  ppuStack_40 = &puStack_28;
  piStack_44 = param_1;
  ppiStack_48 = (int **)0x5cbb0e2b;
  (**(code **)(*param_1 + 0x7c))();
  ppiStack_48 = &piStack_34;
  piStack_4c = param_1;
  ppuStack_50 = (undefined1 **)0x5cbb0e39;
  (**(code **)(*param_1 + 0xbc))();
  log2((float10)(int)puStack_28);
  ppuStack_50 = (undefined1 **)0x5cbb0e70;
  uVar3 = ftol();
  *puVar1 = uVar3;
  *(int **)(iVar2 + 0x44) = piStack_3c;
  *(float *)(iVar2 + 0x34) = (float)(int)piStack_2c * (float)_DAT_5cc04238;
  *(undefined1 **)(iVar2 + 0x40) = puStack_38;
  *(float *)(iVar2 + 0x38) = (float)(int)ppuStack_40 * (float)_DAT_5cc04238;
  if (puStack_38 != (undefined1 *)0x2) {
    *(float *)(iVar2 + 0x38) = (float)(int)piStack_34;
  }
  ppuStack_50 = &puStack_28;
  piStack_54 = param_1;
  ppiStack_58 = (int **)0x5cbb0eb4;
  (**(code **)(*param_1 + 100))();
  ppiStack_58 = &piStack_34;
  piStack_5c = param_1;
  pppuStack_60 = (undefined1 ***)0x5cbb0ebf;
  (**(code **)(*param_1 + 0x24))();
  pppuStack_60 = &ppuStack_50;
  piStack_64 = param_1;
  ppiStack_68 = (int **)0x5cbb0eca;
  (**(code **)(*param_1 + 0x44))();
  ppiStack_68 = &piStack_4c;
  piStack_6c = param_1;
  pppiStack_70 = (int ***)0x5cbb0ed8;
  (**(code **)(*param_1 + 0xa4))();
  pppiStack_70 = &ppiStack_58;
  piStack_74 = param_1;
  ppiStack_78 = (int **)0x5cbb0ee6;
  (**(code **)(*param_1 + 0x84))();
  ppiStack_78 = &piStack_64;
  piStack_7c = param_1;
  pppiStack_80 = (int ***)0x5cbb0ef4;
  (**(code **)(*param_1 + 0xc4))();
  log2((float10)(int)ppiStack_58);
  pppiStack_80 = (int ***)0x5cbb0f25;
  uVar3 = ftol();
  *(undefined4 *)(iVar2 + 0x50) = uVar3;
  *(int **)(iVar2 + 100) = piStack_6c;
  *(float *)(iVar2 + 0x54) = (float)(int)piStack_5c * (float)_DAT_5cc04238;
  *(int ***)(iVar2 + 0x60) = ppiStack_68;
  *(float *)(iVar2 + 0x58) = (float)(int)pppiStack_70 * (float)_DAT_5cc04238;
  if (ppiStack_68 != (int **)0x2) {
    *(float *)(iVar2 + 0x58) = (float)(int)piStack_64;
  }
  pppiStack_80 = &ppiStack_58;
  piStack_84 = param_1;
  ppiStack_88 = (int **)0x5cbb0f69;
  (**(code **)(*param_1 + 0x6c))();
  ppiStack_88 = &piStack_64;
  piStack_8c = param_1;
  pppuStack_90 = (undefined4 ***)0x5cbb0f74;
  (**(code **)(*param_1 + 0x2c))();
  pppuStack_90 = &pppiStack_80;
  piStack_94 = param_1;
  ppiStack_98 = (int **)0x5cbb0f7f;
  (**(code **)(*param_1 + 0x4c))();
  ppiStack_98 = &piStack_7c;
  piStack_9c = param_1;
  pppiStack_a0 = (int ***)0x5cbb0f8d;
  (**(code **)(*param_1 + 0xac))();
  pppiStack_a0 = &ppiStack_88;
  piStack_a4 = param_1;
  ppiStack_a8 = (int **)0x5cbb0f9b;
  (**(code **)(*param_1 + 0x8c))();
  ppiStack_a8 = &piStack_94;
  piStack_ac = param_1;
  pppiStack_b0 = (int ***)0x5cbb0fa9;
  (**(code **)(*param_1 + 0xcc))();
  log2((float10)(int)ppiStack_88);
  pppiStack_b0 = (int ***)0x5cbb0fda;
  uVar3 = ftol();
  *(undefined4 *)(iVar2 + 0x70) = uVar3;
  *(int **)(iVar2 + 0x84) = piStack_9c;
  *(float *)(iVar2 + 0x74) = (float)(int)piStack_8c * (float)_DAT_5cc04238;
  *(int ***)(iVar2 + 0x80) = ppiStack_98;
  *(float *)(iVar2 + 0x78) = (float)(int)pppiStack_a0 * (float)_DAT_5cc04238;
  if (ppiStack_98 != (int **)0x2) {
    *(float *)(iVar2 + 0x78) = (float)(int)piStack_94;
  }
  pppiStack_b0 = &ppiStack_88;
  piStack_b4 = param_1;
  ppiStack_b8 = (int **)0x5cbb101e;
  (**(code **)(*param_1 + 0x74))();
  ppiStack_b8 = &piStack_94;
  piStack_bc = param_1;
  pppuStack_c0 = (undefined4 ***)0x5cbb1029;
  (**(code **)(*param_1 + 0x34))();
  pppuStack_c0 = &pppiStack_b0;
  piStack_c4 = param_1;
  (**(code **)(*param_1 + 0x54))();
  (**(code **)(*param_1 + 0xb4))();
  (**(code **)(*param_1 + 0x94))(param_1);
  (**(code **)(*param_1 + 0xd4))(param_1,&piStack_c4);
  log2((float10)(int)ppiStack_b8);
  uVar3 = ftol();
  *(undefined4 *)(iVar2 + 0x90) = uVar3;
  *(int **)(iVar2 + 0xa4) = param_1;
  *(float *)(iVar2 + 0x94) = (float)(int)piStack_bc * (float)_DAT_5cc04238;
  *(int ***)(iVar2 + 0xa0) = &piStack_ac;
  *(float *)(iVar2 + 0x98) = (float)(int)&ppiStack_b8 * (float)_DAT_5cc04238;
  if (&piStack_ac != (int **)0x2) {
    *(float *)(iVar2 + 0x98) = (float)(int)piStack_c4;
  }
  return;
}


