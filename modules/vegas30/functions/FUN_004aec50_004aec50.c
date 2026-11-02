/* Module: vegas30.exe
   Function: FUN_004aec50
   Address: 004aec50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004aec50(int param_1,int param_2)

{
  SHORT SVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    return 0x7f88;
  }
  SVar1 = GetKeyState(0x10);
  uVar2 = FUN_004aac00(param_1);
  FUN_004abbe0(param_1,param_2,uVar2);
  uVar5 = *(undefined4 *)(param_2 + 100);
  lVar6 = *(longlong *)(param_2 + 0x50);
  if (-1 < SVar1) {
    uVar4 = 0;
    if ((*(byte *)(param_2 + 0x4c) & 2) != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0xce4);
    }
    lVar6 = FUN_00497110(param_1,uVar4,*(undefined4 *)(param_2 + 0x50),
                         *(undefined4 *)(param_2 + 0x54),*(undefined4 *)(param_2 + 0x90),
                         *(undefined4 *)(param_2 + 0x94));
  }
  if (((int)((ulonglong)lVar6 >> 0x20) < 1) && (lVar6 < 0)) {
    lVar6 = 0;
  }
  if (*(int *)(param_2 + 0x6c) == 10) {
    iVar3 = FUN_004ad320(param_1,param_2,lVar6);
LAB_004aed39:
    if (iVar3 != 0) {
      FUN_004abc80(param_1,param_2,uVar5,lVar6,uVar2);
      uVar5 = 0x10;
      goto LAB_004aed5b;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x170);
    if (iVar3 == 0) {
      iVar3 = FUN_004acba0(param_1,param_2,uVar5,lVar6);
      goto LAB_004aed39;
    }
    if (iVar3 == 1) {
      iVar3 = FUN_004ac800(param_1,param_2,uVar5,lVar6);
      goto LAB_004aed39;
    }
    if (iVar3 == 2) {
      iVar3 = FUN_004ad050(param_1,param_2,uVar5,lVar6);
      goto LAB_004aed39;
    }
  }
  uVar5 = 0x7f88;
LAB_004aed5b:
  FUN_004aac70(param_1,uVar2);
  return uVar5;
}


