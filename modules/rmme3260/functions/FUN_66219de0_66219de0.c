/* Module: rmme3260.dll
   Function: FUN_66219de0
   Address: 66219de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66219de0(void *this,int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint local_10;
  undefined2 local_c;
  short local_8;
  
  FUN_66208c30(&local_10);
  local_10 = *(uint *)(param_1 + 6);
  local_c = *(undefined2 *)(param_1 + 4);
  local_8 = (-(ushort)(*(short *)(param_1 + 10) != 0) & 0xfffe) + 2;
  FUN_66219e40(this,&local_10,param_2,param_3,param_4);
  return;
}


