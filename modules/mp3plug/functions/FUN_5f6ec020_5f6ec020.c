/* Module: mp3plug.dll
   Function: FUN_5f6ec020
   Address: 5f6ec020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** __cdecl FUN_5f6ec020(undefined4 *param_1,float param_2,float param_3,float param_4)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  double local_1c;
  
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  *param_1 = 0;
  puVar1 = FUN_5f6d9720(500,1);
  if (puVar1 == (undefined4 *)0x0) {
    ppuVar2 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d830,(char *)0xc0,(undefined *)0x0
                           ,s_out_of_memory_5f75c330);
    return ppuVar2;
  }
  FUN_5f6e0300(s_lp_adjust_5f75d870,0x5f75d880,s_the_lowpass_frequencies_for_shor_5f75d8b0,&local_34
              );
  FUN_5f6e0300(s_nobmax_5f75d910,0x5f75d920,s_the_bmax_values_for_short_and_lo_5f75d930,&local_30);
  FUN_5f6e0300(s_noCmdct_5f75c270,0x5f75d960,"",&local_2c);
  puVar1[0x7c] = (uint)(local_2c == 0);
  local_24 = param_3;
  local_1c = (double)param_2;
  local_28 = param_2;
  ppuVar2 = FUN_5f701d20(puVar1 + 1,0x400,0x240,param_2,param_3,param_4,0,(uint)(local_2c == 0));
  if (ppuVar2 != (undefined **)0x0) {
    FUN_5f6ec3f4();
    ppuVar2 = (undefined **)
              FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d830,0xd5,0,(int)ppuVar2);
    return ppuVar2;
  }
  ppuVar2 = FUN_5f701d20(puVar1 + 2,0x100,0x240,local_28,local_24,param_4,2,puVar1[0x7c]);
  if (ppuVar2 != (undefined **)0x0) {
    FUN_5f6ec3f4();
    ppuVar2 = (undefined **)
              FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d830,0xde,0,(int)ppuVar2);
    return ppuVar2;
  }
  if (local_34 != 0) {
    FUN_5f702b90(local_28,puVar1[1],puVar1[2]);
  }
  ppuVar2 = FUN_5f703fe0(puVar1 + 3,puVar1[1],puVar1[0x7c],local_30);
  if (ppuVar2 != (undefined **)0x0) {
    FUN_5f6ec3f4();
    ppuVar2 = (undefined **)
              FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d830,0xf0,0,(int)ppuVar2);
    return ppuVar2;
  }
  ppuVar2 = FUN_5f703fe0(puVar1 + 4,puVar1[2],puVar1[0x7c],local_30);
  if (ppuVar2 != (undefined **)0x0) {
    FUN_5f6ec3f4();
    ppuVar2 = (undefined **)
              FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d830,0xf8,0,(int)ppuVar2);
    return ppuVar2;
  }
  FUN_5f704bb0(*(int *)puVar1[4],puVar1[4] + 0x1e0,puVar1[3] + 0x1e0,(int)(puVar1 + 6));
  ppuVar2 = FUN_5f704d70(puVar1 + 0x7a,puVar1[1],(int *)puVar1[3]);
  if (ppuVar2 != (undefined **)0x0) {
    FUN_5f6ec3f4();
    ppuVar2 = (undefined **)
              FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d830,0x109,0,(int)ppuVar2);
    return ppuVar2;
  }
  ppuVar2 = FUN_5f704d70(puVar1 + 0x7b,puVar1[2],(int *)puVar1[4]);
  if (ppuVar2 != (undefined **)0x0) {
    FUN_5f6ec3f4();
    ppuVar2 = (undefined **)
              FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d830,0x112,0,(int)ppuVar2);
    return ppuVar2;
  }
  if (local_1c <= (double)_DAT_5f75d820) {
    if (local_1c <= (double)_DAT_5f75d824) {
      *puVar1 = 2;
    }
    else {
      *puVar1 = 1;
    }
  }
  else {
    *puVar1 = 0;
  }
  *param_1 = puVar1;
  return (undefined **)0x0;
}


