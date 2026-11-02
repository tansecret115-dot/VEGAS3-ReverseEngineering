/* Module: mp3plug.dll
   Function: FUN_5f6db940
   Address: 5f6db940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** __cdecl
FUN_5f6db940(undefined4 *param_1,uint param_2,uint param_3,float param_4,uint param_5,int param_6,
            int param_7)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  uint uVar5;
  uint *puVar6;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  
  *param_1 = 0;
  if (2 < (int)param_2) {
    ppuVar4 = FUN_5f6d94e0(s_zEU__mp3_uptodate_ciEncoder_l3En_5f75cd7e + 2,(char *)0x3e,
                           (undefined *)0x0,s_invalid_procedure_parameters_5f75cdc0);
    return ppuVar4;
  }
  if (param_2 == 1) {
    local_14 = (uint *)0x0;
  }
  else {
    if (param_2 != 2) {
      ppuVar4 = FUN_5f6d94e0(s_zEU__mp3_uptodate_ciEncoder_l3En_5f75cd7e + 2,(char *)0x46,
                             (undefined *)0x0,s_only_mono_and_stereo_case_implem_5f75cde0);
      return ppuVar4;
    }
    local_14 = (uint *)0x1;
  }
  iVar1 = FUN_5f6dc0f0();
  if (iVar1 < 0) {
    ppuVar4 = FUN_5f6d94e0(s_zEU__mp3_uptodate_ciEncoder_l3En_5f75cd7e + 2,(char *)0x4b,
                           (undefined *)0x0,s_not_a_valid_ISO_sampling_rate_5f75ce10);
    return ppuVar4;
  }
  puVar2 = FUN_5f6d9720(1,0x54);
  if (puVar2 == (uint *)0x0) {
    ppuVar4 = FUN_5f6d94e0(s_zEU__mp3_uptodate_ciEncoder_l3En_5f75cd7e + 2,(char *)0x50,
                           (undefined *)0x0,s_out_of_memory_5f75c330);
    return ppuVar4;
  }
  *puVar2 = param_2;
  puVar2[1] = param_3;
  if ((param_6 == 0) || ((int)param_2 < 2)) {
    puVar2[2] = 0;
  }
  else {
    puVar2[2] = 1;
  }
  if ((param_7 == 0) || ((int)param_2 < 2)) {
    puVar2[3] = 0;
  }
  else {
    puVar2[3] = 1;
  }
  puVar3 = (undefined4 *)(param_5 / param_2);
  puVar2[4] = 1;
  puVar2[6] = param_3 - 1;
  ppuVar4 = FUN_5f6ec020(puVar2 + 8,param_4,(float)puVar3,(float)local_14);
  if (ppuVar4 == (undefined **)0x0) {
    if (0 < (int)param_2) {
      local_1c = puVar2 + 0xf;
      local_18 = puVar2 + 0xd;
      local_14 = puVar2 + 0xb;
      puVar6 = puVar2 + 9;
      do {
        ppuVar4 = FUN_5f6ecaf0(puVar6,puVar2[8]);
        if (ppuVar4 != (undefined **)0x0) {
          ppuVar4 = (undefined **)
                    FUN_5f6d8eb0(s_zEU__mp3_uptodate_ciEncoder_l3En_5f75cd7e + 2,0x66,0,(int)ppuVar4
                                );
          goto LAB_5f6dbba5;
        }
        ppuVar4 = FUN_5f6ed220(local_14,puVar2[8]);
        if (ppuVar4 != (undefined **)0x0) {
          ppuVar4 = (undefined **)
                    FUN_5f6d8eb0(s_zEU__mp3_uptodate_ciEncoder_l3En_5f75cd7e + 2,0x6d,0,(int)ppuVar4
                                );
          goto LAB_5f6dbba5;
        }
        ppuVar4 = FUN_5f6ec470(local_18,(int *)puVar2[8],puVar3);
        if (ppuVar4 != (undefined **)0x0) {
          ppuVar4 = (undefined **)
                    FUN_5f6d8eb0(s_zEU__mp3_uptodate_ciEncoder_l3En_5f75cd7e + 2,0x74,0,(int)ppuVar4
                                );
          goto LAB_5f6dbba5;
        }
        ppuVar4 = FUN_5f6ee3f0(local_1c,(undefined4 *)puVar2[8]);
        if (ppuVar4 != (undefined **)0x0) {
          ppuVar4 = (undefined **)
                    FUN_5f6d8eb0(s_zEU__mp3_uptodate_ciEncoder_l3En_5f75cd7e + 2,0x7b,0,(int)ppuVar4
                                );
          goto LAB_5f6dbba5;
        }
        local_1c = local_1c + 1;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
        puVar6 = puVar6 + 1;
      } while ((int)puVar6 < (int)(puVar2 + param_2 + 9));
    }
    if ((puVar2[2] == 0) && (uVar5 = 0, puVar2[3] == 0)) {
LAB_5f6dbca5:
      if ((uVar5 == 0) ||
         (ppuVar4 = FUN_5f6f0110(puVar2 + 0x12,(int *)puVar2[8],puVar3),
         ppuVar4 == (undefined **)0x0)) {
        FUN_5f6e0300(s_mixed_5f75ce30,0x5f75ce40,"",puVar2 + 5);
        *param_1 = puVar2;
        return (undefined **)0x0;
      }
      ppuVar4 = (undefined **)
                FUN_5f6d8eb0(s_zEU__mp3_uptodate_ciEncoder_l3En_5f75cd7e + 2,0x8d,0,(int)ppuVar4);
    }
    else {
      ppuVar4 = FUN_5f6ee710((int *)(puVar2 + 0x11),(undefined4 *)puVar2[8]);
      if (ppuVar4 == (undefined **)0x0) {
        uVar5 = puVar2[3];
        goto LAB_5f6dbca5;
      }
      ppuVar4 = (undefined **)
                FUN_5f6d8eb0(s_zEU__mp3_uptodate_ciEncoder_l3En_5f75cd7e + 2,0x84,0,(int)ppuVar4);
    }
LAB_5f6dbba5:
    if (puVar2 == (uint *)0x0) goto LAB_5f6dbb2f;
  }
  else {
    ppuVar4 = (undefined **)
              FUN_5f6d8eb0(s_zEU__mp3_uptodate_ciEncoder_l3En_5f75cd7e + 2,0x5e,0,(int)ppuVar4);
  }
  iVar1 = 0;
  if (0 < (int)*puVar2) {
    do {
      FUN_5f6ec5b0(puVar2[iVar1 + 0xd]);
      FUN_5f6ecde0((int *)puVar2[iVar1 + 9]);
      FUN_5f6ed7f0(puVar2[iVar1 + 0xb]);
      FUN_5f6ee4e0(puVar2[iVar1 + 0xf]);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)*puVar2);
  }
  if (puVar2[2] != 0) {
    FUN_5f6eecf0(puVar2[0x11]);
  }
  if (puVar2[3] != 0) {
    FUN_5f6f02d0(puVar2[0x12]);
  }
  FUN_5f6ec3f0(puVar2[8]);
  FUN_5f6d97a0((int)puVar2);
LAB_5f6dbb2f:
  *param_1 = 0;
  return ppuVar4;
}


