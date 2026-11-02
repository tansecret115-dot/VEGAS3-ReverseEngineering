/* Module: vegas30.exe
   Function: FUN_004a0fa0
   Address: 004a0fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a0fa0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  FUN_004a0eb0(param_1);
  *(undefined4 *)(param_1 + 0xcc8) = DAT_00647e38;
  *(undefined4 *)(param_1 + 0xccc) = DAT_00647e3c;
  FUN_004ca990(param_1);
  FUN_00469280(param_1);
  iVar3 = *(int *)(param_1 + 0xb74);
  uVar1 = *(uint *)(param_1 + 0xb70);
  if ((iVar3 < 1) && (iVar3 < 0)) {
    iVar5 = 0;
    uVar6 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x604);
    iVar5 = iVar3;
    uVar6 = uVar1;
    if ((iVar2 <= iVar3) && ((iVar2 < iVar3 || (*(uint *)(param_1 + 0x600) < uVar1)))) {
      iVar5 = iVar2;
      uVar6 = *(uint *)(param_1 + 0x600);
    }
  }
  uVar4 = *(uint *)(param_1 + 0xb78) + uVar1;
  iVar3 = *(int *)(param_1 + 0xb7c) + iVar3 + (uint)CARRY4(*(uint *)(param_1 + 0xb78),uVar1);
  if ((iVar3 < 1) && (iVar3 < 0)) {
    iVar3 = 0;
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x604);
    if ((iVar2 <= iVar3) && ((iVar2 < iVar3 || (*(uint *)(param_1 + 0x600) < uVar4)))) {
      iVar3 = iVar2;
      uVar4 = *(uint *)(param_1 + 0x600);
    }
  }
  FUN_00453340(param_1,uVar6,iVar5,uVar4 - uVar6,(iVar3 - iVar5) - (uint)(uVar4 < uVar6),0);
  return;
}


