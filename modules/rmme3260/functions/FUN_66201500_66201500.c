/* Module: rmme3260.dll
   Function: FUN_66201500
   Address: 66201500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66201500(int param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 100 + (param_2 & 0xffff) * 4) = 1;
  return 0;
}


