/* Module: vegas30.exe
   Function: FUN_005ba820
   Address: 005ba820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005ba820(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005b9fc0(param_1,param_2,0);
  if (param_3 != (int *)0x0) {
    iVar2 = 2 - (uint)(*(int *)(iVar1 + 0xbc) != 1);
    *param_3 = *(int *)(iVar1 + 0x80) * iVar2;
    param_3[1] = *(int *)(iVar1 + 0x84) * iVar2;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(iVar1 + 0xbc);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(iVar1 + 200);
  }
  FUN_005ba030(param_1,iVar1,0,1);
  return 0;
}


