/* Module: sfs4rw.dll
   Function: FUN_004463c0
   Address: 004463c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004463c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_004460e0(param_1,0x3d,0x18d);
  iVar1 = setjmp3((int)param_1 + 0x11,0);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_00474d70((int)param_1,param_2);
  return 0;
}


