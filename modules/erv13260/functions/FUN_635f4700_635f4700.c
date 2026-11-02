/* Module: erv13260.dll
   Function: FUN_635f4700
   Address: 635f4700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_635f4700(uint *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  void *pvVar4;
  int iVar5;
  
  puVar3 = malloc(0x23db);
  *param_2 = (int)puVar3;
  *(uint *)((int)puVar3 + 0x23cb) = *param_1;
  *(uint *)((int)puVar3 + 0x23cf) = param_1[1];
  *(uint *)((int)puVar3 + 0x23d3) = param_1[2];
  *(uint *)((int)puVar3 + 0x23d7) = param_1[3];
  pvVar4 = malloc(0x8c1c);
  puVar3[0xb] = (uint)pvVar4;
  if (pvVar4 == (void *)0x0) {
    return 4;
  }
  if (*param_3 == 0) {
    pvVar4 = malloc((param_1[1] * *param_1 * 3 & 0x3fffffff) << 1);
    *param_3 = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
      return 4;
    }
  }
  uVar1 = *param_1;
  if ((((uVar1 != 0) && ((uVar1 & 0xf) == 0)) && (param_1[1] != 0)) && ((param_1[1] & 0xf) == 0)) {
    puVar3[2] = uVar1 >> 1;
    *puVar3 = *param_1 >> 4;
    puVar3[1] = param_1[1] >> 4;
    uVar1 = *param_1;
    uVar2 = param_1[1];
    puVar3[3] = uVar1 * uVar2;
    iVar5 = FUN_635f6ef0((undefined4 *)((int)puVar3 + 0x1cc7),uVar1 * uVar2);
    if (iVar5 != 0) {
      return 4;
    }
    FUN_635f6c20((undefined4 *)((int)puVar3 + 0x1d83));
    FUN_635f6ce0((int *)(puVar3 + 5),param_1);
    FUN_635f6da0((undefined4 *)((int)puVar3 + 0x5a));
    FUN_635f6e30(puVar3 + 0x73e,(int *)param_1);
    FUN_635f49e0(1,(byte *)(puVar3 + 5),*param_2);
    FUN_635f49e0(2,(byte *)((int)puVar3 + 0x1d83),*param_2);
    DAT_63623344 = puVar3[0x723] << 1;
    _DAT_63623354 = puVar3[0x723] >> 1;
    DAT_63606d0c = 1;
    DAT_6362334c = 0;
    FUN_635fbab0((int)puVar3);
    DAT_63606d24 = 0;
    FUN_635fe2e0();
  }
  return 1;
}


