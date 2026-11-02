/* Module: vegas30.exe
   Function: FUN_00533930
   Address: 00533930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00533930(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_30 [6];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  uVar1 = FUN_005ba4b0(param_1,0);
  iVar2 = FUN_005b9fc0(param_1,uVar1,1);
  iVar3 = FUN_005b9fc0(param_1,2,1);
  puVar5 = (undefined4 *)(iVar2 + 0x30);
  puVar6 = (undefined4 *)(iVar3 + 0x30);
  for (iVar4 = 0x34; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(iVar2 + 200) = 0;
  puVar5 = (undefined4 *)(param_2 + 0x878);
  puVar6 = (undefined4 *)(iVar2 + 0x40);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(iVar2 + 0xa8) = *(undefined4 *)(param_2 + 0x888);
  *(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(param_2 + 0x88c);
  *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(param_2 + 0x454);
  *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_2 + 0x458);
  uVar1 = _SfGetPixelType_4(param_2 + 0x450);
  *(undefined4 *)(iVar2 + 0xc4) = uVar1;
  puVar5 = local_30;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar4 = FUN_005e4190(*(undefined4 *)(param_2 + 8),0,local_30);
  if (-1 < iVar4) {
    *(undefined4 *)(iVar2 + 0xec) = local_18;
    *(undefined4 *)(iVar2 + 0xf8) = local_14;
    *(undefined4 *)(iVar2 + 0xf0) = local_10;
    *(undefined4 *)(iVar2 + 0xf4) = local_c;
    *(undefined4 *)(iVar2 + 0xb8) = local_8;
    *(uint *)(iVar2 + 0xb0) = (*(uint *)(iVar2 + 0xb0) ^ local_4) & 1 ^ *(uint *)(iVar2 + 0xb0);
  }
  if (*(int *)(param_2 + 0x904) != 0) {
    *(double *)(iVar2 + 0x58) =
         ((((double)*(int *)(iVar3 + 0x34) * *(double *)(iVar3 + 0x58)) /
          (double)*(int *)(iVar3 + 0x38)) * *(double *)(iVar2 + 0x58)) /
         (((double)*(int *)(iVar2 + 0x34) * *(double *)(iVar2 + 0x58)) /
         (double)*(int *)(iVar2 + 0x38));
  }
  FUN_005ba030(param_1,iVar2,1,1);
  FUN_005ba030(param_1,iVar3,1,0);
  FUN_00428f30(0,0);
  FUN_005ec620();
  FUN_005ed690();
  return 0;
}


