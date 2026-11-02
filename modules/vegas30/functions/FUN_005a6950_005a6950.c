/* Module: vegas30.exe
   Function: FUN_005a6950
   Address: 005a6950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005a6950(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  double *unaff_retaddr;
  undefined1 local_10 [8];
  int local_8 [2];
  
  uVar2 = *param_1;
  iVar3 = (*(code *)param_1[2])();
  iVar1 = local_8[0] * 0x10 + iVar3;
  unaff_retaddr[1] = (double)*(float *)(local_8[0] * 0x10 + iVar3);
  unaff_retaddr[2] = (double)*(float *)(iVar1 + 4);
  unaff_retaddr[3] = (double)*(float *)(iVar1 + 8);
  *(undefined4 *)(unaff_retaddr + 4) = uVar2;
  *(undefined4 *)((int)unaff_retaddr + 0x24) = param_3;
  *unaff_retaddr = (double)CONCAT44(local_10,local_8);
  return 0;
}


