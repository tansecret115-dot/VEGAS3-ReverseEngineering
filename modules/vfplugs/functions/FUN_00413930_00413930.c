/* Module: vfplugs.dll
   Function: FUN_00413930
   Address: 00413930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00413930(HDC param_1,undefined2 *param_2,DWORD param_3)

{
  short sVar1;
  int iVar2;
  DWORD DVar3;
  
  iVar2 = FUN_004138c0(param_1,param_2,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  sVar1 = param_2[1];
  DVar3 = GetFontData(param_1,DAT_00493340,param_3 + 0xe,param_2 + 7,(uint)(ushort)(sVar1 - 0xe));
  if (DVar3 != (ushort)(sVar1 - 0xe)) {
    return 0;
  }
  FUN_00413780((int)param_2);
  return 1;
}


