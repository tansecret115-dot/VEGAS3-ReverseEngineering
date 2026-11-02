/* Module: rmme3260.dll
   Function: FUN_6625b5a0
   Address: 6625b5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6625b5a0(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  _OSVERSIONINFOA local_98;
  
  *param_1 = 0;
  if (DAT_6627f238 == (int *)0x0) {
    piVar2 = operator_new(0xc5);
    if (piVar2 == (int *)0x0) {
      DAT_6627f238 = (int *)0x0;
    }
    else {
      DAT_6627f238 = FUN_6625e3a0(piVar2);
    }
  }
  iVar3 = FUN_662583f0();
  if (iVar3 == 0) {
    if (((DAT_6627f238 != (int *)0x0) && (*DAT_6627f238 != 0)) &&
       (iVar3 = FUN_6625eae0((int)DAT_6627f238), iVar3 != 0)) {
      *param_1 = 1;
    }
    cVar1 = FUN_6625eba0((int)DAT_6627f238);
    local_98.dwOSVersionInfoSize = 0x94;
    BVar4 = GetVersionExA(&local_98);
    if (((BVar4 != 0) && (cVar1 == '\x02')) &&
       ((local_98.dwPlatformId == 1 && (local_98.dwMinorVersion == 0)))) {
      DAT_6627f240 = 1;
    }
  }
  return;
}


