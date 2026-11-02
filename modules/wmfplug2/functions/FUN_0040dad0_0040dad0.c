/* Module: wmfplug2.dll
   Function: FUN_0040dad0
   Address: 0040dad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040dad0(int *param_1)

{
  int *piVar1;
  int iVar2;
  ushort unaff_SI;
  uint uVar3;
  
  piVar1 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x2c))(param_1,&param_1);
  if ((-1 < iVar2) && (unaff_SI != 0)) {
    uVar3 = (uint)unaff_SI;
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      (**(code **)(*piVar1 + 0x38))(piVar1,uVar3);
    }
  }
  return;
}


