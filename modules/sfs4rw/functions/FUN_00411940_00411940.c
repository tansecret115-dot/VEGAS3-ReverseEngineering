/* Module: sfs4rw.dll
   Function: FUN_00411940
   Address: 00411940
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00411940(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
    return 1;
  }
  iVar4 = *(int *)(iVar3 + 0x18);
  if (iVar4 == 0) {
    uVar2 = FUN_00419400(iVar3);
    iVar3 = FUN_00414ef0(param_1,uVar2 & 0xffff);
    if (iVar3 == 0) {
      bVar1 = FUN_004153f0(param_1,(char *)(param_1 + 1));
      if (CONCAT31(extraout_var,bVar1) == 0) {
        iVar4 = 1;
        goto LAB_00411985;
      }
    }
    iVar4 = 0;
  }
LAB_00411985:
  if (*(int *)(*param_1 + 0x20) != 0) {
    iVar4 = 0;
  }
  return iVar4;
}


