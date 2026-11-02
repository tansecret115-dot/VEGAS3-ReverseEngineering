/* Module: mp3plug.dll
   Function: FUN_5f7139c0
   Address: 5f7139c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f7139c0(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)((int)param_1 + 0x10);
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  do {
    if (iVar2 < 0x20) {
      return 0x81010001;
    }
    uVar1 = FUN_5f714160(param_1);
    iVar2 = FUN_5f7158d0((void *)((int)param_1 + 0x2c),uVar1);
    if (iVar2 != 0) {
      if (*(int *)((int)param_1 + 0x10) < *(int *)((int)param_1 + 0x7c)) {
        iVar2 = *(int *)((int)param_1 + 0x18);
        if (0 < iVar2) {
          *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) + iVar2;
          *(int *)((int)param_1 + 0x18) = *(int *)((int)param_1 + 0x18) + -iVar2;
          *(uint *)((int)param_1 + 0x1c) =
               -iVar2 + *(int *)((int)param_1 + 0x1c) & *(int *)((int)param_1 + 0xc) - 1U;
        }
        return 0x81010001;
      }
      iVar2 = *(int *)((int)param_1 + 0x7c);
      if (0 < iVar2 + -0x20) {
        *(uint *)((int)param_1 + 0x1c) =
             *(int *)((int)param_1 + 0x1c) + -0x20 + iVar2 & *(int *)((int)param_1 + 0xc) - 1U;
        *(int *)((int)param_1 + 0x18) = *(int *)((int)param_1 + 0x18) + -0x20 + iVar2;
        *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) - (iVar2 + -0x20);
      }
      uVar3 = FUN_5f714160(param_1);
      if (((uVar3 ^ uVar1) & 0xfffe0c00) == 0) {
        iVar2 = *(int *)((int)param_1 + 0x18);
        *(uint *)((int)param_1 + 0x84) = uVar1 & 0xfffe0c00;
        *(undefined4 *)((int)param_1 + 0x88) = 10;
        if (0 < iVar2) {
          *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) + iVar2;
          *(int *)((int)param_1 + 0x18) = *(int *)((int)param_1 + 0x18) + -iVar2;
          *(uint *)((int)param_1 + 0x1c) =
               -iVar2 + *(int *)((int)param_1 + 0x1c) & *(int *)((int)param_1 + 0xc) - 1U;
        }
        return 0;
      }
    }
    *(int *)((int)param_1 + 0x8c) = *(int *)((int)param_1 + 0x8c) + 1;
    iVar2 = *(int *)((int)param_1 + 0x18) + -1;
    if (0 < iVar2) {
      *(int *)((int)param_1 + 0x18) = *(int *)((int)param_1 + 0x18) + -iVar2;
      *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) + iVar2;
      *(uint *)((int)param_1 + 0x1c) =
           -iVar2 + *(int *)((int)param_1 + 0x1c) & *(int *)((int)param_1 + 0xc) - 1U;
    }
    iVar2 = *(int *)((int)param_1 + 0x10);
    *(undefined4 *)((int)param_1 + 0x18) = 0;
  } while( true );
}


