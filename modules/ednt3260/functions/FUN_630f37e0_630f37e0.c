/* Module: ednt3260.dll
   Function: FUN_630f37e0
   Address: 630f37e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f37e0(void *param_1)

{
  short local_c [4];
  
  local_c[2] = 0xb77;
  local_c[3] = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  FUN_630f7350(param_1,local_c + 2,1,0x10);
  FUN_630f7350(param_1,local_c,1,0x10);
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x6304),1,2);
  FUN_630f7350(param_1,(short *)((int)param_1 + 0x6302),1,6);
  return;
}


