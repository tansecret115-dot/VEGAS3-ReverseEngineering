/* Module: sfpublish.dll
   Function: FUN_004130a0
   Address: 004130a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004130a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  void *local_4;
  
  uVar1 = FUN_0041f050(&DAT_004419e8,4,-1,-1,0x40000002);
  if (-1 < (int)uVar1) {
    pcVar3 = "sfpublish\\providers";
    local_4 = (void *)0x0;
    iVar2 = FUN_00401310();
    uVar1 = FUN_0041fd60(&local_4,iVar2,(int)pcVar3);
    if (-1 < (int)uVar1) {
      uVar1 = FUN_00412b60((int)local_4,param_1);
      if (-1 < (int)uVar1) {
        uVar1 = FUN_00412be0((int)local_4);
      }
      FUN_00420100(local_4);
    }
  }
  return uVar1;
}


