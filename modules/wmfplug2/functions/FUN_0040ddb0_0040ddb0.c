/* Module: wmfplug2.dll
   Function: FUN_0040ddb0
   Address: 0040ddb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040ddb0(int *param_1)

{
  int iVar1;
  int *unaff_ESI;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&param_1);
  if ((-1 < iVar1) && (unaff_ESI != (int *)0x0)) {
    uVar2 = 1;
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return uVar2;
}


