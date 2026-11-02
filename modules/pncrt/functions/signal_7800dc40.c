/* Module: pncrt.dll
   Function: signal
   Address: 7800dc40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl signal(int param_1)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  BOOL BVar3;
  int *piVar4;
  DWORD DVar5;
  ulong *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int in_stack_00000008;
  
                    /* 0xdc40  697  signal */
  if ((in_stack_00000008 != 4) && (in_stack_00000008 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      _lock(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_7804246c == 0)) {
        BVar3 = SetConsoleCtrlHandler((PHANDLER_ROUTINE)&LAB_7800de70,1);
        if (BVar3 != 1) {
          DVar5 = GetLastError();
          puVar6 = __doserrno();
          *puVar6 = DVar5;
          _unlock(1);
          piVar4 = _errno();
          *piVar4 = 0x16;
          return;
        }
        DAT_7804246c = 1;
      }
      switch(param_1) {
      case 2:
        DAT_7804245c = in_stack_00000008;
        _unlock(1);
        return;
      default:
        _unlock(1);
        return;
      case 0xf:
        DAT_78042468 = in_stack_00000008;
        _unlock(1);
        return;
      case 0x15:
        DAT_78042460 = in_stack_00000008;
        _unlock(1);
        return;
      case 0x16:
        DAT_78042464 = in_stack_00000008;
        _unlock(1);
        return;
      }
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      pDVar1 = FUN_78009cc0();
      if ((undefined4 *)pDVar1[0x14] == &DAT_7803f770) {
        puVar2 = malloc(DAT_7803f7f0);
        pDVar1[0x14] = (DWORD)puVar2;
        uVar8 = DAT_7803f7f0;
        if (puVar2 == (undefined4 *)0x0) goto LAB_7800de05;
        puVar9 = &DAT_7803f770;
        for (uVar7 = DAT_7803f7f0 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar2 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar2 = puVar2 + 1;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar2 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar2 = (undefined4 *)((int)puVar2 + 1);
        }
      }
      uVar8 = FUN_7800e110(param_1,pDVar1[0x14]);
      if (uVar8 != 0) {
        if (*(int *)(uVar8 + 4) != param_1) {
          return;
        }
        do {
          *(int *)(uVar8 + 8) = in_stack_00000008;
          if (pDVar1[0x14] + DAT_7803f7f4 * 0xc <= uVar8 + 0xc) {
            return;
          }
          piVar4 = (int *)(uVar8 + 0x10);
          uVar8 = uVar8 + 0xc;
        } while (*piVar4 == param_1);
        return;
      }
    }
  }
LAB_7800de05:
  piVar4 = _errno();
  *piVar4 = 0x16;
  return;
}


