/* Module: vegas30.exe
   Function: FUN_00541e80
   Address: 00541e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00541e80(uint *param_1,uint *param_2,uint *param_3,byte param_4,uint param_5,uint param_6)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (param_2 == (uint *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
  }
  if (param_3 == (uint *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  else {
    param_1[3] = *param_3;
    param_1[4] = param_3[1];
    param_1[5] = param_3[2];
    param_1[6] = param_3[3];
  }
  param_1[7] = 0;
  *param_1 = CONCAT31((int3)((*param_1 & 0xfffffffd) >> 8),
                      (param_4 & 1) << 1 | (byte)(*param_1 & 0xfffffffd)) & 0xfffffffa ^ param_5 & 1
  ;
  param_1[8] = 0x3f800000;
  param_1[9] = param_6;
  return 1;
}


