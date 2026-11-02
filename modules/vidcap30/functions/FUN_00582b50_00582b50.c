/* Module: vidcap30.exe
   Function: FUN_00582b50
   Address: 00582b50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00582b50(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = *param_2;
  uVar1 = *param_1;
  if (uVar1 == uVar2) {
    do {
      param_1 = param_1 + 1;
      if ((uVar1 == 0) || (param_2 = param_2 + 1, uVar2 == 0)) {
        return 0;
      }
      uVar1 = *param_1;
      uVar2 = *param_2;
    } while (uVar1 == uVar2);
  }
  return (uint)uVar1 - (uint)uVar2;
}


