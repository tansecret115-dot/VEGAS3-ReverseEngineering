/* Module: sftrkfx1.dll
   Function: FUN_5cbf52a2
   Address: 5cbf52a2
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbf52a2(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


