/* Module: vegas30.exe
   Function: FUN_00553480
   Address: 00553480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00553480(undefined4 param_1,int *param_2)

{
  undefined4 local_4;
  
  local_4 = 0;
  if ((param_2 == (int *)0x0) && (param_2 = (int *)FUN_00553430(param_1), param_2 == (int *)0x0)) {
    return local_4;
  }
  (**(code **)(*param_2 + 0xc))(param_2,&DAT_0060ea38,&local_4);
  return local_4;
}


