/* Module: sfxpfx2.dll
   Function: FUN_5c8b2aa0
   Address: 5c8b2aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8b2aa0(RECT *param_1,int param_2,int param_3,byte param_4)

{
  if (param_1[0xb].left == 5) {
    param_1->bottom = (uint)((param_4 & 10) != 0) << 0xd | param_1->bottom & 0xffffdfffU;
    FUN_5c8b2250(param_1,param_2,param_3,5);
  }
  return;
}


