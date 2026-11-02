/* Module: vidcap30.exe
   Function: FUN_0044f970
   Address: 0044f970
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044f970(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  
  uVar1 = DAT_005bb838;
  uVar2 = FUN_0044c6c0(param_1);
  iVar3 = FUN_0044c620(param_1);
  iVar5 = 1;
  while ((iVar3 = iVar3 + -1, -1 < iVar3 && (bVar6 = iVar5 != 0, iVar5 = 0, bVar6))) {
    uVar4 = FUN_0044c5c0(param_1,iVar3);
    iVar5 = FUN_0044fa10(uVar4,param_2,param_3);
  }
  iVar3 = FUN_00443780(uVar2);
  if (iVar3 == 0) {
    FUN_00443640(uVar1,uVar2,0);
  }
  return iVar5;
}


