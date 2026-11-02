/* Module: sfpagepeel.dll
   Function: FUN_0046a740
   Address: 0046a740
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_0046a740(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00469500(*param_1,0);
  uVar1 = FUN_00469540(param_1[2],uVar1);
  uVar1 = FUN_00469540(param_1[3],uVar1);
  uVar1 = FUN_00469540(param_1[4],uVar1);
  uVar1 = FUN_00469540(param_1[9],uVar1);
  uVar1 = FUN_00469540(param_1[5],uVar1);
  uVar2 = (uint)(param_1[1] != 0);
  if (param_1[6] != 0) {
    uVar2 = uVar2 + 2;
  }
  if (param_1[7] != 0) {
    uVar2 = uVar2 + 4;
  }
  if (param_1[8] != 0) {
    uVar2 = uVar2 + 8;
  }
  uVar1 = FUN_00469540(uVar2,uVar1);
  return uVar1 & 0x7f;
}


