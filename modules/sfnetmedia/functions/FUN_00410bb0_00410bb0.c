/* Module: sfnetmedia.dll
   Function: FUN_00410bb0
   Address: 00410bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00410bb0(int *param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  void *local_4;
  
  local_4 = (void *)0x0;
  uVar1 = FUN_00425310(&DAT_00441ad0,4,-1,-1,0x40000002);
  if (-1 < (int)uVar1) {
    pcVar3 = "SfNetMedia\\Providers";
    iVar2 = FUN_00401310();
    uVar1 = FUN_0041a9d0(&local_4,iVar2,(int)pcVar3);
    if (-1 < (int)uVar1) {
      uVar1 = FUN_00410860((int)local_4,param_1);
      FUN_0041ad70(local_4);
    }
  }
  return uVar1;
}


