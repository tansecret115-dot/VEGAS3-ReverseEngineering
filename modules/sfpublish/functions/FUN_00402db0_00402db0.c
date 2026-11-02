/* Module: sfpublish.dll
   Function: FUN_00402db0
   Address: 00402db0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402db0(int param_1,LPWSTR param_2,uint *param_3,LPWSTR param_4,uint *param_5)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  LPCSTR pCVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_4;
  
  uVar1 = 0x8004e01b;
  local_4 = 0x8004e01b;
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 0x14) < 0) {
      return 0x8004e0ae;
    }
    this = *(void **)(*(int *)(*(int *)(param_1 + 0x10) + 8) + *(int *)(param_1 + 0x14) * 4);
    iVar2 = FUN_00411650((int)this);
    if (0 < iVar2) {
      local_4 = 0;
      iVar2 = *(int *)((int)this + 0x30);
      pCVar3 = (LPCSTR)FUN_004116d0(this,iVar2);
      iVar4 = lstrlenA(pCVar3);
      uVar5 = iVar4 + 1;
      pCVar3 = (LPCSTR)FUN_004117d0(this,iVar2);
      iVar4 = lstrlenA(pCVar3);
      puVar7 = &local_4;
      uVar6 = iVar4 + 1;
      pCVar3 = (LPCSTR)FUN_004116d0(this,iVar2);
      FUN_004043c0(param_2,param_3,pCVar3,uVar5,puVar7);
      puVar7 = &local_4;
      pCVar3 = (LPCSTR)FUN_004117d0(this,iVar2);
      FUN_004043c0(param_4,param_5,pCVar3,uVar6,puVar7);
      return local_4;
    }
    uVar1 = 0x8004e0ad;
  }
  return uVar1;
}


