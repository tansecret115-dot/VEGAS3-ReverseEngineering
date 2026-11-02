/* Module: vegas30k.dll
   Function: FUN_0104a490
   Address: 0104a490
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0104a490(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  undefined4 *unaff_retaddr;
  undefined *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  piVar2 = param_1;
  puVar6 = &param_1;
  piVar1 = param_1 + -5;
  piVar5 = piVar1;
  iVar3 = (**(code **)(param_1[-5] + 0xc))(piVar1,puVar6);
  if (-1 < iVar3) {
    puVar4 = &DAT_011da090;
    iVar3 = (**(code **)*unaff_retaddr)(unaff_retaddr,&DAT_011da090);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,unaff_retaddr,unaff_EDI,piVar5);
      if (-1 < iVar3) {
        iVar3 = (**(code **)(*(int *)register0x00000010 + 0x10))
                          (register0x00000010,puVar4,unaff_EBP,piVar5,puVar6);
      }
      (**(code **)(*(int *)register0x00000010 + 8))(register0x00000010);
    }
    (**(code **)(*piVar1 + 0x10))(piVar1,piVar5);
  }
  return iVar3;
}


