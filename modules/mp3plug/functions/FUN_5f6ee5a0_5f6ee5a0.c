/* Module: mp3plug.dll
   Function: FUN_5f6ee5a0
   Address: 5f6ee5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** __fastcall FUN_5f6ee5a0(int param_1,int param_2)

{
  int *in_EAX;
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = FUN_5f6d9760(param_1 * 8);
  *in_EAX = iVar1;
  iVar1 = FUN_5f6d9760(param_2 * 4);
  in_EAX[1] = iVar1;
  iVar1 = FUN_5f6d9760(param_2 * 4);
  in_EAX[2] = iVar1;
  iVar1 = FUN_5f6d9760(param_2 * 4);
  in_EAX[3] = iVar1;
  if ((((*in_EAX != 0) && (in_EAX[1] != 0)) && (in_EAX[2] != 0)) && (in_EAX[3] != 0)) {
    return (undefined **)0x0;
  }
  ppuVar2 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75dce0,(char *)0x47,(undefined *)0x0,
                         s_out_of_memory_5f75c330);
  return ppuVar2;
}


