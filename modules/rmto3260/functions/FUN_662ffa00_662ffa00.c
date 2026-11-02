/* Module: rmto3260.dll
   Function: FUN_662ffa00
   Address: 662ffa00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_662ffa00(void *this,undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  *(undefined2 *)((int)this + 4) = 0xf0;
  *(undefined2 *)((int)this + 6) = 0xc;
  *(undefined4 *)((int)this + 0xc) = 0xb40;
  *param_2 = 0xf0;
  *param_3 = *(undefined2 *)((int)this + 6);
  return 0;
}


