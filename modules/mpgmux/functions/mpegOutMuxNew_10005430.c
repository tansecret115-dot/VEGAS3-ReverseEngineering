/* Module: mpgmux.dll
   Function: mpegOutMuxNew
   Address: 10005430
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl mpegOutMuxNew(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
                    /* 0x5430  2  mpegOutMuxNew */
  puVar1 = param_2;
  if (param_2 == (undefined *)0x0) {
    FUN_100050f0(0,(byte *)s_Invalid_mpeg_m_settings_paramete_10016868);
    return (int *)0x0;
  }
  if (*(int *)(param_2 + 0x2c) == 6) {
    FUN_100050f0(0,(byte *)s_Multiplexing_type_is_set_to_NONE_10017378);
    return (int *)0x0;
  }
  iVar2 = mpegOutMuxCheckSettings((int *)param_2);
  if (0x7ffff < iVar2) {
    return (int *)0x0;
  }
  if (param_1 != (undefined *)0x0) {
    param_2 = (undefined *)(*(code *)param_1)(s_malloc_10017370);
    if (param_2 != (undefined *)0x0) goto LAB_100054a6;
  }
  param_2 = _malloc;
LAB_100054a6:
  piVar3 = (int *)(*(code *)param_2)(0x2ec0);
  if (piVar3 == (int *)0x0) {
    FUN_100050f0(0,(byte *)s_Unable_to_allocate_memory_for_a_m_10017340);
    return (int *)0x0;
  }
  piVar4 = piVar3;
  for (iVar2 = 0xbb0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  piVar3[0x988] = (int)param_2;
  if (param_1 != (undefined *)0x0) {
    iVar2 = (*(code *)param_1)(&DAT_10017338);
    piVar3[0x989] = iVar2;
    iVar2 = (*(code *)param_1)(s_err_printf_1001732c);
    piVar3[0x984] = iVar2;
    iVar2 = (*(code *)param_1)(s_prg_printf_10017320);
    piVar3[0x985] = iVar2;
    iVar2 = (*(code *)param_1)(s_wrn_printf_10017314);
    piVar3[0x986] = iVar2;
    iVar2 = (*(code *)param_1)(s_inf_printf_10017308);
    piVar3[0x987] = iVar2;
  }
  if (piVar3[0x989] == 0) {
    piVar3[0x989] = (int)FUN_1000c3f0;
  }
  *piVar3 = *(int *)puVar1;
  piVar3[1] = *(int *)(puVar1 + 4);
  piVar3[2] = *(int *)(puVar1 + 8);
  piVar3[3] = *(int *)(puVar1 + 0xc);
  piVar3[4] = *(int *)(puVar1 + 0x10);
  piVar3[5] = *(int *)(puVar1 + 0x14);
  piVar3[6] = *(int *)(puVar1 + 0x18);
  piVar3[7] = *(int *)(puVar1 + 0x1c);
  piVar3[8] = *(int *)(puVar1 + 0x20);
  piVar3[0x1d] = *(int *)(puVar1 + 0x18);
  piVar3[0x1e] = *(int *)(puVar1 + 0x1c);
  piVar3[0x1f] = *(int *)(puVar1 + 0x20);
  piVar3[9] = *(int *)(puVar1 + 0x24);
  piVar3[10] = *(int *)(puVar1 + 0x28);
  piVar3[0xb] = *(int *)(puVar1 + 0x2c);
  piVar3[0xc] = *(int *)(puVar1 + 0x30);
  piVar3[0xd] = *(int *)(puVar1 + 0x34);
  piVar3[0xf] = *(int *)(puVar1 + 0x3c);
  piVar3[0xe] = *(int *)(puVar1 + 0x38);
  piVar3[0x10] = *(int *)(puVar1 + 0x40);
  piVar3[0x11] = *(int *)(puVar1 + 0x44);
  piVar3[0x12] = *(int *)(puVar1 + 0x48);
  piVar3[0x13] = *(int *)(puVar1 + 0x4c);
  piVar3[0x14] = *(int *)(puVar1 + 0x50);
  piVar3[0x15] = *(int *)(puVar1 + 0x54);
  piVar3[0x16] = *(int *)(puVar1 + 0x58);
  piVar3[0x17] = *(int *)(puVar1 + 0x5c);
  piVar3[0x18] = *(int *)(puVar1 + 0x60);
  piVar3[0x19] = *(int *)(puVar1 + 100);
  iVar2 = *(int *)(puVar1 + 0x68);
  piVar3[0xb83] = piVar3[0xc];
  piVar3[0x1a] = iVar2;
  piVar3[0x1c] = 0;
  return piVar3;
}


