/* Module: qt4plug.dll
   Function: FUN_5f520530
   Address: 5f520530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f520530(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  piVar1 = (int *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_5f5780f0();
  }
  *piVar1 = 0;
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 0x424), iVar2 != 0)) {
    iVar2 = *(int *)(iVar2 + 0x3e);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc) == 0)) {
      FUN_5f5780d0();
    }
    else {
      iVar3 = FUN_5f57af10();
      *piVar1 = iVar3;
      if (iVar3 != 0) {
        FUN_5f5781f0();
        uVar5 = *(uint *)(iVar2 + 0x10);
        puVar6 = (undefined4 *)(iVar2 + 0x14);
        puVar7 = *(undefined4 **)*piVar1;
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        FUN_5f578230();
        return 0;
      }
    }
  }
  return 0;
}


