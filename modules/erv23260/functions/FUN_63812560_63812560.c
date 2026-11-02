/* Module: erv23260.dll
   Function: FUN_63812560
   Address: 63812560
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63812560(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  
  FUN_638123c0(param_1,(undefined4 *)((int)param_1 + 0x348),2);
  uVar3 = *(uint *)((int)param_1 + 0x14);
  *(undefined4 *)((int)param_1 + 0x510) = 3;
  uVar2 = 0;
  if (uVar3 * *(int *)((int)param_1 + 0x18) != 0) {
    do {
      uVar1 = uVar2 + 1;
      bVar4 = uVar1 % uVar3 != 0;
      if (bVar4) {
        iVar5 = *(int *)((int)param_1 + 0x510);
      }
      else {
        iVar5 = *(int *)((int)param_1 + 0x510);
      }
      FUN_63812290(param_1,iVar5,uVar2,bVar4,1);
      uVar3 = *(uint *)((int)param_1 + 0x14);
      uVar2 = uVar1;
    } while (uVar1 < uVar3 * *(int *)((int)param_1 + 0x18));
  }
  FUN_63812700(param_1,*(int *)((int)param_1 + 0x510));
  uVar3 = *(uint *)((int)param_1 + 0x14);
  *(undefined4 *)((int)param_1 + 0x514) = 4;
  uVar2 = 0;
  if (uVar3 * *(int *)((int)param_1 + 0x18) != 0) {
    do {
      uVar1 = uVar2 + 1;
      bVar4 = uVar1 % uVar3 != 0;
      if (bVar4) {
        iVar5 = *(int *)((int)param_1 + 0x514);
      }
      else {
        iVar5 = *(int *)((int)param_1 + 0x514);
      }
      FUN_63812290(param_1,iVar5,uVar2,bVar4,1);
      uVar3 = *(uint *)((int)param_1 + 0x14);
      uVar2 = uVar1;
    } while (uVar1 < uVar3 * *(int *)((int)param_1 + 0x18));
  }
  FUN_63812700(param_1,*(int *)((int)param_1 + 0x514));
  uVar3 = *(uint *)((int)param_1 + 0x14);
  *(undefined4 *)((int)param_1 + 0x51c) = 5;
  uVar2 = 0;
  if (uVar3 * *(int *)((int)param_1 + 0x18) != 0) {
    do {
      uVar1 = uVar2 + 1;
      bVar4 = uVar1 % uVar3 != 0;
      if (bVar4) {
        iVar5 = *(int *)((int)param_1 + 0x51c);
      }
      else {
        iVar5 = *(int *)((int)param_1 + 0x51c);
      }
      FUN_63812290(param_1,iVar5,uVar2,bVar4,1);
      uVar3 = *(uint *)((int)param_1 + 0x14);
      uVar2 = uVar1;
    } while (uVar1 < uVar3 * *(int *)((int)param_1 + 0x18));
  }
  FUN_63812700(param_1,*(int *)((int)param_1 + 0x51c));
  uVar3 = *(uint *)((int)param_1 + 0x14);
  *(undefined4 *)((int)param_1 + 0x518) = 6;
  uVar2 = 0;
  if (uVar3 * *(int *)((int)param_1 + 0x18) != 0) {
    do {
      uVar1 = uVar2 + 1;
      bVar4 = uVar1 % uVar3 != 0;
      if (bVar4) {
        iVar5 = *(int *)((int)param_1 + 0x518);
      }
      else {
        iVar5 = *(int *)((int)param_1 + 0x518);
      }
      FUN_63812290(param_1,iVar5,uVar2,bVar4,1);
      uVar3 = *(uint *)((int)param_1 + 0x14);
      uVar2 = uVar1;
    } while (uVar1 < uVar3 * *(int *)((int)param_1 + 0x18));
  }
  FUN_63812700(param_1,*(int *)((int)param_1 + 0x518));
  return;
}


