/* Module: vegas30.exe
   Function: FUN_00582960
   Address: 00582960
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00582960(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  code **ppcVar3;
  code *local_28 [10];
  
  ppcVar3 = local_28;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppcVar3 = (code *)*param_1;
    param_1 = param_1 + 1;
    ppcVar3 = ppcVar3 + 1;
  }
  local_28[1] = FUN_00582a70;
  sVar1 = _SfRegisterClass_4(local_28);
  return (-(uint)(sVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
}


