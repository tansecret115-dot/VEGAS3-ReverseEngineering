/* Module: vidcap30.exe
   Function: FUN_00460290
   Address: 00460290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00460290(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = DAT_005bb838;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  iVar5 = 0;
  uVar4 = 0;
  if ((*(int *)(param_1 + 0x2ac) == 0) && (*(int *)(param_1 + 0x2b0) == 0)) {
    uVar4 = 1;
    goto LAB_00460339;
  }
  if (*(int *)(param_1 + 0x2a8) == 0) goto LAB_00460339;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  iVar3 = lstrcmpA((LPCSTR)(param_1 + 0x30),*(LPCSTR *)(*(int *)(param_1 + 0x2c) + 0xc));
  if (iVar3 == 0) {
LAB_004602ff:
    iVar3 = lstrcmpA((LPCSTR)(param_1 + 0xb0),*(LPCSTR *)(*(int *)(param_1 + 0x2c) + 0x14));
    if (iVar3 != 0) {
      iVar5 = FUN_00443420(iVar2,*(undefined4 *)(param_1 + 0x2c),(LPCSTR)(param_1 + 0xb0));
    }
  }
  else {
    iVar5 = FUN_0044cbc0(iVar2,uVar1,(LPCSTR)(param_1 + 0x30));
    if ((-1 < iVar5) && (iVar5 != 0x3e3)) goto LAB_004602ff;
  }
  uVar4 = 1;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 1;
LAB_00460339:
  if ((*(int *)(param_1 + 0x2b0) != 0) && (*(int *)(*(int *)(param_1 + 0x2c) + 4) == DAT_005bb838))
  {
    FUN_004010d0();
  }
  if ((iVar5 < 0) || (iVar5 == 0x3e3)) {
    uVar4 = 0;
  }
  FUN_00404910(iVar5,0);
  return uVar4;
}


