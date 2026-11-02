/* Module: rmbe3260.dll
   Function: FUN_6604c150
   Address: 6604c150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_6604c150(void *this,undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  *(undefined2 *)((int)this + 4) = 0xf0;
  *(undefined2 *)((int)this + 6) = 0xc;
  *(undefined4 *)((int)this + 0xc) = 0xb40;
  *param_2 = 0xf0;
  *param_3 = *(undefined2 *)((int)this + 6);
  return 0;
}


