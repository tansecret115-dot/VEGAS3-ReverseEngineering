/* Module: pngu3266.dll
   Function: FUN_6061f610
   Address: 6061f610
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6061f610(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x1000;
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x400e] = 0;
  param_1[0x400f] = 0;
  param_1[0x4010] = 0xffffffff;
  param_1[0x4011] = 0;
  param_1[0x4012] = 1;
  param_1[0x4013] = 0;
  param_1[0x400b] = 0;
  param_1[0x400c] = 0;
  param_1[0x400d] = 0;
  puVar1 = param_1 + 10;
  do {
    puVar1[0x1000] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x400a] = param_1 + 0x200a;
  return;
}


