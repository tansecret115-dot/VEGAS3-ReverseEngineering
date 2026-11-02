/* Module: mcplugrw.dll
   Function: FUN_00404070
   Address: 00404070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404070(BYTE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80004005;
  iVar1 = FUN_00403260(param_1);
  if (-1 < iVar1) {
    iVar1 = FUN_004035c0(param_1 + 0x80);
    if (-1 < iVar1) {
      iVar1 = FUN_00403770(param_1 + 0x100);
      if (-1 < iVar1) {
        iVar1 = FUN_00403880(param_1 + 0x180);
        if (-1 < iVar1) {
          iVar1 = FUN_00403990(param_1 + 0x200);
          if (-1 < iVar1) {
            iVar1 = FUN_00403aa0(param_1 + 0x280);
            if (-1 < iVar1) {
              iVar1 = FUN_00403bb0(param_1 + 0x300);
              if (-1 < iVar1) {
                iVar1 = FUN_00403cc0(param_1 + 0x305);
                if (-1 < iVar1) {
                  iVar1 = FUN_00403dd0(param_1 + 0x31a);
                  if (-1 < iVar1) {
                    iVar1 = FUN_00403ee0(param_1 + 799);
                    if (-1 < iVar1) {
                      iVar1 = FUN_00403ff0(param_1 + 0x39f);
                      if (-1 < iVar1) {
                        uVar2 = 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}


