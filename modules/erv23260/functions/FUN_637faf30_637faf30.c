/* Module: erv23260.dll
   Function: FUN_637faf30
   Address: 637faf30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637faf30(void *this,int param_1,int *param_2)

{
  FUN_637fd360(this,3,2);
  if (*param_2 != 0) {
    if (param_1 == 5) {
      FUN_637fd360(this,param_2[1],1);
      FUN_637fd360(this,param_2[3],1);
      FUN_637fd360(this,param_2[2] - param_2[1] & 1,1);
      FUN_637fd360(this,0,2);
      FUN_637fd360(this,param_2[4] - param_2[3] & 1,1);
      FUN_637fd360(this,0,2);
    }
    else {
      FUN_63800010(this,param_2[1],param_2[3],1);
      FUN_63800010(this,param_2[2] - param_2[1],0,1);
      FUN_63800010(this,0,param_2[4] - param_2[3],1);
      FUN_63800010(this,0,0,1);
      FUN_637fd360(this,param_2[5],2);
      if (param_2[5] == 0) {
        FUN_637fd360(this,(uint)*(byte *)(param_2 + 6),8);
        FUN_637fd360(this,1,1);
        FUN_637fd360(this,(uint)*(byte *)((int)param_2 + 0x19),8);
        FUN_637fd360(this,1,1);
        FUN_637fd360(this,(uint)*(byte *)((int)param_2 + 0x1a),8);
        return;
      }
    }
  }
  return;
}


