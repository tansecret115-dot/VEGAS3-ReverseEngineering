/* Module: sfcdi.dll
   Function: FUN_5bf42ec0
   Address: 5bf42ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf42ec0(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = param_1;
  pcVar1 = (char *)((int)param_1 + 0xe7a);
  uVar2 = param_1[7];
  iVar5 = *(int *)(*(int *)*param_1 + 0x34c);
  param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
  param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),param_1._0_2_);
  param_1 = (undefined4 *)CONCAT13((char)uVar2,(uint3)param_1);
  *(undefined1 *)(puVar3 + 0x3b) = 0x22;
  *(undefined4 *)((int)puVar3 + 0xee) = uVar2;
  *(undefined4 **)((int)puVar3 + 0xf2) = param_1;
  *(int *)((int)puVar3 + 0xf6) = *(int *)(iVar5 + 0x14) << 0xb;
  iVar4 = *(int *)(iVar5 + 0x14) << 0xb;
  param_1._0_2_ = CONCAT11((char)((uint)iVar4 >> 0x10),(char)((uint)iVar4 >> 0x18));
  param_1._0_3_ = CONCAT12((char)((uint)iVar4 >> 8),param_1._0_2_);
  param_1 = (undefined4 *)(uint)(uint3)param_1;
  *(undefined4 **)((int)puVar3 + 0xfa) = param_1;
  FUN_5bf41b20(pcVar1,(char *)((int)puVar3 + 0xfe));
  *(undefined1 *)((int)puVar3 + 0x105) = 2;
  puVar3[0x42] = 0x1000001;
  *(undefined1 *)(puVar3 + 0x43) = 1;
  if (puVar3[3] == 2) {
    *(undefined1 *)(puVar3 + 0x23b) = 0x22;
    *(int *)((int)puVar3 + 0x8ee) = *(int *)(iVar5 + 0x14) + puVar3[7];
    iVar4 = *(int *)(iVar5 + 0x14) + puVar3[7];
    param_1._0_2_ = CONCAT11((char)((uint)iVar4 >> 0x10),(char)((uint)iVar4 >> 0x18));
    param_1._0_3_ = CONCAT12((char)((uint)iVar4 >> 8),param_1._0_2_);
    param_1 = (undefined4 *)CONCAT13((char)iVar4,(uint3)param_1);
    *(undefined4 **)((int)puVar3 + 0x8f2) = param_1;
    *(int *)((int)puVar3 + 0x8f6) = *(int *)(iVar5 + 0x1c) << 0xb;
    iVar5 = *(int *)(iVar5 + 0x1c) << 0xb;
    param_1._0_2_ = CONCAT11((char)((uint)iVar5 >> 0x10),(char)((uint)iVar5 >> 0x18));
    param_1._0_3_ = CONCAT12((char)((uint)iVar5 >> 8),param_1._0_2_);
    param_1 = (undefined4 *)(uint)(uint3)param_1;
    *(undefined4 **)((int)puVar3 + 0x8fa) = param_1;
    FUN_5bf41b20(pcVar1,(char *)((int)puVar3 + 0x8fe));
    *(undefined1 *)((int)puVar3 + 0x905) = 2;
    puVar3[0x242] = 0x1000001;
    *(undefined1 *)(puVar3 + 0x243) = 1;
  }
  return 0;
}


