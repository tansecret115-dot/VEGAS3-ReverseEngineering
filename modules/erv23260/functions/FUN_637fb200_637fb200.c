/* Module: erv23260.dll
   Function: FUN_637fb200
   Address: 637fb200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fb200(void *this,uint param_1,byte *param_2)

{
  uint uVar1;
  
  FUN_637fd360(this,param_1,8);
  if ((param_1 & 0xf) != 0) {
    uVar1 = param_1 & 0xf;
    do {
      FUN_637fb1e0(this,1);
      FUN_637fd360(this,(uint)*param_2,8);
      param_2 = param_2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  FUN_637fb1e0(this,0);
  return;
}


