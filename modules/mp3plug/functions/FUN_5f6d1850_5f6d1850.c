/* Module: mp3plug.dll
   Function: FUN_5f6d1850
   Address: 5f6d1850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** FUN_5f6d1850(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  
  puVar1 = (undefined4 *)FUN_5f6d9760(0x20);
  *param_2 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = DAT_5f73f9e0;
    puVar1[1] = DAT_5f73f9e4;
    puVar1[2] = DAT_5f73f9e8;
    puVar1[3] = DAT_5f73f9ec;
    puVar1[4] = DAT_5f73f9f0;
    puVar1[5] = DAT_5f73f9f4;
    puVar1[6] = DAT_5f73f9f8;
    puVar1[7] = DAT_5f73f9fc;
    return (undefined **)0x0;
  }
  ppuVar2 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x40d,(undefined *)0x0,
                         s_out_of_memory_5f75c330);
  return ppuVar2;
}


