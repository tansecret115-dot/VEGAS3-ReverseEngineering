/* Module: vidcap30.exe
   Function: FUN_0052cbe0
   Address: 0052cbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0052cbe0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && (puVar1 = malloc(0x14), puVar1 != (undefined4 *)0x0)) {
    puVar1[3] = param_1;
    puVar1[2] = param_2;
    *puVar1 = 1;
    puVar1[1] = 0;
    puVar1[4] = 1;
    return puVar1;
  }
  return (undefined4 *)0x0;
}


