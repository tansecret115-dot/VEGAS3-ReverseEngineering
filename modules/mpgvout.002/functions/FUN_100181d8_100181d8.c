/* Module: mpgvout.002
   Function: FUN_100181d8
   Address: 100181d8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100181d8(int param_1,undefined8 *param_2)

{
  int iVar1;
  int local_10 [4];
  
  *(undefined4 *)(param_1 + 0x6b8 + *(int *)(param_1 + 0x618) * 0x28) = 0x20;
  *(undefined4 *)(param_1 + 0x6bc + *(int *)(param_1 + 0x618) * 0x28) =
       *(undefined4 *)(param_1 + 0x614);
  *(undefined4 *)(param_1 + 0x6c0 + *(int *)(param_1 + 0x614) * 0x28) =
       *(undefined4 *)(param_1 + 0x618);
  *(undefined4 *)(param_1 + 0x6c0 + *(int *)(param_1 + 0x618) * 0x28) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x550);
  FUN_100251c0(param_1,(int *)(param_1 + 0x6c4 + *(int *)(param_1 + 0x618) * 0x28),iVar1,iVar1,
               *(uint *)(param_1 + 0x554),param_2,iVar1 * 4,*(uint *)(param_1 + 0x368),
               *(uint *)(param_1 + 0x36c),0x34524742,0,3);
  FUN_10017da8(param_1,local_10,0);
  return;
}


