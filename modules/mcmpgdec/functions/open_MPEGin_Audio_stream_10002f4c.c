/* Module: mcmpgdec.dll
   Function: open_MPEGin_Audio_stream
   Address: 10002f4c
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * open_MPEGin_Audio_stream(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* 0x2f4c  2  open_MPEGin_Audio_stream */
  FUN_100014e0();
  puVar1 = malloc(0x991c);
  puVar3 = puVar1;
  for (iVar2 = 0x2647; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar1[0xd] = puVar1;
  puVar1[0xf] = puVar1 + 0x2247;
  puVar1[5] = &DAT_10003588;
  puVar1[3] = FUN_1000bd9c;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[7] = &LAB_100034e0;
  puVar1[8] = &LAB_100034e4;
  puVar1[0xe] = 8;
  puVar1[0x10] = 0x1000;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x15] = puVar1;
  puVar1[0x16] = &LAB_10003504;
  return puVar1;
}


