/* Module: mp3plug.dll
   Function: FUN_5f719b00
   Address: 5f719b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_5f719b00(void *this,char param_1,int param_2,int param_3,undefined4 *param_4,int param_5,
            int param_6)

{
  if (param_1 == '\0') {
    FUN_5f719a20(this,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    FUN_5f719700(this,param_2,param_3,(int)param_4,param_5,param_6);
  }
  return;
}


