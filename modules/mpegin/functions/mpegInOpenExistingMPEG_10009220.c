/* Module: mpegin.dll
   Function: mpegInOpenExistingMPEG
   Address: 10009220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl mpegInOpenExistingMPEG(undefined *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
                    /* 0x9220  17  mpegInOpenExistingMPEG */
  if (param_1 != (undefined *)0x0) {
    pcVar1 = (code *)(*(code *)param_1)(s_malloc_10018edc);
    if (pcVar1 != (code *)0x0) goto LAB_10009240;
  }
  pcVar1 = _malloc;
LAB_10009240:
  puVar2 = (undefined4 *)(*pcVar1)(0x12e58);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_10007e90(0,(byte *)s_Unable_to_allocate_memory_for_a_m_10018eac);
    return (undefined4 *)0x0;
  }
  mpegInInfoInit(puVar2);
  puVar2[0x4b93] = pcVar1;
  if (param_1 != (undefined *)0x0) {
    uVar3 = (*(code *)param_1)(&DAT_10018ea4);
    puVar2[0x4b94] = uVar3;
    uVar3 = (*(code *)param_1)(s_err_printf_10018e98);
    puVar2[0x4b8f] = uVar3;
    uVar3 = (*(code *)param_1)(s_prg_printf_10018e8c);
    puVar2[0x4b90] = uVar3;
    uVar3 = (*(code *)param_1)(s_wrn_printf_10018e80);
    puVar2[0x4b91] = uVar3;
    uVar3 = (*(code *)param_1)(s_inf_printf_10018e74);
    puVar2[0x4b92] = uVar3;
  }
  if (puVar2[0x4b94] == 0) {
    puVar2[0x4b94] = FUN_1000e22b;
  }
  iVar4 = FUN_10008450(puVar2,1,param_2);
  if (iVar4 != 0) {
    (*(code *)puVar2[0x4b94])(puVar2);
    return (undefined4 *)0x0;
  }
  return puVar2;
}


