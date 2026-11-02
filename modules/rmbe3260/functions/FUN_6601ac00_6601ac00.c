/* Module: rmbe3260.dll
   Function: FUN_6601ac00
   Address: 6601ac00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6601ac00(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LSTATUS LVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  CHAR local_10c [256];
  LONG local_c;
  HKEY local_8;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66066d08;
  param_1[5] = &PTR_LAB_66066cf0;
  param_1[6] = &PTR_LAB_66066ce0;
  param_1[7] = &PTR_LAB_66066cc8;
  param_1[8] = &PTR_LAB_66066cb8;
  param_1[9] = &PTR_LAB_66066ca0;
  param_1[10] = &PTR_LAB_66066c90;
  param_1[0xb] = &PTR_LAB_66066c80;
  param_1[0xc] = &PTR_LAB_66066c68;
  param_1[0xd] = &PTR_LAB_66066c50;
  param_1[0xe] = &PTR_LAB_66066c38;
  param_1[0xf] = &PTR_LAB_66066c28;
  param_1[0x10] = &PTR_LAB_66066c08;
  param_1[0x11] = &PTR_LAB_66066bf8;
  param_1[0x12] = &PTR_LAB_66066be0;
  param_1[0x13] = &PTR_LAB_66066bc8;
  param_1[0x14] = &PTR_LAB_66066bb0;
  param_1[0x15] = &PTR_LAB_66066b98;
  param_1[0x16] = &PTR_LAB_66066b88;
  param_1[0x17] = &PTR_LAB_66066b70;
  param_1[0x18] = &PTR_LAB_66066b58;
  param_1[0x19] = &PTR_LAB_66066b38;
  FUN_6605cda0(param_1 + 0x26);
  FUN_6605b650(param_1 + 0x36);
  FUN_6605b650(param_1 + 0x39);
  FUN_6605b650(param_1 + 0x3c);
  FUN_6605b650(param_1 + 0x3f);
  FUN_6605b650(param_1 + 0x42);
  FUN_6605b650(param_1 + 0x45);
  FUN_6605b650(param_1 + 0x48);
  FUN_660516d0(param_1 + 0x52);
  FUN_660516d0(param_1 + 0x58);
  FUN_6605c3e0(param_1 + 0x5e);
  FUN_6605cda0(param_1 + 0x67);
  FUN_6605cda0((undefined4 *)((int)param_1 + 0x1c6));
  FUN_6605b650((undefined4 *)((int)param_1 + 0x1e6));
  *param_1 = &PTR_FUN_66066ae8;
  param_1[4] = &PTR_LAB_66066a90;
  param_1[5] = &PTR_LAB_66066a78;
  param_1[6] = &PTR_LAB_66066a68;
  param_1[7] = &PTR_LAB_66066a50;
  param_1[8] = &PTR_LAB_66066a40;
  param_1[9] = &PTR_LAB_66066a28;
  param_1[10] = &PTR_LAB_66066a18;
  param_1[0xb] = &PTR_LAB_66066a08;
  param_1[0xc] = &PTR_LAB_660669f0;
  param_1[0xd] = &PTR_LAB_660669d8;
  param_1[0xe] = &PTR_LAB_660669c0;
  param_1[0xf] = &PTR_LAB_660669b0;
  param_1[0x10] = &PTR_LAB_66066990;
  param_1[0x11] = &PTR_LAB_66066980;
  param_1[0x12] = &PTR_LAB_66066968;
  param_1[0x13] = &PTR_LAB_66066950;
  param_1[0x14] = &PTR_LAB_66066938;
  param_1[0x15] = &PTR_LAB_66066920;
  param_1[0x16] = &PTR_LAB_66066910;
  param_1[0x17] = &PTR_LAB_660668f8;
  param_1[0x18] = &PTR_LAB_660668e0;
  param_1[0x19] = &PTR_LAB_660668c0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 1;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x6b] = 500;
  param_1[0x65] = 0;
  lpCriticalSection = operator_new(0x18);
  param_1[0x66] = lpCriticalSection;
  InitializeCriticalSection(lpCriticalSection);
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined2 *)(param_1 + 0x70) = 1;
  param_1[0x4b] = 0;
  *(undefined4 *)((int)param_1 + 0x1c2) = 0;
  *(undefined4 *)((int)param_1 + 0x1d6) = 0;
  *(undefined4 *)((int)param_1 + 0x1da) = 0;
  *(undefined4 *)((int)param_1 + 0x1de) = 0;
  *(undefined4 *)((int)param_1 + 0x1e2) = 0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,s_Software_RealProducer_SpecialKey_6606c82c,0,0xf003f,
                        &local_8);
  if (LVar1 == 0) {
    local_c = 0xff;
    LVar1 = RegQueryValueA(local_8,s_SaveAnalysisFiles_6606db64,local_10c,&local_c);
    if (LVar1 == 0) {
      lVar2 = atol(local_10c);
      *(long *)((int)param_1 + 0x1e2) = lVar2;
    }
  }
  RegCloseKey(local_8);
  *(undefined4 *)((int)param_1 + 0x1fa) = 0;
  puVar3 = operator_new(0x1c);
  if (puVar3 == (undefined4 *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_6603c140(puVar3);
  }
  *(int *)((int)param_1 + 0x1f6) = iVar4;
  if (iVar4 != 0) {
    FUN_6603c1a0(iVar4);
  }
  return param_1;
}


