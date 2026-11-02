/* Module: sfmarket2.dll
   Function: FUN_0047e650
   Address: 0047e650
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0047e650(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  bVar1 = true;
  if ((*(byte *)(param_1 + 0x45) & 0x20) == 0) {
    if ((param_1[0x19] & 0x800U) == 0) goto LAB_0047e67c;
  }
  else if ((param_1[0x19] & 0x300U) != 0x300) goto LAB_0047e67c;
  bVar1 = false;
LAB_0047e67c:
  FUN_00454da0(param_1,&param_1,4);
  if (!bVar1) {
    return false;
  }
  iVar3 = FUN_0047e530((byte *)&param_1);
  return iVar3 != piVar2[0x42];
}


