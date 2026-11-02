/* Module: mp3rw.dll
   Function: FUN_00475e60
   Address: 00475e60
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00475e60(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  bVar1 = true;
  if ((*(byte *)(param_1 + 0x45) & 0x20) == 0) {
    if ((param_1[0x19] & 0x800U) == 0) goto LAB_00475e8c;
  }
  else if ((param_1[0x19] & 0x300U) != 0x300) goto LAB_00475e8c;
  bVar1 = false;
LAB_00475e8c:
  FUN_0044c730(param_1,&param_1,4);
  if (!bVar1) {
    return false;
  }
  iVar3 = FUN_00475d40((byte *)&param_1);
  return iVar3 != piVar2[0x42];
}


