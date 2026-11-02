/* Module: mp3plug.dll
   Function: FUN_5f69c4c0
   Address: 5f69c4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5f69c4c0(void *this,int param_1,LPSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  void *this_00;
  
  this_00 = (void *)FUN_5f69bf30(this,0x3d,param_1);
  if (this_00 != (void *)0x0) {
    FUN_5f69b030(this_00,param_2,param_3,param_4,param_5);
    return 0;
  }
  return 0x8004e00a;
}


