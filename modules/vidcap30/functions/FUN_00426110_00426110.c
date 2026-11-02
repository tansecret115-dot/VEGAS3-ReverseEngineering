/* Module: vidcap30.exe
   Function: FUN_00426110
   Address: 00426110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00426110(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 1;
  if ((*param_1 == 8) && (param_1[0xd8] != 0)) {
    uVar2 = __aullshr();
    *param_2 = uVar2 & 1;
    uVar1 = 0;
  }
  return uVar1;
}


