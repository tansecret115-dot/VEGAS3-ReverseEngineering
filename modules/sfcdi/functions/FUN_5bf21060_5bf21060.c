/* Module: sfcdi.dll
   Function: FUN_5bf21060
   Address: 5bf21060
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf21060(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
  uVar3 = (uint)(iVar1 << 2) / 0x930;
  if ((uint)(iVar1 << 2) % 0x930 != 0) {
    uVar3 = uVar3 + 1;
  }
  if ((uVar3 == 0) || (uVar2 = 300, 299 < uVar3)) {
    uVar2 = uVar3;
  }
  return uVar2;
}


