/* Module: mcplug.dll
   Function: FUN_0040b9b0
   Address: 0040b9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0040b9b0(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = malloc(0x74);
  puVar2 = FUN_0040bc20(param_1,param_2,1);
  puVar1[0x1c] = puVar2;
  *puVar1 = &LAB_0040ba70;
  puVar1[1] = &LAB_0040bab0;
  puVar1[2] = &LAB_0040baf0;
  puVar1[3] = &LAB_0040bb30;
  puVar1[6] = 0;
  puVar1[4] = &LAB_0040bba0;
  puVar1[8] = 0;
  puVar1[5] = &LAB_0040bbc0;
  puVar1[7] = &DAT_0040bc00;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 1;
  puVar1[0xd] = puVar1;
  puVar1[0x14] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0xe] = &LAB_0040ba90;
  puVar1[0xf] = &LAB_0040bad0;
  puVar1[0x10] = &LAB_0040bb10;
  puVar1[0x11] = FUN_0040bb50;
  puVar1[0x12] = &LAB_0040bbb0;
  puVar1[0x13] = &LAB_0040bbf0;
  puVar1[0x15] = &DAT_0040bc10;
  puVar1[0x1b] = puVar1;
  return puVar1;
}


