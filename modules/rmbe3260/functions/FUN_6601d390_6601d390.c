/* Module: rmbe3260.dll
   Function: FUN_6601d390
   Address: 6601d390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6601d390(int param_1)

{
  int iVar1;
  void *this;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_34 [3];
  int local_28 [3];
  char *local_1c [3];
  int local_10 [3];
  
  FUN_6605b650(local_10);
  FUN_6605ba50(local_1c,(undefined4 *)(param_1 + 0xd8),&DAT_6606c264);
  FUN_6604e8a0(local_10,&DAT_6606dbcc,local_1c[0]);
  uVar2 = FUN_6605bf70(local_10,'\\');
  if (-1 < (int)uVar2) {
    piVar3 = FUN_6605bf20(local_10,local_28,uVar2);
    FUN_6605b900(local_1c,piVar3);
    FUN_6605b770(local_28);
    piVar3 = FUN_6605be40(local_10,local_28,uVar2 + 1);
    FUN_6605b900(local_10,piVar3);
    FUN_6605b770(local_28);
  }
  this = (void *)(param_1 + 0xe4);
  iVar4 = FUN_6605bf70(this,'\\');
  if (-1 < iVar4) {
    iVar5 = FUN_6605bf70(this,'.');
    iVar1 = iVar4 + 1;
    piVar3 = local_10;
    if (iVar1 < iVar5) {
      puVar6 = FUN_6605be60(this,local_34,iVar1,(iVar5 - iVar4) - 1);
      piVar3 = FUN_6605ba00(local_28,puVar6,piVar3);
      FUN_6605b900(local_10,piVar3);
      FUN_6605b770(local_28);
      piVar3 = local_34;
    }
    else {
      puVar6 = FUN_6605be40(this,local_28,iVar1);
      piVar3 = FUN_6605ba00(local_34,puVar6,piVar3);
      FUN_6605b900(local_10,piVar3);
      FUN_6605b770(local_34);
      piVar3 = local_28;
    }
    FUN_6605b770(piVar3);
  }
  piVar3 = local_10;
  puVar6 = FUN_6605ba50(local_28,local_1c,&DAT_6606c264);
  piVar3 = FUN_6605ba00(local_34,puVar6,piVar3);
  FUN_6605b900((void *)(param_1 + 0x1e6),piVar3);
  FUN_6605b770(local_34);
  FUN_6605b770(local_28);
  FUN_6605b770((int *)local_1c);
  FUN_6605b770(local_10);
  return 0;
}


