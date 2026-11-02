/* Module: sfcd.cdd
   Function: FUN_0041c260
   Address: 0041c260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c260(HSFCD__ *param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined1 *)param_2 = 5;
  *(undefined1 *)((int)param_2 + 1) = 0x32;
  iVar1 = FUN_00419950(param_1,(undefined4 *)0x0,param_2,0x34);
  if (iVar1 != 0) {
    *(undefined1 *)param_2 = 5;
    *(undefined1 *)((int)param_2 + 1) = 0x36;
    FUN_00419950(param_1,(undefined4 *)0x0,param_2,0x38);
  }
  return;
}


