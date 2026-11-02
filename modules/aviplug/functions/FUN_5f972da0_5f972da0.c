/* Module: aviplug.dll
   Function: FUN_5f972da0
   Address: 5f972da0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_5f972da0(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  
  uVar2 = DAT_5f9dc478;
  iVar5 = 0x1e;
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    iVar3 = 8;
    puVar4 = (undefined8 *)((int)&DAT_5f9dc480 + (uVar1 & 0x100));
    do {
      uVar6 = pmaddwd(*param_1,*puVar4);
      uVar7 = pmaddwd(param_1[1],puVar4[1]);
      uVar8 = pmaddwd(param_1[2],puVar4[2]);
      iVar10 = (int)uVar2;
      iVar11 = (int)((ulonglong)uVar2 >> 0x20);
      uVar9 = pmaddwd(param_1[3],puVar4[3]);
      uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20) + iVar11 >> 0x12,(int)uVar6 + iVar10 >> 0x12)
      ;
      uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20) + iVar11 >> 0x12,(int)uVar7 + iVar10 >> 0x12)
      ;
      *param_1 = uVar6;
      packssdw(uVar6,uVar7);
      param_1[1] = uVar7;
      uVar6 = CONCAT44((int)((ulonglong)uVar8 >> 0x20) + iVar11 >> 0x12,(int)uVar8 + iVar10 >> 0x12)
      ;
      uVar7 = CONCAT44((int)((ulonglong)uVar9 >> 0x20) + iVar11 >> 0x12,(int)uVar9 + iVar10 >> 0x12)
      ;
      param_1[2] = uVar6;
      packssdw(uVar6,uVar7);
      param_1[3] = uVar7;
      param_1 = param_1 + 4;
      puVar4 = puVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return 0;
}


