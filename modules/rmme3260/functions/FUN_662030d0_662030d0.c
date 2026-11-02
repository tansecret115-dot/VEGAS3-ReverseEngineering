/* Module: rmme3260.dll
   Function: FUN_662030d0
   Address: 662030d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662030d0(int param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_2 != (undefined2 *)0x0) {
    uVar1 = 0;
    *param_2 = *(undefined2 *)(param_1 + 0x60);
  }
  return uVar1;
}


