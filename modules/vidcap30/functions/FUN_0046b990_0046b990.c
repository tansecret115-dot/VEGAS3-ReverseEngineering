/* Module: vidcap30.exe
   Function: FUN_0046b990
   Address: 0046b990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0046b990(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_58 [8];
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  int local_14;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  puVar4 = local_58;
  for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar2 = *(int *)(param_1 + 0x180);
  iVar1 = *(int *)(param_1 + 0x184);
  uVar5 = __allmul(iVar2,iVar2 >> 0x1f,960000,0);
  local_38 = __alldiv(uVar5,iVar1,iVar1 >> 0x1f);
  uVar5 = __allmul(iVar1,iVar1 >> 0x1f,10000000,0);
  local_30 = __alldiv(uVar5,iVar2,iVar2 >> 0x1f);
  local_28 = 0x28;
  local_18 = 0x64737664;
  local_20 = (-(uint)(*(int *)(param_1 + 0x128) != 0) & 0x60) + 0x1e0;
  local_1a = 0x18;
  local_14 = (-(uint)(*(int *)(param_1 + 0x128) != 0) & 24000) + 120000;
  local_1c = 1;
  local_24 = 0x2d0;
  FUN_0057aea0(&DAT_005a35f8);
  FUN_0057af70(&DAT_005a2ba8);
  iVar2 = FUN_0057af30(local_58,0x58);
  uVar3 = 0x8007000e;
  if (iVar2 != 0) {
    uVar3 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return uVar3;
}


