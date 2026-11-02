/* Module: vegas30.exe
   Function: FUN_005b3d40
   Address: 005b3d40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_005b3d40(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  iVar1 = FUN_005b45e0(param_1 + 0x3bc,4);
  if (-1 < iVar1) {
    iVar1 = FUN_005b45e0(param_1 + 0x3c0,8);
    if (-1 < iVar1) {
      iVar1 = FUN_005b45e0(param_1 + 0x3c4,4);
      if (-1 < iVar1) {
        iVar1 = FUN_005b45e0(param_1 + 0x3c8,8);
        if (-1 < iVar1) {
          iVar1 = FUN_005b45e0(param_1 + 0x3cc,8);
          if (-1 < iVar1) {
            iVar1 = FUN_005b45e0(param_1 + 0x3d0,8);
            if (-1 < iVar1) {
              iVar1 = FUN_005b45e0(param_1 + 0x3d4,4);
              if (-1 < iVar1) {
                iVar1 = FUN_005b45e0(param_1 + 0x3d8,4);
                if (-1 < iVar1) {
                  *(undefined4 *)(param_1 + 0x3dc) = 0;
                  *(undefined4 *)(param_1 + 0x3e0) = 0;
                  *(undefined4 *)(param_1 + 0x3ec) = 0;
                  if (*(int *)(param_1 + 0x3f0) != 0) {
                    FUN_005bad50(*(int *)(param_1 + 0x3f0));
                    *(undefined4 *)(param_1 + 0x3f0) = 0;
                  }
                  *(undefined4 *)(param_1 + 0x3f4) = 0;
                  *(undefined4 *)(param_1 + 0x3f8) = 0xfffffffe;
                  *(undefined4 *)(param_1 + 0x3fc) = 0xfffffffe;
                  *(undefined4 *)(param_1 + 0x400) = 0xfffffffe;
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}


