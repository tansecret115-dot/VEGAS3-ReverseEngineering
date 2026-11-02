/* Module: mp3plug.dll
   Function: FUN_5f705930
   Address: 5f705930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** __cdecl FUN_5f705930(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  
  puVar1 = FUN_5f6d9720(1,8);
  *param_1 = (int)puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    ppuVar3 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f7604b0,(char *)0x23,(undefined *)0x0
                           ,s_out_of_memory_5f75c330);
    return ppuVar3;
  }
  uVar2 = FUN_5f6d9760(param_3 * 4);
  *(undefined4 *)*param_1 = uVar2;
  if (*(int *)*param_1 != 0) {
    ((int *)*param_1)[1] = param_3;
    FUN_5f70de20(*(int *)*param_1,((int *)*param_1)[1],param_3);
    return (undefined **)0x0;
  }
  FUN_5f705a24();
  *param_1 = 0;
  ppuVar3 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f7604b0,(char *)0x29,(undefined *)0x0,
                         s_out_of_memory_5f75c330);
  return ppuVar3;
}


