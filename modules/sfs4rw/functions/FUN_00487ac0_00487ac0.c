/* Module: sfs4rw.dll
   Function: FUN_00487ac0
   Address: 00487ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00487ac0(int param_1,int param_2,int param_3,int *param_4)

{
  FUN_0047d730(param_3,0,(int)param_4,0,*(int *)(param_1 + 0x109),*(uint *)(param_1 + 0x55));
  FUN_00487a60(param_4,*(int *)(param_1 + 0x109),*(int *)(param_1 + 0x55),
               *(int *)(param_2 + 0x1c) << 3);
  return;
}


