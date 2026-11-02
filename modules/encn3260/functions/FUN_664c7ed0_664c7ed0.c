/* Module: encn3260.dll
   Function: FUN_664c7ed0
   Address: 664c7ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c7ed0(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  _OSVERSIONINFOA local_98;
  
  *param_1 = 0;
  if (DAT_664f2a28 == (int *)0x0) {
    piVar2 = operator_new(0xc5);
    if (piVar2 == (int *)0x0) {
      DAT_664f2a28 = (int *)0x0;
    }
    else {
      DAT_664f2a28 = FUN_664c9fc0(piVar2);
    }
  }
  iVar3 = FUN_664c4d20();
  if (iVar3 == 0) {
    if (((DAT_664f2a28 != (int *)0x0) && (*DAT_664f2a28 != 0)) &&
       (iVar3 = FUN_664ca700((int)DAT_664f2a28), iVar3 != 0)) {
      *param_1 = 1;
    }
    cVar1 = FUN_664ca7c0((int)DAT_664f2a28);
    local_98.dwOSVersionInfoSize = 0x94;
    BVar4 = GetVersionExA(&local_98);
    if (((BVar4 != 0) && (cVar1 == '\x02')) &&
       ((local_98.dwPlatformId == 1 && (local_98.dwMinorVersion == 0)))) {
      DAT_664f2a30 = 1;
    }
  }
  return;
}


