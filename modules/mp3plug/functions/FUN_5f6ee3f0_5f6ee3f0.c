/* Module: mp3plug.dll
   Function: FUN_5f6ee3f0
   Address: 5f6ee3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** __cdecl FUN_5f6ee3f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **ppuVar3;
  char *pcVar4;
  
  pcVar4 = s_U__mp3_uptodate_ciEncoder_l3Enc__5f75dc60;
  puVar1 = FUN_5f6d9720(1,0x910);
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    ppuVar3 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75dc60,(char *)0x26,(undefined *)0x0
                           ,s_out_of_memory_5f75c330);
    return ppuVar3;
  }
  piVar2 = FUN_5f709e90(*param_2,*(int *)(param_2[1] + 0x20),(int)pcVar4);
  puVar1[1] = piVar2;
  if (piVar2 != (int *)0x0) {
    return (undefined **)0x0;
  }
  *param_1 = 0;
  if (puVar1[1] != 0) {
    FUN_5f709f40(puVar1[1]);
  }
  FUN_5f6d97a0((int)puVar1);
  ppuVar3 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75dc60,(char *)0x2f,(undefined *)0x0,
                         s_out_of_memory_5f75c330);
  return ppuVar3;
}


