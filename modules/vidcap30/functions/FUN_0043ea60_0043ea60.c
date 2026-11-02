/* Module: vidcap30.exe
   Function: FUN_0043ea60
   Address: 0043ea60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043ea60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_8 [4];
  int local_4;
  
  if (*(int *)(param_1 + 0xc4) == 0) {
    return 0;
  }
  FUN_0042efa0(DAT_005bb838,local_8);
  iVar1 = FUN_00434a00(param_1);
  if (iVar1 == 0) {
    switch(((*(uint *)(param_1 + 0xc4) - 1) + local_4) / *(uint *)(param_1 + 0xc4)) {
    case 1:
      uVar2 = 0;
      break;
    case 2:
      goto switchD_0043eaae_caseD_2;
    case 3:
    case 4:
      uVar2 = 2;
      break;
    default:
      uVar2 = 3;
    }
  }
  else {
switchD_0043eaae_caseD_2:
    uVar2 = 1;
  }
  iVar1 = param_1 + 0xd8;
  if ((*(byte *)(param_1 + 0x1ae8) & 1) == 0) {
    iVar1 = param_1 + 0xa48;
  }
  uVar2 = FUN_0042cad0(iVar1,uVar2,0);
  return uVar2;
}


