/* Module: vegas30.exe
   Function: FUN_00562930
   Address: 00562930
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00562930(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x118), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 0x40))(piVar1,&param_1);
    return (uint)local_4 & (iVar2 < 0) - 1;
  }
  return 0;
}


