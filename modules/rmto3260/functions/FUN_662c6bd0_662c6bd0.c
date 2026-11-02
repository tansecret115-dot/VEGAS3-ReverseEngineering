/* Module: rmto3260.dll
   Function: FUN_662c6bd0
   Address: 662c6bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662c6bd0(void *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_662f2bd0(this,(ushort)*param_2);
  if ((uVar1 & 0x4000) == 0x4000) {
    *param_1 = uVar1 & 0x3fff;
    return 2;
  }
  uVar1 = FUN_662f2c20(*param_2);
  *param_1 = uVar1 & 0x3fffffff;
  return 4;
}


