/* Module: InstMsi-x86w.exe
   Function: FUN_01003f0b
   Address: 01003f0b
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01003f0b(LPCSTR param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  uVar1 = FUN_010059fd(param_1);
  if (uVar1 != 0) {
    if ((DAT_0100ae7c == 0) && (((byte)DAT_0100aab8 & 1) == 0)) {
      DAT_0100b0a4 = param_1;
      iVar2 = FUN_0100592b(DAT_0100b6dc,(LPCSTR)0x7d3,DAT_0100aa78,FUN_01002ec0,0,6);
      if (iVar2 != 6) {
        if (iVar2 == 7) {
          iVar3 = 0;
        }
        else if (iVar2 == 0x839) {
          DAT_0100ae7c = 1;
        }
      }
    }
    if (iVar3 != 0) {
      SetFileAttributesA(param_1,0x80);
    }
  }
  return iVar3;
}


