/* Module: mpgvout.001
   Function: FUN_10018eec
   Address: 10018eec
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_10018eec(int param_1,undefined8 *param_2,int param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  int local_10 [4];
  
  *(undefined4 *)(param_1 + 0x6b8 + *(int *)(param_1 + 0x618) * 0x28) = 0x20;
  *(undefined4 *)(param_1 + 0x6bc + *(int *)(param_1 + 0x618) * 0x28) =
       *(undefined4 *)(param_1 + 0x614);
  *(undefined4 *)(param_1 + 0x6c0 + *(int *)(param_1 + 0x614) * 0x28) =
       *(undefined4 *)(param_1 + 0x618);
  *(undefined4 *)(param_1 + 0x6c0 + *(int *)(param_1 + 0x618) * 0x28) = 0xffffffff;
  if (*(uint *)(param_1 + 0x540) < (param_7 & 0xf)) {
    *(uint *)(param_1 + 0x540) = param_7 & 0xf;
  }
  if ((param_7 & 0x100) == 0) {
    FUN_1002524c(param_1,(int *)(param_1 + 0x6c4 + *(int *)(param_1 + 0x618) * 0x28),
                 *(int *)(param_1 + 0x550),*(int *)(param_1 + 0x550),*(uint *)(param_1 + 0x554),
                 param_2,param_3,param_4,param_5,param_6,param_7,3);
  }
  else {
    *(undefined4 *)(param_1 + 0x6b8 + *(int *)(param_1 + 0x618) * 0x28) = 0x10;
  }
  *(undefined4 *)(param_1 + 0x610) = *(undefined4 *)(param_1 + 0x618);
  FUN_10017998(param_1,local_10,param_7);
  return;
}


