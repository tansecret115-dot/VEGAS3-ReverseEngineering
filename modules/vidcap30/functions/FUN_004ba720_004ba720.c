/* Module: vidcap30.exe
   Function: FUN_004ba720
   Address: 004ba720
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ba720(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  undefined4 *puVar4;
  
  piVar1 = param_2;
  if (param_2 != (int *)0x0) {
    iVar2 = *param_2;
    puVar4 = &param_2;
    param_2 = (int *)0x0;
    iVar2 = (**(code **)(iVar2 + 0x3c))(piVar1,puVar4);
    if (-1 < iVar2) {
      uVar3 = _SfGetString2_8(DAT_005c16d8,0x113a);
      SfMEditPrintF(puVar4,uVar3,unaff_retaddr);
    }
  }
  return;
}


