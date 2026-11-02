/* Module: vidcap30.exe
   Function: FUN_0041db10
   Address: 0041db10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 * FUN_0041db10(uint param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)0x0;
  if (param_1 == 0xffffffff) {
    return &DAT_005b4310;
  }
  if ((param_1 != 0) && (param_1 < 2)) {
    puVar1 = (undefined2 *)(&PTR_DAT_005b52b0)[param_1 * 0x11];
  }
  return puVar1;
}


