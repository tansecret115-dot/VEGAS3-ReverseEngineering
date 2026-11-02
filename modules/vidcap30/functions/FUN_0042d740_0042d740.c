/* Module: vidcap30.exe
   Function: FUN_0042d740
   Address: 0042d740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042d740(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (*param_1 == 8) {
    piVar1 = (int *)param_1[0xf7];
    if (piVar1 == (int *)0x0) {
      return 0x80004002;
    }
    (**(code **)(*piVar1 + 0x24))(piVar1,param_2,param_3);
  }
  return 0;
}


