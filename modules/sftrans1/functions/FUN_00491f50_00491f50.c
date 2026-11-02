/* Module: sftrans1.dll
   Function: FUN_00491f50
   Address: 00491f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00491f50(int param_1)

{
  HWND pHVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  int iVar4;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x6b5);
  FUN_004914f0(pHVar1,&PTR_s_Scrolling_Credits_005745f0);
  pvVar2 = GlobalAlloc(0x40,0x38);
  puVar3 = GlobalLock(pvVar2);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_00485db0();
    *puVar3 = &PTR_LAB_00563aec;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[4] = 0xe9;
    iVar4 = FUN_00491570(*(undefined4 *)(param_1 + 4),0x6b0,0,*(undefined4 *)(param_1 + 0x30),
                         *(undefined4 *)(param_1 + 0x34));
    if (iVar4 != 0) {
      FUN_004860a0(**(undefined4 **)(param_1 + 0x28),puVar3);
    }
  }
  pvVar2 = GlobalAlloc(0x40,0x38);
  puVar3 = GlobalLock(pvVar2);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_00485db0();
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    *puVar3 = &PTR_LAB_00563adc;
    puVar3[4] = 0xea;
    iVar4 = FUN_00491570(*(undefined4 *)(param_1 + 4),0x6b0,0,*(undefined4 *)(param_1 + 0x30),
                         *(undefined4 *)(param_1 + 0x34));
    if (iVar4 != 0) {
      FUN_004860a0(**(undefined4 **)(param_1 + 0x28),puVar3);
    }
  }
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x6b8);
  if (pHVar1 != (HWND)0x0) {
    SendMessageA(pHVar1,0x810,2,0);
    SendMessageA(pHVar1,0x80e,2,0);
    SendMessageA(pHVar1,0x80d,2,0);
    SendMessageA(pHVar1,0x81f,1,0);
  }
  return 1;
}


