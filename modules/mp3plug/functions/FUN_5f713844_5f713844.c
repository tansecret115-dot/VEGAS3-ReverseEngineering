/* Module: mp3plug.dll
   Function: FUN_5f713844
   Address: 5f713844
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f713844(void *param_1)

{
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)((int)param_1 + 0x8c) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  uVar1 = FUN_5f714160(param_1);
  if ((uVar1 & 0xfffe0c00) == *(uint *)((int)param_1 + 0x84)) {
    iVar2 = FUN_5f7158d0((void *)((int)param_1 + 0x2c),uVar1);
    if (iVar2 != 0) {
      if (*(int *)((int)param_1 + 0x10) + 0x20 < *(int *)((int)param_1 + 0x7c)) {
        iVar2 = *(int *)((int)param_1 + 0x18);
        if (0 < iVar2) {
          *(int *)((int)param_1 + 0x18) = *(int *)((int)param_1 + 0x18) + -iVar2;
          *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) + iVar2;
          *(uint *)((int)param_1 + 0x1c) =
               -iVar2 + *(int *)((int)param_1 + 0x1c) & *(int *)((int)param_1 + 0xc) - 1U;
        }
        return 0x81010003;
      }
      iVar2 = *(int *)((int)param_1 + 0x88);
      if ((iVar2 != 0) && (*(int *)((int)param_1 + 0x7c) <= *(int *)((int)param_1 + 0x10))) {
        iVar2 = *(int *)((int)param_1 + 0x7c);
        if (0 < iVar2 + -0x20) {
          *(uint *)((int)param_1 + 0x1c) =
               *(int *)((int)param_1 + 0x1c) + -0x20 + iVar2 & *(int *)((int)param_1 + 0xc) - 1U;
          *(int *)((int)param_1 + 0x18) = *(int *)((int)param_1 + 0x18) + -0x20 + iVar2;
          *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) - (iVar2 + -0x20);
        }
        uVar1 = FUN_5f714160(param_1);
        if ((uVar1 & 0xfffe0c00) != *(uint *)((int)param_1 + 0x84)) {
          iVar2 = *(int *)((int)param_1 + 0x18);
          if (0 < iVar2) {
            *(int *)((int)param_1 + 0x18) = *(int *)((int)param_1 + 0x18) + -iVar2;
            *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) + iVar2;
            *(uint *)((int)param_1 + 0x1c) =
                 *(int *)((int)param_1 + 0xc) - 1U & -iVar2 + *(int *)((int)param_1 + 0x1c);
          }
          return 0x81010002;
        }
        iVar2 = *(int *)((int)param_1 + 0x88);
      }
      if (iVar2 != 0) {
        *(int *)((int)param_1 + 0x88) = iVar2 + -1;
      }
      iVar2 = *(int *)((int)param_1 + 0x18);
      if (0 < iVar2) {
        *(int *)((int)param_1 + 0x18) = *(int *)((int)param_1 + 0x18) + -iVar2;
        *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) + iVar2;
        *(uint *)((int)param_1 + 0x1c) =
             *(int *)((int)param_1 + 0xc) - 1U & -iVar2 + *(int *)((int)param_1 + 0x1c);
      }
      return 0;
    }
  }
  iVar2 = *(int *)((int)param_1 + 0x18);
  if (0 < iVar2) {
    *(int *)((int)param_1 + 0x18) = *(int *)((int)param_1 + 0x18) + -iVar2;
    *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) + iVar2;
    *(uint *)((int)param_1 + 0x1c) =
         -iVar2 + *(int *)((int)param_1 + 0x1c) & *(int *)((int)param_1 + 0xc) - 1U;
  }
  return 0x81010002;
}


