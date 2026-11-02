/* Module: vegas30.exe
   Function: FUN_00568d00
   Address: 00568d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00568d00(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_005b87b0(param_1);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
  }
  if ((-1 < param_2) && (param_2 <= iVar2 + -1)) {
    iVar2 = FUN_005b87b0(param_1);
    return *(undefined4 *)(*(int *)(iVar2 + 8) + param_2 * 4);
  }
  return 0;
}


