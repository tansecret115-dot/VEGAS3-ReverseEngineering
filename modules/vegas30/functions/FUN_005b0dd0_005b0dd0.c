/* Module: vegas30.exe
   Function: FUN_005b0dd0
   Address: 005b0dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005b0dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5)

{
  int iVar1;
  int *unaff_retaddr;
  undefined1 local_8 [4];
  undefined4 uStack_4;
  
  iVar1 = FUN_005b0b50(param_1,param_2,param_4,param_5,local_8,&param_5);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_5 + 0x48))(param_5,&param_2,&param_4);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*unaff_retaddr + 0xc))(unaff_retaddr,uStack_4,param_1);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


