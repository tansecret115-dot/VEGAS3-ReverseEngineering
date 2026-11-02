/* Module: cook3260.dll
   Function: FUN_633a6200
   Address: 633a6200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_633a6200(float *param_1,float *param_2)

{
  void *this;
  float local_1004 [1019];
  undefined4 uStackY_18;
  
  FUN_633a7330();
  uStackY_18 = 0x633a621e;
  FUN_633a5ef0(this,param_1,param_2);
  uStackY_18 = 0x633a622d;
  FUN_633a5fc0(this,param_2,local_1004);
  FUN_633a4b90(this,local_1004);
  uStackY_18 = 0x633a624a;
  FUN_633a6070(this,(int)local_1004,param_2);
  return;
}


