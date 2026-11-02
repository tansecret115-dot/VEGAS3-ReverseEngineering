/* Module: sfs4rw.dll
   Function: FUN_0047af90
   Address: 0047af90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047af90(int *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  sVar1 = fwrite(param_2,1,param_3,(FILE *)param_1[0x17]);
  if (sVar1 != param_3) {
    FUN_00475ad0(param_1,"Write Error");
  }
  return;
}


