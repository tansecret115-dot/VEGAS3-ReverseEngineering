/* Module: qt4plug.dll
   Function: FUN_5f51a480
   Address: 5f51a480
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong __fastcall FUN_5f51a480(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uStack_18;
  uint uStack_14;
  uint local_10;
  int iStack_c;
  int iStack_4;
  
  (**(code **)(*param_1 + 0x38))(param_1,&local_10);
  lVar7 = __allmul(param_1[0x4c],param_1[0x4d],10000000,0);
  uVar8 = __alldiv((uint)lVar7,(uint)((ulonglong)lVar7 >> 0x20),uStack_18,uStack_14);
  uVar4 = (uint)uVar8;
  iVar2 = (int)uVar4 >> 0x1f;
  iVar5 = 0;
  if (0 < param_1[0x48]) {
    iVar3 = 0;
    do {
      if (((iVar5 != iStack_4) && (*(int *)(param_1[0xd3] + iVar3) == 1)) &&
         (iVar1 = *(int *)(param_1[0xd3] + iVar3 + 0x28), iVar1 != 0)) {
        iVar1 = FUN_5f51be50(iVar1,(int *)&local_10,8,2);
        if (-1 < iVar1) {
          bVar6 = uVar4 < local_10;
          uVar4 = uVar4 - local_10;
          iVar2 = (iVar2 - iStack_c) - (uint)bVar6;
        }
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x30;
    } while (iVar5 < param_1[0x48]);
    return CONCAT44(iVar2,uVar4);
  }
  return (longlong)(int)uVar4;
}


