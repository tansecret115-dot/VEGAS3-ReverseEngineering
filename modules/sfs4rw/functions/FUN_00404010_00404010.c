/* Module: sfs4rw.dll
   Function: FUN_00404010
   Address: 00404010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404010(BYTE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80004005;
  iVar1 = FUN_00403200(param_1);
  if (-1 < iVar1) {
    iVar1 = FUN_00403560(param_1 + 0x80);
    if (-1 < iVar1) {
      iVar1 = FUN_00403710(param_1 + 0x100);
      if (-1 < iVar1) {
        iVar1 = FUN_00403820(param_1 + 0x180);
        if (-1 < iVar1) {
          iVar1 = FUN_00403930(param_1 + 0x200);
          if (-1 < iVar1) {
            iVar1 = FUN_00403a40(param_1 + 0x280);
            if (-1 < iVar1) {
              iVar1 = FUN_00403b50(param_1 + 0x300);
              if (-1 < iVar1) {
                iVar1 = FUN_00403c60(param_1 + 0x305);
                if (-1 < iVar1) {
                  iVar1 = FUN_00403d70(param_1 + 0x31a);
                  if (-1 < iVar1) {
                    iVar1 = FUN_00403e80(param_1 + 799);
                    if (-1 < iVar1) {
                      iVar1 = FUN_00403f90(param_1 + 0x39f);
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


